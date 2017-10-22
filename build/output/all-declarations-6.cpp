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

static const char * gNonTerminalNames_plm_target_grammar [17] = {
  "<key>",// Index 0
  "<python_utility_tool_list>",// Index 1
  "<section_specification>",// Index 2
  "<configuration_start_symbol>",// Index 3
  "<interruptConfigList>",// Index 4
  "<select_plm_5F_target_5F_specific_5F_syntax_0>",// Index 5
  "<select_plm_5F_target_5F_specific_5F_syntax_1>",// Index 6
  "<select_plm_5F_target_5F_specific_5F_syntax_2>",// Index 7
  "<select_plm_5F_target_5F_specific_5F_syntax_3>",// Index 8
  "<select_plm_5F_target_5F_specific_5F_syntax_4>",// Index 9
  "<select_plm_5F_target_5F_specific_5F_syntax_5>",// Index 10
  "<select_plm_5F_target_5F_specific_5F_syntax_6>",// Index 11
  "<select_plm_5F_target_5F_specific_5F_syntax_7>",// Index 12
  "<select_plm_5F_target_5F_specific_5F_syntax_8>",// Index 13
  "<select_plm_5F_target_5F_specific_5F_syntax_9>",// Index 14
  "<select_plm_5F_target_5F_specific_5F_syntax_10>",// Index 15
  "<>"// Index 16
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
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (5)
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
, C_Lexique_plm_5F_lexique::kToken__24_type, REDUCE (0)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (0)
, END
// State S6 (index = 28)
, C_Lexique_plm_5F_lexique::kToken__2D__3E_, SHIFT (9)
, END
// State S7 (index = 31)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (1)
, END
// State S8 (index = 34)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (10)
, END
// State S9 (index = 37)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (11)
, END
// State S10 (index = 40)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S11 (index = 43)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (7)
, C_Lexique_plm_5F_lexique::kToken__2C_, SHIFT (13)
, END
// State S12 (index = 48)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (15)
, END
// State S13 (index = 51)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (16)
, END
// State S14 (index = 54)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (6)
, END
// State S15 (index = 57)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S16 (index = 60)
, C_Lexique_plm_5F_lexique::kToken__2D__3E_, SHIFT (18)
, END
// State S17 (index = 63)
, C_Lexique_plm_5F_lexique::kToken__24_type, SHIFT (19)
, END
// State S18 (index = 66)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (20)
, END
// State S19 (index = 69)
, C_Lexique_plm_5F_lexique::kToken__3B_, SHIFT (21)
, END
// State S20 (index = 72)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (7)
, C_Lexique_plm_5F_lexique::kToken__2C_, SHIFT (13)
, END
// State S21 (index = 77)
, C_Lexique_plm_5F_lexique::kToken__24_type, SHIFT (23)
, END
// State S22 (index = 80)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (8)
, END
// State S23 (index = 83)
, C_Lexique_plm_5F_lexique::kToken__3B_, SHIFT (24)
, END
// State S24 (index = 86)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (25)
, END
// State S25 (index = 89)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S26 (index = 92)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (27)
, END
// State S27 (index = 95)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S28 (index = 98)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (29)
, END
// State S29 (index = 101)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S30 (index = 104)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (31)
, END
// State S31 (index = 107)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S32 (index = 110)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (33)
, END
// State S33 (index = 113)
, C_Lexique_plm_5F_lexique::kToken__3B_, SHIFT (34)
, END
// State S34 (index = 116)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (35)
, END
// State S35 (index = 119)
, C_Lexique_plm_5F_lexique::kToken__3B_, SHIFT (36)
, END
// State S36 (index = 122)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (37)
, END
// State S37 (index = 125)
, C_Lexique_plm_5F_lexique::kToken__3B_, SHIFT (38)
, END
// State S38 (index = 128)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (39)
, END
// State S39 (index = 131)
, C_Lexique_plm_5F_lexique::kToken__3B_, SHIFT (40)
, END
// State S40 (index = 134)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (41)
, END
// State S41 (index = 137)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S42 (index = 140)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (44)
, END
// State S43 (index = 143)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S44 (index = 146)
, C_Lexique_plm_5F_lexique::kToken__3B_, SHIFT (47)
, END
// State S45 (index = 149)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (2)
, END
// State S46 (index = 152)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (48)
, END
// State S47 (index = 155)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (49)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (50)
, END
// State S48 (index = 160)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (11)
, C_Lexique_plm_5F_lexique::kToken__2C_, SHIFT (51)
, END
// State S49 (index = 165)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (10)
, END
// State S50 (index = 168)
, C_Lexique_plm_5F_lexique::kToken__3B_, SHIFT (53)
, END
// State S51 (index = 171)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (54)
, END
// State S52 (index = 174)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S53 (index = 177)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (56)
, END
// State S54 (index = 180)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (11)
, C_Lexique_plm_5F_lexique::kToken__2C_, SHIFT (51)
, END
// State S55 (index = 185)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (58)
, END
// State S56 (index = 188)
, C_Lexique_plm_5F_lexique::kToken__3B_, SHIFT (59)
, END
// State S57 (index = 191)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (12)
, END
// State S58 (index = 194)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (13)
, C_Lexique_plm_5F_lexique::kToken__2C_, SHIFT (60)
, END
// State S59 (index = 199)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (62)
, END
// State S60 (index = 202)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (63)
, END
// State S61 (index = 205)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S62 (index = 208)
, C_Lexique_plm_5F_lexique::kToken__3B_, SHIFT (65)
, END
// State S63 (index = 211)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (13)
, C_Lexique_plm_5F_lexique::kToken__2C_, SHIFT (60)
, END
// State S64 (index = 216)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (67)
, END
// State S65 (index = 219)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (68)
, END
// State S66 (index = 222)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (14)
, END
// State S67 (index = 225)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (15)
, C_Lexique_plm_5F_lexique::kToken__2C_, SHIFT (69)
, END
// State S68 (index = 230)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (9)
, END
// State S69 (index = 233)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (71)
, END
// State S70 (index = 236)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S71 (index = 239)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (15)
, C_Lexique_plm_5F_lexique::kToken__2C_, SHIFT (69)
, END
// State S72 (index = 244)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (17)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (74)
, END
// State S73 (index = 249)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (16)
, END
// State S74 (index = 252)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (19)
, C_Lexique_plm_5F_lexique::kToken__2C_, SHIFT (76)
, END
// State S75 (index = 257)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S76 (index = 260)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (79)
, END
// State S77 (index = 263)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (18)
, END
// State S78 (index = 266)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (80)
, END
// State S79 (index = 269)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (19)
, C_Lexique_plm_5F_lexique::kToken__2C_, SHIFT (76)
, END
// State S80 (index = 274)
, C_Lexique_plm_5F_lexique::kToken__3B_, SHIFT (82)
, END
// State S81 (index = 277)
, C_Lexique_plm_5F_lexique::kToken_identifier, REDUCE (20)
, END
// State S82 (index = 280)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (83)
, END
// State S83 (index = 283)
, C_Lexique_plm_5F_lexique::kToken__3B_, SHIFT (84)
, END
// State S84 (index = 286)
, C_Lexique_plm_5F_lexique::kToken__22_string_22_, SHIFT (85)
, END
// State S85 (index = 289)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (1)
, END
// State S86 (index = 292)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (88)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (21)
, END
// State S87 (index = 297)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (3)
, END
// State S88 (index = 300)
, C_Lexique_plm_5F_lexique::kToken__2D__3E_, SHIFT (90)
, C_Lexique_plm_5F_lexique::kToken__2C_, REDUCE (25)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (25)
, END
// State S89 (index = 307)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (4)
, END
// State S90 (index = 310)
, C_Lexique_plm_5F_lexique::kToken_integer, SHIFT (92)
, END
// State S91 (index = 313)
, C_Lexique_plm_5F_lexique::kToken__2C_, SHIFT (93)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (23)
, END
// State S92 (index = 318)
, C_Lexique_plm_5F_lexique::kToken__2C_, REDUCE (26)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (26)
, END
// State S93 (index = 323)
, C_Lexique_plm_5F_lexique::kToken_identifier, SHIFT (95)
, END
// State S94 (index = 326)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (22)
, END
// State S95 (index = 329)
, C_Lexique_plm_5F_lexique::kToken__2D__3E_, SHIFT (90)
, C_Lexique_plm_5F_lexique::kToken__2C_, REDUCE (25)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (25)
, END
// State S96 (index = 336)
, C_Lexique_plm_5F_lexique::kToken__2C_, SHIFT (93)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (23)
, END
// State S97 (index = 341)
, C_Lexique_plm_5F_lexique::kToken_, REDUCE (24)
, END} ;

static const uint32_t gActionTableIndex_plm_target_grammar [98] = {
  0  // S0
, 3  // S1
, 6  // S2
, 11  // S3
, 14  // S4
, 17  // S5
, 28  // S6
, 31  // S7
, 34  // S8
, 37  // S9
, 40  // S10
, 43  // S11
, 48  // S12
, 51  // S13
, 54  // S14
, 57  // S15
, 60  // S16
, 63  // S17
, 66  // S18
, 69  // S19
, 72  // S20
, 77  // S21
, 80  // S22
, 83  // S23
, 86  // S24
, 89  // S25
, 92  // S26
, 95  // S27
, 98  // S28
, 101  // S29
, 104  // S30
, 107  // S31
, 110  // S32
, 113  // S33
, 116  // S34
, 119  // S35
, 122  // S36
, 125  // S37
, 128  // S38
, 131  // S39
, 134  // S40
, 137  // S41
, 140  // S42
, 143  // S43
, 146  // S44
, 149  // S45
, 152  // S46
, 155  // S47
, 160  // S48
, 165  // S49
, 168  // S50
, 171  // S51
, 174  // S52
, 177  // S53
, 180  // S54
, 185  // S55
, 188  // S56
, 191  // S57
, 194  // S58
, 199  // S59
, 202  // S60
, 205  // S61
, 208  // S62
, 211  // S63
, 216  // S64
, 219  // S65
, 222  // S66
, 225  // S67
, 230  // S68
, 233  // S69
, 236  // S70
, 239  // S71
, 244  // S72
, 249  // S73
, 252  // S74
, 257  // S75
, 260  // S76
, 263  // S77
, 266  // S78
, 269  // S79
, 274  // S80
, 277  // S81
, 280  // S82
, 283  // S83
, 286  // S84
, 289  // S85
, 292  // S86
, 297  // S87
, 300  // S88
, 307  // S89
, 310  // S90
, 313  // S91
, 318  // S92
, 323  // S93
, 326  // S94
, 329  // S95
, 336  // S96
, 341  // S97
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
  3, 4, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_2 [3] = {5, 7, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_3 [3] = {0, 8, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_10 [3] = {0, 12, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_11 [3] = {6, 14, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_15 [3] = {0, 17, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_20 [3] = {6, 22, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_25 [3] = {0, 26, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_27 [3] = {0, 28, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_29 [3] = {0, 30, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_31 [3] = {0, 32, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_41 [5] = {0, 42,
  2, 43, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_42 [3] = {7, 45, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_43 [3] = {0, 46, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_48 [3] = {8, 52, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_52 [3] = {0, 55, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_54 [3] = {8, 57, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_58 [3] = {9, 61, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_61 [3] = {0, 64, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_63 [3] = {9, 66, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_67 [3] = {10, 70, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_70 [3] = {0, 72, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_71 [3] = {10, 73, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_72 [3] = {11, 75, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_74 [3] = {12, 77, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_75 [3] = {0, 78, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_79 [3] = {12, 81, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_85 [5] = {0, 86,
  4, 87, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_86 [3] = {13, 89, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_88 [3] = {15, 91, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_91 [3] = {14, 94, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_95 [3] = {15, 96, -1} ;

static const int16_t gSuccessorTable_plm_target_grammar_96 [3] = {14, 97, -1} ;

static const int16_t * gSuccessorTable_plm_target_grammar [98] = {
gSuccessorTable_plm_target_grammar_0, NULL, gSuccessorTable_plm_target_grammar_2, gSuccessorTable_plm_target_grammar_3, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_plm_target_grammar_10, gSuccessorTable_plm_target_grammar_11, 
  NULL, NULL, NULL, gSuccessorTable_plm_target_grammar_15, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_plm_target_grammar_20, NULL, NULL, NULL, 
  NULL, gSuccessorTable_plm_target_grammar_25, NULL, gSuccessorTable_plm_target_grammar_27, 
  NULL, gSuccessorTable_plm_target_grammar_29, NULL, gSuccessorTable_plm_target_grammar_31, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_plm_target_grammar_41, gSuccessorTable_plm_target_grammar_42, gSuccessorTable_plm_target_grammar_43, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_plm_target_grammar_48, NULL, NULL, NULL, 
  gSuccessorTable_plm_target_grammar_52, NULL, gSuccessorTable_plm_target_grammar_54, NULL, 
  NULL, NULL, gSuccessorTable_plm_target_grammar_58, NULL, 
  NULL, gSuccessorTable_plm_target_grammar_61, NULL, gSuccessorTable_plm_target_grammar_63, 
  NULL, NULL, NULL, gSuccessorTable_plm_target_grammar_67, 
  NULL, NULL, gSuccessorTable_plm_target_grammar_70, gSuccessorTable_plm_target_grammar_71, 
  gSuccessorTable_plm_target_grammar_72, NULL, gSuccessorTable_plm_target_grammar_74, gSuccessorTable_plm_target_grammar_75, 
  NULL, NULL, NULL, gSuccessorTable_plm_target_grammar_79, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_plm_target_grammar_85, gSuccessorTable_plm_target_grammar_86, NULL, 
  gSuccessorTable_plm_target_grammar_88, NULL, NULL, gSuccessorTable_plm_target_grammar_91, 
  NULL, NULL, NULL, gSuccessorTable_plm_target_grammar_95, 
  gSuccessorTable_plm_target_grammar_96, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_plm_target_grammar [28 * 2] = {
  0, 2,
  1, 2,
  2, 2,
  3, 46,
  4, 2,
  5, 0,
  5, 4,
  6, 0,
  6, 5,
  7, 9,
  7, 3,
  8, 0,
  8, 3,
  9, 0,
  9, 3,
  10, 0,
  10, 3,
  11, 0,
  11, 2,
  12, 0,
  12, 3,
  13, 0,
  13, 3,
  14, 0,
  14, 4,
  15, 0,
  15, 2,
  16, 1
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                         'key' non terminal implementation                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_plm_5F_target_5F_grammar::nt_key_parse (C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_plm_5F_target_5F_specific_5F_syntax_key_i0_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_plm_5F_target_5F_grammar::nt_key_ (const GALGAS_string  parameter_1,
                                C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_plm_5F_target_5F_specific_5F_syntax_key_i0_(parameter_1, inLexique) ;
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
//                                'section_specification' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_plm_5F_target_5F_grammar::nt_section_5F_specification_parse (C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_plm_5F_target_5F_specific_5F_syntax_section_5F_specification_i2_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_plm_5F_target_5F_grammar::nt_section_5F_specification_ (GALGAS_sectionImplementationScheme &  parameter_1,
                                C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_plm_5F_target_5F_specific_5F_syntax_section_5F_specification_i2_(parameter_1, inLexique) ;
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
  case 3 :
      rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i3_parse(inLexique) ;
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
  case 3 :
      rule_plm_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i3_(parameter_1, parameter_2, parameter_3, inLexique) ;
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
  case 4 :
      rule_plm_5F_target_5F_specific_5F_syntax_interruptConfigList_i4_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_plm_5F_target_5F_grammar::nt_interruptConfigList_ (GALGAS_interruptionConfigurationList &  parameter_1,
                                C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_plm_5F_target_5F_specific_5F_syntax_interruptConfigList_i4_(parameter_1, inLexique) ;
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
// Productions numbers : 5 6
  return inLexique->nextProductionIndex () - 4 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_1' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_1 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 7 8
  return inLexique->nextProductionIndex () - 6 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_2' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_2 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 9 10
  return inLexique->nextProductionIndex () - 8 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_3' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_3 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 11 12
  return inLexique->nextProductionIndex () - 10 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_4' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_4 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 13 14
  return inLexique->nextProductionIndex () - 12 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_5' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_5 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 15 16
  return inLexique->nextProductionIndex () - 14 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_6' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_6 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 17 18
  return inLexique->nextProductionIndex () - 16 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_7' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_7 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 19 20
  return inLexique->nextProductionIndex () - 18 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_8' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_8 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 21 22
  return inLexique->nextProductionIndex () - 20 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_plm_5F_target_5F_specific_5F_syntax_9' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_9 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 23 24
  return inLexique->nextProductionIndex () - 22 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                    'select_plm_5F_target_5F_specific_5F_syntax_10' non terminal implementation                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_plm_5F_target_5F_grammar::select_plm_5F_target_5F_specific_5F_syntax_10 (C_Lexique_plm_5F_lexique * inLexique) {
// Productions numbers : 25 26
  return inLexique->nextProductionIndex () - 24 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeArrayDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeArrayDeclarationAST * p = (const cPtr_typeArrayDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeArrayDeclarationAST) ;
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

GALGAS_typeArrayDeclarationAST GALGAS_typeArrayDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mArrayTypeName,
                                                                                const GALGAS_lstring & inAttribute_mElementTypeName,
                                                                                const GALGAS_expressionAST & inAttribute_mSizeExpression,
                                                                                const GALGAS_location & inAttribute_mSizeExpressionLocation
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeArrayDeclarationAST result ;
  if (inAttribute_mArrayTypeName.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mSizeExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeArrayDeclarationAST (inAttribute_mArrayTypeName, inAttribute_mElementTypeName, inAttribute_mSizeExpression, inAttribute_mSizeExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeArrayDeclarationAST::getter_mArrayTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeArrayDeclarationAST * p = (const cPtr_typeArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeArrayDeclarationAST) ;
    result = p->mProperty_mArrayTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeArrayDeclarationAST::getter_mArrayTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayTypeName ;
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

cPtr_typeArrayDeclarationAST::cPtr_typeArrayDeclarationAST (const GALGAS_lstring & in_mArrayTypeName,
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

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeArrayDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeArrayDeclarationAST ;
}

void cPtr_typeArrayDeclarationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@typeArrayDeclarationAST:" ;
  mProperty_mArrayTypeName.description (ioString, inIndentation+1) ;
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
  macroMyNew (ptr, cPtr_typeArrayDeclarationAST (mProperty_mArrayTypeName, mProperty_mElementTypeName, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation COMMA_THERE)) ;
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

typeComparisonResult cPtr_enumerationDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumerationDeclaration * p = (const cPtr_enumerationDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumerationDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumerationName.objectCompare (p->mProperty_mEnumerationName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCaseNameList.objectCompare (p->mProperty_mCaseNameList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumerationDeclaration::objectCompare (const GALGAS_enumerationDeclaration & inOperand) const {
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

GALGAS_enumerationDeclaration::GALGAS_enumerationDeclaration (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclaration GALGAS_enumerationDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumerationDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstringlist::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclaration::GALGAS_enumerationDeclaration (const cPtr_enumerationDeclaration * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclaration GALGAS_enumerationDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mEnumerationName,
                                                                              const GALGAS_lstringlist & inAttribute_mCaseNameList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclaration result ;
  if (inAttribute_mEnumerationName.isValid () && inAttribute_mCaseNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumerationDeclaration (inAttribute_mEnumerationName, inAttribute_mCaseNameList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumerationDeclaration::getter_mEnumerationName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDeclaration * p = (const cPtr_enumerationDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclaration) ;
    result = p->mProperty_mEnumerationName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_enumerationDeclaration::getter_mEnumerationName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumerationName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_enumerationDeclaration::getter_mCaseNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDeclaration * p = (const cPtr_enumerationDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclaration) ;
    result = p->mProperty_mCaseNameList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_enumerationDeclaration::getter_mCaseNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCaseNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @enumerationDeclaration class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumerationDeclaration::cPtr_enumerationDeclaration (const GALGAS_lstring & in_mEnumerationName,
                                                          const GALGAS_lstringlist & in_mCaseNameList
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mEnumerationName (in_mEnumerationName),
mProperty_mCaseNameList (in_mCaseNameList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_enumerationDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclaration ;
}

void cPtr_enumerationDeclaration::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@enumerationDeclaration:" ;
  mProperty_mEnumerationName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCaseNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumerationDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumerationDeclaration (mProperty_mEnumerationName, mProperty_mCaseNameList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumerationDeclaration type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclaration ("enumerationDeclaration",
                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumerationDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumerationDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclaration GALGAS_enumerationDeclaration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclaration result ;
  const GALGAS_enumerationDeclaration * p = (const GALGAS_enumerationDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                          GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
                                                          GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                                          GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                                                          GALGAS_guardDeclarationListAST::constructor_emptyList (HERE)
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
                                                                                const GALGAS_structurePropertyListAST & inAttribute_mStructurePropertyListAST,
                                                                                const GALGAS_functionDeclarationListAST & inAttribute_mFunctionDeclarationListAST,
                                                                                const GALGAS_systemRoutineDeclarationListAST & inAttribute_mSystemRoutineListAST,
                                                                                const GALGAS_guardDeclarationListAST & inAttribute_mGuardListAST
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structureDeclarationAST result ;
  if (inAttribute_mStructureName.isValid () && inAttribute_mAttributeListAST.isValid () && inAttribute_mStructurePropertyListAST.isValid () && inAttribute_mFunctionDeclarationListAST.isValid () && inAttribute_mSystemRoutineListAST.isValid () && inAttribute_mGuardListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structureDeclarationAST (inAttribute_mStructureName, inAttribute_mAttributeListAST, inAttribute_mStructurePropertyListAST, inAttribute_mFunctionDeclarationListAST, inAttribute_mSystemRoutineListAST, inAttribute_mGuardListAST COMMA_THERE)) ;
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
//                                  Pointer class for @structureDeclarationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structureDeclarationAST::cPtr_structureDeclarationAST (const GALGAS_lstring & in_mStructureName,
                                                            const GALGAS_lstringlist & in_mAttributeListAST,
                                                            const GALGAS_structurePropertyListAST & in_mStructurePropertyListAST,
                                                            const GALGAS_functionDeclarationListAST & in_mFunctionDeclarationListAST,
                                                            const GALGAS_systemRoutineDeclarationListAST & in_mSystemRoutineListAST,
                                                            const GALGAS_guardDeclarationListAST & in_mGuardListAST
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mStructureName (in_mStructureName),
mProperty_mAttributeListAST (in_mAttributeListAST),
mProperty_mStructurePropertyListAST (in_mStructurePropertyListAST),
mProperty_mFunctionDeclarationListAST (in_mFunctionDeclarationListAST),
mProperty_mSystemRoutineListAST (in_mSystemRoutineListAST),
mProperty_mGuardListAST (in_mGuardListAST) {
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

acPtr_class * cPtr_structureDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structureDeclarationAST (mProperty_mStructureName, mProperty_mAttributeListAST, mProperty_mStructurePropertyListAST, mProperty_mFunctionDeclarationListAST, mProperty_mSystemRoutineListAST, mProperty_mGuardListAST COMMA_THERE)) ;
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
mProperty_mIsConstant (),
mProperty_mIsPublic (),
mProperty_mPropertyTypeName (),
mProperty_mInitialisation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element::~ GALGAS_structurePropertyListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element::GALGAS_structurePropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_bool & inOperand1,
                                                                                        const GALGAS_bool & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3,
                                                                                        const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand4) :
mProperty_mPropertyName (inOperand0),
mProperty_mIsConstant (inOperand1),
mProperty_mIsPublic (inOperand2),
mProperty_mPropertyTypeName (inOperand3),
mProperty_mInitialisation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST_2D_element GALGAS_structurePropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_bool & inOperand1,
                                                                                                        const GALGAS_bool & inOperand2,
                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                        const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand4 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structurePropertyListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_structurePropertyListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structurePropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mIsConstant.isValid () && mProperty_mIsPublic.isValid () && mProperty_mPropertyTypeName.isValid () && mProperty_mInitialisation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structurePropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mIsConstant.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mPropertyTypeName.drop () ;
  mProperty_mInitialisation.drop () ;
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
    mProperty_mIsConstant.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialisation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structurePropertyListAST_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
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
//                                                                                                                     *
//                        Extension method '@structureDeclarationAST functionSemanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_structureDeclarationAST_functionSemanticAnalysis> gExtensionMethodTable_structureDeclarationAST_functionSemanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_functionSemanticAnalysis (const int32_t inClassIndex,
                                                    extensionMethodSignature_structureDeclarationAST_functionSemanticAnalysis inMethod) {
  gExtensionMethodTable_structureDeclarationAST_functionSemanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_functionSemanticAnalysis (const cPtr_structureDeclarationAST * inObject,
                                                   const GALGAS_PLMType constin_inStructureType,
                                                   const GALGAS_semanticContext constin_inContext,
                                                   GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                   GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_structureDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_structureDeclarationAST_functionSemanticAnalysis f = NULL ;
    if (classIndex < gExtensionMethodTable_structureDeclarationAST_functionSemanticAnalysis.count ()) {
      f = gExtensionMethodTable_structureDeclarationAST_functionSemanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_structureDeclarationAST_functionSemanticAnalysis.count ()) {
           f = gExtensionMethodTable_structureDeclarationAST_functionSemanticAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_structureDeclarationAST_functionSemanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inStructureType, constin_inContext, io_ioTemporaries, io_ioIntermediateCodeStruct, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structureDeclarationAST_functionSemanticAnalysis (const cPtr_structureDeclarationAST * inObject,
                                                                              const GALGAS_PLMType constinArgument_inStructureType,
                                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                              GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  cEnumerator_functionDeclarationListAST enumerator_21320 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_21320.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_21344 = GALGAS_bool (true) ;
    GALGAS_bool var_mutating_21368 = GALGAS_bool (false) ;
    GALGAS_bool var_accessProperties_21401 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_21464 (enumerator_21320.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_21464.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_21464.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 564)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_warnIfUnused_21344.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 565)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (enumerator_21464.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 566)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 566)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 566)), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 566)) ;
        }
        var_warnIfUnused_21344 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_21464.current_mValue (HERE).getter_string (HERE).objectCompare (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 569)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_accessProperties_21401.boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_21464.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 571)), GALGAS_string ("duplicated @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 571)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 571)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 571)), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 571)) ;
          }
          var_accessProperties_21401 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_21464.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 574)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            const enumGalgasBool test_7 = var_mutating_21368.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_21464.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 576)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 576)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 576)), fixItArray8  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 576)) ;
            }
            var_mutating_21368 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_21464.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 580)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 580)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 580)).add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 581)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 581)).add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 581)), fixItArray9  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 580)) ;
          }
        }
      }
      enumerator_21464.gotoNextObject () ;
    }
    var_accessProperties_21401 = GALGAS_bool (kIsNotEqual, enumerator_21320.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("type-structure-declaration.galgas", 584)))) ;
    {
    routine_routineSemanticAnalysis (constinArgument_inStructureType, GALGAS_routineKind::constructor_function (enumerator_21320.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 587)), enumerator_21320.current (HERE).getter_mMode (HERE), enumerator_21320.current (HERE).getter_mFunctionName (HERE), enumerator_21320.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_21320.current (HERE).getter_mFunctionReturnTypeName (HERE), enumerator_21320.current (HERE).getter_mFunctionInstructionList (HERE), enumerator_21320.current (HERE).getter_mEndOfFunctionDeclaration (HERE), var_accessProperties_21401, var_mutating_21368, var_warnIfUnused_21344, GALGAS_bool (false), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 585)) ;
    }
    enumerator_21320.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structureDeclarationAST_functionSemanticAnalysis (void) {
  enterExtensionMethod_functionSemanticAnalysis (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                 extensionMethod_structureDeclarationAST_functionSemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_structureDeclarationAST_functionSemanticAnalysis (void) {
  gExtensionMethodTable_structureDeclarationAST_functionSemanticAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structureDeclarationAST_functionSemanticAnalysis (defineExtensionMethod_structureDeclarationAST_functionSemanticAnalysis,
                                                                             freeExtensionMethod_structureDeclarationAST_functionSemanticAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typeAliasDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typeAliasDeclaration * p = (const cPtr_typeAliasDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typeAliasDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mNewTypeName.objectCompare (p->mProperty_mNewTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAliasedTypeName.objectCompare (p->mProperty_mAliasedTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typeAliasDeclaration::objectCompare (const GALGAS_typeAliasDeclaration & inOperand) const {
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

GALGAS_typeAliasDeclaration::GALGAS_typeAliasDeclaration (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeAliasDeclaration GALGAS_typeAliasDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_typeAliasDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeAliasDeclaration::GALGAS_typeAliasDeclaration (const cPtr_typeAliasDeclaration * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeAliasDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeAliasDeclaration GALGAS_typeAliasDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mNewTypeName,
                                                                          const GALGAS_lstring & inAttribute_mAliasedTypeName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeAliasDeclaration result ;
  if (inAttribute_mNewTypeName.isValid () && inAttribute_mAliasedTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typeAliasDeclaration (inAttribute_mNewTypeName, inAttribute_mAliasedTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeAliasDeclaration::getter_mNewTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeAliasDeclaration * p = (const cPtr_typeAliasDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclaration) ;
    result = p->mProperty_mNewTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeAliasDeclaration::getter_mNewTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNewTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeAliasDeclaration::getter_mAliasedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typeAliasDeclaration * p = (const cPtr_typeAliasDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeAliasDeclaration) ;
    result = p->mProperty_mAliasedTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_typeAliasDeclaration::getter_mAliasedTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAliasedTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @typeAliasDeclaration class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typeAliasDeclaration::cPtr_typeAliasDeclaration (const GALGAS_lstring & in_mNewTypeName,
                                                      const GALGAS_lstring & in_mAliasedTypeName
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mNewTypeName (in_mNewTypeName),
mProperty_mAliasedTypeName (in_mAliasedTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typeAliasDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclaration ;
}

void cPtr_typeAliasDeclaration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@typeAliasDeclaration:" ;
  mProperty_mNewTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAliasedTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typeAliasDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typeAliasDeclaration (mProperty_mNewTypeName, mProperty_mAliasedTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typeAliasDeclaration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeAliasDeclaration ("typeAliasDeclaration",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeAliasDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeAliasDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeAliasDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeAliasDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeAliasDeclaration GALGAS_typeAliasDeclaration::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeAliasDeclaration result ;
  const GALGAS_typeAliasDeclaration * p = (const GALGAS_typeAliasDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeAliasDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeAliasDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult cPtr_opaqueTypeDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_opaqueTypeDeclarationAST * p = (const cPtr_opaqueTypeDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_opaqueTypeDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOpaqueTypeName.objectCompare (p->mProperty_mOpaqueTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeList.objectCompare (p->mProperty_mAttributeList) ;
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


typeComparisonResult GALGAS_opaqueTypeDeclarationAST::objectCompare (const GALGAS_opaqueTypeDeclarationAST & inOperand) const {
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

GALGAS_opaqueTypeDeclarationAST::GALGAS_opaqueTypeDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_opaqueTypeDeclarationAST::GALGAS_opaqueTypeDeclarationAST (const cPtr_opaqueTypeDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_opaqueTypeDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_opaqueTypeDeclarationAST GALGAS_opaqueTypeDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mOpaqueTypeName,
                                                                                  const GALGAS_lstringlist & inAttribute_mAttributeList,
                                                                                  const GALGAS_expressionAST & inAttribute_mSizeExpression,
                                                                                  const GALGAS_location & inAttribute_mSizeExpressionLocation
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_opaqueTypeDeclarationAST result ;
  if (inAttribute_mOpaqueTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mSizeExpression.isValid () && inAttribute_mSizeExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_opaqueTypeDeclarationAST (inAttribute_mOpaqueTypeName, inAttribute_mAttributeList, inAttribute_mSizeExpression, inAttribute_mSizeExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_opaqueTypeDeclarationAST::getter_mOpaqueTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_opaqueTypeDeclarationAST * p = (const cPtr_opaqueTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opaqueTypeDeclarationAST) ;
    result = p->mProperty_mOpaqueTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_opaqueTypeDeclarationAST::getter_mOpaqueTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOpaqueTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_opaqueTypeDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_opaqueTypeDeclarationAST * p = (const cPtr_opaqueTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opaqueTypeDeclarationAST) ;
    result = p->mProperty_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_opaqueTypeDeclarationAST::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_opaqueTypeDeclarationAST::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_opaqueTypeDeclarationAST * p = (const cPtr_opaqueTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opaqueTypeDeclarationAST) ;
    result = p->mProperty_mSizeExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_opaqueTypeDeclarationAST::getter_mSizeExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSizeExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_opaqueTypeDeclarationAST::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_opaqueTypeDeclarationAST * p = (const cPtr_opaqueTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opaqueTypeDeclarationAST) ;
    result = p->mProperty_mSizeExpressionLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_opaqueTypeDeclarationAST::getter_mSizeExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSizeExpressionLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @opaqueTypeDeclarationAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_opaqueTypeDeclarationAST::cPtr_opaqueTypeDeclarationAST (const GALGAS_lstring & in_mOpaqueTypeName,
                                                              const GALGAS_lstringlist & in_mAttributeList,
                                                              const GALGAS_expressionAST & in_mSizeExpression,
                                                              const GALGAS_location & in_mSizeExpressionLocation
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mOpaqueTypeName (in_mOpaqueTypeName),
mProperty_mAttributeList (in_mAttributeList),
mProperty_mSizeExpression (in_mSizeExpression),
mProperty_mSizeExpressionLocation (in_mSizeExpressionLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_opaqueTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST ;
}

void cPtr_opaqueTypeDeclarationAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@opaqueTypeDeclarationAST:" ;
  mProperty_mOpaqueTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSizeExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_opaqueTypeDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_opaqueTypeDeclarationAST (mProperty_mOpaqueTypeName, mProperty_mAttributeList, mProperty_mSizeExpression, mProperty_mSizeExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @opaqueTypeDeclarationAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST ("opaqueTypeDeclarationAST",
                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_opaqueTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opaqueTypeDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_opaqueTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_opaqueTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_opaqueTypeDeclarationAST GALGAS_opaqueTypeDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_opaqueTypeDeclarationAST result ;
  const GALGAS_opaqueTypeDeclarationAST * p = (const GALGAS_opaqueTypeDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_opaqueTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("opaqueTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element::GALGAS_controlRegisterDeclarationListAST_2D_element (void) :
mProperty_mRegisterNameList (),
mProperty_mRegisterTypeName (),
mProperty_mRegisterBitSliceList (),
mProperty_mRegisterBitSliceListLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element::~ GALGAS_controlRegisterDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element::GALGAS_controlRegisterDeclarationListAST_2D_element (const GALGAS_controlRegisterNameList & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                                          const GALGAS_location & inOperand3) :
mProperty_mRegisterNameList (inOperand0),
mProperty_mRegisterTypeName (inOperand1),
mProperty_mRegisterBitSliceList (inOperand2),
mProperty_mRegisterBitSliceListLocation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element GALGAS_controlRegisterDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterDeclarationListAST_2D_element (GALGAS_controlRegisterNameList::constructor_emptyList (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_controlRegisterBitSliceList::constructor_emptyList (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element GALGAS_controlRegisterDeclarationListAST_2D_element::constructor_new (const GALGAS_controlRegisterNameList & inOperand0,
                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                          const GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                                                          const GALGAS_location & inOperand3 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_controlRegisterDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterDeclarationListAST_2D_element::objectCompare (const GALGAS_controlRegisterDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRegisterNameList.objectCompare (inOperand.mProperty_mRegisterNameList) ;
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

bool GALGAS_controlRegisterDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mRegisterNameList.isValid () && mProperty_mRegisterTypeName.isValid () && mProperty_mRegisterBitSliceList.isValid () && mProperty_mRegisterBitSliceListLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterDeclarationListAST_2D_element::drop (void) {
  mProperty_mRegisterNameList.drop () ;
  mProperty_mRegisterTypeName.drop () ;
  mProperty_mRegisterBitSliceList.drop () ;
  mProperty_mRegisterBitSliceListLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterDeclarationListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRegisterNameList.description (ioString, inIndentation+1) ;
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

GALGAS_controlRegisterNameList GALGAS_controlRegisterDeclarationListAST_2D_element::getter_mRegisterNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterDeclarationListAST_2D_element::getter_mRegisterTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterDeclarationListAST_2D_element::getter_mRegisterBitSliceList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterBitSliceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_controlRegisterDeclarationListAST_2D_element::getter_mRegisterBitSliceListLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterBitSliceListLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @controlRegisterDeclarationListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterDeclarationListAST_2D_element ("controlRegisterDeclarationListAST-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationListAST_2D_element GALGAS_controlRegisterDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationListAST_2D_element result ;
  const GALGAS_controlRegisterDeclarationListAST_2D_element * p = (const GALGAS_controlRegisterDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Extension method '@controlRegisterDeclarationListAST-element buildControlRegisterSliceMap'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_buildControlRegisterSliceMap (const GALGAS_controlRegisterDeclarationListAST_2D_element inObject,
                                                   GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                   GALGAS_PLMType & ioArgument_ioRegisterType,
                                                   const GALGAS_uint constinArgument_inRegisterBitCount,
                                                   GALGAS_controlRegisterFieldMap & outArgument_outRegisterFieldMap,
                                                   GALGAS_sliceMap & outArgument_outRegisterBitSliceMap,
                                                   GALGAS_controlRegisterFieldList & outArgument_outControlRegisterFieldList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterFieldMap.drop () ; // Release 'out' argument
  outArgument_outRegisterBitSliceMap.drop () ; // Release 'out' argument
  outArgument_outControlRegisterFieldList.drop () ; // Release 'out' argument
  outArgument_outRegisterFieldMap = GALGAS_controlRegisterFieldMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 257)) ;
  outArgument_outRegisterBitSliceMap = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 258)) ;
  outArgument_outControlRegisterFieldList = GALGAS_controlRegisterFieldList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 259)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, inObject.mProperty_mRegisterBitSliceList.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 260)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_shiftCount_10177 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_controlRegisterBitSliceList enumerator_10219 (inObject.mProperty_mRegisterBitSliceList, kENUMERATION_DOWN) ;
    while (enumerator_10219.hasCurrentObject ()) {
      switch (enumerator_10219.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_10414 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_10219.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_10414->mAssociatedValue0 ;
          var_shiftCount_10177 = var_shiftCount_10177.add_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 265)) ;
          outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 266)), GALGAS_string ("\xE2""\x80""\x94""")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 266)) ;
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_11395 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_10219.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_name = extractPtr_11395->mAssociatedValue0 ;
          const GALGAS_lbigint extractedValue_count = extractPtr_11395->mAssociatedValue1 ;
          GALGAS_uint var_bitCount_10488 = extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 268)) ;
          outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_10488, extractedValue_name.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 269)) ;
          {
          outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_name, var_shiftCount_10177, var_bitCount_10488, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 270)) ;
          }
          GALGAS_sliceMap var_registerSubMap_10714 = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 275)) ;
          {
          var_registerSubMap_10714.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("shifted"), extractedValue_name.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 278)), GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("declaration-control-register.galgas", 279)), var_shiftCount_10177.getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 280)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 281)), ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 277)) ;
          }
          {
          var_registerSubMap_10714.setter_insertKey (GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 286)), extractedValue_name.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 286)), GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("declaration-control-register.galgas", 287)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 288)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 289)), GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("declaration-control-register.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 285)) ;
          }
          GALGAS_bigint var_mask_11158 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 293)).left_shift_operation (var_bitCount_10488 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 293)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 293)).left_shift_operation (var_shiftCount_10177 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 293)) ;
          {
          outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 296)), var_mask_11158, var_registerSubMap_10714, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 294)) ;
          }
          var_shiftCount_10177 = var_shiftCount_10177.add_operation (var_bitCount_10488, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 301)) ;
        }
        break ;
      }
      enumerator_10219.gotoNextObject () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_10177)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterBitSliceListLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_10177.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 307)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 307)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 307)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 307)), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 306)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Extension method '@controlRegisterDeclarationListAST-element enterControlRegistersInContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterControlRegistersInContext (const GALGAS_controlRegisterDeclarationListAST_2D_element inObject,
                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_registerType_12028 ;
  GALGAS_uint var_registerBitCount_12059 ;
  const GALGAS_controlRegisterDeclarationListAST_2D_element temp_0 = inObject ;
  extensionMethod_controlRegisterType (temp_0, ioArgument_ioContext, var_registerType_12028, var_registerBitCount_12059, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 318)) ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_12227 ;
  GALGAS_sliceMap var_registerBitSliceMap_12256 ;
  GALGAS_controlRegisterFieldList var_controlRegisterFieldList_12290 ;
  const GALGAS_controlRegisterDeclarationListAST_2D_element temp_1 = inObject ;
  extensionMethod_buildControlRegisterSliceMap (temp_1, ioArgument_ioContext, var_registerType_12028, var_registerBitCount_12059, var_registerFieldMap_12227, var_registerBitSliceMap_12256, var_controlRegisterFieldList_12290, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 320)) ;
  GALGAS_bigint var_maxRegisterAddress_12356 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 329)).left_shift_operation (ioArgument_ioContext.getter_mPointerSize (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 329)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 329)) ;
  cEnumerator_controlRegisterNameList enumerator_12430 (inObject.mProperty_mRegisterNameList, kENUMERATION_UP) ;
  while (enumerator_12430.hasCurrentObject ()) {
    GALGAS_bool var_isReadOnly_12478 = GALGAS_bool (false) ;
    GALGAS_bool var_isAccessibleInUserMode_12517 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_12566 (enumerator_12430.current (HERE).getter_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_12566.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_12566.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("ro"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_isReadOnly_12478.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_12566.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 337)), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 337)) ;
        }else if (kBoolFalse == test_3) {
          var_isReadOnly_12478 = GALGAS_bool (true) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_12566.current_mValue (HERE).getter_string (HERE).objectCompare (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 341)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          const enumGalgasBool test_6 = var_isAccessibleInUserMode_12517.boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_12566.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 343)), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 343)) ;
          }else if (kBoolFalse == test_6) {
            var_isAccessibleInUserMode_12517 = GALGAS_bool (true) ;
          }
        }else if (kBoolFalse == test_5) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_12566.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 348)), GALGAS_string ("only @ro (read only) and @user (accessible in `user mode) attributes are accepted here"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 348)) ;
        }
      }
      enumerator_12566.gotoNextObject () ;
    }
    GALGAS_objectIR var_addressExpressionResult_13340 ;
    callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) enumerator_12430.current (HERE).getter_mRegisterAddress (HERE).ptr (), enumerator_12430.current (HERE).getter_mRegisterAddressLocation (HERE), ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_addressExpressionResult_13340, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 352)) ;
    GALGAS_bigint var_registerAddress_13374 ;
    const enumGalgasBool test_9 = var_addressExpressionResult_13340.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 359)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 359)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (enumerator_12430.current (HERE).getter_mRegisterAddressLocation (HERE), GALGAS_string ("control register address is not a static integer expression"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 360)) ;
      var_registerAddress_13374.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_9) {
      GALGAS_PLMType joker_13634_1 ; // Joker input parameter
      var_addressExpressionResult_13340.method_literalInteger (joker_13634_1, var_registerAddress_13374, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 364)) ;
      const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_registerAddress_13374.objectCompare (var_maxRegisterAddress_12356)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_12430.current (HERE).getter_mRegisterAddressLocation (HERE), GALGAS_string ("register address should be lower or equal to ").add_operation (var_maxRegisterAddress_12356.getter_hexString (SOURCE_FILE ("declaration-control-register.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 368)), fixItArray12  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 367)) ;
      }
    }
    GALGAS_bigint var_arraySize_13919 ;
    GALGAS_uint var_elementArraySize_13946 ;
    switch (enumerator_12430.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterKind::kEnum_scalar:
      {
        var_arraySize_13919 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 375)) ;
        var_elementArraySize_13946 = GALGAS_uint ((uint32_t) 0U) ;
      }
      break ;
    case GALGAS_controlRegisterKind::kEnum_registerArray:
      {
        const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_16019 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_12430.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_arraySizeExpression = extractPtr_16019->mAssociatedValue0 ;
        const GALGAS_location extractedValue_arraySizeLocation = extractPtr_16019->mAssociatedValue1 ;
        const GALGAS_expressionAST extractedValue_arrayElementSizeExpression = extractPtr_16019->mAssociatedValue2 ;
        const GALGAS_location extractedValue_arrayElementSizeLocation = extractPtr_16019->mAssociatedValue3 ;
        GALGAS_objectIR var_sizeExpressionResult_14513 ;
        callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) extractedValue_arraySizeExpression.ptr (), extractedValue_arraySizeLocation, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_sizeExpressionResult_14513, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 380)) ;
        const enumGalgasBool test_13 = var_sizeExpressionResult_14513.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 386)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 386)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register address is not a static integer expression"), fixItArray14  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 387)) ;
          var_arraySize_13919.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          GALGAS_PLMType joker_14745_1 ; // Joker input parameter
          var_sizeExpressionResult_14513.method_literalInteger (joker_14745_1, var_arraySize_13919, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 389)) ;
          const enumGalgasBool test_15 = GALGAS_bool (kIsStrictInf, var_arraySize_13919.objectCompare (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 390)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray16  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 391)) ;
            var_arraySize_13919.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_15) {
            GALGAS_uint var_powerOfTwoForArraySize_15014 = var_arraySize_13919.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 395)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("declaration-control-register.galgas", 395)) ;
            const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_arraySize_13919.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 396)).left_shift_operation (var_powerOfTwoForArraySize_15014 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 396)))).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_arraySizeLocation, GALGAS_string ("control register array size should be a static integer expression >= 2, equal to a power of 2"), fixItArray18  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 397)) ;
              var_arraySize_13919.drop () ; // Release error dropped variable
            }
          }
        }
        GALGAS_objectIR var_elementArraySizeExpressionResult_15633 ;
        callExtensionMethod_analyzeStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSizeExpression.ptr (), extractedValue_arrayElementSizeLocation, ioArgument_ioContext, ioArgument_ioGlobalLiteralStringMap, var_elementArraySizeExpressionResult_15633, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 404)) ;
        const enumGalgasBool test_19 = var_elementArraySizeExpressionResult_15633.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 410)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 410)).boolEnum () ;
        if (kBoolTrue == test_19) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (extractedValue_arrayElementSizeLocation, GALGAS_string ("element size is not a static integer expression"), fixItArray20  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 411)) ;
          var_elementArraySize_13946.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_19) {
          GALGAS_bigint var_elementArraySizeAsBigInt_15949 ;
          GALGAS_PLMType joker_15911_1 ; // Joker input parameter
          var_elementArraySizeExpressionResult_15633.method_literalInteger (joker_15911_1, var_elementArraySizeAsBigInt_15949, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 415)) ;
          var_elementArraySize_13946 = var_elementArraySizeAsBigInt_15949.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 416)) ;
        }
      }
      break ;
    }
    {
    ioArgument_ioContext.mProperty_mControlRegisterMap.setter_insertKey (enumerator_12430.current (HERE).getter_mRegisterName (HERE), var_registerType_12028, var_isReadOnly_12478, var_isAccessibleInUserMode_12517, var_registerBitSliceMap_12256, var_registerFieldMap_12227, var_registerAddress_13374, var_controlRegisterFieldList_12290, var_registerBitCount_12059, var_arraySize_13919.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 429)), var_elementArraySize_13946, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)) ;
    }
    enumerator_12430.gotoNextObject () ;
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
                                                                                          const GALGAS_lstring & inAttribute_mConstantTypeName,
                                                                                          const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantDeclarationAST result ;
  if (inAttribute_mConstantName.isValid () && inAttribute_mConstantTypeName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_globalConstantDeclarationAST (inAttribute_mConstantName, inAttribute_mConstantTypeName, inAttribute_mSourceExpression COMMA_THERE)) ;
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
                                                                      const GALGAS_lstring & in_mConstantTypeName,
                                                                      const GALGAS_expressionAST & in_mSourceExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mConstantName (in_mConstantName),
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
  mProperty_mConstantTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_globalConstantDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_globalConstantDeclarationAST (mProperty_mConstantName, mProperty_mConstantTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
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

GALGAS_globalVarDeclarationList_2D_element::GALGAS_globalVarDeclarationList_2D_element (void) :
mProperty_mTypeName (),
mProperty_mVarName (),
mProperty_mSourceExpression (),
mProperty_mAllowedAccessToAll () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element::~ GALGAS_globalVarDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element::GALGAS_globalVarDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_expressionAST & inOperand2,
                                                                                        const GALGAS_bool & inOperand3) :
mProperty_mTypeName (inOperand0),
mProperty_mVarName (inOperand1),
mProperty_mSourceExpression (inOperand2),
mProperty_mAllowedAccessToAll (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element GALGAS_globalVarDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_expressionAST & inOperand2,
                                                                                                        const GALGAS_bool & inOperand3 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalVarDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_globalVarDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalVarDeclarationList_2D_element::objectCompare (const GALGAS_globalVarDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mVarName.objectCompare (inOperand.mProperty_mVarName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSourceExpression.objectCompare (inOperand.mProperty_mSourceExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAllowedAccessToAll.objectCompare (inOperand.mProperty_mAllowedAccessToAll) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVarDeclarationList_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mVarName.isValid () && mProperty_mSourceExpression.isValid () && mProperty_mAllowedAccessToAll.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mVarName.drop () ;
  mProperty_mSourceExpression.drop () ;
  mProperty_mAllowedAccessToAll.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVarDeclarationList_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @globalVarDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAllowedAccessToAll.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVarDeclarationList_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVarDeclarationList_2D_element::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_globalVarDeclarationList_2D_element::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVarDeclarationList_2D_element::getter_mAllowedAccessToAll (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAllowedAccessToAll ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @globalVarDeclarationList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVarDeclarationList_2D_element ("globalVarDeclarationList-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVarDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVarDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVarDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVarDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVarDeclarationList_2D_element GALGAS_globalVarDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_globalVarDeclarationList_2D_element result ;
  const GALGAS_globalVarDeclarationList_2D_element * p = (const GALGAS_globalVarDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVarDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVarDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@globalVarDeclarationList-element semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_semanticAnalysis (const GALGAS_globalVarDeclarationList_2D_element inObject,
                                       const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_inferredType_14261 ;
  GALGAS_stringset var_executionModeSet_14304 ;
  GALGAS_allowedGuardMap var_allowedGuardMap_14407 ;
  GALGAS_objectIR var_expressionGeneratedCode_14546 ;
  GALGAS_bool var_isConstant_14584 ;
  GALGAS_bool joker_14609 ; // Joker input parameter
  constinArgument_inContext.getter_mGlobalVariableMap (HERE).method_searchKey (inObject.mProperty_mVarName, var_inferredType_14261, var_executionModeSet_14304, var_allowedGuardMap_14407, var_expressionGeneratedCode_14546, var_isConstant_14584, joker_14609, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 394)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalVariableMap.setter_insertKey (inObject.mProperty_mVarName, var_inferredType_14261, GALGAS_bool (kIsStrictSup, var_executionModeSet_14304.getter_count (SOURCE_FILE ("declaration-global-variable.galgas", 409)).objectCompare (GALGAS_uint ((uint32_t) 1U))), var_expressionGeneratedCode_14546, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 406)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::GALGAS_globalVariableMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mGenerateVolatile (),
mProperty_mInitialValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::~ GALGAS_globalVariableMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element::GALGAS_globalVariableMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_PLMType & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_objectIR & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mGenerateVolatile (inOperand2),
mProperty_mInitialValue (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element GALGAS_globalVariableMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_PLMType & inOperand1,
                                                                                              const GALGAS_bool & inOperand2,
                                                                                              const GALGAS_objectIR & inOperand3 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalVariableMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_globalVariableMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalVariableMapIR_2D_element::objectCompare (const GALGAS_globalVariableMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerateVolatile.objectCompare (inOperand.mProperty_mGenerateVolatile) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitialValue.objectCompare (inOperand.mProperty_mInitialValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVariableMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mGenerateVolatile.isValid () && mProperty_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mGenerateVolatile.drop () ;
  mProperty_mInitialValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMapIR_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @globalVariableMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerateVolatile.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVariableMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_globalVariableMapIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMapIR_2D_element::getter_mGenerateVolatile (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerateVolatile ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalVariableMapIR_2D_element::getter_mInitialValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @globalVariableMapIR-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVariableMapIR_2D_element ("globalVariableMapIR-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVariableMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVariableMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVariableMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVariableMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR_2D_element GALGAS_globalVariableMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableMapIR_2D_element result ;
  const GALGAS_globalVariableMapIR_2D_element * p = (const GALGAS_globalVariableMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVariableMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVariableMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST::GALGAS_moduleDeclarationAST (void) :
mProperty_mModuleName (),
mProperty_mPropertyListAST (),
mProperty_mFunctionDeclarationListAST (),
mProperty_mSystemRoutineListAST (),
mProperty_mGuardListAST (),
mProperty_mModuleInitListAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST::~ GALGAS_moduleDeclarationAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST::GALGAS_moduleDeclarationAST (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_modulePropertyListAST & inOperand1,
                                                          const GALGAS_functionDeclarationListAST & inOperand2,
                                                          const GALGAS_systemRoutineDeclarationListAST & inOperand3,
                                                          const GALGAS_guardDeclarationListAST & inOperand4,
                                                          const GALGAS_initList & inOperand5) :
mProperty_mModuleName (inOperand0),
mProperty_mPropertyListAST (inOperand1),
mProperty_mFunctionDeclarationListAST (inOperand2),
mProperty_mSystemRoutineListAST (inOperand3),
mProperty_mGuardListAST (inOperand4),
mProperty_mModuleInitListAST (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST GALGAS_moduleDeclarationAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleDeclarationAST (GALGAS_lstring::constructor_default (HERE),
                                      GALGAS_modulePropertyListAST::constructor_emptyList (HERE),
                                      GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                      GALGAS_systemRoutineDeclarationListAST::constructor_emptyList (HERE),
                                      GALGAS_guardDeclarationListAST::constructor_emptyList (HERE),
                                      GALGAS_initList::constructor_emptySortedList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST GALGAS_moduleDeclarationAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_modulePropertyListAST & inOperand1,
                                                                          const GALGAS_functionDeclarationListAST & inOperand2,
                                                                          const GALGAS_systemRoutineDeclarationListAST & inOperand3,
                                                                          const GALGAS_guardDeclarationListAST & inOperand4,
                                                                          const GALGAS_initList & inOperand5 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleDeclarationAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_moduleDeclarationAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleDeclarationAST::objectCompare (const GALGAS_moduleDeclarationAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mModuleName.objectCompare (inOperand.mProperty_mModuleName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyListAST.objectCompare (inOperand.mProperty_mPropertyListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionDeclarationListAST.objectCompare (inOperand.mProperty_mFunctionDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSystemRoutineListAST.objectCompare (inOperand.mProperty_mSystemRoutineListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardListAST.objectCompare (inOperand.mProperty_mGuardListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModuleInitListAST.objectCompare (inOperand.mProperty_mModuleInitListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_moduleDeclarationAST::isValid (void) const {
  return mProperty_mModuleName.isValid () && mProperty_mPropertyListAST.isValid () && mProperty_mFunctionDeclarationListAST.isValid () && mProperty_mSystemRoutineListAST.isValid () && mProperty_mGuardListAST.isValid () && mProperty_mModuleInitListAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationAST::drop (void) {
  mProperty_mModuleName.drop () ;
  mProperty_mPropertyListAST.drop () ;
  mProperty_mFunctionDeclarationListAST.drop () ;
  mProperty_mSystemRoutineListAST.drop () ;
  mProperty_mGuardListAST.drop () ;
  mProperty_mModuleInitListAST.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleDeclarationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @moduleDeclarationAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mModuleName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSystemRoutineListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModuleInitListAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_moduleDeclarationAST::getter_mModuleName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modulePropertyListAST GALGAS_moduleDeclarationAST::getter_mPropertyListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_moduleDeclarationAST::getter_mFunctionDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_systemRoutineDeclarationListAST GALGAS_moduleDeclarationAST::getter_mSystemRoutineListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSystemRoutineListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_moduleDeclarationAST::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList GALGAS_moduleDeclarationAST::getter_mModuleInitListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleInitListAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @moduleDeclarationAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleDeclarationAST ("moduleDeclarationAST",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleDeclarationAST GALGAS_moduleDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_moduleDeclarationAST result ;
  const GALGAS_moduleDeclarationAST * p = (const GALGAS_moduleDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_requiredModuleAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_requiredModuleAST * p = (const cPtr_requiredModuleAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_requiredModuleAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mModuleName.objectCompare (p->mProperty_mModuleName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_requiredModuleAST::objectCompare (const GALGAS_requiredModuleAST & inOperand) const {
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

GALGAS_requiredModuleAST::GALGAS_requiredModuleAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredModuleAST GALGAS_requiredModuleAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_requiredModuleAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredModuleAST::GALGAS_requiredModuleAST (const cPtr_requiredModuleAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_requiredModuleAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredModuleAST GALGAS_requiredModuleAST::constructor_new (const GALGAS_lstring & inAttribute_mModuleName
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_requiredModuleAST result ;
  if (inAttribute_mModuleName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_requiredModuleAST (inAttribute_mModuleName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_requiredModuleAST::getter_mModuleName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_requiredModuleAST * p = (const cPtr_requiredModuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_requiredModuleAST) ;
    result = p->mProperty_mModuleName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_requiredModuleAST::getter_mModuleName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @requiredModuleAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_requiredModuleAST::cPtr_requiredModuleAST (const GALGAS_lstring & in_mModuleName
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mModuleName (in_mModuleName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_requiredModuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredModuleAST ;
}

void cPtr_requiredModuleAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@requiredModuleAST:" ;
  mProperty_mModuleName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_requiredModuleAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_requiredModuleAST (mProperty_mModuleName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @requiredModuleAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_requiredModuleAST ("requiredModuleAST",
                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_requiredModuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredModuleAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_requiredModuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_requiredModuleAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredModuleAST GALGAS_requiredModuleAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_requiredModuleAST result ;
  const GALGAS_requiredModuleAST * p = (const GALGAS_requiredModuleAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_requiredModuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredModuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_moduleListIR_2D_element::GALGAS_moduleListIR_2D_element (void) :
mProperty_mModuleName (),
mProperty_mType (),
mProperty_mInitialValueList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR_2D_element::~ GALGAS_moduleListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR_2D_element::GALGAS_moduleListIR_2D_element (const GALGAS_string & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                const GALGAS_operandIRList & inOperand2) :
mProperty_mModuleName (inOperand0),
mProperty_mType (inOperand1),
mProperty_mInitialValueList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR_2D_element GALGAS_moduleListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleListIR_2D_element (GALGAS_string::constructor_default (HERE),
                                         GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                         GALGAS_operandIRList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR_2D_element GALGAS_moduleListIR_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                const GALGAS_operandIRList & inOperand2 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_moduleListIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleListIR_2D_element::objectCompare (const GALGAS_moduleListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mModuleName.objectCompare (inOperand.mProperty_mModuleName) ;
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

bool GALGAS_moduleListIR_2D_element::isValid (void) const {
  return mProperty_mModuleName.isValid () && mProperty_mType.isValid () && mProperty_mInitialValueList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleListIR_2D_element::drop (void) {
  mProperty_mModuleName.drop () ;
  mProperty_mType.drop () ;
  mProperty_mInitialValueList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleListIR_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @moduleListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mModuleName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInitialValueList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_moduleListIR_2D_element::getter_mModuleName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModuleName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_moduleListIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList GALGAS_moduleListIR_2D_element::getter_mInitialValueList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitialValueList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @moduleListIR-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleListIR_2D_element ("moduleListIR-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR_2D_element GALGAS_moduleListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_moduleListIR_2D_element result ;
  const GALGAS_moduleListIR_2D_element * p = (const GALGAS_moduleListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_staticArrayAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_staticArrayAST * p = (const cPtr_staticArrayAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_staticArrayAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mStaticListName.objectCompare (p->mProperty_mStaticListName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_staticArrayAST::objectCompare (const GALGAS_staticArrayAST & inOperand) const {
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

GALGAS_staticArrayAST::GALGAS_staticArrayAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayAST GALGAS_staticArrayAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_staticArrayAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_staticArrayPropertyListAST::constructor_emptyList (HERE)
                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayAST::GALGAS_staticArrayAST (const cPtr_staticArrayAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_staticArrayAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayAST GALGAS_staticArrayAST::constructor_new (const GALGAS_lstring & inAttribute_mStaticListName,
                                                              const GALGAS_staticArrayPropertyListAST & inAttribute_mPropertyList
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayAST result ;
  if (inAttribute_mStaticListName.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_staticArrayAST (inAttribute_mStaticListName, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticArrayAST::getter_mStaticListName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticArrayAST * p = (const cPtr_staticArrayAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayAST) ;
    result = p->mProperty_mStaticListName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_staticArrayAST::getter_mStaticListName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticListName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyListAST GALGAS_staticArrayAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_staticArrayPropertyListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_staticArrayAST * p = (const cPtr_staticArrayAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_staticArrayAST) ;
    result = p->mProperty_mPropertyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayPropertyListAST cPtr_staticArrayAST::getter_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @staticArrayAST class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_staticArrayAST::cPtr_staticArrayAST (const GALGAS_lstring & in_mStaticListName,
                                          const GALGAS_staticArrayPropertyListAST & in_mPropertyList
                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mStaticListName (in_mStaticListName),
mProperty_mPropertyList (in_mPropertyList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_staticArrayAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayAST ;
}

void cPtr_staticArrayAST::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "[@staticArrayAST:" ;
  mProperty_mStaticListName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_staticArrayAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_staticArrayAST (mProperty_mStaticListName, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @staticArrayAST type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticArrayAST ("staticArrayAST",
                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticArrayAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticArrayAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticArrayAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticArrayAST GALGAS_staticArrayAST::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_staticArrayAST result ;
  const GALGAS_staticArrayAST * p = (const GALGAS_staticArrayAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticArrayAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_extendStaticArrayDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extendStaticArrayDeclarationAST * p = (const cPtr_extendStaticArrayDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extendStaticArrayDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mStaticlistName.objectCompare (p->mProperty_mStaticlistName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressions.objectCompare (p->mProperty_mExpressions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_extendStaticArrayDeclarationAST::objectCompare (const GALGAS_extendStaticArrayDeclarationAST & inOperand) const {
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

GALGAS_extendStaticArrayDeclarationAST::GALGAS_extendStaticArrayDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayDeclarationAST GALGAS_extendStaticArrayDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_extendStaticArrayDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                  GALGAS_extendStaticArrayExpressionListAST::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayDeclarationAST::GALGAS_extendStaticArrayDeclarationAST (const cPtr_extendStaticArrayDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendStaticArrayDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayDeclarationAST GALGAS_extendStaticArrayDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mStaticlistName,
                                                                                                const GALGAS_extendStaticArrayExpressionListAST & inAttribute_mExpressions
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticArrayDeclarationAST result ;
  if (inAttribute_mStaticlistName.isValid () && inAttribute_mExpressions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extendStaticArrayDeclarationAST (inAttribute_mStaticlistName, inAttribute_mExpressions COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extendStaticArrayDeclarationAST::getter_mStaticlistName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendStaticArrayDeclarationAST * p = (const cPtr_extendStaticArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendStaticArrayDeclarationAST) ;
    result = p->mProperty_mStaticlistName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_extendStaticArrayDeclarationAST::getter_mStaticlistName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticlistName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionListAST GALGAS_extendStaticArrayDeclarationAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  GALGAS_extendStaticArrayExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendStaticArrayDeclarationAST * p = (const cPtr_extendStaticArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendStaticArrayDeclarationAST) ;
    result = p->mProperty_mExpressions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayExpressionListAST cPtr_extendStaticArrayDeclarationAST::getter_mExpressions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpressions ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @extendStaticArrayDeclarationAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_extendStaticArrayDeclarationAST::cPtr_extendStaticArrayDeclarationAST (const GALGAS_lstring & in_mStaticlistName,
                                                                            const GALGAS_extendStaticArrayExpressionListAST & in_mExpressions
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mStaticlistName (in_mStaticlistName),
mProperty_mExpressions (in_mExpressions) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_extendStaticArrayDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST ;
}

void cPtr_extendStaticArrayDeclarationAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@extendStaticArrayDeclarationAST:" ;
  mProperty_mStaticlistName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_extendStaticArrayDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extendStaticArrayDeclarationAST (mProperty_mStaticlistName, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @extendStaticArrayDeclarationAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST ("extendStaticArrayDeclarationAST",
                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extendStaticArrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendStaticArrayDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extendStaticArrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendStaticArrayDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extendStaticArrayDeclarationAST GALGAS_extendStaticArrayDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_extendStaticArrayDeclarationAST result ;
  const GALGAS_extendStaticArrayDeclarationAST * p = (const GALGAS_extendStaticArrayDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendStaticArrayDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendStaticArrayDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistValues_5F_listMap::GALGAS_staticlistValues_5F_listMap (void) :
AC_GALGAS_listmap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistValues_5F_listMap GALGAS_staticlistValues_5F_listMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_staticlistValues_5F_listMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticlistValues_5F_listMap::addAssign_operation (const GALGAS_string & inKey,
                                                              const GALGAS_string & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_stringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_staticlistValues_5F_listMap::getter_listForKey (const GALGAS_string & inKey
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_stringlist (listForKey (inKey)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_staticlistValues_5F_listMap::cEnumerator_staticlistValues_5F_listMap (const GALGAS_staticlistValues_5F_listMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistValues_5F_listMap_2D_element cEnumerator_staticlistValues_5F_listMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_staticlistValues_5F_listMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_staticlistValues_5F_listMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_staticlistValues_5F_listMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_stringlist (p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @staticlistValues_listMap type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticlistValues_5F_listMap ("staticlistValues_listMap",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticlistValues_5F_listMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistValues_5F_listMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticlistValues_5F_listMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticlistValues_5F_listMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticlistValues_5F_listMap GALGAS_staticlistValues_5F_listMap::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_staticlistValues_5F_listMap result ;
  const GALGAS_staticlistValues_5F_listMap * p = (const GALGAS_staticlistValues_5F_listMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticlistValues_5F_listMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistValues_listMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@staticlistValues_listMap generateLLVM'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVM (const GALGAS_staticlistValues_5F_listMap inObject,
                                   const GALGAS_staticArrayMap constinArgument_inUsefulStaticArrayMap,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_first_13655 = GALGAS_bool (true) ;
  const GALGAS_staticlistValues_5F_listMap temp_0 = inObject ;
  cEnumerator_staticlistValues_5F_listMap enumerator_13691 (temp_0, kENUMERATION_UP) ;
  while (enumerator_13691.hasCurrentObject ()) {
    const enumGalgasBool test_1 = constinArgument_inUsefulStaticArrayMap.getter_hasKey (enumerator_13691.current_key (HERE) COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 304)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_first_13655.boolEnum () ;
      if (kBoolTrue == test_2) {
        var_first_13655 = GALGAS_bool (false) ;
        ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Static Arraies"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 307)) ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForGlobalVariable (enumerator_13691.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 309)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 309)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(enumerator_13691.current_mList (HERE).getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 310)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 310)).add_operation (GALGAS_string (" x %$"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 310)).add_operation (function_llvmNameForStaticListElementType (enumerator_13691.current_key (HERE).getter_nowhere (SOURCE_FILE ("declaration-extend-static-array.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 310)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 310)).add_operation (GALGAS_string ("] [\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 310)) ;
      cEnumerator_stringlist enumerator_14095 (enumerator_13691.current_mList (HERE), kENUMERATION_UP) ;
      while (enumerator_14095.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %$").add_operation (function_llvmNameForStaticListElementType (enumerator_13691.current_key (HERE).getter_nowhere (SOURCE_FILE ("declaration-extend-static-array.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 313)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 313)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 313)).add_operation (enumerator_14095.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 313)) ;
        if (enumerator_14095.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 315)) ;
        }
        enumerator_14095.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"
        "]\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 317)) ;
    }
    enumerator_13691.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element::GALGAS_taskList_2D_element (void) :
mProperty_mTaskName (),
mProperty_mPriority (),
mProperty_mStackSize (),
mProperty_mVarList (),
mProperty_mTaskProcList (),
mProperty_mTaskInitListAST (),
mProperty_mGuardedCommandList (),
mProperty_mEndOfTaskDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element::~ GALGAS_taskList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element::GALGAS_taskList_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lbigint & inOperand1,
                                                        const GALGAS_lbigint & inOperand2,
                                                        const GALGAS_structurePropertyListAST & inOperand3,
                                                        const GALGAS_functionDeclarationListAST & inOperand4,
                                                        const GALGAS_taskInitListAST & inOperand5,
                                                        const GALGAS_syncInstructionBranchListAST & inOperand6,
                                                        const GALGAS_location & inOperand7) :
mProperty_mTaskName (inOperand0),
mProperty_mPriority (inOperand1),
mProperty_mStackSize (inOperand2),
mProperty_mVarList (inOperand3),
mProperty_mTaskProcList (inOperand4),
mProperty_mTaskInitListAST (inOperand5),
mProperty_mGuardedCommandList (inOperand6),
mProperty_mEndOfTaskDeclaration (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element GALGAS_taskList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_lbigint::constructor_default (HERE),
                                     GALGAS_lbigint::constructor_default (HERE),
                                     GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
                                     GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                     GALGAS_taskInitListAST::constructor_emptyList (HERE),
                                     GALGAS_syncInstructionBranchListAST::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element GALGAS_taskList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lbigint & inOperand1,
                                                                        const GALGAS_lbigint & inOperand2,
                                                                        const GALGAS_structurePropertyListAST & inOperand3,
                                                                        const GALGAS_functionDeclarationListAST & inOperand4,
                                                                        const GALGAS_taskInitListAST & inOperand5,
                                                                        const GALGAS_syncInstructionBranchListAST & inOperand6,
                                                                        const GALGAS_location & inOperand7 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_taskList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskList_2D_element::objectCompare (const GALGAS_taskList_2D_element & inOperand) const {
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
    result = mProperty_mTaskInitListAST.objectCompare (inOperand.mProperty_mTaskInitListAST) ;
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

bool GALGAS_taskList_2D_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mVarList.isValid () && mProperty_mTaskProcList.isValid () && mProperty_mTaskInitListAST.isValid () && mProperty_mGuardedCommandList.isValid () && mProperty_mEndOfTaskDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList_2D_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mPriority.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mVarList.drop () ;
  mProperty_mTaskProcList.drop () ;
  mProperty_mTaskInitListAST.drop () ;
  mProperty_mGuardedCommandList.drop () ;
  mProperty_mEndOfTaskDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @taskList-element:" ;
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
    mProperty_mTaskInitListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGuardedCommandList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskList_2D_element::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskList_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskList_2D_element::getter_mStackSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structurePropertyListAST GALGAS_taskList_2D_element::getter_mVarList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_taskList_2D_element::getter_mTaskProcList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST GALGAS_taskList_2D_element::getter_mTaskInitListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskInitListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListAST GALGAS_taskList_2D_element::getter_mGuardedCommandList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGuardedCommandList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskList_2D_element::getter_mEndOfTaskDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfTaskDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskList_2D_element ("taskList-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element GALGAS_taskList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_taskList_2D_element result ;
  const GALGAS_taskList_2D_element * p = (const GALGAS_taskList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element::GALGAS_panicClauseListAST_2D_element (void) :
mProperty_mIsSetup (),
mProperty_mPanicInstructionList (),
mProperty_mEndOfPanicInstructions (),
mProperty_mPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element::~ GALGAS_panicClauseListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element::GALGAS_panicClauseListAST_2D_element (const GALGAS_bool & inOperand0,
                                                                            const GALGAS_instructionListAST & inOperand1,
                                                                            const GALGAS_location & inOperand2,
                                                                            const GALGAS_lbigint & inOperand3) :
mProperty_mIsSetup (inOperand0),
mProperty_mPanicInstructionList (inOperand1),
mProperty_mEndOfPanicInstructions (inOperand2),
mProperty_mPriority (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element GALGAS_panicClauseListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_panicClauseListAST_2D_element (GALGAS_bool::constructor_default (HERE),
                                               GALGAS_instructionListAST::constructor_emptyList (HERE),
                                               GALGAS_location::constructor_nowhere (HERE),
                                               GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element GALGAS_panicClauseListAST_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                            const GALGAS_instructionListAST & inOperand1,
                                                                                            const GALGAS_location & inOperand2,
                                                                                            const GALGAS_lbigint & inOperand3 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_panicClauseListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_panicClauseListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_panicClauseListAST_2D_element::objectCompare (const GALGAS_panicClauseListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mIsSetup.objectCompare (inOperand.mProperty_mIsSetup) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicInstructionList.objectCompare (inOperand.mProperty_mPanicInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfPanicInstructions.objectCompare (inOperand.mProperty_mEndOfPanicInstructions) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPriority.objectCompare (inOperand.mProperty_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_panicClauseListAST_2D_element::isValid (void) const {
  return mProperty_mIsSetup.isValid () && mProperty_mPanicInstructionList.isValid () && mProperty_mEndOfPanicInstructions.isValid () && mProperty_mPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST_2D_element::drop (void) {
  mProperty_mIsSetup.drop () ;
  mProperty_mPanicInstructionList.drop () ;
  mProperty_mEndOfPanicInstructions.drop () ;
  mProperty_mPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicClauseListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @panicClauseListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mIsSetup.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfPanicInstructions.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_panicClauseListAST_2D_element::getter_mIsSetup (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSetup ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_panicClauseListAST_2D_element::getter_mPanicInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_panicClauseListAST_2D_element::getter_mEndOfPanicInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfPanicInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_panicClauseListAST_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @panicClauseListAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicClauseListAST_2D_element ("panicClauseListAST-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicClauseListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicClauseListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicClauseListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicClauseListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicClauseListAST_2D_element GALGAS_panicClauseListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_panicClauseListAST_2D_element result ;
  const GALGAS_panicClauseListAST_2D_element * p = (const GALGAS_panicClauseListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicClauseListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicClauseListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@panicClauseListAST-element panicSemanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_panicSemanticAnalysis (const GALGAS_panicClauseListAST_2D_element inObject,
                                            const GALGAS_semanticContext constinArgument_inContext,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = inObject.mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("loop") ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph_4568 = function_panicNameForInvocationGraph (temp_0, inObject.mProperty_mPriority, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 106)) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_4861 ;
  {
  routine_initialVariableMap (constinArgument_inContext, GALGAS_mode::constructor_panicMode (SOURCE_FILE ("panic.galgas", 110)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 112)), var_universalMap_4861, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 108)) ;
  }
  GALGAS_lstring var_codeArg_4918 = GALGAS_lstring::constructor_new (GALGAS_string ("CODE"), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 116)) ;
  {
  var_universalMap_4861.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_4981 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_4861.ptr () ;
  callExtensionSetter_insertUsedLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4981, var_codeArg_4918, constinArgument_inContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 117)), var_codeArg_4918, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 117)) ;
  }
  GALGAS_lstring var_fileArg_5071 = GALGAS_lstring::constructor_new (GALGAS_string ("FILE"), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 118)) ;
  GALGAS_PLMType var_StaticStringType_5139 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 119)).getter_nowhere (SOURCE_FILE ("panic.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 119)).getter_type (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 119)) ;
  {
  var_universalMap_4861.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5255 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_4861.ptr () ;
  callExtensionSetter_insertUsedLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5255, var_fileArg_5071, var_StaticStringType_5139, var_fileArg_5071, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 120)) ;
  }
  GALGAS_lstring var_lineArg_5330 = GALGAS_lstring::constructor_new (GALGAS_string ("LINE"), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 121)) ;
  {
  var_universalMap_4861.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5393 = (cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_4861.ptr () ;
  callExtensionSetter_insertUsedLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5393, var_lineArg_5330, constinArgument_inContext.getter_mPanicLineType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 122)), var_lineArg_5330, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 122)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineNameForInvocationGraph_4568.getter_string (HERE) COMMA_SOURCE_FILE ("panic.galgas", 124)).operator_not (SOURCE_FILE ("panic.galgas", 124)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_4568, var_routineNameForInvocationGraph_4568, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 125)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_5802 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("panic.galgas", 131)) ;
  GALGAS_allocaList var_initAllocaList_5836 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("panic.galgas", 132)) ;
  extensionMethod_analyzeRoutineInstructionList (inObject.mProperty_mPanicInstructionList, GALGAS_PLMType::constructor_void (SOURCE_FILE ("panic.galgas", 134)), GALGAS_bool (false), GALGAS_bool (false), var_routineNameForInvocationGraph_4568, constinArgument_inContext, GALGAS_mode::constructor_panicMode (SOURCE_FILE ("panic.galgas", 139)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_4861, var_initAllocaList_5836, var_instructionGenerationList_5802, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 133)) ;
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_4861.ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 149)) ;
  const enumGalgasBool test_3 = inObject.mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    ioArgument_ioTemporaries.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (inObject.mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 154)), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 154)) ;
    }
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicSetupInstructionListIR.plusAssign_operation(var_instructionGenerationList_5802, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 155)) ;
  }else if (kBoolFalse == test_3) {
    {
    ioArgument_ioTemporaries.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (inObject.mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 157)), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 157)) ;
    }
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicLoopInstructionListIR.plusAssign_operation(var_instructionGenerationList_5802, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 158)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@routineMapIR svcCodeGeneration'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_svcCodeGeneration (const GALGAS_routineMapIR inObject,
                                        GALGAS_string & ioArgument_ioLLVMcode,
                                        GALGAS__32_stringlist & ioArgument_ioPrimitiveAndServiceList,
                                        GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_routineMapIR temp_0 = inObject ;
  cEnumerator_routineMapIR enumerator_10208 (temp_0, kENUMERATION_UP) ;
  while (enumerator_10208.hasCurrentObject ()) {
    const enumGalgasBool test_1 = enumerator_10208.current (HERE).getter_mKind (HERE).getter_isFunction (SOURCE_FILE ("declaration-svc.galgas", 280)).operator_not (SOURCE_FILE ("declaration-svc.galgas", 280)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_svcCallName_10272 = function_llvmNameForSVCCall (enumerator_10208.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_10208.current (HERE).getter_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 281)) ;
      GALGAS_string var_svcImplementationName_10369 = function_llvmNameForSVCImplementation (enumerator_10208.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_10208.current (HERE).getter_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 282)) ;
      switch (enumerator_10208.current (HERE).getter_mKind (HERE).enumValue ()) {
      case GALGAS_routineKind::kNotBuilt:
        break ;
      case GALGAS_routineKind::kEnum_section:
      case GALGAS_routineKind::kEnum_safe:
        {
          ioArgument_ioSectionList.addAssign_operation (var_svcCallName_10272, var_svcImplementationName_10369, enumerator_10208.current (HERE).getter_mReceiverType (HERE), enumerator_10208.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_10208.current (HERE).getter_mReturnType (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 285)) ;
        }
        break ;
      case GALGAS_routineKind::kEnum_primitive:
      case GALGAS_routineKind::kEnum_service:
        {
          ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_svcCallName_10272, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 292)) ;
          GALGAS_string var_prototype_10787 = function_llvmFunctionPrototype (enumerator_10208.current (HERE).getter_mReturnType (HERE), var_svcCallName_10272, enumerator_10208.current (HERE).getter_mReceiverType (HERE), enumerator_10208.current (HERE).getter_mFormalArgumentListForGeneration (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 293)) ;
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare ").add_operation (var_prototype_10787, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 299)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 299)) ;
          ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_svcCallName_10272, var_svcImplementationName_10369  COMMA_SOURCE_FILE ("declaration-svc.galgas", 300)) ;
        }
        break ;
      case GALGAS_routineKind::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-svc.galgas", 302)), GALGAS_string ("INTERNAL ERROR"), fixItArray2  COMMA_SOURCE_FILE ("declaration-svc.galgas", 302)) ;
        }
        break ;
      }
    }
    enumerator_10208.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@bootList-element bootSemanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_bootSemanticAnalysis (const GALGAS_bootList_2D_element inObject,
                                           const GALGAS_semanticContext constinArgument_inContext,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioTemporaries.mProperty_mBootRoutinePriorityMap.setter_insertKey (GALGAS_lstring::constructor_new (inObject.mProperty_mPriority.getter_string (SOURCE_FILE ("declaration-boot.galgas", 67)), inObject.mProperty_mPriorityLocation  COMMA_SOURCE_FILE ("declaration-boot.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 67)) ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph_3036 = GALGAS_lstring::constructor_new (GALGAS_string ("boot ").add_operation (inObject.mProperty_mPriority.getter_string (SOURCE_FILE ("declaration-boot.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 69)), inObject.mProperty_mPriorityLocation  COMMA_SOURCE_FILE ("declaration-boot.galgas", 69)) ;
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineNameForInvocationGraph_3036.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-boot.galgas", 70)).operator_not (SOURCE_FILE ("declaration-boot.galgas", 70)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_3036, var_routineNameForInvocationGraph_3036, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 71)) ;
    }
  }
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_3560 ;
  {
  routine_initialVariableMap (constinArgument_inContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-boot.galgas", 79)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-boot.galgas", 81)), var_universalMap_3560, inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 77)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_3641 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-boot.galgas", 86)) ;
  GALGAS_allocaList var_bootAllocaList_3675 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-boot.galgas", 87)) ;
  extensionMethod_analyzeRoutineInstructionList (inObject.mProperty_mInstructionList, GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-boot.galgas", 89)), GALGAS_bool (false), GALGAS_bool (false), var_routineNameForInvocationGraph_3036, constinArgument_inContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-boot.galgas", 94)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_3560, var_bootAllocaList_3675, var_instructionGenerationList_3641, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 88)) ;
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_3560.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 104)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mBootList.addAssign_operation (inObject.mProperty_mPriority, inObject.mProperty_mBootLocation, var_bootAllocaList_3675, var_instructionGenerationList_3641, inObject.mProperty_mEndOfBootLocation  COMMA_SOURCE_FILE ("declaration-boot.galgas", 108)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element::GALGAS_initList_2D_element (void) :
mProperty_mInitLocation (),
mProperty_mSelfTypeName (),
mProperty_mGlobalVarName (),
mProperty_mInstructionList (),
mProperty_mEndOfInitLocation (),
mProperty_mPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element::~ GALGAS_initList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element::GALGAS_initList_2D_element (const GALGAS_location & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_string & inOperand2,
                                                        const GALGAS_instructionListAST & inOperand3,
                                                        const GALGAS_location & inOperand4,
                                                        const GALGAS_lbigint & inOperand5) :
mProperty_mInitLocation (inOperand0),
mProperty_mSelfTypeName (inOperand1),
mProperty_mGlobalVarName (inOperand2),
mProperty_mInstructionList (inOperand3),
mProperty_mEndOfInitLocation (inOperand4),
mProperty_mPriority (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element GALGAS_initList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initList_2D_element (GALGAS_location::constructor_nowhere (HERE),
                                     GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_string::constructor_default (HERE),
                                     GALGAS_instructionListAST::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE),
                                     GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element GALGAS_initList_2D_element::constructor_new (const GALGAS_location & inOperand0,
                                                                        const GALGAS_lstring & inOperand1,
                                                                        const GALGAS_string & inOperand2,
                                                                        const GALGAS_instructionListAST & inOperand3,
                                                                        const GALGAS_location & inOperand4,
                                                                        const GALGAS_lbigint & inOperand5 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_initList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initList_2D_element::objectCompare (const GALGAS_initList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInitLocation.objectCompare (inOperand.mProperty_mInitLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfTypeName.objectCompare (inOperand.mProperty_mSelfTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalVarName.objectCompare (inOperand.mProperty_mGlobalVarName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstructionList.objectCompare (inOperand.mProperty_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfInitLocation.objectCompare (inOperand.mProperty_mEndOfInitLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPriority.objectCompare (inOperand.mProperty_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initList_2D_element::isValid (void) const {
  return mProperty_mInitLocation.isValid () && mProperty_mSelfTypeName.isValid () && mProperty_mGlobalVarName.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfInitLocation.isValid () && mProperty_mPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initList_2D_element::drop (void) {
  mProperty_mInitLocation.drop () ;
  mProperty_mSelfTypeName.drop () ;
  mProperty_mGlobalVarName.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInitLocation.drop () ;
  mProperty_mPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @initList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInitLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelfTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEndOfInitLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initList_2D_element::getter_mInitLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initList_2D_element::getter_mSelfTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_initList_2D_element::getter_mGlobalVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_initList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initList_2D_element::getter_mEndOfInitLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_initList_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @initList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initList_2D_element ("initList-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initList_2D_element GALGAS_initList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_initList_2D_element result ;
  const GALGAS_initList_2D_element * p = (const GALGAS_initList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@initList-element initSemanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_initSemanticAnalysis (const GALGAS_initList_2D_element inObject,
                                           const GALGAS_semanticContext constinArgument_inContext,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mProperty_mSelfTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("declaration-init.galgas", 93)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mSelfTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 95)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 95)) ;
  }
  GALGAS_PLMType var_selfType_4017 = temp_0 ;
  GALGAS_allocaList var_allocaList_4461 ;
  GALGAS_instructionListIR var_instructionGenerationList_4515 ;
  {
  routine_initSemanticAnalysis (constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, var_selfType_4017, inObject.mProperty_mPriority, GALGAS_mode::constructor_initMode (SOURCE_FILE ("declaration-init.galgas", 103)), inObject.mProperty_mInstructionList, inObject.mProperty_mEndOfInitLocation, var_allocaList_4461, var_instructionGenerationList_4515, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 97)) ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mInitList.addAssign_operation (var_selfType_4017, inObject.mProperty_mGlobalVarName, inObject.mProperty_mPriority.getter_bigint (HERE), var_allocaList_4461, var_instructionGenerationList_4515  COMMA_SOURCE_FILE ("declaration-init.galgas", 110)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element::GALGAS_externProcedureDeclarationListAST_2D_element (void) :
mProperty_mExternProcedureName (),
mProperty_mMode (),
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
                                                                                                          const GALGAS_routineFormalArgumentList & inOperand2,
                                                                                                          const GALGAS_lstring & inOperand3,
                                                                                                          const GALGAS_lstring & inOperand4,
                                                                                                          const GALGAS_location & inOperand5) :
mProperty_mExternProcedureName (inOperand0),
mProperty_mMode (inOperand1),
mProperty_mProcFormalArgumentList (inOperand2),
mProperty_mReturnTypeName (inOperand3),
mProperty_mRoutineNameForGeneration (inOperand4),
mProperty_mEndOfProcLocation (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureDeclarationListAST_2D_element GALGAS_externProcedureDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_mode & inOperand1,
                                                                                                                          const GALGAS_routineFormalArgumentList & inOperand2,
                                                                                                                          const GALGAS_lstring & inOperand3,
                                                                                                                          const GALGAS_lstring & inOperand4,
                                                                                                                          const GALGAS_location & inOperand5 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_externProcedureDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
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
  return mProperty_mExternProcedureName.isValid () && mProperty_mMode.isValid () && mProperty_mProcFormalArgumentList.isValid () && mProperty_mReturnTypeName.isValid () && mProperty_mRoutineNameForGeneration.isValid () && mProperty_mEndOfProcLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externProcedureDeclarationListAST_2D_element::drop (void) {
  mProperty_mExternProcedureName.drop () ;
  mProperty_mMode.drop () ;
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

GALGAS_routineFormalArgumentList GALGAS_externProcedureDeclarationListAST_2D_element::getter_mProcFormalArgumentList (UNUSED_LOCATION_ARGS) const {
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
  GALGAS_lstring var_routineMangledName_5285 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), inObject.mProperty_mExternProcedureName, inObject.mProperty_mProcFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 123)) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_5594 ;
  {
  routine_initialVariableMap (constinArgument_inContext, inObject.mProperty_mMode, GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-extern-proc.galgas", 133)), var_universalMap_5594, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 129)) ;
  }
  GALGAS_routineFormalArgumentListForGeneration var_formalArguments_5686 = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("declaration-extern-proc.galgas", 138)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, inObject.mProperty_mProcFormalArgumentList, var_universalMap_5594, var_formalArguments_5686, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 139)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineMangledName_5285.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 147)).operator_not (SOURCE_FILE ("declaration-extern-proc.galgas", 147)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_5285, var_routineMangledName_5285, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 148)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 155)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 157)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_6123 = temp_1 ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mExternProcedureMapIR.setter_insertKey (inObject.mProperty_mRoutineNameForGeneration, var_formalArguments_5686, var_returnType_6123, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 160)) ;
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
                                                                                const GALGAS_routineFormalArgumentListForGeneration & inOperand1,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mFormalArgumentListForGeneration (inOperand1),
mProperty_mReturnType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externProcedureMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                 GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (HERE),
                                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR_2D_element GALGAS_externProcedureMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_routineFormalArgumentListForGeneration & inOperand1,
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

GALGAS_routineFormalArgumentListForGeneration GALGAS_externProcedureMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
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
  cEnumerator_interruptMapIR enumerator_5277 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5277.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_5277.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 133)) ;
    enumerator_5277.gotoNextObject () ;
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
                                                            const GALGAS_routineFormalArgumentListForGeneration & inOperand1,
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
                                                                            const GALGAS_routineFormalArgumentListForGeneration & inOperand1,
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

GALGAS_routineFormalArgumentListForGeneration GALGAS_guardMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
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
  extensionMethod_enterAccessibleEntities (inObject.mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 755)) ;
  switch (inObject.mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_30702 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (inObject.mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_30702->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_30702->mAssociatedValue2 ;
      extensionMethod_enterAccessibleEntities (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 759)) ;
      ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_baseGuardMangledName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 760)) ;
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
                                                       GALGAS_lstring::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantCallAST::GALGAS_typedConstantCallAST (const cPtr_typedConstantCallAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typedConstantCallAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST::constructor_new (const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                          const GALGAS_lstring & inAttribute_mConstructorName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typedConstantCallAST result ;
  if (inAttribute_mOptionalTypeName.isValid () && inAttribute_mConstructorName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typedConstantCallAST (inAttribute_mOptionalTypeName, inAttribute_mConstructorName COMMA_THERE)) ;
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
//                                    Pointer class for @typedConstantCallAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typedConstantCallAST::cPtr_typedConstantCallAST (const GALGAS_lstring & in_mOptionalTypeName,
                                                      const GALGAS_lstring & in_mConstructorName
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mOptionalTypeName (in_mOptionalTypeName),
mProperty_mConstructorName (in_mConstructorName) {
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
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typedConstantCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typedConstantCallAST (mProperty_mOptionalTypeName, mProperty_mConstructorName COMMA_THERE)) ;
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
  GALGAS_lstring var_lkey_3162 = function_combineTypeNamesForInfixOperator (extensionGetter_key (constinArgument_inLeftType, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 77)), extensionGetter_key (constinArgument_inRightType, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 77)) ;
  const GALGAS_infixOperatorMap temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.getter_hasKey (var_lkey_3162.getter_string (HERE) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 78)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_infixOperatorMap temp_2 = inObject ;
    temp_2.method_searchKey (var_lkey_3162, outArgument_outResultType, outArgument_outOperation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 79)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("infix operation between $").add_operation (extensionGetter_key (constinArgument_inLeftType, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)).add_operation (GALGAS_string (" and $"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)).add_operation (extensionGetter_key (constinArgument_inRightType, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)), fixItArray3  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 81)) ;
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
  GALGAS_bigint result_outResult ; // Returned variable
  const cPtr_infixOperatorDescription * object = inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorDescription) ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      result_outResult = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 284)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      result_outResult = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 285)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      result_outResult = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 286)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      result_outResult = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 287)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      result_outResult = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 288)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      result_outResult = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 289)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      result_outResult = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 290)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      result_outResult = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 292)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      result_outResult = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 293)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      result_outResult = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 294)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      result_outResult = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 295)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      result_outResult = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 296)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      result_outResult = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 297)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      result_outResult = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 298)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      result_outResult = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 299)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      result_outResult = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 300)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      result_outResult = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 301)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      result_outResult = constinArgument_inLeft.operator_and (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 303)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      result_outResult = constinArgument_inLeft.operator_or (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 304)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      result_outResult = constinArgument_inLeft.operator_xor (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 305)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      result_outResult = constinArgument_inLeft.left_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 306)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 306)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      result_outResult = constinArgument_inLeft.right_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 307)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 307)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      result_outResult = constinArgument_inLeft.right_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 308)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 308)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      result_outResult = GALGAS_bool (kIsEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 310)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      result_outResult = GALGAS_bool (kIsNotEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 311)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      result_outResult = GALGAS_bool (kIsStrictInf, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 312)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      result_outResult = GALGAS_bool (kIsInfOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 313)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      result_outResult = GALGAS_bool (kIsStrictSup, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 314)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      result_outResult = GALGAS_bool (kIsSupOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 315)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      result_outResult = GALGAS_bool (kIsStrictInf, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 316)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      result_outResult = GALGAS_bool (kIsInfOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 317)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      result_outResult = GALGAS_bool (kIsStrictSup, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 318)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      result_outResult = GALGAS_bool (kIsSupOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 319)) ;
    }
    break ;
  }
//---
  return result_outResult ;
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

typeComparisonResult cPtr_registerConstantExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerConstantExpressionAST * p = (const cPtr_registerConstantExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterName.objectCompare (p->mProperty_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMaskFieldNames.objectCompare (p->mProperty_mMaskFieldNames) ;
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
                                                                GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                GALGAS_registerIntegerFieldListAST::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantExpressionAST::GALGAS_registerConstantExpressionAST (const cPtr_registerConstantExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerConstantExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerConstantExpressionAST GALGAS_registerConstantExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mRegisterName,
                                                                                            const GALGAS_lstringlist & inAttribute_mMaskFieldNames,
                                                                                            const GALGAS_registerIntegerFieldListAST & inAttribute_mFieldValues
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantExpressionAST result ;
  if (inAttribute_mRegisterName.isValid () && inAttribute_mMaskFieldNames.isValid () && inAttribute_mFieldValues.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerConstantExpressionAST (inAttribute_mRegisterName, inAttribute_mMaskFieldNames, inAttribute_mFieldValues COMMA_THERE)) ;
  }
  return result ;
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

GALGAS_lstringlist GALGAS_registerConstantExpressionAST::getter_mMaskFieldNames (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerConstantExpressionAST * p = (const cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    result = p->mProperty_mMaskFieldNames ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_registerConstantExpressionAST::getter_mMaskFieldNames (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMaskFieldNames ;
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

cPtr_registerConstantExpressionAST::cPtr_registerConstantExpressionAST (const GALGAS_lstring & in_mRegisterName,
                                                                        const GALGAS_lstringlist & in_mMaskFieldNames,
                                                                        const GALGAS_registerIntegerFieldListAST & in_mFieldValues
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mRegisterName (in_mRegisterName),
mProperty_mMaskFieldNames (in_mMaskFieldNames),
mProperty_mFieldValues (in_mFieldValues) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_registerConstantExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST ;
}

void cPtr_registerConstantExpressionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@registerConstantExpressionAST:" ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMaskFieldNames.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFieldValues.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_registerConstantExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerConstantExpressionAST (mProperty_mRegisterName, mProperty_mMaskFieldNames, mProperty_mFieldValues COMMA_THERE)) ;
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
    result = mProperty_mSelf.objectCompare (p->mProperty_mSelf) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObjectName.objectCompare (p->mProperty_mObjectName) ;
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

GALGAS_primaryInExpressionAST::GALGAS_primaryInExpressionAST (const cPtr_primaryInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_primaryInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAST GALGAS_primaryInExpressionAST::constructor_new (const GALGAS_selfInExpressionAST & inAttribute_mSelf,
                                                                              const GALGAS_lstring & inAttribute_mObjectName,
                                                                              const GALGAS_primaryInExpressionAccessListAST & inAttribute_mAccessList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAST result ;
  if (inAttribute_mSelf.isValid () && inAttribute_mObjectName.isValid () && inAttribute_mAccessList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_primaryInExpressionAST (inAttribute_mSelf, inAttribute_mObjectName, inAttribute_mAccessList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfInExpressionAST GALGAS_primaryInExpressionAST::getter_mSelf (UNUSED_LOCATION_ARGS) const {
  GALGAS_selfInExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_primaryInExpressionAST * p = (const cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    result = p->mProperty_mSelf ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selfInExpressionAST cPtr_primaryInExpressionAST::getter_mSelf (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelf ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_primaryInExpressionAST::getter_mObjectName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_primaryInExpressionAST * p = (const cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    result = p->mProperty_mObjectName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_primaryInExpressionAST::getter_mObjectName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectName ;
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

cPtr_primaryInExpressionAST::cPtr_primaryInExpressionAST (const GALGAS_selfInExpressionAST & in_mSelf,
                                                          const GALGAS_lstring & in_mObjectName,
                                                          const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mSelf (in_mSelf),
mProperty_mObjectName (in_mObjectName),
mProperty_mAccessList (in_mAccessList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_primaryInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST ;
}

void cPtr_primaryInExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@primaryInExpressionAST:" ;
  mProperty_mSelf.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObjectName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_primaryInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_primaryInExpressionAST (mProperty_mSelf, mProperty_mObjectName, mProperty_mAccessList COMMA_THERE)) ;
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
                                                         const GALGAS_bool constin_inGuard,
                                                         const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                         const GALGAS_PLMType constin_inOptionalTargetType,
                                                         const GALGAS_semanticContext constin_inContext,
                                                         const GALGAS_mode constin_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                         GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
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
      f (inObject, constin_inSelfType, constin_inGuard, constin_inCallerNameForInvocationGraph, constin_inOptionalTargetType, constin_inContext, constin_inCurrentMode, io_ioTemporaries, io_ioGlobalLiteralStringMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf (const cPtr_primaryInExpressionAST * inObject,
                                                                                   const GALGAS_PLMType constinArgument_inSelfType,
                                                                                   const GALGAS_bool constinArgument_inGuard,
                                                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                   const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                                   const GALGAS_mode constinArgument_inCurrentMode,
                                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                   GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  GALGAS_internalRepresentation var_internalRepresentation_12013 = GALGAS_internalRepresentation::constructor_standAloneIdentifier (object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 304)) ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_12110 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_12110.hasCurrentObject ()) {
    switch (enumerator_12110.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_12661 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_12110.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_12661->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (var_internalRepresentation_12013, extractedValue_propertyName, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 309)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_13294 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_12110.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_13294->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_13294->mAssociatedValue1 ;
        {
        routine_handleArrayAccessInExpression (var_internalRepresentation_12013, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 323)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_13867 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_12110.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_13867->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_13867->mAssociatedValue1 ;
        {
        routine_handleFunctionCallInExpressionNew (var_internalRepresentation_12013, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 340)) ;
        }
      }
      break ;
    }
    enumerator_12110.gotoNextObject () ;
  }
  switch (var_internalRepresentation_12013.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_14116 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (var_internalRepresentation_12013.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_14116->mAssociatedValue0 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_14060 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_14060, extractedValue_identifier, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 360)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_14964 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (var_internalRepresentation_12013.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14964->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_14964->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 362)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 362)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_14303 ;
        GALGAS_lstring joker_14270_2 ; // Joker input parameter
        GALGAS_propertyMap joker_14270_1 ; // Joker input parameter
        GALGAS_propertyList joker_14305_3 ; // Joker input parameter
        GALGAS_PLMTypeFlags joker_14305_2 ; // Joker input parameter
        GALGAS_string joker_14305_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 363)).method_structure (joker_14270_2, joker_14270_1, var_structureMap_14303, joker_14305_3, joker_14305_2, joker_14305_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 363)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_14320 = var_structureMap_14303 ;
        GALGAS_objectIR var_masterPropertyIR_14424 ;
        {
        var_m_14320.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_14346 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_14320.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_14346, extractedValue_propertyName, var_masterPropertyIR_14424, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 365)) ;
        }
        GALGAS_objectIR var_newObject_14445 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_14424, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 367)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 368)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 368))  COMMA_SOURCE_FILE ("expression-primary.galgas", 368)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 369)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 366)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 372)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_14445, extractedValue_currentPointer, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 373)) ;
        }
        outArgument_outResult = var_newObject_14445 ;
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 380)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 380)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_15052 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (var_internalRepresentation_12013.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_15052->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_15052->mAssociatedValue1 ;
      outArgument_outResult = extractedValue_valueIR ;
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileAbsoluteReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference * extractPtr_15190 = (const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference *) (var_internalRepresentation_12013.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_15190->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_address = extractPtr_15190->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 385)), GALGAS_string ("temporaryReference 1"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 385)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileIndirectReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference * extractPtr_15337 = (const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference *) (var_internalRepresentation_12013.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_15337->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_15337->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 387)), GALGAS_string ("volatileIndirectReference 1"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 387)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_universalReference:
    {
      const cEnumAssociatedValues_internalRepresentation_universalReference * extractPtr_15469 = (const cEnumAssociatedValues_internalRepresentation_universalReference *) (var_internalRepresentation_12013.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_15469->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_15469->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 389)), GALGAS_string ("indirectReference 1"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 389)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
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
                                                           const GALGAS_bool constin_inGuard,
                                                           const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                           const GALGAS_PLMType constin_inOptionalTargetType,
                                                           const GALGAS_semanticContext constin_inContext,
                                                           const GALGAS_mode constin_inCurrentMode,
                                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                           GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                           GALGAS_universalPropertyAndRoutineMapForContext & io_ioUniversalMap,
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
      f (inObject, constin_inSelfType, constin_inGuard, constin_inCallerNameForInvocationGraph, constin_inOptionalTargetType, constin_inContext, constin_inCurrentMode, io_ioTemporaries, io_ioGlobalLiteralStringMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf (const cPtr_primaryInExpressionAST * inObject,
                                                                                     const GALGAS_PLMType constinArgument_inSelfType,
                                                                                     const GALGAS_bool constinArgument_inGuard,
                                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                     const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                     GALGAS_objectIR & outArgument_outResult,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  GALGAS_internalRepresentation var_internalRepresentation_16349 = GALGAS_internalRepresentation::constructor_structureMember (object->mProperty_mObjectName, GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("expression-primary.galgas", 412))  COMMA_SOURCE_FILE ("expression-primary.galgas", 410)) ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_16503 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_16503.hasCurrentObject ()) {
    switch (enumerator_16503.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_17054 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_16503.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_17054->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (var_internalRepresentation_16349, extractedValue_propertyName, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 418)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_17687 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_16503.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_17687->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_17687->mAssociatedValue1 ;
        {
        routine_handleArrayAccessInExpression (var_internalRepresentation_16349, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 432)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_18260 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_16503.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_18260->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_18260->mAssociatedValue1 ;
        {
        routine_handleFunctionCallInExpressionNew (var_internalRepresentation_16349, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 449)) ;
        }
      }
      break ;
    }
    enumerator_16503.gotoNextObject () ;
  }
  switch (var_internalRepresentation_16349.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_18509 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (var_internalRepresentation_16349.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_18509->mAssociatedValue0 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_18453 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_18453, extractedValue_identifier, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 469)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_19357 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (var_internalRepresentation_16349.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_19357->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_19357->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 471)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 471)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_18696 ;
        GALGAS_lstring joker_18663_2 ; // Joker input parameter
        GALGAS_propertyMap joker_18663_1 ; // Joker input parameter
        GALGAS_propertyList joker_18698_3 ; // Joker input parameter
        GALGAS_PLMTypeFlags joker_18698_2 ; // Joker input parameter
        GALGAS_string joker_18698_1 ; // Joker input parameter
        extensionGetter_type (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 472)).method_structure (joker_18663_2, joker_18663_1, var_structureMap_18696, joker_18698_3, joker_18698_2, joker_18698_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 472)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_18713 = var_structureMap_18696 ;
        GALGAS_objectIR var_masterPropertyIR_18817 ;
        {
        var_m_18713.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_18739 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_18713.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_18739, extractedValue_propertyName, var_masterPropertyIR_18817, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 474)) ;
        }
        GALGAS_objectIR var_newObject_18838 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_18817, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 476)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 477)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 477))  COMMA_SOURCE_FILE ("expression-primary.galgas", 477)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 478)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 475)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 481)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_18838, extractedValue_currentPointer, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 482)) ;
        }
        outArgument_outResult = var_newObject_18838 ;
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 489)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 489)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_19445 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (var_internalRepresentation_16349.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_19445->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_19445->mAssociatedValue1 ;
      outArgument_outResult = extractedValue_valueIR ;
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileAbsoluteReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference * extractPtr_19583 = (const cEnumAssociatedValues_internalRepresentation_volatileAbsoluteReference *) (var_internalRepresentation_16349.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_19583->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_address = extractPtr_19583->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 494)), GALGAS_string ("temporaryReference 2"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 494)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_volatileIndirectReference:
    {
      const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference * extractPtr_19730 = (const cEnumAssociatedValues_internalRepresentation_volatileIndirectReference *) (var_internalRepresentation_16349.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_19730->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_19730->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 496)), GALGAS_string ("volatileIndirectReference 2"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 496)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_universalReference:
    {
      const cEnumAssociatedValues_internalRepresentation_universalReference * extractPtr_19862 = (const cEnumAssociatedValues_internalRepresentation_universalReference *) (var_internalRepresentation_16349.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_19862->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_19862->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 498)), GALGAS_string ("indirectReference 2"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 498)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
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

GALGAS_LValueWithoutSelfAST::GALGAS_LValueWithoutSelfAST (void) :
mProperty_mIdentifier (),
mProperty_mAccessList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueWithoutSelfAST::~ GALGAS_LValueWithoutSelfAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueWithoutSelfAST::GALGAS_LValueWithoutSelfAST (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_accessInAssignmentListAST & inOperand1) :
mProperty_mIdentifier (inOperand0),
mProperty_mAccessList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueWithoutSelfAST GALGAS_LValueWithoutSelfAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_LValueWithoutSelfAST (GALGAS_lstring::constructor_default (HERE),
                                      GALGAS_accessInAssignmentListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueWithoutSelfAST GALGAS_LValueWithoutSelfAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_accessInAssignmentListAST & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueWithoutSelfAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_LValueWithoutSelfAST (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_LValueWithoutSelfAST::objectCompare (const GALGAS_LValueWithoutSelfAST & inOperand) const {
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

bool GALGAS_LValueWithoutSelfAST::isValid (void) const {
  return mProperty_mIdentifier.isValid () && mProperty_mAccessList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_LValueWithoutSelfAST::drop (void) {
  mProperty_mIdentifier.drop () ;
  mProperty_mAccessList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_LValueWithoutSelfAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @LValueWithoutSelfAST:" ;
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

GALGAS_lstring GALGAS_LValueWithoutSelfAST::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_LValueWithoutSelfAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @LValueWithoutSelfAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_LValueWithoutSelfAST ("LValueWithoutSelfAST",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_LValueWithoutSelfAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueWithoutSelfAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_LValueWithoutSelfAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueWithoutSelfAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueWithoutSelfAST GALGAS_LValueWithoutSelfAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_LValueWithoutSelfAST result ;
  const GALGAS_LValueWithoutSelfAST * p = (const GALGAS_LValueWithoutSelfAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_LValueWithoutSelfAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueWithoutSelfAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueSelfAST::GALGAS_LValueSelfAST (void) :
mProperty_mIdentifier (),
mProperty_mAccessList (),
mProperty_mSelfLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueSelfAST::~ GALGAS_LValueSelfAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueSelfAST::GALGAS_LValueSelfAST (const GALGAS_lstring & inOperand0,
                                            const GALGAS_accessInAssignmentListAST & inOperand1,
                                            const GALGAS_location & inOperand2) :
mProperty_mIdentifier (inOperand0),
mProperty_mAccessList (inOperand1),
mProperty_mSelfLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueSelfAST GALGAS_LValueSelfAST::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_LValueSelfAST (GALGAS_lstring::constructor_default (HERE),
                               GALGAS_accessInAssignmentListAST::constructor_emptyList (HERE),
                               GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueSelfAST GALGAS_LValueSelfAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_accessInAssignmentListAST & inOperand1,
                                                            const GALGAS_location & inOperand2 
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueSelfAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_LValueSelfAST (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_LValueSelfAST::objectCompare (const GALGAS_LValueSelfAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mIdentifier.objectCompare (inOperand.mProperty_mIdentifier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccessList.objectCompare (inOperand.mProperty_mAccessList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfLocation.objectCompare (inOperand.mProperty_mSelfLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_LValueSelfAST::isValid (void) const {
  return mProperty_mIdentifier.isValid () && mProperty_mAccessList.isValid () && mProperty_mSelfLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_LValueSelfAST::drop (void) {
  mProperty_mIdentifier.drop () ;
  mProperty_mAccessList.drop () ;
  mProperty_mSelfLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_LValueSelfAST::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "<struct @LValueSelfAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mIdentifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAccessList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelfLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_LValueSelfAST::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_LValueSelfAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_LValueSelfAST::getter_mSelfLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelfLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @LValueSelfAST type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_LValueSelfAST ("LValueSelfAST",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_LValueSelfAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueSelfAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_LValueSelfAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueSelfAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueSelfAST GALGAS_LValueSelfAST::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_LValueSelfAST result ;
  const GALGAS_LValueSelfAST * p = (const GALGAS_LValueSelfAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_LValueSelfAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueSelfAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varInstructionWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionalTypeName.objectCompare (p->mProperty_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varInstructionWithAssignmentAST::objectCompare (const GALGAS_varInstructionWithAssignmentAST & inOperand) const {
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

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (const cPtr_varInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInstructionWithAssignmentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mVarName,
                                                                                                const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mOptionalTypeName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInstructionWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mOptionalTypeName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionWithAssignmentAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mProperty_mOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_varInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_varInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @varInstructionWithAssignmentAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varInstructionWithAssignmentAST::cPtr_varInstructionWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mVarName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mOptionalTypeName (in_mOptionalTypeName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

void cPtr_varInstructionWithAssignmentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@varInstructionWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mOptionalTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @varInstructionWithAssignmentAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ("varInstructionWithAssignmentAST",
                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST result ;
  const GALGAS_varInstructionWithAssignmentAST * p = (const GALGAS_varInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varInstructionAST::objectCompare (const GALGAS_varInstructionAST & inOperand) const {
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

GALGAS_varInstructionAST::GALGAS_varInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionAST GALGAS_varInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_varInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionAST::GALGAS_varInstructionAST (const cPtr_varInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionAST GALGAS_varInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_lstring & inAttribute_mVarName,
                                                                    const GALGAS_lstring & inAttribute_mTypeName
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInstructionAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionAST) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @varInstructionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varInstructionAST::cPtr_varInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mVarName,
                                                const GALGAS_lstring & in_mTypeName
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mTypeName (in_mTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionAST ;
}

void cPtr_varInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@varInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @varInstructionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInstructionAST ("varInstructionAST",
                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInstructionAST GALGAS_varInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionAST result ;
  const GALGAS_varInstructionAST * p = (const GALGAS_varInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_letInstructionWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionalTypeName.objectCompare (p->mProperty_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_letInstructionWithAssignmentAST::objectCompare (const GALGAS_letInstructionWithAssignmentAST & inOperand) const {
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

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (const cPtr_letInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_letInstructionWithAssignmentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mConstantName,
                                                                                                const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mOptionalTypeName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_letInstructionWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mConstantName, inAttribute_mOptionalTypeName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mProperty_mConstantName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_letInstructionWithAssignmentAST::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mProperty_mOptionalTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_letInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_letInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_letInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @letInstructionWithAssignmentAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_letInstructionWithAssignmentAST::cPtr_letInstructionWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mConstantName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mConstantName (in_mConstantName),
mProperty_mOptionalTypeName (in_mOptionalTypeName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_letInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

void cPtr_letInstructionWithAssignmentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@letInstructionWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_letInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_letInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mOptionalTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @letInstructionWithAssignmentAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ("letInstructionWithAssignmentAST",
                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_letInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_letInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_letInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST result ;
  const GALGAS_letInstructionWithAssignmentAST * p = (const GALGAS_letInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_letInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("letInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIteratedObject.objectCompare (p->mProperty_mIteratedObject) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_whileExpression.objectCompare (p->mProperty_mEndOf_5F_whileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStaticWhileExpression.objectCompare (p->mProperty_mStaticWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_for_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_for_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forInstructionAST::objectCompare (const GALGAS_forInstructionAST & inOperand) const {
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

GALGAS_forInstructionAST::GALGAS_forInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionAST::GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionAST GALGAS_forInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_lstring & inAttribute_mVarName,
                                                                    const GALGAS_lstring & inAttribute_mIteratedObject,
                                                                    const GALGAS_expressionAST & inAttribute_mWhileExpression,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_whileExpression,
                                                                    const GALGAS_bool & inAttribute_mStaticWhileExpression,
                                                                    const GALGAS_instructionListAST & inAttribute_mDoInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_for_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mIteratedObject.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mEndOf_5F_whileExpression.isValid () && inAttribute_mStaticWhileExpression.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_for_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mIteratedObject, inAttribute_mWhileExpression, inAttribute_mEndOf_5F_whileExpression, inAttribute_mStaticWhileExpression, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forInstructionAST::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mIteratedObject ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forInstructionAST::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIteratedObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_forInstructionAST::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mWhileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_forInstructionAST::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_whileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mEndOf_5F_whileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_whileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_whileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_forInstructionAST::getter_mStaticWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mStaticWhileExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_forInstructionAST::getter_mStaticWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_for_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mEndOf_5F_for_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_for_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_for_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @forInstructionAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forInstructionAST::cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mVarName,
                                                const GALGAS_lstring & in_mIteratedObject,
                                                const GALGAS_expressionAST & in_mWhileExpression,
                                                const GALGAS_location & in_mEndOf_5F_whileExpression,
                                                const GALGAS_bool & in_mStaticWhileExpression,
                                                const GALGAS_instructionListAST & in_mDoInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_for_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mIteratedObject (in_mIteratedObject),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mEndOf_5F_whileExpression (in_mEndOf_5F_whileExpression),
mProperty_mStaticWhileExpression (in_mStaticWhileExpression),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOf_5F_for_5F_instruction (in_mEndOf_5F_for_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@forInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_whileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStaticWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_for_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mIteratedObject, mProperty_mWhileExpression, mProperty_mEndOf_5F_whileExpression, mProperty_mStaticWhileExpression, mProperty_mDoInstructionList, mProperty_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @forInstructionAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionAST GALGAS_forInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  const GALGAS_forInstructionAST * p = (const GALGAS_forInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forInstructionOnArrayIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedValueName.objectCompare (p->mProperty_mEnumeratedValueName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIteratedObjectName.objectCompare (p->mProperty_mIteratedObjectName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIteratedObject.objectCompare (p->mProperty_mIteratedObject) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileInstructionList.objectCompare (p->mProperty_mWhileInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpressionResult.objectCompare (p->mProperty_mWhileExpressionResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (p->mProperty_mArraySize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInvokedFunctionSet.objectCompare (p->mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forInstructionOnArrayIR::objectCompare (const GALGAS_forInstructionOnArrayIR & inOperand) const {
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

GALGAS_forInstructionOnArrayIR::GALGAS_forInstructionOnArrayIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionOnArrayIR::GALGAS_forInstructionOnArrayIR (const cPtr_forInstructionOnArrayIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionOnArrayIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionOnArrayIR GALGAS_forInstructionOnArrayIR::constructor_new (const GALGAS_string & inAttribute_mEnumeratedValueName,
                                                                                const GALGAS_lstring & inAttribute_mIteratedObjectName,
                                                                                const GALGAS_objectIR & inAttribute_mIteratedObject,
                                                                                const GALGAS_instructionListIR & inAttribute_mWhileInstructionList,
                                                                                const GALGAS_objectIR & inAttribute_mWhileExpressionResult,
                                                                                const GALGAS_instructionListIR & inAttribute_mDoInstructionList,
                                                                                const GALGAS_PLMType & inAttribute_mElementType,
                                                                                const GALGAS_uint & inAttribute_mArraySize,
                                                                                const GALGAS_stringset & inAttribute_mInvokedFunctionSet
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR result ;
  if (inAttribute_mEnumeratedValueName.isValid () && inAttribute_mIteratedObjectName.isValid () && inAttribute_mIteratedObject.isValid () && inAttribute_mWhileInstructionList.isValid () && inAttribute_mWhileExpressionResult.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mElementType.isValid () && inAttribute_mArraySize.isValid () && inAttribute_mInvokedFunctionSet.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionOnArrayIR (inAttribute_mEnumeratedValueName, inAttribute_mIteratedObjectName, inAttribute_mIteratedObject, inAttribute_mWhileInstructionList, inAttribute_mWhileExpressionResult, inAttribute_mDoInstructionList, inAttribute_mElementType, inAttribute_mArraySize, inAttribute_mInvokedFunctionSet COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_forInstructionOnArrayIR::getter_mEnumeratedValueName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mEnumeratedValueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_forInstructionOnArrayIR::getter_mEnumeratedValueName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumeratedValueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forInstructionOnArrayIR::getter_mIteratedObjectName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mIteratedObjectName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forInstructionOnArrayIR::getter_mIteratedObjectName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIteratedObjectName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_forInstructionOnArrayIR::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mIteratedObject ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_forInstructionOnArrayIR::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIteratedObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_forInstructionOnArrayIR::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mWhileInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_forInstructionOnArrayIR::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_forInstructionOnArrayIR::getter_mWhileExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mWhileExpressionResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_forInstructionOnArrayIR::getter_mWhileExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpressionResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_forInstructionOnArrayIR::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_forInstructionOnArrayIR::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_forInstructionOnArrayIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mElementType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_forInstructionOnArrayIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_forInstructionOnArrayIR::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mArraySize ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_forInstructionOnArrayIR::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArraySize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_forInstructionOnArrayIR::getter_mInvokedFunctionSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mInvokedFunctionSet ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset cPtr_forInstructionOnArrayIR::getter_mInvokedFunctionSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInvokedFunctionSet ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @forInstructionOnArrayIR class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forInstructionOnArrayIR::cPtr_forInstructionOnArrayIR (const GALGAS_string & in_mEnumeratedValueName,
                                                            const GALGAS_lstring & in_mIteratedObjectName,
                                                            const GALGAS_objectIR & in_mIteratedObject,
                                                            const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                            const GALGAS_objectIR & in_mWhileExpressionResult,
                                                            const GALGAS_instructionListIR & in_mDoInstructionList,
                                                            const GALGAS_PLMType & in_mElementType,
                                                            const GALGAS_uint & in_mArraySize,
                                                            const GALGAS_stringset & in_mInvokedFunctionSet
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mEnumeratedValueName (in_mEnumeratedValueName),
mProperty_mIteratedObjectName (in_mIteratedObjectName),
mProperty_mIteratedObject (in_mIteratedObject),
mProperty_mWhileInstructionList (in_mWhileInstructionList),
mProperty_mWhileExpressionResult (in_mWhileExpressionResult),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mElementType (in_mElementType),
mProperty_mArraySize (in_mArraySize),
mProperty_mInvokedFunctionSet (in_mInvokedFunctionSet) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forInstructionOnArrayIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;
}

void cPtr_forInstructionOnArrayIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@forInstructionOnArrayIR:" ;
  mProperty_mEnumeratedValueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObjectName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forInstructionOnArrayIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionOnArrayIR (mProperty_mEnumeratedValueName, mProperty_mIteratedObjectName, mProperty_mIteratedObject, mProperty_mWhileInstructionList, mProperty_mWhileExpressionResult, mProperty_mDoInstructionList, mProperty_mElementType, mProperty_mArraySize, mProperty_mInvokedFunctionSet COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @forInstructionOnArrayIR type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionOnArrayIR ("forInstructionOnArrayIR",
                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionOnArrayIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionOnArrayIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnArrayIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionOnArrayIR GALGAS_forInstructionOnArrayIR::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR result ;
  const GALGAS_forInstructionOnArrayIR * p = (const GALGAS_forInstructionOnArrayIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionOnArrayIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnArrayIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forLowerUpperBoundInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_do_5F_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forLowerUpperBoundInstructionAST::objectCompare (const GALGAS_forLowerUpperBoundInstructionAST & inOperand) const {
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

GALGAS_forLowerUpperBoundInstructionAST::GALGAS_forLowerUpperBoundInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionAST::GALGAS_forLowerUpperBoundInstructionAST (const cPtr_forLowerUpperBoundInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mVarName,
                                                                                                  const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                  const GALGAS_expressionAST & inAttribute_mLowerBoundExpression,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                                                  const GALGAS_expressionAST & inAttribute_mUpperBoundExpression,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                                                  const GALGAS_instructionListAST & inAttribute_mDoInstructionList,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instruction
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mLowerBoundExpression.isValid () && inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction.isValid () && inAttribute_mUpperBoundExpression.isValid () && inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_do_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mTypeName, inAttribute_mLowerBoundExpression, inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction, inAttribute_mUpperBoundExpression, inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forLowerUpperBoundInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_forLowerUpperBoundInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_forLowerUpperBoundInstructionAST::getter_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mLowerBoundExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_forLowerUpperBoundInstructionAST::getter_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLowerBoundExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_lowerBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_lowerBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_forLowerUpperBoundInstructionAST::getter_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mUpperBoundExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_forLowerUpperBoundInstructionAST::getter_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUpperBoundExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_upperBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_upperBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_forLowerUpperBoundInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST cPtr_forLowerUpperBoundInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mEndOf_5F_do_5F_instruction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_do_5F_instruction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @forLowerUpperBoundInstructionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forLowerUpperBoundInstructionAST::cPtr_forLowerUpperBoundInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mVarName,
                                                                              const GALGAS_lstring & in_mTypeName,
                                                                              const GALGAS_expressionAST & in_mLowerBoundExpression,
                                                                              const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                              const GALGAS_expressionAST & in_mUpperBoundExpression,
                                                                              const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                              const GALGAS_instructionListAST & in_mDoInstructionList,
                                                                              const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mTypeName (in_mTypeName),
mProperty_mLowerBoundExpression (in_mLowerBoundExpression),
mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (in_mEndOf_5F_lowerBoundExpression_5F_instruction),
mProperty_mUpperBoundExpression (in_mUpperBoundExpression),
mProperty_mEndOf_5F_upperBoundExpression_5F_instruction (in_mEndOf_5F_upperBoundExpression_5F_instruction),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOf_5F_do_5F_instruction (in_mEndOf_5F_do_5F_instruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forLowerUpperBoundInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

void cPtr_forLowerUpperBoundInstructionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@forLowerUpperBoundInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_do_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forLowerUpperBoundInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName, mProperty_mLowerBoundExpression, mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, mProperty_mUpperBoundExpression, mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, mProperty_mDoInstructionList, mProperty_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @forLowerUpperBoundInstructionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ("forLowerUpperBoundInstructionAST",
                                                         & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST result ;
  const GALGAS_forLowerUpperBoundInstructionAST * p = (const GALGAS_forLowerUpperBoundInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_complexCallNoSelfInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_complexCallNoSelfInstructionAST * p = (const cPtr_complexCallNoSelfInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_complexCallNoSelfInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssignmentTargetAST.objectCompare (p->mProperty_mAssignmentTargetAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_complexCallNoSelfInstructionAST::objectCompare (const GALGAS_complexCallNoSelfInstructionAST & inOperand) const {
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

GALGAS_complexCallNoSelfInstructionAST::GALGAS_complexCallNoSelfInstructionAST (void) :
GALGAS_callInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallNoSelfInstructionAST GALGAS_complexCallNoSelfInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_complexCallNoSelfInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                                  GALGAS_location::constructor_nowhere (HERE),
                                                                  GALGAS_LValueWithoutSelfAST::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallNoSelfInstructionAST::GALGAS_complexCallNoSelfInstructionAST (const cPtr_complexCallNoSelfInstructionAST * inSourcePtr) :
GALGAS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_complexCallNoSelfInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallNoSelfInstructionAST GALGAS_complexCallNoSelfInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                                const GALGAS_location & inAttribute_mEndOfArguments,
                                                                                                const GALGAS_LValueWithoutSelfAST & inAttribute_mAssignmentTargetAST
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_complexCallNoSelfInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid () && inAttribute_mAssignmentTargetAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_complexCallNoSelfInstructionAST (inAttribute_mInstructionLocation, inAttribute_mArguments, inAttribute_mEndOfArguments, inAttribute_mAssignmentTargetAST COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueWithoutSelfAST GALGAS_complexCallNoSelfInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueWithoutSelfAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_complexCallNoSelfInstructionAST * p = (const cPtr_complexCallNoSelfInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complexCallNoSelfInstructionAST) ;
    result = p->mProperty_mAssignmentTargetAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueWithoutSelfAST cPtr_complexCallNoSelfInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssignmentTargetAST ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @complexCallNoSelfInstructionAST class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_complexCallNoSelfInstructionAST::cPtr_complexCallNoSelfInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                            const GALGAS_location & in_mEndOfArguments,
                                                                            const GALGAS_LValueWithoutSelfAST & in_mAssignmentTargetAST
                                                                            COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments COMMA_THERE),
mProperty_mAssignmentTargetAST (in_mAssignmentTargetAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_complexCallNoSelfInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complexCallNoSelfInstructionAST ;
}

void cPtr_complexCallNoSelfInstructionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@complexCallNoSelfInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssignmentTargetAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_complexCallNoSelfInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_complexCallNoSelfInstructionAST (mProperty_mInstructionLocation, mProperty_mArguments, mProperty_mEndOfArguments, mProperty_mAssignmentTargetAST COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @complexCallNoSelfInstructionAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_complexCallNoSelfInstructionAST ("complexCallNoSelfInstructionAST",
                                                        & kTypeDescriptor_GALGAS_callInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_complexCallNoSelfInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complexCallNoSelfInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_complexCallNoSelfInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_complexCallNoSelfInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallNoSelfInstructionAST GALGAS_complexCallNoSelfInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_complexCallNoSelfInstructionAST result ;
  const GALGAS_complexCallNoSelfInstructionAST * p = (const GALGAS_complexCallNoSelfInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_complexCallNoSelfInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("complexCallNoSelfInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_complexCallSelfInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_complexCallSelfInstructionAST * p = (const cPtr_complexCallSelfInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_complexCallSelfInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssignmentTargetAST.objectCompare (p->mProperty_mAssignmentTargetAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_complexCallSelfInstructionAST::objectCompare (const GALGAS_complexCallSelfInstructionAST & inOperand) const {
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

GALGAS_complexCallSelfInstructionAST::GALGAS_complexCallSelfInstructionAST (void) :
GALGAS_callInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallSelfInstructionAST GALGAS_complexCallSelfInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_complexCallSelfInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE),
                                                                GALGAS_LValueSelfAST::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallSelfInstructionAST::GALGAS_complexCallSelfInstructionAST (const cPtr_complexCallSelfInstructionAST * inSourcePtr) :
GALGAS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_complexCallSelfInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallSelfInstructionAST GALGAS_complexCallSelfInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                            const GALGAS_location & inAttribute_mEndOfArguments,
                                                                                            const GALGAS_LValueSelfAST & inAttribute_mAssignmentTargetAST
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_complexCallSelfInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid () && inAttribute_mAssignmentTargetAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_complexCallSelfInstructionAST (inAttribute_mInstructionLocation, inAttribute_mArguments, inAttribute_mEndOfArguments, inAttribute_mAssignmentTargetAST COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueSelfAST GALGAS_complexCallSelfInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueSelfAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_complexCallSelfInstructionAST * p = (const cPtr_complexCallSelfInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complexCallSelfInstructionAST) ;
    result = p->mProperty_mAssignmentTargetAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueSelfAST cPtr_complexCallSelfInstructionAST::getter_mAssignmentTargetAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssignmentTargetAST ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @complexCallSelfInstructionAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_complexCallSelfInstructionAST::cPtr_complexCallSelfInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                        const GALGAS_location & in_mEndOfArguments,
                                                                        const GALGAS_LValueSelfAST & in_mAssignmentTargetAST
                                                                        COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments COMMA_THERE),
mProperty_mAssignmentTargetAST (in_mAssignmentTargetAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_complexCallSelfInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complexCallSelfInstructionAST ;
}

void cPtr_complexCallSelfInstructionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@complexCallSelfInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssignmentTargetAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_complexCallSelfInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_complexCallSelfInstructionAST (mProperty_mInstructionLocation, mProperty_mArguments, mProperty_mEndOfArguments, mProperty_mAssignmentTargetAST COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @complexCallSelfInstructionAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_complexCallSelfInstructionAST ("complexCallSelfInstructionAST",
                                                      & kTypeDescriptor_GALGAS_callInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_complexCallSelfInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complexCallSelfInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_complexCallSelfInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_complexCallSelfInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complexCallSelfInstructionAST GALGAS_complexCallSelfInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_complexCallSelfInstructionAST result ;
  const GALGAS_complexCallSelfInstructionAST * p = (const GALGAS_complexCallSelfInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_complexCallSelfInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("complexCallSelfInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_standAloneProcedureCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_standAloneProcedureCallInstructionAST * p = (const cPtr_standAloneProcedureCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_standAloneProcedureCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSandAloneRoutineName.objectCompare (p->mProperty_mSandAloneRoutineName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_standAloneProcedureCallInstructionAST::objectCompare (const GALGAS_standAloneProcedureCallInstructionAST & inOperand) const {
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

GALGAS_standAloneProcedureCallInstructionAST::GALGAS_standAloneProcedureCallInstructionAST (void) :
GALGAS_callInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_standAloneProcedureCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                                        GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_lstring::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_standAloneProcedureCallInstructionAST::GALGAS_standAloneProcedureCallInstructionAST (const cPtr_standAloneProcedureCallInstructionAST * inSourcePtr) :
GALGAS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standAloneProcedureCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                                            const GALGAS_location & inAttribute_mEndOfArguments,
                                                                                                            const GALGAS_lstring & inAttribute_mSandAloneRoutineName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_standAloneProcedureCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid () && inAttribute_mSandAloneRoutineName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_standAloneProcedureCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mArguments, inAttribute_mEndOfArguments, inAttribute_mSandAloneRoutineName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_standAloneProcedureCallInstructionAST::getter_mSandAloneRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_standAloneProcedureCallInstructionAST * p = (const cPtr_standAloneProcedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standAloneProcedureCallInstructionAST) ;
    result = p->mProperty_mSandAloneRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_standAloneProcedureCallInstructionAST::getter_mSandAloneRoutineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSandAloneRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @standAloneProcedureCallInstructionAST class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_standAloneProcedureCallInstructionAST::cPtr_standAloneProcedureCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                                        const GALGAS_location & in_mEndOfArguments,
                                                                                        const GALGAS_lstring & in_mSandAloneRoutineName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments COMMA_THERE),
mProperty_mSandAloneRoutineName (in_mSandAloneRoutineName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_standAloneProcedureCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ;
}

void cPtr_standAloneProcedureCallInstructionAST::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@standAloneProcedureCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSandAloneRoutineName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_standAloneProcedureCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_standAloneProcedureCallInstructionAST (mProperty_mInstructionLocation, mProperty_mArguments, mProperty_mEndOfArguments, mProperty_mSandAloneRoutineName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @standAloneProcedureCallInstructionAST type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ("standAloneProcedureCallInstructionAST",
                                                              & kTypeDescriptor_GALGAS_callInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_standAloneProcedureCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_standAloneProcedureCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standAloneProcedureCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_standAloneProcedureCallInstructionAST result ;
  const GALGAS_standAloneProcedureCallInstructionAST * p = (const GALGAS_standAloneProcedureCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_standAloneProcedureCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standAloneProcedureCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@LValueWithoutSelfAST noteInstructionTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GALGAS_LValueWithoutSelfAST inObject,
                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_accessInAssignmentListAST enumerator_2631 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_2631.hasCurrentObject ()) {
    switch (enumerator_2631.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_2805 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_2631.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_2805->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 64)) ;
      }
      break ;
    }
    enumerator_2631.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension method '@LValueWithoutSelfAST type'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_type (const GALGAS_LValueWithoutSelfAST inObject,
                           const GALGAS_universalPropertyAndRoutineMapForContext constinArgument_inUniversalMap,
                           GALGAS_PLMType & outArgument_outType,
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  callExtensionMethod_searchValuedObjectType ((const cPtr_universalPropertyAndRoutineMapForContext *) constinArgument_inUniversalMap.ptr (), inObject.mProperty_mIdentifier, outArgument_outType, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 85)) ;
  cEnumerator_accessInAssignmentListAST enumerator_3604 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_3604.hasCurrentObject ()) {
    switch (enumerator_3604.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_3975 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_3604.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3975->mAssociatedValue0 ;
        const enumGalgasBool test_0 = outArgument_outType.getter_isStructure (SOURCE_FILE ("lvalue-without-self.galgas", 89)).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_3767 ;
          GALGAS_lstring joker_3734_2 ; // Joker input parameter
          GALGAS_propertyMap joker_3734_1 ; // Joker input parameter
          GALGAS_propertyList joker_3769_3 ; // Joker input parameter
          GALGAS_PLMTypeFlags joker_3769_2 ; // Joker input parameter
          GALGAS_string joker_3769_1 ; // Joker input parameter
          outArgument_outType.method_structure (joker_3734_2, joker_3734_1, var_universalMap_3767, joker_3769_3, joker_3769_2, joker_3769_1, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 90)) ;
          GALGAS_objectIR var_propertyObject_3847 ;
          callExtensionMethod_searchValuedObject ((const cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_3767.ptr (), extractedValue_propertyName, var_propertyObject_3847, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 91)) ;
          outArgument_outType = extensionGetter_type (var_propertyObject_3847, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 92)) ;
        }else if (kBoolFalse == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue-without-self.galgas", 94)), GALGAS_string ("receiver has no property"), fixItArray1  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 94)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const enumGalgasBool test_2 = outArgument_outType.getter_isArrayType (SOURCE_FILE ("lvalue-without-self.galgas", 97)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_lstring joker_4069_1 ; // Joker input parameter
          GALGAS_bigint joker_4094_4 ; // Joker input parameter
          GALGAS_constantMap joker_4094_3 ; // Joker input parameter
          GALGAS_PLMTypeFlags joker_4094_2 ; // Joker input parameter
          GALGAS_string joker_4094_1 ; // Joker input parameter
          outArgument_outType.method_arrayType (joker_4069_1, outArgument_outType, joker_4094_4, joker_4094_3, joker_4094_2, joker_4094_1, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 98)) ;
        }
      }
      break ;
    }
    enumerator_3604.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@LValueWithoutSelfAST analyzeLValueNoSelf'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeLValueNoSelf (const GALGAS_LValueWithoutSelfAST inObject,
                                          const GALGAS_PLMType constinArgument_inSelfType,
                                          const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                          const GALGAS_semanticContext constinArgument_inContext,
                                          const GALGAS_mode constinArgument_inCurrentMode,
                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                          GALGAS_internalRepresentation & outArgument_outInternalRepresentation,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_possibleValuedObject var_entity_4976 ;
  callExtensionMethod_searchEntity ((const cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr (), inObject.mProperty_mIdentifier, var_entity_4976, inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 119)) ;
  switch (var_entity_4976.enumValue ()) {
  case GALGAS_possibleValuedObject::kNotBuilt:
    break ;
  case GALGAS_possibleValuedObject::kEnum_undefined:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue-without-self.galgas", 122)), GALGAS_string ("undefined identifier"), fixItArray0  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 122)) ;
      outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_property:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue-without-self.galgas", 124)), GALGAS_string ("property \?\?"), fixItArray1  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 124)) ;
      outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_module:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue-without-self.galgas", 126)), GALGAS_string ("a module cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 126)) ;
      outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_register:
    {
      const cEnumAssociatedValues_possibleValuedObject_register * extractPtr_6040 = (const cEnumAssociatedValues_possibleValuedObject_register *) (var_entity_4976.unsafePointer ()) ;
      const GALGAS_bool extractedValue_writable = extractPtr_6040->mAssociatedValue1 ;
      const GALGAS_PLMType extractedValue_registerType = extractPtr_6040->mAssociatedValue2 ;
      const GALGAS_bigint extractedValue_registerAddress = extractPtr_6040->mAssociatedValue3 ;
      const GALGAS_uint extractedValue_arraySize = extractPtr_6040->mAssociatedValue5 ;
      const GALGAS_uint extractedValue_elementSize = extractPtr_6040->mAssociatedValue6 ;
      {
      routine_analyzeControlRegisterInLValue (constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier, extractedValue_registerType, extractedValue_writable, extractedValue_registerAddress.getter_uint (inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 141)), extractedValue_arraySize, extractedValue_elementSize, inObject.mProperty_mAccessList, outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 128)) ;
      }
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_globalConstant:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue-without-self.galgas", 148)), GALGAS_string ("a global constant cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 148)) ;
      outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_localConstant:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue-without-self.galgas", 150)), GALGAS_string ("a local constant cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 150)) ;
      outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_possibleValuedObject_globalVariable * extractPtr_7167 = (const cEnumAssociatedValues_possibleValuedObject_globalVariable *) (var_entity_4976.unsafePointer ()) ;
      const GALGAS_bool extractedValue_writable = extractPtr_7167->mAssociatedValue0 ;
      const GALGAS_PLMType extractedValue_variableType = extractPtr_7167->mAssociatedValue1 ;
      const enumGalgasBool test_5 = extractedValue_writable.operator_not (SOURCE_FILE ("lvalue-without-self.galgas", 152)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue-without-self.galgas", 153)), GALGAS_string ("a global variable cannot be written in this context"), fixItArray6  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 153)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_5) {
        {
        extensionSetter_appendNoteGlobalVariableAccess (ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("lvalue-without-self.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 155)) ;
        }
        {
        routine_analyzeVariableInLValue (constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier, function_llvmNameForGlobalVariable (inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("lvalue-without-self.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 167)), extractedValue_variableType, inObject.mProperty_mAccessList, outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 156)) ;
        }
      }
    }
    break ;
  case GALGAS_possibleValuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_possibleValuedObject_localVariable * extractPtr_7791 = (const cEnumAssociatedValues_possibleValuedObject_localVariable *) (var_entity_4976.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_variableType = extractPtr_7791->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_7791->mAssociatedValue1 ;
      {
      routine_analyzeVariableInLValue (constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("lvalue-without-self.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 185)), extractedValue_variableType, inObject.mProperty_mAccessList, outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue-without-self.galgas", 174)) ;
      }
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@LValueSelfAST noteInstructionTypesInPrecedenceGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GALGAS_LValueSelfAST inObject,
                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_accessInAssignmentListAST enumerator_2284 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_2284.hasCurrentObject ()) {
    switch (enumerator_2284.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_2458 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_2284.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_2458->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 56)) ;
      }
      break ;
    }
    enumerator_2284.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension method '@LValueSelfAST type'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_type (const GALGAS_LValueSelfAST inObject,
                           const GALGAS_PLMType constinArgument_inSelfType,
                           GALGAS_PLMType & outArgument_outType,
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inSelfType.getter_isStructure (SOURCE_FILE ("lvalue-with-self.galgas", 69)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_propertyMap_3027 ;
    GALGAS_lstring joker_2983_1 ; // Joker input parameter
    GALGAS_universalPropertyAndRoutineMapForContext joker_3029_4 ; // Joker input parameter
    GALGAS_propertyList joker_3029_3 ; // Joker input parameter
    GALGAS_PLMTypeFlags joker_3029_2 ; // Joker input parameter
    GALGAS_string joker_3029_1 ; // Joker input parameter
    constinArgument_inSelfType.method_structure (joker_2983_1, var_propertyMap_3027, joker_3029_4, joker_3029_3, joker_3029_2, joker_3029_1, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 70)) ;
    GALGAS_PLMType var_type_3086 ;
    GALGAS_bool joker_3074_2 ; // Joker input parameter
    GALGAS_objectIR joker_3074_1 ; // Joker input parameter
    GALGAS_propertyAccessKind joker_3088 ; // Joker input parameter
    var_propertyMap_3027.method_searchKey (inObject.mProperty_mIdentifier, joker_3074_2, joker_3074_1, var_type_3086, joker_3088, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 71)) ;
    outArgument_outType = var_type_3086 ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (inObject.mProperty_mSelfLocation, GALGAS_string ("'self' not available in this context"), fixItArray1  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 74)) ;
    outArgument_outType.drop () ; // Release error dropped variable
  }
  cEnumerator_accessInAssignmentListAST enumerator_3227 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_3227.hasCurrentObject ()) {
    switch (enumerator_3227.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_3579 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_3227.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_3579->mAssociatedValue0 ;
        const enumGalgasBool test_2 = outArgument_outType.getter_isStructure (SOURCE_FILE ("lvalue-with-self.galgas", 79)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_propertyMap var_propertyMap_3401 ;
          GALGAS_lstring joker_3357_1 ; // Joker input parameter
          GALGAS_universalPropertyAndRoutineMapForContext joker_3403_4 ; // Joker input parameter
          GALGAS_propertyList joker_3403_3 ; // Joker input parameter
          GALGAS_PLMTypeFlags joker_3403_2 ; // Joker input parameter
          GALGAS_string joker_3403_1 ; // Joker input parameter
          outArgument_outType.method_structure (joker_3357_1, var_propertyMap_3401, joker_3403_4, joker_3403_3, joker_3403_2, joker_3403_1, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 80)) ;
          GALGAS_PLMType var_type_3465 ;
          GALGAS_bool joker_3453_2 ; // Joker input parameter
          GALGAS_objectIR joker_3453_1 ; // Joker input parameter
          GALGAS_propertyAccessKind joker_3467 ; // Joker input parameter
          var_propertyMap_3401.method_searchKey (extractedValue_propertyName, joker_3453_2, joker_3453_1, var_type_3465, joker_3467, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 81)) ;
          outArgument_outType = var_type_3465 ;
        }else if (kBoolFalse == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue-with-self.galgas", 84)), GALGAS_string ("receiver has no property"), fixItArray3  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 84)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const enumGalgasBool test_4 = outArgument_outType.getter_isArrayType (SOURCE_FILE ("lvalue-with-self.galgas", 87)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_lstring joker_3673_1 ; // Joker input parameter
          GALGAS_bigint joker_3698_4 ; // Joker input parameter
          GALGAS_constantMap joker_3698_3 ; // Joker input parameter
          GALGAS_PLMTypeFlags joker_3698_2 ; // Joker input parameter
          GALGAS_string joker_3698_1 ; // Joker input parameter
          outArgument_outType.method_arrayType (joker_3673_1, outArgument_outType, joker_3698_4, joker_3698_3, joker_3698_2, joker_3698_1, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 88)) ;
        }
      }
      break ;
    }
    enumerator_3227.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@LValueSelfAST analyzeAssignmentTarget'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeAssignmentTarget (const GALGAS_LValueSelfAST inObject,
                                              const GALGAS_PLMType constinArgument_inSelfType,
                                              const GALGAS_targetAccessKind /* constinArgument_inSelfAccessKind */,
                                              const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              const GALGAS_mode constinArgument_inCurrentMode,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                              GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                              GALGAS_internalRepresentation & outArgument_outInternalRepresentation,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inSelfType.getter_isStructure (SOURCE_FILE ("lvalue-with-self.galgas", 110)).operator_not (SOURCE_FILE ("lvalue-with-self.galgas", 110)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue-with-self.galgas", 111)), GALGAS_string ("'self' should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 111)) ;
    outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_propertyMap var_propertyMap_4782 ;
    GALGAS_lstring joker_4739 ; // Joker input parameter
    GALGAS_universalPropertyAndRoutineMapForContext joker_4784_4 ; // Joker input parameter
    GALGAS_propertyList joker_4784_3 ; // Joker input parameter
    GALGAS_PLMTypeFlags joker_4784_2 ; // Joker input parameter
    GALGAS_string joker_4784_1 ; // Joker input parameter
    constinArgument_inSelfType.method_structure (joker_4739, var_propertyMap_4782, joker_4784_4, joker_4784_3, joker_4784_2, joker_4784_1, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 113)) ;
    GALGAS_PLMType var_propertyType_4849 ;
    GALGAS_propertyAccessKind var_propertyAccess_4869 ;
    GALGAS_bool joker_4829_2 ; // Joker input parameter
    GALGAS_objectIR joker_4829_1 ; // Joker input parameter
    var_propertyMap_4782.method_searchKey (inObject.mProperty_mIdentifier, joker_4829_2, joker_4829_1, var_propertyType_4849, var_propertyAccess_4869, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 114)) ;
    switch (var_propertyAccess_4869.enumValue ()) {
    case GALGAS_propertyAccessKind::kNotBuilt:
      break ;
    case GALGAS_propertyAccessKind::kEnum_constant:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue-with-self.galgas", 117)), GALGAS_string ("a constant property cannot be modified"), fixItArray2  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 117)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_propertyAccessKind::kEnum_indexed:
      {
        const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_8033 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_4869.unsafePointer ()) ;
        const GALGAS_uint extractedValue_propertyIndex = extractPtr_8033->mAssociatedValue0 ;
        GALGAS_string var_newLLVMPropertyVar_5118 ;
        {
        extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMPropertyVar_5118, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 119)) ;
        }
        {
        extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, constinArgument_inSelfType, GALGAS_string ("%self"), var_propertyType_4849, var_newLLVMPropertyVar_5118, extractedValue_propertyIndex, inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("lvalue-with-self.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 120)) ;
        }
        GALGAS_PLMType var_currentType_5353 = var_propertyType_4849 ;
        GALGAS_string var_currentLLVMName_5394 = var_newLLVMPropertyVar_5118 ;
        cEnumerator_accessInAssignmentListAST enumerator_5449 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
        while (enumerator_5449.hasCurrentObject ()) {
          switch (enumerator_5449.current_mAccess (HERE).enumValue ()) {
          case GALGAS_accessInAssignmentAST::kNotBuilt:
            break ;
          case GALGAS_accessInAssignmentAST::kEnum_property:
            {
              const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_6534 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_5449.current_mAccess (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_propertyName = extractPtr_6534->mAssociatedValue0 ;
              const enumGalgasBool test_3 = var_currentType_5353.getter_isStructure (SOURCE_FILE ("lvalue-with-self.galgas", 133)).boolEnum () ;
              if (kBoolTrue == test_3) {
                GALGAS_propertyMap var_propertyMap_5647 ;
                GALGAS_lstring joker_5603_1 ; // Joker input parameter
                GALGAS_universalPropertyAndRoutineMapForContext joker_5649_4 ; // Joker input parameter
                GALGAS_propertyList joker_5649_3 ; // Joker input parameter
                GALGAS_PLMTypeFlags joker_5649_2 ; // Joker input parameter
                GALGAS_string joker_5649_1 ; // Joker input parameter
                var_currentType_5353.method_structure (joker_5603_1, var_propertyMap_5647, joker_5649_4, joker_5649_3, joker_5649_2, joker_5649_1, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 134)) ;
                GALGAS_PLMType var_propertyType_5732 ;
                GALGAS_propertyAccessKind var_propertyAccess_5772 ;
                GALGAS_bool joker_5703_2 ; // Joker input parameter
                GALGAS_objectIR joker_5703_1 ; // Joker input parameter
                var_propertyMap_5647.method_searchKey (extractedValue_propertyName, joker_5703_2, joker_5703_1, var_propertyType_5732, var_propertyAccess_5772, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 135)) ;
                switch (var_propertyAccess_5772.enumValue ()) {
                case GALGAS_propertyAccessKind::kNotBuilt:
                  break ;
                case GALGAS_propertyAccessKind::kEnum_constant:
                  {
                    TC_Array <C_FixItDescription> fixItArray4 ;
                    inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue-with-self.galgas", 138)), GALGAS_string ("a constant property cannot be written"), fixItArray4  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 138)) ;
                    var_currentType_5353.drop () ; // Release error dropped variable
                    var_currentLLVMName_5394.drop () ; // Release error dropped variable
                  }
                  break ;
                case GALGAS_propertyAccessKind::kEnum_indexed:
                  {
                    const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_6418 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_5772.unsafePointer ()) ;
                    const GALGAS_uint extractedValue_index = extractPtr_6418->mAssociatedValue0 ;
                    GALGAS_string var_newLLVMvariable_6053 ;
                    {
                    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_6053, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 140)) ;
                    }
                    {
                    extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_5353, var_currentLLVMName_5394, var_propertyType_5732, var_newLLVMvariable_6053, extractedValue_index, extractedValue_propertyName.getter_string (SOURCE_FILE ("lvalue-with-self.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 141)) ;
                    }
                    var_currentType_5353 = var_propertyType_5732 ;
                    var_currentLLVMName_5394 = var_newLLVMvariable_6053 ;
                  }
                  break ;
                }
              }else if (kBoolFalse == test_3) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue-with-self.galgas", 153)), GALGAS_string ("this should be a structure instance"), fixItArray5  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 153)) ;
              }
            }
            break ;
          case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
            {
              const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_7911 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_5449.current_mAccess (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_7911->mAssociatedValue0 ;
              const GALGAS_location extractedValue_endOfIndex = extractPtr_7911->mAssociatedValue1 ;
              const enumGalgasBool test_6 = var_currentType_5353.getter_isArrayType (SOURCE_FILE ("lvalue-with-self.galgas", 156)).boolEnum () ;
              if (kBoolTrue == test_6) {
                GALGAS_PLMType var_elementType_6727 ;
                GALGAS_bigint var_arraySize_6755 ;
                GALGAS_lstring joker_6696_1 ; // Joker input parameter
                GALGAS_constantMap joker_6757_3 ; // Joker input parameter
                GALGAS_PLMTypeFlags joker_6757_2 ; // Joker input parameter
                GALGAS_string joker_6757_1 ; // Joker input parameter
                var_currentType_5353.method_arrayType (joker_6696_1, var_elementType_6727, var_arraySize_6755, joker_6757_3, joker_6757_2, joker_6757_1, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 157)) ;
                GALGAS_objectIR var_indexIR_7398 ;
                {
                routine_handleArraySubscriptNew (constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_arraySize_6755, var_elementType_6727, ioArgument_ioInstructionGenerationList, var_indexIR_7398, inCompiler  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 158)) ;
                }
                GALGAS_string var_newLLVMvariable_7475 ;
                {
                extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_7475, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 175)) ;
                }
                {
                extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, var_currentType_5353, var_currentLLVMName_5394, var_elementType_6727, var_newLLVMvariable_7475, var_indexIR_7398, inCompiler COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 176)) ;
                }
                var_currentType_5353 = var_elementType_6727 ;
                var_currentLLVMName_5394 = var_newLLVMvariable_7475 ;
              }else if (kBoolFalse == test_6) {
                TC_Array <C_FixItDescription> fixItArray7 ;
                inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("cannot subscript, not an array"), fixItArray7  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 186)) ;
                var_currentType_5353.drop () ; // Release error dropped variable
                var_currentLLVMName_5394.drop () ; // Release error dropped variable
              }
            }
            break ;
          }
          enumerator_5449.gotoNextObject () ;
        }
        outArgument_outInternalRepresentation = GALGAS_internalRepresentation::constructor_universalReference (var_currentType_5353, var_currentLLVMName_5394  COMMA_SOURCE_FILE ("lvalue-with-self.galgas", 190)) ;
      }
      break ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor::GALGAS_routineDescriptor (void) :
mProperty_mIsPublic (),
mProperty_mExported (),
mProperty_mRoutineKind (),
mProperty_mSignature (),
mProperty_mReturnTypeProxy (),
mProperty_mCanAccessProperties (),
mProperty_mCanMutateProperties (),
mProperty_mRoutineCallingScheme () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor::~ GALGAS_routineDescriptor (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor::GALGAS_routineDescriptor (const GALGAS_bool & inOperand0,
                                                    const GALGAS_bool & inOperand1,
                                                    const GALGAS_routineKind & inOperand2,
                                                    const GALGAS_routineTypedSignature & inOperand3,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                    const GALGAS_bool & inOperand5,
                                                    const GALGAS_bool & inOperand6,
                                                    const GALGAS_routineCallingSheme & inOperand7) :
mProperty_mIsPublic (inOperand0),
mProperty_mExported (inOperand1),
mProperty_mRoutineKind (inOperand2),
mProperty_mSignature (inOperand3),
mProperty_mReturnTypeProxy (inOperand4),
mProperty_mCanAccessProperties (inOperand5),
mProperty_mCanMutateProperties (inOperand6),
mProperty_mRoutineCallingScheme (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor GALGAS_routineDescriptor::constructor_new (const GALGAS_bool & inOperand0,
                                                                    const GALGAS_bool & inOperand1,
                                                                    const GALGAS_routineKind & inOperand2,
                                                                    const GALGAS_routineTypedSignature & inOperand3,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                    const GALGAS_bool & inOperand5,
                                                                    const GALGAS_bool & inOperand6,
                                                                    const GALGAS_routineCallingSheme & inOperand7 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineDescriptor result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_routineDescriptor (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineDescriptor::objectCompare (const GALGAS_routineDescriptor & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExported.objectCompare (inOperand.mProperty_mExported) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineKind.objectCompare (inOperand.mProperty_mRoutineKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnTypeProxy.objectCompare (inOperand.mProperty_mReturnTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCanAccessProperties.objectCompare (inOperand.mProperty_mCanAccessProperties) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCanMutateProperties.objectCompare (inOperand.mProperty_mCanMutateProperties) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineCallingScheme.objectCompare (inOperand.mProperty_mRoutineCallingScheme) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineDescriptor::isValid (void) const {
  return mProperty_mIsPublic.isValid () && mProperty_mExported.isValid () && mProperty_mRoutineKind.isValid () && mProperty_mSignature.isValid () && mProperty_mReturnTypeProxy.isValid () && mProperty_mCanAccessProperties.isValid () && mProperty_mCanMutateProperties.isValid () && mProperty_mRoutineCallingScheme.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineDescriptor::drop (void) {
  mProperty_mIsPublic.drop () ;
  mProperty_mExported.drop () ;
  mProperty_mRoutineKind.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mReturnTypeProxy.drop () ;
  mProperty_mCanAccessProperties.drop () ;
  mProperty_mCanMutateProperties.drop () ;
  mProperty_mRoutineCallingScheme.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineDescriptor::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @routineDescriptor:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExported.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mReturnTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCanAccessProperties.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCanMutateProperties.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRoutineCallingScheme.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDescriptor::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDescriptor::getter_mExported (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExported ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineDescriptor::getter_mRoutineKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineTypedSignature GALGAS_routineDescriptor::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineDescriptor::getter_mReturnTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReturnTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDescriptor::getter_mCanAccessProperties (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCanAccessProperties ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineDescriptor::getter_mCanMutateProperties (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCanMutateProperties ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineCallingSheme GALGAS_routineDescriptor::getter_mRoutineCallingScheme (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineCallingScheme ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @routineDescriptor type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineDescriptor ("routineDescriptor",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineDescriptor (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_universalPropertyAndRoutineMapForContext::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_universalPropertyAndRoutineMapForContext * p = (const cPtr_universalPropertyAndRoutineMapForContext *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_universalPropertyAndRoutineMapForContext) ;
  if (kOperandEqual == result) {
    result = mProperty_mInternalPropertyAndRoutineMapForContext.objectCompare (p->mProperty_mInternalPropertyAndRoutineMapForContext) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mScopeStack.objectCompare (p->mProperty_mScopeStack) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocalObjectList.objectCompare (p->mProperty_mLocalObjectList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_universalPropertyAndRoutineMapForContext::objectCompare (const GALGAS_universalPropertyAndRoutineMapForContext & inOperand) const {
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

GALGAS_universalPropertyAndRoutineMapForContext::GALGAS_universalPropertyAndRoutineMapForContext (void) :
AC_GALGAS_class (true) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalPropertyAndRoutineMapForContext GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (LOCATION_ARGS) {
  return GALGAS_universalPropertyAndRoutineMapForContext::constructor_new (GALGAS_internalUniversalPropertyAndRoutineMapForContext::constructor_emptyMap (HERE),
                                                                           GALGAS_scopeStack::constructor_emptyList (HERE),
                                                                           GALGAS_lstringlist::constructor_emptyList (HERE)
                                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalPropertyAndRoutineMapForContext::GALGAS_universalPropertyAndRoutineMapForContext (const cPtr_universalPropertyAndRoutineMapForContext * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, true) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_universalPropertyAndRoutineMapForContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalPropertyAndRoutineMapForContext GALGAS_universalPropertyAndRoutineMapForContext::constructor_new (const GALGAS_internalUniversalPropertyAndRoutineMapForContext & inAttribute_mInternalPropertyAndRoutineMapForContext,
                                                                                                                  const GALGAS_scopeStack & inAttribute_mScopeStack,
                                                                                                                  const GALGAS_lstringlist & inAttribute_mLocalObjectList
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_universalPropertyAndRoutineMapForContext result ;
  if (inAttribute_mInternalPropertyAndRoutineMapForContext.isValid () && inAttribute_mScopeStack.isValid () && inAttribute_mLocalObjectList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_universalPropertyAndRoutineMapForContext (inAttribute_mInternalPropertyAndRoutineMapForContext, inAttribute_mScopeStack, inAttribute_mLocalObjectList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext GALGAS_universalPropertyAndRoutineMapForContext::getter_mInternalPropertyAndRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  GALGAS_internalUniversalPropertyAndRoutineMapForContext result ;
  if (NULL != mObjectPtr) {
    const cPtr_universalPropertyAndRoutineMapForContext * p = (const cPtr_universalPropertyAndRoutineMapForContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_universalPropertyAndRoutineMapForContext) ;
    result = p->mProperty_mInternalPropertyAndRoutineMapForContext ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalUniversalPropertyAndRoutineMapForContext cPtr_universalPropertyAndRoutineMapForContext::getter_mInternalPropertyAndRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInternalPropertyAndRoutineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack GALGAS_universalPropertyAndRoutineMapForContext::getter_mScopeStack (UNUSED_LOCATION_ARGS) const {
  GALGAS_scopeStack result ;
  if (NULL != mObjectPtr) {
    const cPtr_universalPropertyAndRoutineMapForContext * p = (const cPtr_universalPropertyAndRoutineMapForContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_universalPropertyAndRoutineMapForContext) ;
    result = p->mProperty_mScopeStack ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack cPtr_universalPropertyAndRoutineMapForContext::getter_mScopeStack (UNUSED_LOCATION_ARGS) const {
  return mProperty_mScopeStack ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_universalPropertyAndRoutineMapForContext::getter_mLocalObjectList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_universalPropertyAndRoutineMapForContext * p = (const cPtr_universalPropertyAndRoutineMapForContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_universalPropertyAndRoutineMapForContext) ;
    result = p->mProperty_mLocalObjectList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_universalPropertyAndRoutineMapForContext::getter_mLocalObjectList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocalObjectList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @universalPropertyAndRoutineMapForContext class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_universalPropertyAndRoutineMapForContext::cPtr_universalPropertyAndRoutineMapForContext (const GALGAS_internalUniversalPropertyAndRoutineMapForContext & in_mInternalPropertyAndRoutineMapForContext,
                                                                                              const GALGAS_scopeStack & in_mScopeStack,
                                                                                              const GALGAS_lstringlist & in_mLocalObjectList
                                                                                              COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mInternalPropertyAndRoutineMapForContext (in_mInternalPropertyAndRoutineMapForContext),
mProperty_mScopeStack (in_mScopeStack),
mProperty_mLocalObjectList (in_mLocalObjectList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_universalPropertyAndRoutineMapForContext::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext ;
}

void cPtr_universalPropertyAndRoutineMapForContext::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@universalPropertyAndRoutineMapForContext:" ;
  mProperty_mInternalPropertyAndRoutineMapForContext.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mScopeStack.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocalObjectList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_universalPropertyAndRoutineMapForContext::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_universalPropertyAndRoutineMapForContext (mProperty_mInternalPropertyAndRoutineMapForContext, mProperty_mScopeStack, mProperty_mLocalObjectList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @universalPropertyAndRoutineMapForContext type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext ("universalPropertyAndRoutineMapForContext",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_universalPropertyAndRoutineMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_universalPropertyAndRoutineMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_universalPropertyAndRoutineMapForContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalPropertyAndRoutineMapForContext GALGAS_universalPropertyAndRoutineMapForContext::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_universalPropertyAndRoutineMapForContext result ;
  const GALGAS_universalPropertyAndRoutineMapForContext * p = (const GALGAS_universalPropertyAndRoutineMapForContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_universalPropertyAndRoutineMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("universalPropertyAndRoutineMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext insertRoutine'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRoutine> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertRoutine (const int32_t inClassIndex,
                                         extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRoutine inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertRoutine (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                        const GALGAS_lstring constin_inRoutineName,
                                        const GALGAS_lstring constin_inArgumentSignature,
                                        const GALGAS_lstring constin_inLLVMInvocationRoutineName,
                                        const GALGAS_routineDescriptor constin_inDescriptor,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRoutine f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inRoutineName, constin_inArgumentSignature, constin_inLLVMInvocationRoutineName, constin_inDescriptor, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertRoutine (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                    const GALGAS_lstring constinArgument_inRoutineName,
                                                                                    const GALGAS_lstring constinArgument_inArgumentSignature,
                                                                                    const GALGAS_lstring constinArgument_inLLVMInvocationRoutineName,
                                                                                    const GALGAS_routineDescriptor constinArgument_inDescriptor,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_1444 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inRoutineName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 26)) ;
  if (NULL != objectArray_1444) {
      macroValidSharedObject (objectArray_1444, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    {
    objectArray_1444->mProperty_mRoutineSignatureMapForContext.setter_insertKey (constinArgument_inArgumentSignature, constinArgument_inLLVMInvocationRoutineName, constinArgument_inDescriptor, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 27)) ;
    }
  }else{
    GALGAS_routineSignatureMapForContext var_routineSignatureMapForContext_1722 = GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 33)) ;
    {
    var_routineSignatureMapForContext_1722.setter_insertKey (constinArgument_inArgumentSignature, constinArgument_inLLVMInvocationRoutineName, constinArgument_inDescriptor, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 34)) ;
    }
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inRoutineName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 41)), GALGAS_bool (false), GALGAS_possibleValuedObject::constructor_undefined (SOURCE_FILE ("universal-map.galgas", 43)), var_routineSignatureMapForContext_1722, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 39)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertRoutine (void) {
  enterExtensionSetter_insertRoutine (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                      extensionSetter_universalPropertyAndRoutineMapForContext_insertRoutine) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertRoutine (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRoutine.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertRoutine (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertRoutine,
                                                                                   freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertRoutine) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext insertProperty'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertProperty> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertProperty (const int32_t inClassIndex,
                                          extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertProperty inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertProperty (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                         const GALGAS_lstring constin_inPropertyName,
                                         const GALGAS_bool constin_inIsReadOnly,
                                         const GALGAS_bool constin_inIsPublic,
                                         const GALGAS_PLMType constin_inType,
                                         const GALGAS_propertyAccessKind constin_inAccess,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertProperty f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inPropertyName, constin_inIsReadOnly, constin_inIsPublic, constin_inType, constin_inAccess, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertProperty (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                     const GALGAS_lstring constinArgument_inPropertyName,
                                                                                     const GALGAS_bool constinArgument_inIsReadOnly,
                                                                                     const GALGAS_bool constinArgument_inIsPublic,
                                                                                     const GALGAS_PLMType constinArgument_inType,
                                                                                     const GALGAS_propertyAccessKind constinArgument_inAccess,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_2411 = GALGAS_possibleValuedObject::constructor_property (constinArgument_inIsReadOnly, constinArgument_inIsPublic, constinArgument_inType, constinArgument_inPropertyName, constinArgument_inAccess  COMMA_SOURCE_FILE ("universal-map.galgas", 58)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_2577 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inPropertyName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 65)) ;
  if (NULL != objectArray_2577) {
      macroValidSharedObject (objectArray_2577, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_2577->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 66)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_2577->mProperty_mPossibleValuedObject = var_newValue_2411 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("universal-map.galgas", 69)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 69)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inPropertyName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 74)), GALGAS_bool (false), var_newValue_2411, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 72)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertProperty (void) {
  enterExtensionSetter_insertProperty (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                       extensionSetter_universalPropertyAndRoutineMapForContext_insertProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertProperty (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertProperty.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertProperty (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertProperty,
                                                                                    freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertProperty) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Extension setter '@universalPropertyAndRoutineMapForContext insertModule'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertModule> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertModule (const int32_t inClassIndex,
                                        extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertModule inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertModule (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                       const GALGAS_lstring constin_inModuleName,
                                       const GALGAS_PLMType constin_inModuleType,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertModule f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inModuleName, constin_inModuleType, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertModule (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                   const GALGAS_lstring constinArgument_inModuleName,
                                                                                   const GALGAS_PLMType constinArgument_inModuleType,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_3258 = GALGAS_possibleValuedObject::constructor_module (constinArgument_inModuleType  COMMA_SOURCE_FILE ("universal-map.galgas", 88)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_3317 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inModuleName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 89)) ;
  if (NULL != objectArray_3317) {
      macroValidSharedObject (objectArray_3317, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_3317->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 90)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_3317->mProperty_mPossibleValuedObject = var_newValue_3258 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inModuleName.getter_location (SOURCE_FILE ("universal-map.galgas", 93)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 93)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inModuleName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 98)), GALGAS_bool (false), var_newValue_3258, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 96)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertModule (void) {
  enterExtensionSetter_insertModule (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                     extensionSetter_universalPropertyAndRoutineMapForContext_insertModule) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertModule (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertModule.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertModule (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertModule,
                                                                                  freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertModule) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalPropertyAndRoutineMapForContext insertRegister'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRegister> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertRegister (const int32_t inClassIndex,
                                          extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRegister inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertRegister (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                         const GALGAS_lstring constin_inRegisterName,
                                         const GALGAS_bool constin_inReadable,
                                         const GALGAS_bool constin_inWritable,
                                         const GALGAS_PLMType constin_inType,
                                         const GALGAS_bigint constin_inAddress,
                                         const GALGAS_sliceMap constin_inSliceMap,
                                         const GALGAS_uint constin_inArraySize,
                                         const GALGAS_uint constin_inElementSize,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertRegister f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inRegisterName, constin_inReadable, constin_inWritable, constin_inType, constin_inAddress, constin_inSliceMap, constin_inArraySize, constin_inElementSize, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertRegister (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                     const GALGAS_lstring constinArgument_inRegisterName,
                                                                                     const GALGAS_bool constinArgument_inReadable,
                                                                                     const GALGAS_bool constinArgument_inWritable,
                                                                                     const GALGAS_PLMType constinArgument_inType,
                                                                                     const GALGAS_bigint constinArgument_inAddress,
                                                                                     const GALGAS_sliceMap constinArgument_inSliceMap,
                                                                                     const GALGAS_uint constinArgument_inArraySize,
                                                                                     const GALGAS_uint constinArgument_inElementSize,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_4225 = GALGAS_possibleValuedObject::constructor_register (constinArgument_inReadable, constinArgument_inWritable, constinArgument_inType, constinArgument_inAddress, constinArgument_inSliceMap, constinArgument_inArraySize, constinArgument_inElementSize  COMMA_SOURCE_FILE ("universal-map.galgas", 118)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_4464 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inRegisterName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 127)) ;
  if (NULL != objectArray_4464) {
      macroValidSharedObject (objectArray_4464, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_4464->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 128)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_4464->mProperty_mPossibleValuedObject = var_newValue_4225 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterName.getter_location (SOURCE_FILE ("universal-map.galgas", 131)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 131)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inRegisterName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 136)), GALGAS_bool (false), var_newValue_4225, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 134)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertRegister (void) {
  enterExtensionSetter_insertRegister (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                       extensionSetter_universalPropertyAndRoutineMapForContext_insertRegister) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertRegister (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertRegister.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertRegister (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertRegister,
                                                                                    freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertRegister) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertGlobalConstant'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalConstant> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertGlobalConstant (const int32_t inClassIndex,
                                                extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalConstant inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertGlobalConstant (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                               const GALGAS_lstring constin_inConstantName,
                                               const GALGAS_objectIR constin_inConstantObjectIR,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalConstant f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inConstantName, constin_inConstantObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalConstant (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                           const GALGAS_lstring constinArgument_inConstantName,
                                                                                           const GALGAS_objectIR constinArgument_inConstantObjectIR,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_5162 = GALGAS_possibleValuedObject::constructor_globalConstant (constinArgument_inConstantObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 150)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_5239 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inConstantName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 151)) ;
  if (NULL != objectArray_5239) {
      macroValidSharedObject (objectArray_5239, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_5239->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 152)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_5239->mProperty_mPossibleValuedObject = var_newValue_5162 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inConstantName.getter_location (SOURCE_FILE ("universal-map.galgas", 155)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 155)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inConstantName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 160)), GALGAS_bool (false), var_newValue_5162, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 158)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalConstant (void) {
  enterExtensionSetter_insertGlobalConstant (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                             extensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalConstant) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertGlobalConstant (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalConstant.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertGlobalConstant (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalConstant,
                                                                                          freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertGlobalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertLocalConstant'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalConstant> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertLocalConstant (const int32_t inClassIndex,
                                               extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalConstant inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertLocalConstant (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                              const GALGAS_lstring constin_inLocalConstantName,
                                              const GALGAS_PLMType constin_inType,
                                              const GALGAS_lstring constin_inPLMConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertLocalConstant f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inLocalConstantName, constin_inType, constin_inPLMConstantName, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertLocalConstant (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                          const GALGAS_lstring constinArgument_inLocalConstantName,
                                                                                          const GALGAS_PLMType constinArgument_inType,
                                                                                          const GALGAS_lstring constinArgument_inPLMConstantName,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_5962 = GALGAS_possibleValuedObject::constructor_localConstant (constinArgument_inType, constinArgument_inPLMConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 175)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_6049 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inLocalConstantName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 176)) ;
  if (NULL != objectArray_6049) {
      macroValidSharedObject (objectArray_6049, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_6049->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 177)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_6049->mProperty_mObjectState = GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 178)) ;
      objectArray_6049->mProperty_mPossibleValuedObject = var_newValue_5962 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLocalConstantName.getter_location (SOURCE_FILE ("universal-map.galgas", 181)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 181)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("universal-map.galgas", 186)), GALGAS_bool (false), var_newValue_5962, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 184)) ;
    }
  }
  object->mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 192)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertLocalConstant (void) {
  enterExtensionSetter_insertLocalConstant (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                            extensionSetter_universalPropertyAndRoutineMapForContext_insertLocalConstant) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertLocalConstant (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertLocalConstant.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertLocalConstant (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertLocalConstant,
                                                                                         freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertLocalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Extension setter '@universalPropertyAndRoutineMapForContext insertUsedLocalConstant'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertUsedLocalConstant (const int32_t inClassIndex,
                                                   extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertUsedLocalConstant (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                  const GALGAS_lstring constin_inLocalConstantName,
                                                  const GALGAS_PLMType constin_inType,
                                                  const GALGAS_lstring constin_inPLMConstantName,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inLocalConstantName, constin_inType, constin_inPLMConstantName, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                              const GALGAS_lstring constinArgument_inLocalConstantName,
                                                                                              const GALGAS_PLMType constinArgument_inType,
                                                                                              const GALGAS_lstring constinArgument_inPLMConstantName,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_6878 = GALGAS_possibleValuedObject::constructor_localConstant (constinArgument_inType, constinArgument_inPLMConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 202)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_6965 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inLocalConstantName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 203)) ;
  if (NULL != objectArray_6965) {
      macroValidSharedObject (objectArray_6965, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_6965->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 204)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_6965->mProperty_mObjectState = GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 205)) ;
      objectArray_6965->mProperty_mPossibleValuedObject = var_newValue_6878 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLocalConstantName.getter_location (SOURCE_FILE ("universal-map.galgas", 208)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 208)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inLocalConstantName, GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("universal-map.galgas", 213)), GALGAS_bool (false), var_newValue_6878, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 211)) ;
    }
  }
  object->mProperty_mLocalObjectList.addAssign_operation (constinArgument_inLocalConstantName  COMMA_SOURCE_FILE ("universal-map.galgas", 219)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant (void) {
  enterExtensionSetter_insertUsedLocalConstant (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                                extensionSetter_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant,
                                                                                             freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertUsedLocalConstant) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension setter '@universalPropertyAndRoutineMapForContext insertGlobalVariable'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalVariable> gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertGlobalVariable (const int32_t inClassIndex,
                                                extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalVariable inModifier) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertGlobalVariable (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                               const GALGAS_lstring constin_inGlobalVariableName,
                                               const GALGAS_PLMType constin_inType,
                                               const GALGAS_bool constin_inWritable,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalPropertyAndRoutineMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalPropertyAndRoutineMapForContext_insertGlobalVariable f = NULL ;
    if (classIndex < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable.count ()) {
      f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable.count ()) {
           f = gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inGlobalVariableName, constin_inType, constin_inWritable, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalVariable (cPtr_universalPropertyAndRoutineMapForContext * inObject,
                                                                                           const GALGAS_lstring constinArgument_inGlobalVariableName,
                                                                                           const GALGAS_PLMType constinArgument_inType,
                                                                                           const GALGAS_bool constinArgument_inWritable,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalPropertyAndRoutineMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalPropertyAndRoutineMapForContext) ;
  GALGAS_possibleValuedObject var_newValue_7778 = GALGAS_possibleValuedObject::constructor_globalVariable (constinArgument_inWritable, constinArgument_inType  COMMA_SOURCE_FILE ("universal-map.galgas", 229)) ;
  cMapElement_internalUniversalPropertyAndRoutineMapForContext * objectArray_7860 = (cMapElement_internalUniversalPropertyAndRoutineMapForContext *) object->mProperty_mInternalPropertyAndRoutineMapForContext.readWriteAccessForWithInstruction (inCompiler, constinArgument_inGlobalVariableName.getter_string (HERE)  COMMA_SOURCE_FILE ("universal-map.galgas", 230)) ;
  if (NULL != objectArray_7860) {
      macroValidSharedObject (objectArray_7860, cMapElement_internalUniversalPropertyAndRoutineMapForContext) ;
    const enumGalgasBool test_0 = objectArray_7860->mProperty_mPossibleValuedObject.getter_isUndefined (SOURCE_FILE ("universal-map.galgas", 231)).boolEnum () ;
    if (kBoolTrue == test_0) {
      objectArray_7860->mProperty_mPossibleValuedObject = var_newValue_7778 ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGlobalVariableName.getter_location (SOURCE_FILE ("universal-map.galgas", 234)), GALGAS_string ("object already defined in this context"), fixItArray1  COMMA_SOURCE_FILE ("universal-map.galgas", 234)) ;
    }
  }else{
    {
    object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inGlobalVariableName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 239)), GALGAS_bool (false), var_newValue_7778, GALGAS_routineSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("universal-map.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 237)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalVariable (void) {
  enterExtensionSetter_insertGlobalVariable (kTypeDescriptor_GALGAS_universalPropertyAndRoutineMapForContext.mSlotID,
                                             extensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalVariable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertGlobalVariable (void) {
  gExtensionModifierTable_universalPropertyAndRoutineMapForContext_insertGlobalVariable.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalPropertyAndRoutineMapForContext_insertGlobalVariable (defineExtensionSetter_universalPropertyAndRoutineMapForContext_insertGlobalVariable,
                                                                                          freeExtensionModifier_universalPropertyAndRoutineMapForContext_insertGlobalVariable) ;

