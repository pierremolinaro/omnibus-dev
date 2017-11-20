#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


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
                                GALGAS_enumerationConstantList &  parameter_2,
                                C_Lexique_plm_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_plm_5F_target_5F_specific_5F_syntax_interruptConfigList_i4_(parameter_1, parameter_2, inLexique) ;
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
                                                         GALGAS_enumerationConstantList::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclaration::GALGAS_enumerationDeclaration (const cPtr_enumerationDeclaration * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationDeclaration GALGAS_enumerationDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mEnumerationName,
                                                                              const GALGAS_enumerationConstantList & inAttribute_mCaseNameList
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

GALGAS_enumerationConstantList GALGAS_enumerationDeclaration::getter_mCaseNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumerationConstantList result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDeclaration * p = (const cPtr_enumerationDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclaration) ;
    result = p->mProperty_mCaseNameList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumerationConstantList cPtr_enumerationDeclaration::getter_mCaseNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCaseNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @enumerationDeclaration class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumerationDeclaration::cPtr_enumerationDeclaration (const GALGAS_lstring & in_mEnumerationName,
                                                          const GALGAS_enumerationConstantList & in_mCaseNameList
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

GALGAS_PLMType::GALGAS_PLMType (void) :
mProperty_mPropertyMap (),
mProperty_mConstantMap (),
mProperty_mConstructorMap (),
mProperty_mAttributes (),
mProperty_mPLMTypeName (),
mProperty_mKind () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType::~ GALGAS_PLMType (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType::GALGAS_PLMType (const GALGAS_propertyMap & inOperand0,
                                const GALGAS_constantMap & inOperand1,
                                const GALGAS_constructorMap & inOperand2,
                                const GALGAS_PLMTypeAttributes & inOperand3,
                                const GALGAS_string & inOperand4,
                                const GALGAS_typeKind & inOperand5) :
mProperty_mPropertyMap (inOperand0),
mProperty_mConstantMap (inOperand1),
mProperty_mConstructorMap (inOperand2),
mProperty_mAttributes (inOperand3),
mProperty_mPLMTypeName (inOperand4),
mProperty_mKind (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_PLMType::constructor_new (const GALGAS_propertyMap & inOperand0,
                                                const GALGAS_constantMap & inOperand1,
                                                const GALGAS_constructorMap & inOperand2,
                                                const GALGAS_PLMTypeAttributes & inOperand3,
                                                const GALGAS_string & inOperand4,
                                                const GALGAS_typeKind & inOperand5 
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_PLMType (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_PLMType::objectCompare (const GALGAS_PLMType & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyMap.objectCompare (inOperand.mProperty_mPropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantMap.objectCompare (inOperand.mProperty_mConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstructorMap.objectCompare (inOperand.mProperty_mConstructorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributes.objectCompare (inOperand.mProperty_mAttributes) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPLMTypeName.objectCompare (inOperand.mProperty_mPLMTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_PLMType::isValid (void) const {
  return mProperty_mPropertyMap.isValid () && mProperty_mConstantMap.isValid () && mProperty_mConstructorMap.isValid () && mProperty_mAttributes.isValid () && mProperty_mPLMTypeName.isValid () && mProperty_mKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_PLMType::drop (void) {
  mProperty_mPropertyMap.drop () ;
  mProperty_mConstantMap.drop () ;
  mProperty_mConstructorMap.drop () ;
  mProperty_mAttributes.drop () ;
  mProperty_mPLMTypeName.drop () ;
  mProperty_mKind.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_PLMType::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "<struct @PLMType:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConstructorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributes.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPLMTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap GALGAS_PLMType::getter_mPropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constantMap GALGAS_PLMType::getter_mConstantMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_PLMType::getter_mConstructorMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstructorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMTypeAttributes GALGAS_PLMType::getter_mAttributes (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributes ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_PLMType::getter_mPLMTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPLMTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_PLMType::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
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
  cEnumerator_functionDeclarationListAST enumerator_20124 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_20124.hasCurrentObject ()) {
    GALGAS_bool var_warnIfUnused_20148 = GALGAS_bool (true) ;
    GALGAS_bool var_mutating_20172 = GALGAS_bool (false) ;
    GALGAS_bool var_accessProperties_20205 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_20268 (enumerator_20124.current (HERE).getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_20268.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_20268.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 539)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_warnIfUnused_20148.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 540)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (enumerator_20268.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 541)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 541)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 541)), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 541)) ;
        }
        var_warnIfUnused_20148 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_20268.current_mValue (HERE).getter_string (HERE).objectCompare (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 544)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_accessProperties_20205.boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_20268.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 546)), GALGAS_string ("duplicated @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 546)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 546)), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 546)) ;
          }
          var_accessProperties_20205 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_20268.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 549)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            const enumGalgasBool test_7 = var_mutating_20172.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_20268.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 551)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 551)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 551)), fixItArray8  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 551)) ;
            }
            var_mutating_20172 = GALGAS_bool (true) ;
          }else if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_20268.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 555)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 555)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 555)).add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 556)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 556)).add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 556)), fixItArray9  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 555)) ;
          }
        }
      }
      enumerator_20268.gotoNextObject () ;
    }
    var_accessProperties_20205 = GALGAS_bool (kIsNotEqual, enumerator_20124.current (HERE).getter_mMode (HERE).objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("type-structure-declaration.galgas", 559)))) ;
    {
    routine_routineSemanticAnalysis (constinArgument_inStructureType, GALGAS_routineKind::constructor_function (enumerator_20124.current (HERE).getter_mMode (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 562)), enumerator_20124.current (HERE).getter_mMode (HERE), enumerator_20124.current (HERE).getter_mFunctionName (HERE), enumerator_20124.current (HERE).getter_mFunctionFormalArgumentList (HERE), enumerator_20124.current (HERE).getter_mFunctionReturnTypeName (HERE), enumerator_20124.current (HERE).getter_mFunctionInstructionList (HERE), enumerator_20124.current (HERE).getter_mEndOfFunctionDeclaration (HERE), var_accessProperties_20205, var_mutating_20172, var_warnIfUnused_20148, GALGAS_bool (false), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 560)) ;
    }
    enumerator_20124.gotoNextObject () ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_controlRegisterDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_controlRegisterDeclarationAST * p = (const cPtr_controlRegisterDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_controlRegisterDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterArrayList.objectCompare (p->mProperty_mRegisterArrayList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterTypeName.objectCompare (p->mProperty_mRegisterTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterBitSliceList.objectCompare (p->mProperty_mRegisterBitSliceList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterBitSliceListLocation.objectCompare (p->mProperty_mRegisterBitSliceListLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_controlRegisterDeclarationAST::objectCompare (const GALGAS_controlRegisterDeclarationAST & inOperand) const {
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

GALGAS_controlRegisterDeclarationAST::GALGAS_controlRegisterDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationAST GALGAS_controlRegisterDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_controlRegisterDeclarationAST::constructor_new (GALGAS_controlRegisterList::constructor_emptyList (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_controlRegisterBitSliceList::constructor_emptyList (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationAST::GALGAS_controlRegisterDeclarationAST (const cPtr_controlRegisterDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_controlRegisterDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationAST GALGAS_controlRegisterDeclarationAST::constructor_new (const GALGAS_controlRegisterList & inAttribute_mRegisterArrayList,
                                                                                            const GALGAS_lstring & inAttribute_mRegisterTypeName,
                                                                                            const GALGAS_controlRegisterBitSliceList & inAttribute_mRegisterBitSliceList,
                                                                                            const GALGAS_location & inAttribute_mRegisterBitSliceListLocation
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationAST result ;
  if (inAttribute_mRegisterArrayList.isValid () && inAttribute_mRegisterTypeName.isValid () && inAttribute_mRegisterBitSliceList.isValid () && inAttribute_mRegisterBitSliceListLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_controlRegisterDeclarationAST (inAttribute_mRegisterArrayList, inAttribute_mRegisterTypeName, inAttribute_mRegisterBitSliceList, inAttribute_mRegisterBitSliceListLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList GALGAS_controlRegisterDeclarationAST::getter_mRegisterArrayList (UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterList result ;
  if (NULL != mObjectPtr) {
    const cPtr_controlRegisterDeclarationAST * p = (const cPtr_controlRegisterDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterDeclarationAST) ;
    result = p->mProperty_mRegisterArrayList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterList cPtr_controlRegisterDeclarationAST::getter_mRegisterArrayList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterArrayList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterDeclarationAST::getter_mRegisterTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_controlRegisterDeclarationAST * p = (const cPtr_controlRegisterDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterDeclarationAST) ;
    result = p->mProperty_mRegisterTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_controlRegisterDeclarationAST::getter_mRegisterTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterDeclarationAST::getter_mRegisterBitSliceList (UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterBitSliceList result ;
  if (NULL != mObjectPtr) {
    const cPtr_controlRegisterDeclarationAST * p = (const cPtr_controlRegisterDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterDeclarationAST) ;
    result = p->mProperty_mRegisterBitSliceList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList cPtr_controlRegisterDeclarationAST::getter_mRegisterBitSliceList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterBitSliceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_controlRegisterDeclarationAST::getter_mRegisterBitSliceListLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_controlRegisterDeclarationAST * p = (const cPtr_controlRegisterDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterDeclarationAST) ;
    result = p->mProperty_mRegisterBitSliceListLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_controlRegisterDeclarationAST::getter_mRegisterBitSliceListLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterBitSliceListLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @controlRegisterDeclarationAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_controlRegisterDeclarationAST::cPtr_controlRegisterDeclarationAST (const GALGAS_controlRegisterList & in_mRegisterArrayList,
                                                                        const GALGAS_lstring & in_mRegisterTypeName,
                                                                        const GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                        const GALGAS_location & in_mRegisterBitSliceListLocation
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mRegisterArrayList (in_mRegisterArrayList),
mProperty_mRegisterTypeName (in_mRegisterTypeName),
mProperty_mRegisterBitSliceList (in_mRegisterBitSliceList),
mProperty_mRegisterBitSliceListLocation (in_mRegisterBitSliceListLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_controlRegisterDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterDeclarationAST ;
}

void cPtr_controlRegisterDeclarationAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@controlRegisterDeclarationAST:" ;
  mProperty_mRegisterArrayList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterBitSliceList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterBitSliceListLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_controlRegisterDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_controlRegisterDeclarationAST (mProperty_mRegisterArrayList, mProperty_mRegisterTypeName, mProperty_mRegisterBitSliceList, mProperty_mRegisterBitSliceListLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @controlRegisterDeclarationAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterDeclarationAST ("controlRegisterDeclarationAST",
                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterDeclarationAST GALGAS_controlRegisterDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationAST result ;
  const GALGAS_controlRegisterDeclarationAST * p = (const GALGAS_controlRegisterDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension method '@controlRegisterDeclarationAST noteTypesInPrecedenceGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph> gExtensionMethodTable_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph inMethod) {
  gExtensionMethodTable_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_noteTypesInPrecedenceGraph (const cPtr_controlRegisterDeclarationAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_controlRegisterDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph.count ()) {
           f = gExtensionMethodTable_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph (const cPtr_controlRegisterDeclarationAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterDeclarationAST * object = inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  GALGAS_lstring var_typeName_7123 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mRegisterTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 194)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_7123 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 195)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                                   extensionMethod_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph (void) {
  gExtensionMethodTable_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph (defineExtensionMethod_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph,
                                                                                     freeExtensionMethod_controlRegisterDeclarationAST_noteTypesInPrecedenceGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@controlRegisterDeclarationAST controlRegisterType'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_controlRegisterDeclarationAST_controlRegisterType> gExtensionMethodTable_controlRegisterDeclarationAST_controlRegisterType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_controlRegisterType (const int32_t inClassIndex,
                                               extensionMethodSignature_controlRegisterDeclarationAST_controlRegisterType inMethod) {
  gExtensionMethodTable_controlRegisterDeclarationAST_controlRegisterType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_controlRegisterType (const cPtr_controlRegisterDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioContext,
                                              GALGAS_PLMType & out_outRegisterType,
                                              GALGAS_uint & out_outRegisterBitCount,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  out_outRegisterType.drop () ;
  out_outRegisterBitCount.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_controlRegisterDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_controlRegisterDeclarationAST_controlRegisterType f = NULL ;
    if (classIndex < gExtensionMethodTable_controlRegisterDeclarationAST_controlRegisterType.count ()) {
      f = gExtensionMethodTable_controlRegisterDeclarationAST_controlRegisterType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_controlRegisterDeclarationAST_controlRegisterType.count ()) {
           f = gExtensionMethodTable_controlRegisterDeclarationAST_controlRegisterType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_controlRegisterDeclarationAST_controlRegisterType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioContext, out_outRegisterType, out_outRegisterBitCount, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterDeclarationAST_controlRegisterType (const cPtr_controlRegisterDeclarationAST * inObject,
                                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                                               GALGAS_PLMType & outArgument_outRegisterType,
                                                                               GALGAS_uint & outArgument_outRegisterBitCount,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterDeclarationAST * object = inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  outArgument_outRegisterType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mRegisterTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 268)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 268)) ;
  switch (outArgument_outRegisterType.getter_mKind (SOURCE_FILE ("declaration-control-register.galgas", 269)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_10517 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.getter_mKind (SOURCE_FILE ("declaration-control-register.galgas", 269)).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_10517->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 273)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 273)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 275)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 275)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 277)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 277)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 279)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 279)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 281)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 281)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 283)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 283)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 285)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 285)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 287)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 287)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 289)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 289)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterDeclarationAST_controlRegisterType (void) {
  enterExtensionMethod_controlRegisterType (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                            extensionMethod_controlRegisterDeclarationAST_controlRegisterType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_controlRegisterDeclarationAST_controlRegisterType (void) {
  gExtensionMethodTable_controlRegisterDeclarationAST_controlRegisterType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterDeclarationAST_controlRegisterType (defineExtensionMethod_controlRegisterDeclarationAST_controlRegisterType,
                                                                              freeExtensionMethod_controlRegisterDeclarationAST_controlRegisterType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@controlRegisterDeclarationAST buildControlRegisterSliceMap'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_controlRegisterDeclarationAST_buildControlRegisterSliceMap> gExtensionMethodTable_controlRegisterDeclarationAST_buildControlRegisterSliceMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_buildControlRegisterSliceMap (const int32_t inClassIndex,
                                                        extensionMethodSignature_controlRegisterDeclarationAST_buildControlRegisterSliceMap inMethod) {
  gExtensionMethodTable_controlRegisterDeclarationAST_buildControlRegisterSliceMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_buildControlRegisterSliceMap (const cPtr_controlRegisterDeclarationAST * inObject,
                                                       GALGAS_semanticContext & io_ioContext,
                                                       GALGAS_PLMType & io_ioRegisterType,
                                                       const GALGAS_uint constin_inRegisterBitCount,
                                                       GALGAS_controlRegisterFieldMap & out_outRegisterFieldMap,
                                                       GALGAS_sliceMap & out_outRegisterBitSliceMap,
                                                       GALGAS_controlRegisterFieldList & out_outControlRegisterFieldList,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  out_outRegisterFieldMap.drop () ;
  out_outRegisterBitSliceMap.drop () ;
  out_outControlRegisterFieldList.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_controlRegisterDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_controlRegisterDeclarationAST_buildControlRegisterSliceMap f = NULL ;
    if (classIndex < gExtensionMethodTable_controlRegisterDeclarationAST_buildControlRegisterSliceMap.count ()) {
      f = gExtensionMethodTable_controlRegisterDeclarationAST_buildControlRegisterSliceMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_controlRegisterDeclarationAST_buildControlRegisterSliceMap.count ()) {
           f = gExtensionMethodTable_controlRegisterDeclarationAST_buildControlRegisterSliceMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_controlRegisterDeclarationAST_buildControlRegisterSliceMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioContext, io_ioRegisterType, constin_inRegisterBitCount, out_outRegisterFieldMap, out_outRegisterBitSliceMap, out_outControlRegisterFieldList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterDeclarationAST_buildControlRegisterSliceMap (const cPtr_controlRegisterDeclarationAST * inObject,
                                                                                        GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                                        GALGAS_PLMType & ioArgument_ioRegisterType,
                                                                                        const GALGAS_uint constinArgument_inRegisterBitCount,
                                                                                        GALGAS_controlRegisterFieldMap & outArgument_outRegisterFieldMap,
                                                                                        GALGAS_sliceMap & outArgument_outRegisterBitSliceMap,
                                                                                        GALGAS_controlRegisterFieldList & outArgument_outControlRegisterFieldList,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterDeclarationAST * object = inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterDeclarationAST) ;
  outArgument_outRegisterFieldMap = GALGAS_controlRegisterFieldMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 304)) ;
  outArgument_outRegisterBitSliceMap = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 305)) ;
  outArgument_outControlRegisterFieldList = GALGAS_controlRegisterFieldList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 306)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mRegisterBitSliceList.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 307)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_shiftCount_12280 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_controlRegisterBitSliceList enumerator_12322 (object->mProperty_mRegisterBitSliceList, kENUMERATION_DOWN) ;
    while (enumerator_12322.hasCurrentObject ()) {
      switch (enumerator_12322.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_12517 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_12322.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_12517->mAssociatedValue0 ;
          var_shiftCount_12280 = var_shiftCount_12280.add_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 312)) ;
          outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 313)), GALGAS_string ("\xE2""\x80""\x94""")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 313)) ;
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_13504 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_12322.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_name = extractPtr_13504->mAssociatedValue0 ;
          const GALGAS_lbigint extractedValue_count = extractPtr_13504->mAssociatedValue1 ;
          GALGAS_uint var_bitCount_12591 = extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 315)) ;
          outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_12591, extractedValue_name.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 316)) ;
          {
          outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_name, var_shiftCount_12280, var_bitCount_12591, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)) ;
          }
          GALGAS_sliceMap var_registerSubMap_12817 = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 322)) ;
          {
          var_registerSubMap_12817.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("shifted"), extractedValue_name.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 325)), GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("declaration-control-register.galgas", 326)), var_shiftCount_12280.getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 327)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 328)), ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) ;
          }
          {
          var_registerSubMap_12817.setter_insertKey (GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 333)), extractedValue_name.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 333)), GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("declaration-control-register.galgas", 334)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 335)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 336)), function_booleanType (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 332)) ;
          }
          GALGAS_bigint var_mask_13267 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)).left_shift_operation (var_bitCount_12591 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)).left_shift_operation (var_shiftCount_12280 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)) ;
          {
          outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 343)), var_mask_13267, var_registerSubMap_12817, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 341)) ;
          }
          var_shiftCount_12280 = var_shiftCount_12280.add_operation (var_bitCount_12591, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 348)) ;
        }
        break ;
      }
      enumerator_12322.gotoNextObject () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_12280)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mRegisterBitSliceListLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_12280.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 354)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 354)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 354)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 354)), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 353)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterDeclarationAST_buildControlRegisterSliceMap (void) {
  enterExtensionMethod_buildControlRegisterSliceMap (kTypeDescriptor_GALGAS_controlRegisterDeclarationAST.mSlotID,
                                                     extensionMethod_controlRegisterDeclarationAST_buildControlRegisterSliceMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_controlRegisterDeclarationAST_buildControlRegisterSliceMap (void) {
  gExtensionMethodTable_controlRegisterDeclarationAST_buildControlRegisterSliceMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterDeclarationAST_buildControlRegisterSliceMap (defineExtensionMethod_controlRegisterDeclarationAST_buildControlRegisterSliceMap,
                                                                                       freeExtensionMethod_controlRegisterDeclarationAST_buildControlRegisterSliceMap) ;

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
  GALGAS_PLMType var_inferredType_13345 ;
  GALGAS_stringset var_executionModeSet_13388 ;
  GALGAS_allowedGuardMap var_allowedGuardMap_13491 ;
  GALGAS_objectIR var_expressionGeneratedCode_13630 ;
  GALGAS_bool var_isConstant_13668 ;
  GALGAS_bool joker_13693 ; // Joker input parameter
  constinArgument_inContext.getter_mGlobalVariableMap (HERE).method_searchKey (inObject.mProperty_mVarName, var_inferredType_13345, var_executionModeSet_13388, var_allowedGuardMap_13491, var_expressionGeneratedCode_13630, var_isConstant_13668, joker_13693, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 370)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalVariableMap.setter_insertKey (inObject.mProperty_mVarName, var_inferredType_13345, GALGAS_bool (kIsStrictSup, var_executionModeSet_13388.getter_count (SOURCE_FILE ("declaration-global-variable.galgas", 385)).objectCompare (GALGAS_uint ((uint32_t) 1U))), var_expressionGeneratedCode_13630, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 382)) ;
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

GALGAS_taskList_2D_element::GALGAS_taskList_2D_element (void) :
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

GALGAS_taskList_2D_element::~ GALGAS_taskList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element::GALGAS_taskList_2D_element (const GALGAS_lstring & inOperand0,
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

GALGAS_taskList_2D_element GALGAS_taskList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                     GALGAS_lbigint::constructor_default (HERE),
                                     GALGAS_lbigint::constructor_default (HERE),
                                     GALGAS_structurePropertyListAST::constructor_emptyList (HERE),
                                     GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                     GALGAS_taskSetupListAST::constructor_emptyList (HERE),
                                     GALGAS_syncInstructionBranchListAST::constructor_emptyList (HERE),
                                     GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskList_2D_element GALGAS_taskList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lbigint & inOperand1,
                                                                        const GALGAS_lbigint & inOperand2,
                                                                        const GALGAS_structurePropertyListAST & inOperand3,
                                                                        const GALGAS_functionDeclarationListAST & inOperand4,
                                                                        const GALGAS_taskSetupListAST & inOperand5,
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

bool GALGAS_taskList_2D_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mVarList.isValid () && mProperty_mTaskProcList.isValid () && mProperty_mTaskSetupListAST.isValid () && mProperty_mGuardedCommandList.isValid () && mProperty_mEndOfTaskDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskList_2D_element::drop (void) {
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
    mProperty_mTaskSetupListAST.description (ioString, inIndentation+1) ;
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

GALGAS_taskSetupListAST GALGAS_taskList_2D_element::getter_mTaskSetupListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTaskSetupListAST ;
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
  GALGAS_universalValuedObjectMapForContext var_universalMap_4855 ;
  {
  routine_initialVariableMap (constinArgument_inContext, GALGAS_mode::constructor_panicMode (SOURCE_FILE ("panic.galgas", 110)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("panic.galgas", 112)), var_universalMap_4855, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 108)) ;
  }
  GALGAS_lstring var_codeArg_4912 = GALGAS_lstring::constructor_new (GALGAS_string ("CODE"), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 116)) ;
  {
  var_universalMap_4855.insulate (HERE) ;
  cPtr_universalValuedObjectMapForContext * ptr_4975 = (cPtr_universalValuedObjectMapForContext *) var_universalMap_4855.ptr () ;
  callExtensionSetter_insertUsedLocalConstant ((cPtr_universalValuedObjectMapForContext *) ptr_4975, var_codeArg_4912, constinArgument_inContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 117)), var_codeArg_4912, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 117)) ;
  }
  GALGAS_lstring var_fileArg_5065 = GALGAS_lstring::constructor_new (GALGAS_string ("FILE"), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 118)) ;
  GALGAS_PLMType var_StaticStringType_5133 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 119)).getter_nowhere (SOURCE_FILE ("panic.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 119)).getter_type (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 119)) ;
  {
  var_universalMap_4855.insulate (HERE) ;
  cPtr_universalValuedObjectMapForContext * ptr_5249 = (cPtr_universalValuedObjectMapForContext *) var_universalMap_4855.ptr () ;
  callExtensionSetter_insertUsedLocalConstant ((cPtr_universalValuedObjectMapForContext *) ptr_5249, var_fileArg_5065, var_StaticStringType_5133, var_fileArg_5065, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 120)) ;
  }
  GALGAS_lstring var_lineArg_5324 = GALGAS_lstring::constructor_new (GALGAS_string ("LINE"), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 121)) ;
  {
  var_universalMap_4855.insulate (HERE) ;
  cPtr_universalValuedObjectMapForContext * ptr_5387 = (cPtr_universalValuedObjectMapForContext *) var_universalMap_4855.ptr () ;
  callExtensionSetter_insertUsedLocalConstant ((cPtr_universalValuedObjectMapForContext *) ptr_5387, var_lineArg_5324, constinArgument_inContext.getter_mPanicLineType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 122)), var_lineArg_5324, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 122)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineNameForInvocationGraph_4568.getter_string (HERE) COMMA_SOURCE_FILE ("panic.galgas", 124)).operator_not (SOURCE_FILE ("panic.galgas", 124)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_4568, var_routineNameForInvocationGraph_4568, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 125)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_5796 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("panic.galgas", 131)) ;
  GALGAS_allocaList var_initAllocaList_5830 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("panic.galgas", 132)) ;
  extensionMethod_analyzeRoutineInstructionList (inObject.mProperty_mPanicInstructionList, function_voidType (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 134)), GALGAS_bool (false), GALGAS_bool (false), var_routineNameForInvocationGraph_4568, constinArgument_inContext, GALGAS_mode::constructor_panicMode (SOURCE_FILE ("panic.galgas", 139)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_4855, var_initAllocaList_5830, var_instructionGenerationList_5796, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 133)) ;
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalValuedObjectMapForContext *) var_universalMap_4855.ptr (), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 148)) ;
  const enumGalgasBool test_3 = inObject.mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    ioArgument_ioTemporaries.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (inObject.mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 153)), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 153)) ;
    }
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicSetupInstructionListIR.plusAssign_operation(var_instructionGenerationList_5796, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 154)) ;
  }else if (kBoolFalse == test_3) {
    {
    ioArgument_ioTemporaries.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (inObject.mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 156)), inObject.mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 156)) ;
    }
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicLoopInstructionListIR.plusAssign_operation(var_instructionGenerationList_5796, inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 157)) ;
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
  cEnumerator_routineMapIR enumerator_10223 (temp_0, kENUMERATION_UP) ;
  while (enumerator_10223.hasCurrentObject ()) {
    const enumGalgasBool test_1 = enumerator_10223.current (HERE).getter_mKind (HERE).getter_isFunction (SOURCE_FILE ("declaration-svc.galgas", 279)).operator_not (SOURCE_FILE ("declaration-svc.galgas", 279)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_svcCallName_10287 = function_llvmNameForSVCCall (enumerator_10223.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_10223.current (HERE).getter_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 280)) ;
      GALGAS_string var_svcImplementationName_10384 = function_llvmNameForSVCImplementation (enumerator_10223.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_10223.current (HERE).getter_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 281)) ;
      switch (enumerator_10223.current (HERE).getter_mKind (HERE).enumValue ()) {
      case GALGAS_routineKind::kNotBuilt:
        break ;
      case GALGAS_routineKind::kEnum_section:
      case GALGAS_routineKind::kEnum_safe:
        {
          ioArgument_ioSectionList.addAssign_operation (var_svcCallName_10287, var_svcImplementationName_10384, enumerator_10223.current (HERE).getter_mReceiverType (HERE), enumerator_10223.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_10223.current (HERE).getter_mReturnType (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 284)) ;
        }
        break ;
      case GALGAS_routineKind::kEnum_primitive:
      case GALGAS_routineKind::kEnum_service:
        {
          ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_svcCallName_10287, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 291)) ;
          GALGAS_string var_prototype_10802 = function_llvmFunctionPrototype (enumerator_10223.current (HERE).getter_mReturnType (HERE), var_svcCallName_10287, enumerator_10223.current (HERE).getter_mReceiverType (HERE), enumerator_10223.current (HERE).getter_mFormalArgumentListForGeneration (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 292)) ;
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare ").add_operation (var_prototype_10802, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 298)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 298)) ;
          ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_svcCallName_10287, var_svcImplementationName_10384  COMMA_SOURCE_FILE ("declaration-svc.galgas", 299)) ;
        }
        break ;
      case GALGAS_routineKind::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-svc.galgas", 301)), GALGAS_string ("INTERNAL ERROR"), fixItArray2  COMMA_SOURCE_FILE ("declaration-svc.galgas", 301)) ;
        }
        break ;
      }
    }
    enumerator_10223.gotoNextObject () ;
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
  GALGAS_universalValuedObjectMapForContext var_universalMap_3546 ;
  {
  routine_initialVariableMap (constinArgument_inContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-boot.galgas", 79)), GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-boot.galgas", 81)), var_universalMap_3546, inCompiler  COMMA_SOURCE_FILE ("declaration-boot.galgas", 77)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_3627 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-boot.galgas", 85)) ;
  GALGAS_allocaList var_bootAllocaList_3661 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-boot.galgas", 86)) ;
  extensionMethod_analyzeRoutineInstructionList (inObject.mProperty_mInstructionList, function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 88)), GALGAS_bool (false), GALGAS_bool (false), var_routineNameForInvocationGraph_3036, constinArgument_inContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-boot.galgas", 93)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_3546, var_bootAllocaList_3661, var_instructionGenerationList_3627, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 87)) ;
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalValuedObjectMapForContext *) var_universalMap_3546.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 101)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mBootList.addAssign_operation (inObject.mProperty_mPriority, inObject.mProperty_mBootLocation, var_bootAllocaList_3661, var_instructionGenerationList_3627, inObject.mProperty_mEndOfBootLocation  COMMA_SOURCE_FILE ("declaration-boot.galgas", 103)) ;
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
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 93)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mSelfTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 95)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 95)) ;
  }
  GALGAS_PLMType var_selfType_4017 = temp_0 ;
  GALGAS_allocaList var_allocaList_4467 ;
  GALGAS_instructionListIR var_instructionGenerationList_4521 ;
  {
  routine_initSemanticAnalysis (constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, var_selfType_4017, inObject.mProperty_mPriority, GALGAS_mode::constructor_initMode (SOURCE_FILE ("declaration-init.galgas", 103)), inObject.mProperty_mInstructionList, inObject.mProperty_mEndOfInitLocation, var_allocaList_4467, var_instructionGenerationList_4521, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 97)) ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mInitList.addAssign_operation (var_selfType_4017, inObject.mProperty_mGlobalVarName, inObject.mProperty_mPriority.getter_bigint (HERE), var_allocaList_4467, var_instructionGenerationList_4521  COMMA_SOURCE_FILE ("declaration-init.galgas", 110)) ;
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
                                                                                                          const GALGAS_routineFormalArgumentListAST & inOperand2,
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
                                                                                                                          const GALGAS_routineFormalArgumentListAST & inOperand2,
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
  GALGAS_lstring var_routineMangledName_5273 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), inObject.mProperty_mExternProcedureName, inObject.mProperty_mProcFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 122)) ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_5568 ;
  {
  routine_initialVariableMap (constinArgument_inContext, inObject.mProperty_mMode, GALGAS_bool (false), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-extern-proc.galgas", 132)), var_universalMap_5568, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 128)) ;
  }
  GALGAS_routineFormalArgumentListForGeneration var_formalArguments_5660 = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("declaration-extern-proc.galgas", 136)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, inObject.mProperty_mProcFormalArgumentList, var_universalMap_5568, var_formalArguments_5660, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 137)) ;
  }
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineMangledName_5273.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 144)).operator_not (SOURCE_FILE ("declaration-extern-proc.galgas", 144)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_5273, var_routineMangledName_5273, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 145)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, inObject.mProperty_mReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 152)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), inObject.mProperty_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 154)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_6078 = temp_1 ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mExternProcedureMapIR.setter_insertKey (inObject.mProperty_mRoutineNameForGeneration, var_formalArguments_5660, var_returnType_6078, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 157)) ;
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
  cEnumerator_interruptMapIR enumerator_5267 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5267.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_5267.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 132)) ;
    enumerator_5267.gotoNextObject () ;
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
  extensionMethod_enterAccessibleEntities (inObject.mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 624)) ;
  switch (inObject.mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_26069 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (inObject.mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_26069->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_26069->mAssociatedValue2 ;
      extensionMethod_enterAccessibleEntities (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 628)) ;
      ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_baseGuardMangledName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)) ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_addressofInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addressofInstructionIR * p = (const cPtr_addressofInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_addressofInstructionIR::objectCompare (const GALGAS_addressofInstructionIR & inOperand) const {
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

GALGAS_addressofInstructionIR::GALGAS_addressofInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_addressofInstructionIR::GALGAS_addressofInstructionIR (const cPtr_addressofInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addressofInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_addressofInstructionIR GALGAS_addressofInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                              const GALGAS_LValueRepresentation & inAttribute_mLValue
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_addressofInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addressofInstructionIR (inAttribute_mTarget, inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_addressofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofInstructionIR * p = (const cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_addressofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueRepresentation GALGAS_addressofInstructionIR::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueRepresentation result ;
  if (NULL != mObjectPtr) {
    const cPtr_addressofInstructionIR * p = (const cPtr_addressofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addressofInstructionIR) ;
    result = p->mProperty_mLValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueRepresentation cPtr_addressofInstructionIR::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @addressofInstructionIR class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_addressofInstructionIR::cPtr_addressofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                          const GALGAS_LValueRepresentation & in_mLValue
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mLValue (in_mLValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_addressofInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

void cPtr_addressofInstructionIR::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@addressofInstructionIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_addressofInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addressofInstructionIR (mProperty_mTarget, mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @addressofInstructionIR type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addressofInstructionIR ("addressofInstructionIR",
                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_addressofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addressofInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_addressofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addressofInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_addressofInstructionIR GALGAS_addressofInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_addressofInstructionIR result ;
  const GALGAS_addressofInstructionIR * p = (const GALGAS_addressofInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addressofInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addressofInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  GALGAS_lstring var_lkey_2980 = function_combineTypeNamesForInfixOperator (constinArgument_inLeftType.getter_mPLMTypeName (HERE), constinArgument_inRightType.getter_mPLMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 71)) ;
  const GALGAS_infixOperatorMap temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.getter_hasKey (var_lkey_2980.getter_string (HERE) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 72)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_infixOperatorMap temp_2 = inObject ;
    temp_2.method_searchKey (var_lkey_2980, outArgument_outResultType, outArgument_outOperation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 73)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("infix operation between $").add_operation (constinArgument_inLeftType.getter_mPLMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 76)).add_operation (GALGAS_string (" and $"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 76)).add_operation (constinArgument_inRightType.getter_mPLMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 76)).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 76)), fixItArray3  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 75)) ;
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
      result_result = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 276)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      result_result = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 277)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      result_result = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 278)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      result_result = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 279)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      result_result = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 280)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      result_result = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 281)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      result_result = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 282)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      result_result = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 284)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      result_result = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 285)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      result_result = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 286)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      result_result = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 287)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      result_result = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 288)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      result_result = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 289)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      result_result = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 290)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      result_result = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 291)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      result_result = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 292)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      result_result = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 293)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      result_result = constinArgument_inLeft.operator_and (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 295)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      result_result = constinArgument_inLeft.operator_or (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 296)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      result_result = constinArgument_inLeft.operator_xor (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 297)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      result_result = constinArgument_inLeft.left_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 298)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 298)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      result_result = constinArgument_inLeft.right_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 299)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 299)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      result_result = constinArgument_inLeft.right_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 300)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 300)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      result_result = GALGAS_bool (kIsEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 302)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      result_result = GALGAS_bool (kIsNotEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 303)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      result_result = GALGAS_bool (kIsStrictInf, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 304)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      result_result = GALGAS_bool (kIsInfOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 305)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      result_result = GALGAS_bool (kIsStrictSup, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 306)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      result_result = GALGAS_bool (kIsSupOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 307)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      result_result = GALGAS_bool (kIsStrictInf, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 308)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      result_result = GALGAS_bool (kIsInfOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 309)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      result_result = GALGAS_bool (kIsStrictSup, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 310)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      result_result = GALGAS_bool (kIsSupOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 311)) ;
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
                                                                                            const GALGAS_registerIntegerFieldListAST & inAttribute_mFieldValues
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantExpressionAST result ;
  if (inAttribute_mRegisterName.isValid () && inAttribute_mFieldValues.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerConstantExpressionAST (inAttribute_mRegisterName, inAttribute_mFieldValues COMMA_THERE)) ;
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
                                                                        const GALGAS_registerIntegerFieldListAST & in_mFieldValues
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
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
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFieldValues.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_registerConstantExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerConstantExpressionAST (mProperty_mRegisterName, mProperty_mFieldValues COMMA_THERE)) ;
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
                                                         const GALGAS_bool constin_inGuard,
                                                         const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                         const GALGAS_PLMType constin_inOptionalTargetType,
                                                         const GALGAS_semanticContext constin_inContext,
                                                         const GALGAS_mode constin_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                         GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                         GALGAS_universalValuedObjectMapForContext & io_ioUniversalMap,
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
                                                                                   GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  GALGAS_valuedObject var_entity_8706 ;
  callExtensionMethod_searchEntity ((const cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr (), object->mProperty_mReceiverName, var_entity_8706, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 208)) ;
  switch (var_entity_8706.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_module:
    {
      const cEnumAssociatedValues_valuedObject_module * extractPtr_9367 = (const cEnumAssociatedValues_valuedObject_module *) (var_entity_8706.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_9367->mAssociatedValue0 ;
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (object->mProperty_mReceiverName.getter_string (SOURCE_FILE ("expression-primary.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 211))  COMMA_SOURCE_FILE ("expression-primary.galgas", 211)) ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 212)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_register:
    {
      const cEnumAssociatedValues_valuedObject_register * extractPtr_10268 = (const cEnumAssociatedValues_valuedObject_register *) (var_entity_8706.unsafePointer ()) ;
      const GALGAS_bool extractedValue_readable = extractPtr_10268->mAssociatedValue0 ;
      const GALGAS_PLMType extractedValue_type = extractPtr_10268->mAssociatedValue2 ;
      const GALGAS_bigint extractedValue_address = extractPtr_10268->mAssociatedValue3 ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_10268->mAssociatedValue4 ;
      const GALGAS_uint extractedValue_arraySize = extractPtr_10268->mAssociatedValue5 ;
      const GALGAS_uint extractedValue_elementSize = extractPtr_10268->mAssociatedValue6 ;
      const enumGalgasBool test_0 = extractedValue_readable.operator_not (SOURCE_FILE ("expression-primary.galgas", 228)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mReceiverName.getter_location (SOURCE_FILE ("expression-primary.galgas", 229)), GALGAS_string ("control register is not readable in this context"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 229)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_2 = constinArgument_inGuard.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mReceiverName.getter_location (SOURCE_FILE ("expression-primary.galgas", 231)), GALGAS_string ("control register is not readable in guard"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 231)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_2) {
          {
          routine_analyzeRegisterExpression (constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_type, extractedValue_address, extractedValue_sliceMap, extractedValue_arraySize, extractedValue_elementSize, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 233)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_10849 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_entity_8706.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_10849->mAssociatedValue0 ;
      outArgument_outResult = extractedValue_objectIR ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 254)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_11551 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_8706.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_11551->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_11551->mAssociatedValue1 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalValuedObjectMapForContext * ptr_10927 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_readAccess ((cPtr_universalValuedObjectMapForContext *) ptr_10927, object->mProperty_mReceiverName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 270)) ;
      }
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 271))  COMMA_SOURCE_FILE ("expression-primary.galgas", 271)) ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 272)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalVariable:
    {
      const cEnumAssociatedValues_valuedObject_globalVariable * extractPtr_12247 = (const cEnumAssociatedValues_valuedObject_globalVariable *) (var_entity_8706.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_12247->mAssociatedValue1 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalValuedObjectMapForContext * ptr_11615 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_readAccess ((cPtr_universalValuedObjectMapForContext *) ptr_11615, object->mProperty_mReceiverName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 288)) ;
      }
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (object->mProperty_mReceiverName.getter_string (SOURCE_FILE ("expression-primary.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 289))  COMMA_SOURCE_FILE ("expression-primary.galgas", 289)) ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 290)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_12950 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_8706.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_12950->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_12950->mAssociatedValue1 ;
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 306))  COMMA_SOURCE_FILE ("expression-primary.galgas", 306)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalValuedObjectMapForContext * ptr_12412 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_readAccess ((cPtr_universalValuedObjectMapForContext *) ptr_12412, object->mProperty_mReceiverName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 307)) ;
      }
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 308)) ;
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
                                                           const GALGAS_bool constin_inGuard,
                                                           const GALGAS_lstring constin_inCallerNameForInvocationGraph,
                                                           const GALGAS_PLMType constin_inOptionalTargetType,
                                                           const GALGAS_semanticContext constin_inContext,
                                                           const GALGAS_mode constin_inCurrentMode,
                                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                           GALGAS_staticStringMap & io_ioGlobalLiteralStringMap,
                                                           GALGAS_universalValuedObjectMapForContext & io_ioUniversalMap,
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
                                                                                     GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                     GALGAS_objectIR & outArgument_outResult,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  outArgument_outResult = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513))  COMMA_SOURCE_FILE ("expression-primary.galgas", 513)) ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_20534 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_20534.hasCurrentObject ()) {
    switch (enumerator_20534.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_21035 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_20534.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_21035->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (outArgument_outResult, extractedValue_propertyName, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 518)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_21655 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_20534.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_21655->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_21655->mAssociatedValue1 ;
        {
        routine_handleArrayAccessInExpression (outArgument_outResult, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 531)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_22354 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_20534.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_methodName = extractPtr_22354->mAssociatedValue0 ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_22354->mAssociatedValue1 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_22354->mAssociatedValue2 ;
        const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("a method cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 549)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression (extractedValue_methodName, outArgument_outResult, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 551)) ;
          }
        }
      }
      break ;
    }
    enumerator_20534.gotoNextObject () ;
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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_assignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetAST.objectCompare (p->mProperty_mTargetAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_assignmentInstructionAST::objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const {
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

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_LValueAST & inAttribute_mTargetAST,
                                                                                  const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetAST.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTargetAST, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST GALGAS_assignmentInstructionAST::getter_mTargetAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mProperty_mTargetAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_LValueAST cPtr_assignmentInstructionAST::getter_mTargetAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_assignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST cPtr_assignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @assignmentInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_LValueAST & in_mTargetAST,
                                                              const GALGAS_expressionAST & in_mSourceExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetAST (in_mTargetAST),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

void cPtr_assignmentInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@assignmentInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetAST, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @assignmentInstructionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                 & kTypeDescriptor_GALGAS_instructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  const GALGAS_assignmentInstructionAST * p = (const GALGAS_assignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

typeComparisonResult cPtr_forLowerUpperBoundInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUnsigned.objectCompare (p->mProperty_mUnsigned) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLowerExpressionResult.objectCompare (p->mProperty_mLowerExpressionResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperExpressionResult.objectCompare (p->mProperty_mUpperExpressionResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forLowerUpperBoundInstructionIR::objectCompare (const GALGAS_forLowerUpperBoundInstructionIR & inOperand) const {
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

GALGAS_forLowerUpperBoundInstructionIR::GALGAS_forLowerUpperBoundInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionIR::GALGAS_forLowerUpperBoundInstructionIR (const cPtr_forLowerUpperBoundInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionIR) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionIR GALGAS_forLowerUpperBoundInstructionIR::constructor_new (const GALGAS_string & inAttribute_mVarName,
                                                                                                const GALGAS_PLMType & inAttribute_mType,
                                                                                                const GALGAS_bool & inAttribute_mUnsigned,
                                                                                                const GALGAS_location & inAttribute_mLocation,
                                                                                                const GALGAS_objectIR & inAttribute_mLowerExpressionResult,
                                                                                                const GALGAS_objectIR & inAttribute_mUpperExpressionResult,
                                                                                                const GALGAS_instructionListIR & inAttribute_mInstructionList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mType.isValid () && inAttribute_mUnsigned.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLowerExpressionResult.isValid () && inAttribute_mUpperExpressionResult.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionIR (inAttribute_mVarName, inAttribute_mType, inAttribute_mUnsigned, inAttribute_mLocation, inAttribute_mLowerExpressionResult, inAttribute_mUpperExpressionResult, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_forLowerUpperBoundInstructionIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_forLowerUpperBoundInstructionIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType GALGAS_forLowerUpperBoundInstructionIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType cPtr_forLowerUpperBoundInstructionIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_forLowerUpperBoundInstructionIR::getter_mUnsigned (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mUnsigned ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_forLowerUpperBoundInstructionIR::getter_mUnsigned (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnsigned ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_forLowerUpperBoundInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_forLowerUpperBoundInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_forLowerUpperBoundInstructionIR::getter_mLowerExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mLowerExpressionResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_forLowerUpperBoundInstructionIR::getter_mLowerExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLowerExpressionResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_forLowerUpperBoundInstructionIR::getter_mUpperExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mUpperExpressionResult ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR cPtr_forLowerUpperBoundInstructionIR::getter_mUpperExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUpperExpressionResult ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_forLowerUpperBoundInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cPtr_forLowerUpperBoundInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @forLowerUpperBoundInstructionIR class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forLowerUpperBoundInstructionIR::cPtr_forLowerUpperBoundInstructionIR (const GALGAS_string & in_mVarName,
                                                                            const GALGAS_PLMType & in_mType,
                                                                            const GALGAS_bool & in_mUnsigned,
                                                                            const GALGAS_location & in_mLocation,
                                                                            const GALGAS_objectIR & in_mLowerExpressionResult,
                                                                            const GALGAS_objectIR & in_mUpperExpressionResult,
                                                                            const GALGAS_instructionListIR & in_mInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mVarName (in_mVarName),
mProperty_mType (in_mType),
mProperty_mUnsigned (in_mUnsigned),
mProperty_mLocation (in_mLocation),
mProperty_mLowerExpressionResult (in_mLowerExpressionResult),
mProperty_mUpperExpressionResult (in_mUpperExpressionResult),
mProperty_mInstructionList (in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forLowerUpperBoundInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;
}

void cPtr_forLowerUpperBoundInstructionIR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@forLowerUpperBoundInstructionIR:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUnsigned.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLowerExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forLowerUpperBoundInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionIR (mProperty_mVarName, mProperty_mType, mProperty_mUnsigned, mProperty_mLocation, mProperty_mLowerExpressionResult, mProperty_mUpperExpressionResult, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @forLowerUpperBoundInstructionIR type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ("forLowerUpperBoundInstructionIR",
                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forLowerUpperBoundInstructionIR GALGAS_forLowerUpperBoundInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR result ;
  const GALGAS_forLowerUpperBoundInstructionIR * p = (const GALGAS_forLowerUpperBoundInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_procedureCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procedureCallInstructionAST * p = (const cPtr_procedureCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
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
    result = mProperty_mIdentifier.objectCompare (p->mProperty_mIdentifier) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessList.objectCompare (p->mProperty_mAccessList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_procedureCallInstructionAST::objectCompare (const GALGAS_procedureCallInstructionAST & inOperand) const {
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

GALGAS_procedureCallInstructionAST::GALGAS_procedureCallInstructionAST (void) :
GALGAS_callInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_procedureCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                              GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_accessInAssignmentListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureCallInstructionAST::GALGAS_procedureCallInstructionAST (const cPtr_procedureCallInstructionAST * inSourcePtr) :
GALGAS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procedureCallInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                        const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                        const GALGAS_location & inAttribute_mEndOfArguments,
                                                                                        const GALGAS_lstring & inAttribute_mIdentifier,
                                                                                        const GALGAS_accessInAssignmentListAST & inAttribute_mAccessList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_procedureCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid () && inAttribute_mIdentifier.isValid () && inAttribute_mAccessList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procedureCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mArguments, inAttribute_mEndOfArguments, inAttribute_mIdentifier, inAttribute_mAccessList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procedureCallInstructionAST::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_procedureCallInstructionAST * p = (const cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    result = p->mProperty_mIdentifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_procedureCallInstructionAST::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST GALGAS_procedureCallInstructionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_procedureCallInstructionAST * p = (const cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    result = p->mProperty_mAccessList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST cPtr_procedureCallInstructionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @procedureCallInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_procedureCallInstructionAST::cPtr_procedureCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                    const GALGAS_location & in_mEndOfArguments,
                                                                    const GALGAS_lstring & in_mIdentifier,
                                                                    const GALGAS_accessInAssignmentListAST & in_mAccessList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments COMMA_THERE),
mProperty_mIdentifier (in_mIdentifier),
mProperty_mAccessList (in_mAccessList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_procedureCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureCallInstructionAST ;
}

void cPtr_procedureCallInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@procedureCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIdentifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_procedureCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procedureCallInstructionAST (mProperty_mInstructionLocation, mProperty_mArguments, mProperty_mEndOfArguments, mProperty_mIdentifier, mProperty_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @procedureCallInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureCallInstructionAST ("procedureCallInstructionAST",
                                                    & kTypeDescriptor_GALGAS_callInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureCallInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureCallInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procedureCallInstructionAST result ;
  const GALGAS_procedureCallInstructionAST * p = (const GALGAS_procedureCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension Getter '@effectiveArgumentPassingModeAST passingModeForActualSelector'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_passingModeForActualSelector (const GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                            const GALGAS_lstring & constinArgument_inSelector,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_effectiveArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
    {
      result_result = GALGAS_string ("!\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
    {
      result_result = GALGAS_string ("!\?") ;
    }
    break ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_result.plusAssign_operation(constinArgument_inSelector.getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 125)) ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@LValueAST noteInstructionTypesInPrecedenceGraph'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GALGAS_LValueAST inObject,
                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_accessInAssignmentListAST enumerator_2663 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_2663.hasCurrentObject ()) {
    switch (enumerator_2663.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_2837 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_2663.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_2837->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 70)) ;
      }
      break ;
    }
    enumerator_2663.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Extension method '@LValueAST type'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_type (const GALGAS_LValueAST inObject,
                           const GALGAS_PLMType constinArgument_inSelfType,
                           const GALGAS_universalValuedObjectMapForContext constinArgument_inUniversalMap,
                           GALGAS_PLMType & outArgument_outType,
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outType = constinArgument_inSelfType ;
  }else if (kBoolFalse == test_0) {
    callExtensionMethod_searchValuedObjectType ((const cPtr_universalValuedObjectMapForContext *) constinArgument_inUniversalMap.ptr (), inObject.mProperty_mIdentifier, outArgument_outType, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 108)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_4300 (inObject.mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_4300.hasCurrentObject ()) {
    switch (enumerator_4300.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_4758 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_4300.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_4758->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_4400 = outArgument_outType.getter_mPropertyMap (HERE) ;
        GALGAS_propertyAccessKind var_accessKind_4485 ;
        GALGAS_bool joker_4468 ; // Joker input parameter
        var_propertyMap_4400.method_searchKey (extractedValue_propertyName, joker_4468, var_accessKind_4485, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 114)) ;
        switch (var_accessKind_4485.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            const cEnumAssociatedValues_propertyAccessKind_constantProperty * extractPtr_4579 = (const cEnumAssociatedValues_propertyAccessKind_constantProperty *) (var_accessKind_4485.unsafePointer ()) ;
            const GALGAS_objectIR extractedValue_value = extractPtr_4579->mAssociatedValue0 ;
            outArgument_outType = extensionGetter_type (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 117)) ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_4633 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_accessKind_4485.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_type = extractPtr_4633->mAssociatedValue0 ;
            outArgument_outType = extractedValue_type ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 121)), GALGAS_string ("a method cannot be used in this context"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 121)) ;
            outArgument_outType.drop () ; // Release error dropped variable
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const enumGalgasBool test_2 = outArgument_outType.getter_mKind (SOURCE_FILE ("lvalue.galgas", 124)).getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 124)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_bigint joker_4889_1 ; // Joker input parameter
          outArgument_outType.getter_mKind (SOURCE_FILE ("lvalue.galgas", 125)).method_arrayType (outArgument_outType, joker_4889_1, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 125)) ;
        }
      }
      break ;
    }
    enumerator_4300.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension method '@LValueAST analyzeLValue'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeLValue (const GALGAS_LValueAST inObject,
                                    const GALGAS_PLMType constinArgument_inSelfType,
                                    const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                    const GALGAS_semanticContext constinArgument_inContext,
                                    const GALGAS_mode constinArgument_inCurrentMode,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                    GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                    GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_mKind (SOURCE_FILE ("lvalue.galgas", 147)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("lvalue.galgas", 147)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 148)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("lvalue.galgas", 148)) ;
      outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      {
      routine_analyzeSelfAssignmentTarget (constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier.getter_location (HERE), inObject.mProperty_mAccessList, outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 150)) ;
      }
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_entity_6447 ;
    callExtensionMethod_searchEntity ((const cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr (), inObject.mProperty_mIdentifier, var_entity_6447, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 166)) ;
    switch (var_entity_6447.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_module:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 169)), GALGAS_string ("a module cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("lvalue.galgas", 169)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_register:
      {
        const cEnumAssociatedValues_valuedObject_register * extractPtr_7540 = (const cEnumAssociatedValues_valuedObject_register *) (var_entity_6447.unsafePointer ()) ;
        const GALGAS_bool extractedValue_writable = extractPtr_7540->mAssociatedValue1 ;
        const GALGAS_PLMType extractedValue_registerType = extractPtr_7540->mAssociatedValue2 ;
        const GALGAS_bigint extractedValue_registerAddress = extractPtr_7540->mAssociatedValue3 ;
        const GALGAS_uint extractedValue_arraySize = extractPtr_7540->mAssociatedValue5 ;
        const GALGAS_uint extractedValue_elementSize = extractPtr_7540->mAssociatedValue6 ;
        const enumGalgasBool test_4 = extractedValue_writable.operator_not (SOURCE_FILE ("lvalue.galgas", 171)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 172)), GALGAS_string ("the control register is not writable in this context"), fixItArray5  COMMA_SOURCE_FILE ("lvalue.galgas", 172)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_4) {
          {
          routine_analyzeControlRegisterInLValue (constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier, extractedValue_registerType, extractedValue_registerAddress.getter_uint (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 186)), extractedValue_arraySize, extractedValue_elementSize, inObject.mProperty_mAccessList, outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 174)) ;
          }
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 194)), GALGAS_string ("a global constant cannot be written"), fixItArray6  COMMA_SOURCE_FILE ("lvalue.galgas", 194)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 196)), GALGAS_string ("a local constant cannot be written"), fixItArray7  COMMA_SOURCE_FILE ("lvalue.galgas", 196)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalVariable:
      {
        const cEnumAssociatedValues_valuedObject_globalVariable * extractPtr_8719 = (const cEnumAssociatedValues_valuedObject_globalVariable *) (var_entity_6447.unsafePointer ()) ;
        const GALGAS_bool extractedValue_writable = extractPtr_8719->mAssociatedValue0 ;
        const GALGAS_PLMType extractedValue_variableType = extractPtr_8719->mAssociatedValue1 ;
        const enumGalgasBool test_8 = extractedValue_writable.operator_not (SOURCE_FILE ("lvalue.galgas", 198)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 199)), GALGAS_string ("a global variable cannot be written in this context"), fixItArray9  COMMA_SOURCE_FILE ("lvalue.galgas", 199)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_8) {
          {
          extensionSetter_appendNoteGlobalVariableAccess (ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("lvalue.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 201)) ;
          }
          {
          routine_analyzeVariableInLValue (constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier, function_llvmNameForGlobalVariable (inObject.mProperty_mIdentifier.getter_string (SOURCE_FILE ("lvalue.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 213)), extractedValue_variableType, inObject.mProperty_mAccessList, outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 202)) ;
          }
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_9377 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_6447.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_variableType = extractPtr_9377->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_9377->mAssociatedValue1 ;
        {
        routine_analyzeVariableInLValue (constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("lvalue.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 231)), extractedValue_variableType, inObject.mProperty_mAccessList, outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 220)) ;
        }
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
mProperty_mCanMutateProperties () {
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
                                                    const GALGAS_bool & inOperand6) :
mProperty_mIsPublic (inOperand0),
mProperty_mExported (inOperand1),
mProperty_mRoutineKind (inOperand2),
mProperty_mSignature (inOperand3),
mProperty_mReturnTypeProxy (inOperand4),
mProperty_mCanAccessProperties (inOperand5),
mProperty_mCanMutateProperties (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDescriptor GALGAS_routineDescriptor::constructor_new (const GALGAS_bool & inOperand0,
                                                                    const GALGAS_bool & inOperand1,
                                                                    const GALGAS_routineKind & inOperand2,
                                                                    const GALGAS_routineTypedSignature & inOperand3,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                    const GALGAS_bool & inOperand5,
                                                                    const GALGAS_bool & inOperand6 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineDescriptor result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_routineDescriptor (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineDescriptor::isValid (void) const {
  return mProperty_mIsPublic.isValid () && mProperty_mExported.isValid () && mProperty_mRoutineKind.isValid () && mProperty_mSignature.isValid () && mProperty_mReturnTypeProxy.isValid () && mProperty_mCanAccessProperties.isValid () && mProperty_mCanMutateProperties.isValid () ;
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

GALGAS_routineMapForContext::GALGAS_routineMapForContext (void) :
mProperty_mInternalRoutineMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext::~ GALGAS_routineMapForContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext::GALGAS_routineMapForContext (const GALGAS_internalRoutineMapForContext & inOperand0) :
mProperty_mInternalRoutineMap (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext GALGAS_routineMapForContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_routineMapForContext (GALGAS_internalRoutineMapForContext::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext GALGAS_routineMapForContext::constructor_new (const GALGAS_internalRoutineMapForContext & inOperand0 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapForContext result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_routineMapForContext (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineMapForContext::objectCompare (const GALGAS_routineMapForContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInternalRoutineMap.objectCompare (inOperand.mProperty_mInternalRoutineMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineMapForContext::isValid (void) const {
  return mProperty_mInternalRoutineMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext::drop (void) {
  mProperty_mInternalRoutineMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalRoutineMapForContext GALGAS_routineMapForContext::getter_mInternalRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInternalRoutineMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @routineMapForContext type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMapForContext ("routineMapForContext",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapForContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@routineMapForContext insertRoutine'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_insertRoutine (GALGAS_routineMapForContext & ioObject,
                                    const GALGAS_lstring constinArgument_inRoutineName,
                                    const GALGAS_lstring constinArgument_inArgumentSignature,
                                    const GALGAS_lstring constinArgument_inRoutineLLVMName,
                                    const GALGAS_routineDescriptor constinArgument_inDescriptor,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_internalRoutineMapForContext * objectArray_2124 = (cMapElement_internalRoutineMapForContext *) ioObject.mProperty_mInternalRoutineMap.readWriteAccessForWithInstruction (inCompiler, constinArgument_inRoutineName.getter_string (HERE)  COMMA_SOURCE_FILE ("routine-map.galgas", 43)) ;
  if (NULL != objectArray_2124) {
      macroValidSharedObject (objectArray_2124, cMapElement_internalRoutineMapForContext) ;
    {
    objectArray_2124->mProperty_mRoutineArgumentSignatureMapForContext.setter_insertKey (constinArgument_inArgumentSignature, constinArgument_inRoutineLLVMName, constinArgument_inDescriptor, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 44)) ;
    }
  }else{
    GALGAS_routineArgumentSignatureMapForContext var_routineArgumentSignatureMapForContext_2395 = GALGAS_routineArgumentSignatureMapForContext::constructor_emptyMap (SOURCE_FILE ("routine-map.galgas", 50)) ;
    {
    var_routineArgumentSignatureMapForContext_2395.setter_insertKey (constinArgument_inArgumentSignature, constinArgument_inRoutineLLVMName, constinArgument_inDescriptor, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 51)) ;
    }
    {
    ioObject.mProperty_mInternalRoutineMap.setter_insertKey (constinArgument_inRoutineName, var_routineArgumentSignatureMapForContext_2395, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 56)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@routineMapForContext searchKey'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_searchKey (const GALGAS_routineMapForContext inObject,
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
  GALGAS_routineArgumentSignatureMapForContext var_routineArgumentSignatureMapForContext_3187 ;
  inObject.mProperty_mInternalRoutineMap.method_searchKey (constinArgument_inRoutineName, var_routineArgumentSignatureMapForContext_3187, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 71)) ;
  var_routineArgumentSignatureMapForContext_3187.method_searchKey (constinArgument_inArgumentSignature, outArgument_outRoutineLLVMName, outArgument_outDescriptor, outArgument_outKeyLocation, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 72)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension Getter '@routineMapForContext hasKey'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_hasKey (const GALGAS_routineMapForContext & inObject,
                                    const GALGAS_lstring & constinArgument_inRoutineName,
                                    const GALGAS_lstring & constinArgument_inArgumentSignature,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = inObject.mProperty_mInternalRoutineMap.getter_hasKey (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("routine-map.galgas", 78)) COMMA_SOURCE_FILE ("routine-map.galgas", 78)) ;
  const enumGalgasBool test_0 = result_result.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_routineArgumentSignatureMapForContext var_routineArgumentSignatureMapForContext_3711 ;
    inObject.mProperty_mInternalRoutineMap.method_searchKey (constinArgument_inRoutineName, var_routineArgumentSignatureMapForContext_3711, inCompiler COMMA_SOURCE_FILE ("routine-map.galgas", 80)) ;
    result_result = var_routineArgumentSignatureMapForContext_3711.getter_hasKey (constinArgument_inArgumentSignature.getter_string (SOURCE_FILE ("routine-map.galgas", 81)) COMMA_SOURCE_FILE ("routine-map.galgas", 81)) ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_universalValuedObjectMapForContext::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_universalValuedObjectMapForContext * p = (const cPtr_universalValuedObjectMapForContext *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_universalValuedObjectMapForContext) ;
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


typeComparisonResult GALGAS_universalValuedObjectMapForContext::objectCompare (const GALGAS_universalValuedObjectMapForContext & inOperand) const {
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

GALGAS_universalValuedObjectMapForContext::GALGAS_universalValuedObjectMapForContext (void) :
AC_GALGAS_class (true) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalValuedObjectMapForContext GALGAS_universalValuedObjectMapForContext::constructor_default (LOCATION_ARGS) {
  return GALGAS_universalValuedObjectMapForContext::constructor_new (GALGAS_internalValuedObjectMapMapForContext::constructor_emptyMap (HERE),
                                                                     GALGAS_scopeStack::constructor_emptyList (HERE),
                                                                     GALGAS_lstringlist::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalValuedObjectMapForContext::GALGAS_universalValuedObjectMapForContext (const cPtr_universalValuedObjectMapForContext * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, true) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_universalValuedObjectMapForContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalValuedObjectMapForContext GALGAS_universalValuedObjectMapForContext::constructor_new (const GALGAS_internalValuedObjectMapMapForContext & inAttribute_mInternalPropertyAndRoutineMapForContext,
                                                                                                      const GALGAS_scopeStack & inAttribute_mScopeStack,
                                                                                                      const GALGAS_lstringlist & inAttribute_mLocalObjectList
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_universalValuedObjectMapForContext result ;
  if (inAttribute_mInternalPropertyAndRoutineMapForContext.isValid () && inAttribute_mScopeStack.isValid () && inAttribute_mLocalObjectList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_universalValuedObjectMapForContext (inAttribute_mInternalPropertyAndRoutineMapForContext, inAttribute_mScopeStack, inAttribute_mLocalObjectList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalValuedObjectMapMapForContext GALGAS_universalValuedObjectMapForContext::getter_mInternalPropertyAndRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  GALGAS_internalValuedObjectMapMapForContext result ;
  if (NULL != mObjectPtr) {
    const cPtr_universalValuedObjectMapForContext * p = (const cPtr_universalValuedObjectMapForContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_universalValuedObjectMapForContext) ;
    result = p->mProperty_mInternalPropertyAndRoutineMapForContext ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_internalValuedObjectMapMapForContext cPtr_universalValuedObjectMapForContext::getter_mInternalPropertyAndRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInternalPropertyAndRoutineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack GALGAS_universalValuedObjectMapForContext::getter_mScopeStack (UNUSED_LOCATION_ARGS) const {
  GALGAS_scopeStack result ;
  if (NULL != mObjectPtr) {
    const cPtr_universalValuedObjectMapForContext * p = (const cPtr_universalValuedObjectMapForContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_universalValuedObjectMapForContext) ;
    result = p->mProperty_mScopeStack ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_scopeStack cPtr_universalValuedObjectMapForContext::getter_mScopeStack (UNUSED_LOCATION_ARGS) const {
  return mProperty_mScopeStack ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_universalValuedObjectMapForContext::getter_mLocalObjectList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_universalValuedObjectMapForContext * p = (const cPtr_universalValuedObjectMapForContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_universalValuedObjectMapForContext) ;
    result = p->mProperty_mLocalObjectList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_universalValuedObjectMapForContext::getter_mLocalObjectList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocalObjectList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @universalValuedObjectMapForContext class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_universalValuedObjectMapForContext::cPtr_universalValuedObjectMapForContext (const GALGAS_internalValuedObjectMapMapForContext & in_mInternalPropertyAndRoutineMapForContext,
                                                                                  const GALGAS_scopeStack & in_mScopeStack,
                                                                                  const GALGAS_lstringlist & in_mLocalObjectList
                                                                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mInternalPropertyAndRoutineMapForContext (in_mInternalPropertyAndRoutineMapForContext),
mProperty_mScopeStack (in_mScopeStack),
mProperty_mLocalObjectList (in_mLocalObjectList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_universalValuedObjectMapForContext::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalValuedObjectMapForContext ;
}

void cPtr_universalValuedObjectMapForContext::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@universalValuedObjectMapForContext:" ;
  mProperty_mInternalPropertyAndRoutineMapForContext.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mScopeStack.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocalObjectList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_universalValuedObjectMapForContext::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_universalValuedObjectMapForContext (mProperty_mInternalPropertyAndRoutineMapForContext, mProperty_mScopeStack, mProperty_mLocalObjectList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @universalValuedObjectMapForContext type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_universalValuedObjectMapForContext ("universalValuedObjectMapForContext",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_universalValuedObjectMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalValuedObjectMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_universalValuedObjectMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_universalValuedObjectMapForContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_universalValuedObjectMapForContext GALGAS_universalValuedObjectMapForContext::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_universalValuedObjectMapForContext result ;
  const GALGAS_universalValuedObjectMapForContext * p = (const GALGAS_universalValuedObjectMapForContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_universalValuedObjectMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("universalValuedObjectMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension setter '@universalValuedObjectMapForContext insertModule'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_insertModule> gExtensionModifierTable_universalValuedObjectMapForContext_insertModule ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertModule (const int32_t inClassIndex,
                                        extensionSetterSignature_universalValuedObjectMapForContext_insertModule inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertModule.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertModule (cPtr_universalValuedObjectMapForContext * inObject,
                                       const GALGAS_lstring constin_inModuleName,
                                       const GALGAS_PLMType constin_inModuleType,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_insertModule f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_insertModule.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_insertModule (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_insertModule.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_insertModule (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_insertModule.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inModuleName, constin_inModuleType, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_insertModule (cPtr_universalValuedObjectMapForContext * inObject,
                                                                             const GALGAS_lstring constinArgument_inModuleName,
                                                                             const GALGAS_PLMType constinArgument_inModuleType,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObject var_newValue_1012 = GALGAS_valuedObject::constructor_module (constinArgument_inModuleType  COMMA_SOURCE_FILE ("universal-map.galgas", 22)) ;
  {
  object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inModuleName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 25)), GALGAS_bool (false), var_newValue_1012, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 23)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_insertModule (void) {
  enterExtensionSetter_insertModule (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                     extensionSetter_universalValuedObjectMapForContext_insertModule) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_insertModule (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertModule.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_insertModule (defineExtensionSetter_universalValuedObjectMapForContext_insertModule,
                                                                            freeExtensionModifier_universalValuedObjectMapForContext_insertModule) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension setter '@universalValuedObjectMapForContext insertRegister'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_insertRegister> gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertRegister (const int32_t inClassIndex,
                                          extensionSetterSignature_universalValuedObjectMapForContext_insertRegister inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertRegister (cPtr_universalValuedObjectMapForContext * inObject,
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
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_insertRegister f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inRegisterName, constin_inReadable, constin_inWritable, constin_inType, constin_inAddress, constin_inSliceMap, constin_inArraySize, constin_inElementSize, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_insertRegister (cPtr_universalValuedObjectMapForContext * inObject,
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
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObject var_newValue_1662 = GALGAS_valuedObject::constructor_register (constinArgument_inReadable, constinArgument_inWritable, constinArgument_inType, constinArgument_inAddress, constinArgument_inSliceMap, constinArgument_inArraySize, constinArgument_inElementSize  COMMA_SOURCE_FILE ("universal-map.galgas", 43)) ;
  {
  object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inRegisterName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 54)), GALGAS_bool (false), var_newValue_1662, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 52)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_insertRegister (void) {
  enterExtensionSetter_insertRegister (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                       extensionSetter_universalValuedObjectMapForContext_insertRegister) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_insertRegister (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertRegister.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_insertRegister (defineExtensionSetter_universalValuedObjectMapForContext_insertRegister,
                                                                              freeExtensionModifier_universalValuedObjectMapForContext_insertRegister) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension setter '@universalValuedObjectMapForContext insertGlobalConstant'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_universalValuedObjectMapForContext_insertGlobalConstant> gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_insertGlobalConstant (const int32_t inClassIndex,
                                                extensionSetterSignature_universalValuedObjectMapForContext_insertGlobalConstant inModifier) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_insertGlobalConstant (cPtr_universalValuedObjectMapForContext * inObject,
                                               const GALGAS_lstring constin_inConstantName,
                                               const GALGAS_objectIR constin_inConstantObjectIR,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_universalValuedObjectMapForContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_universalValuedObjectMapForContext_insertGlobalConstant f = NULL ;
    if (classIndex < gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant.count ()) {
      f = gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant.count ()) {
           f = gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_inConstantName, constin_inConstantObjectIR, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_universalValuedObjectMapForContext_insertGlobalConstant (cPtr_universalValuedObjectMapForContext * inObject,
                                                                                     const GALGAS_lstring constinArgument_inConstantName,
                                                                                     const GALGAS_objectIR constinArgument_inConstantObjectIR,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_universalValuedObjectMapForContext * object = inObject ;
  macroValidSharedObject (object, cPtr_universalValuedObjectMapForContext) ;
  GALGAS_valuedObject var_newValue_2278 = GALGAS_valuedObject::constructor_globalConstant (constinArgument_inConstantObjectIR  COMMA_SOURCE_FILE ("universal-map.galgas", 66)) ;
  {
  object->mProperty_mInternalPropertyAndRoutineMapForContext.setter_insertKey (constinArgument_inConstantName, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("universal-map.galgas", 69)), GALGAS_bool (false), var_newValue_2278, inCompiler COMMA_SOURCE_FILE ("universal-map.galgas", 67)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_universalValuedObjectMapForContext_insertGlobalConstant (void) {
  enterExtensionSetter_insertGlobalConstant (kTypeDescriptor_GALGAS_universalValuedObjectMapForContext.mSlotID,
                                             extensionSetter_universalValuedObjectMapForContext_insertGlobalConstant) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_universalValuedObjectMapForContext_insertGlobalConstant (void) {
  gExtensionModifierTable_universalValuedObjectMapForContext_insertGlobalConstant.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_universalValuedObjectMapForContext_insertGlobalConstant (defineExtensionSetter_universalValuedObjectMapForContext_insertGlobalConstant,
                                                                                    freeExtensionModifier_universalValuedObjectMapForContext_insertGlobalConstant) ;

