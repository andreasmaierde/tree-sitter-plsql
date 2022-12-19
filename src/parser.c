#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_SEMI = 1,
  aux_sym_alter_package_token1 = 2,
  aux_sym_alter_package_token2 = 3,
  anon_sym_DOT = 4,
  aux_sym_alter_procedure_token1 = 5,
  aux_sym_alter_function_token1 = 6,
  aux_sym_alter_library_token1 = 7,
  aux_sym_compile_clause_token1 = 8,
  aux_sym_compile_clause_token2 = 9,
  aux_sym_compile_clause_token3 = 10,
  aux_sym_compile_clause_token4 = 11,
  anon_sym_EQ = 12,
  aux_sym_editionable_noneditionable_token1 = 13,
  aux_sym_editionable_noneditionable_token2 = 14,
  aux_sym_reuse_settings_token1 = 15,
  aux_sym_reuse_settings_token2 = 16,
  sym__unquoted_identifier = 17,
  anon_sym_DQUOTE = 18,
  aux_sym__quoted_identifier_token1 = 19,
  sym__comment_ml = 20,
  sym__comment_sl = 21,
  sym_source_file = 22,
  sym__element = 23,
  sym_sql_statement = 24,
  sym__ddl_statement = 25,
  sym__alter_statement = 26,
  sym_alter_package = 27,
  sym_alter_procedure = 28,
  sym_alter_function = 29,
  sym_alter_library = 30,
  sym_compile_clause = 31,
  sym__compiler_parameter_clause = 32,
  sym_editionable_noneditionable = 33,
  sym_reuse_settings = 34,
  sym__quoted_identifier = 35,
  sym_identifier = 36,
  sym_comment = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_alter_package_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_alter_package_token1] = "alter",
  [aux_sym_alter_package_token2] = "package",
  [anon_sym_DOT] = ".",
  [aux_sym_alter_procedure_token1] = "procedure",
  [aux_sym_alter_function_token1] = "function",
  [aux_sym_alter_library_token1] = "library",
  [aux_sym_compile_clause_token1] = "compile",
  [aux_sym_compile_clause_token2] = "debug",
  [aux_sym_compile_clause_token3] = "specification",
  [aux_sym_compile_clause_token4] = "body",
  [anon_sym_EQ] = "=",
  [aux_sym_editionable_noneditionable_token1] = "editionable",
  [aux_sym_editionable_noneditionable_token2] = "noneditionable",
  [aux_sym_reuse_settings_token1] = "reuse",
  [aux_sym_reuse_settings_token2] = "settings",
  [sym__unquoted_identifier] = "_unquoted_identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_identifier_token1] = "_quoted_identifier_token1",
  [sym__comment_ml] = "_comment_ml",
  [sym__comment_sl] = "_comment_sl",
  [sym_source_file] = "source_file",
  [sym__element] = "_element",
  [sym_sql_statement] = "sql_statement",
  [sym__ddl_statement] = "_ddl_statement",
  [sym__alter_statement] = "_alter_statement",
  [sym_alter_package] = "alter_package",
  [sym_alter_procedure] = "alter_procedure",
  [sym_alter_function] = "alter_function",
  [sym_alter_library] = "alter_library",
  [sym_compile_clause] = "compile_clause",
  [sym__compiler_parameter_clause] = "_compiler_parameter_clause",
  [sym_editionable_noneditionable] = "editionable_noneditionable",
  [sym_reuse_settings] = "reuse_settings",
  [sym__quoted_identifier] = "_quoted_identifier",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_alter_package_repeat1] = "alter_package_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_alter_package_token1] = aux_sym_alter_package_token1,
  [aux_sym_alter_package_token2] = aux_sym_alter_package_token2,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_alter_procedure_token1] = aux_sym_alter_procedure_token1,
  [aux_sym_alter_function_token1] = aux_sym_alter_function_token1,
  [aux_sym_alter_library_token1] = aux_sym_alter_library_token1,
  [aux_sym_compile_clause_token1] = aux_sym_compile_clause_token1,
  [aux_sym_compile_clause_token2] = aux_sym_compile_clause_token2,
  [aux_sym_compile_clause_token3] = aux_sym_compile_clause_token3,
  [aux_sym_compile_clause_token4] = aux_sym_compile_clause_token4,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_editionable_noneditionable_token1] = aux_sym_editionable_noneditionable_token1,
  [aux_sym_editionable_noneditionable_token2] = aux_sym_editionable_noneditionable_token2,
  [aux_sym_reuse_settings_token1] = aux_sym_reuse_settings_token1,
  [aux_sym_reuse_settings_token2] = aux_sym_reuse_settings_token2,
  [sym__unquoted_identifier] = sym__unquoted_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_identifier_token1] = aux_sym__quoted_identifier_token1,
  [sym__comment_ml] = sym__comment_ml,
  [sym__comment_sl] = sym__comment_sl,
  [sym_source_file] = sym_source_file,
  [sym__element] = sym__element,
  [sym_sql_statement] = sym_sql_statement,
  [sym__ddl_statement] = sym__ddl_statement,
  [sym__alter_statement] = sym__alter_statement,
  [sym_alter_package] = sym_alter_package,
  [sym_alter_procedure] = sym_alter_procedure,
  [sym_alter_function] = sym_alter_function,
  [sym_alter_library] = sym_alter_library,
  [sym_compile_clause] = sym_compile_clause,
  [sym__compiler_parameter_clause] = sym__compiler_parameter_clause,
  [sym_editionable_noneditionable] = sym_editionable_noneditionable,
  [sym_reuse_settings] = sym_reuse_settings,
  [sym__quoted_identifier] = sym__quoted_identifier,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_alter_package_repeat1] = aux_sym_alter_package_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alter_package_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alter_package_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alter_procedure_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alter_function_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alter_library_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_compile_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_compile_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_compile_clause_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_compile_clause_token4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_editionable_noneditionable_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_editionable_noneditionable_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_reuse_settings_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_reuse_settings_token2] = {
    .visible = true,
    .named = false,
  },
  [sym__unquoted_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__comment_ml] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_sl] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_sql_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__ddl_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__alter_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_alter_package] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_procedure] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_function] = {
    .visible = true,
    .named = true,
  },
  [sym_alter_library] = {
    .visible = true,
    .named = true,
  },
  [sym_compile_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__compiler_parameter_clause] = {
    .visible = false,
    .named = true,
  },
  [sym_editionable_noneditionable] = {
    .visible = true,
    .named = true,
  },
  [sym_reuse_settings] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alter_package_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_compile_parameter_name = 1,
  field_compile_parameter_value = 2,
  field_name = 3,
  field_obj_name = 4,
  field_schema_name = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_compile_parameter_name] = "compile_parameter_name",
  [field_compile_parameter_value] = "compile_parameter_value",
  [field_name] = "name",
  [field_obj_name] = "obj_name",
  [field_schema_name] = "schema_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_obj_name, 2},
  [1] =
    {field_name, 1},
  [2] =
    {field_obj_name, 4},
    {field_schema_name, 2},
  [4] =
    {field_compile_parameter_name, 1, .inherited = true},
    {field_compile_parameter_value, 1, .inherited = true},
  [6] =
    {field_compile_parameter_name, 2, .inherited = true},
    {field_compile_parameter_value, 2, .inherited = true},
  [8] =
    {field_compile_parameter_name, 3, .inherited = true},
    {field_compile_parameter_value, 3, .inherited = true},
  [10] =
    {field_compile_parameter_name, 0},
    {field_compile_parameter_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 26,
  [60] = 30,
  [61] = 58,
  [62] = 54,
  [63] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '\\') SKIP(47)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(136);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(158);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(172);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(27);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(13);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(177);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 46:
      if (eof) ADVANCE(57);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 47:
      if (eof) ADVANCE(57);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(46)
      END_STATE();
    case 48:
      if (eof) ADVANCE(57);
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 49:
      if (eof) ADVANCE(57);
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(48)
      END_STATE();
    case 50:
      if (eof) ADVANCE(57);
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 51:
      if (eof) ADVANCE(57);
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') SKIP(50)
      END_STATE();
    case 52:
      if (eof) ADVANCE(57);
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 53:
      if (eof) ADVANCE(57);
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\r') SKIP(52)
      END_STATE();
    case 54:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '\\') SKIP(49)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(136);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(54)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 55:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '\\') SKIP(51)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(136);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(55)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '\\') SKIP(53)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(56)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_alter_package_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_alter_package_token2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_alter_procedure_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_alter_function_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_alter_library_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_compile_clause_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_compile_clause_token2);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_compile_clause_token3);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_compile_clause_token4);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_editionable_noneditionable_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_editionable_noneditionable_token2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_reuse_settings_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_reuse_settings_token2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '"') ADVANCE(176);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(170);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__comment_ml);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__comment_sl);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__comment_sl);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 54},
  [3] = {.lex_state = 55},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 170},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 170},
  [63] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_alter_package_token1] = ACTIONS(1),
    [aux_sym_alter_package_token2] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_alter_procedure_token1] = ACTIONS(1),
    [aux_sym_alter_function_token1] = ACTIONS(1),
    [aux_sym_alter_library_token1] = ACTIONS(1),
    [aux_sym_compile_clause_token1] = ACTIONS(1),
    [aux_sym_compile_clause_token2] = ACTIONS(1),
    [aux_sym_compile_clause_token3] = ACTIONS(1),
    [aux_sym_compile_clause_token4] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_editionable_noneditionable_token1] = ACTIONS(1),
    [aux_sym_editionable_noneditionable_token2] = ACTIONS(1),
    [aux_sym_reuse_settings_token1] = ACTIONS(1),
    [aux_sym_reuse_settings_token2] = ACTIONS(1),
    [sym__unquoted_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__comment_ml] = ACTIONS(3),
    [sym__comment_sl] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(57),
    [sym__element] = STATE(7),
    [sym_sql_statement] = STATE(7),
    [sym__ddl_statement] = STATE(51),
    [sym__alter_statement] = STATE(51),
    [sym_alter_package] = STATE(51),
    [sym_alter_procedure] = STATE(51),
    [sym_alter_function] = STATE(51),
    [sym_alter_library] = STATE(51),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_alter_package_token1] = ACTIONS(5),
    [sym__comment_ml] = ACTIONS(9),
    [sym__comment_sl] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(15), 1,
      aux_sym_compile_clause_token2,
    ACTIONS(17), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(19), 1,
      sym__unquoted_identifier,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_comment,
    STATE(25), 1,
      sym__compiler_parameter_clause,
    STATE(32), 1,
      sym_reuse_settings,
    STATE(56), 1,
      sym_identifier,
    STATE(59), 1,
      sym__quoted_identifier,
    ACTIONS(13), 3,
      aux_sym_alter_package_token2,
      aux_sym_compile_clause_token3,
      aux_sym_compile_clause_token4,
    ACTIONS(11), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [43] = 10,
    ACTIONS(17), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(19), 1,
      sym__unquoted_identifier,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_comment,
    STATE(27), 1,
      sym__compiler_parameter_clause,
    STATE(33), 1,
      sym_reuse_settings,
    STATE(56), 1,
      sym_identifier,
    STATE(59), 1,
      sym__quoted_identifier,
    ACTIONS(25), 3,
      aux_sym_alter_package_token2,
      aux_sym_compile_clause_token3,
      aux_sym_compile_clause_token4,
    ACTIONS(23), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [83] = 9,
    ACTIONS(17), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(19), 1,
      sym__unquoted_identifier,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym_comment,
    STATE(28), 1,
      sym__compiler_parameter_clause,
    STATE(36), 1,
      sym_reuse_settings,
    STATE(56), 1,
      sym_identifier,
    STATE(59), 1,
      sym__quoted_identifier,
    ACTIONS(27), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [118] = 9,
    ACTIONS(17), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(19), 1,
      sym__unquoted_identifier,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_comment,
    STATE(29), 1,
      sym__compiler_parameter_clause,
    STATE(33), 1,
      sym_reuse_settings,
    STATE(56), 1,
      sym_identifier,
    STATE(59), 1,
      sym__quoted_identifier,
    ACTIONS(23), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [153] = 5,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_alter_package_token1,
    ACTIONS(34), 2,
      sym__comment_ml,
      sym__comment_sl,
    STATE(6), 4,
      sym__element,
      sym_sql_statement,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(51), 6,
      sym__ddl_statement,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [178] = 6,
    ACTIONS(5), 1,
      aux_sym_alter_package_token1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_comment,
    ACTIONS(9), 2,
      sym__comment_ml,
      sym__comment_sl,
    STATE(6), 3,
      sym__element,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
    STATE(51), 6,
      sym__ddl_statement,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [205] = 6,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(19), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [231] = 6,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(17), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [257] = 6,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    ACTIONS(53), 1,
      anon_sym_DOT,
    STATE(10), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(23), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [283] = 6,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    ACTIONS(57), 1,
      anon_sym_DOT,
    STATE(11), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(21), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [309] = 5,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(22), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [332] = 5,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(22), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [355] = 5,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(22), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [378] = 5,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(22), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [401] = 5,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(14), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [424] = 5,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(22), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [447] = 5,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(13), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [470] = 5,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(22), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [493] = 5,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(12), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [516] = 5,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(22), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [539] = 4,
    ACTIONS(81), 1,
      aux_sym_compile_clause_token1,
    ACTIONS(84), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(22), 4,
      sym_compile_clause,
      sym_editionable_noneditionable,
      sym_comment,
      aux_sym_alter_package_repeat1,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [560] = 5,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(22), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [583] = 5,
    ACTIONS(43), 1,
      aux_sym_compile_clause_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(45), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(15), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [606] = 4,
    ACTIONS(17), 1,
      aux_sym_reuse_settings_token1,
    STATE(25), 1,
      sym_comment,
    STATE(38), 1,
      sym_reuse_settings,
    ACTIONS(91), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [626] = 2,
    STATE(26), 1,
      sym_comment,
    ACTIONS(93), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      anon_sym_DOT,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      sym__comment_ml,
      sym__comment_sl,
  [642] = 4,
    ACTIONS(17), 1,
      aux_sym_reuse_settings_token1,
    STATE(27), 1,
      sym_comment,
    STATE(35), 1,
      sym_reuse_settings,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [662] = 4,
    ACTIONS(17), 1,
      aux_sym_reuse_settings_token1,
    STATE(28), 1,
      sym_comment,
    STATE(34), 1,
      sym_reuse_settings,
    ACTIONS(97), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [682] = 4,
    ACTIONS(17), 1,
      aux_sym_reuse_settings_token1,
    STATE(29), 1,
      sym_comment,
    STATE(37), 1,
      sym_reuse_settings,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [702] = 2,
    STATE(30), 1,
      sym_comment,
    ACTIONS(99), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      anon_sym_DOT,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      sym__comment_ml,
      sym__comment_sl,
  [718] = 2,
    STATE(31), 1,
      sym_comment,
    ACTIONS(101), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      sym__comment_ml,
      sym__comment_sl,
  [733] = 2,
    STATE(32), 1,
      sym_comment,
    ACTIONS(23), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [747] = 2,
    STATE(33), 1,
      sym_comment,
    ACTIONS(27), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [761] = 2,
    STATE(34), 1,
      sym_comment,
    ACTIONS(103), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [775] = 2,
    STATE(35), 1,
      sym_comment,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [789] = 2,
    STATE(36), 1,
      sym_comment,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [803] = 2,
    STATE(37), 1,
      sym_comment,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [817] = 2,
    STATE(38), 1,
      sym_comment,
    ACTIONS(109), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [831] = 2,
    STATE(39), 1,
      sym_comment,
    ACTIONS(111), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [845] = 2,
    STATE(40), 1,
      sym_comment,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [859] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(115), 1,
      sym__unquoted_identifier,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_identifier,
    STATE(26), 1,
      sym__quoted_identifier,
    STATE(41), 1,
      sym_comment,
  [881] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(115), 1,
      sym__unquoted_identifier,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_identifier,
    STATE(26), 1,
      sym__quoted_identifier,
    STATE(42), 1,
      sym_comment,
  [903] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(115), 1,
      sym__unquoted_identifier,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_identifier,
    STATE(26), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym_comment,
  [925] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(115), 1,
      sym__unquoted_identifier,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_identifier,
    STATE(26), 1,
      sym__quoted_identifier,
    STATE(44), 1,
      sym_comment,
  [947] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(119), 1,
      aux_sym_alter_package_token2,
    ACTIONS(121), 1,
      aux_sym_alter_procedure_token1,
    ACTIONS(123), 1,
      aux_sym_alter_function_token1,
    ACTIONS(125), 1,
      aux_sym_alter_library_token1,
    STATE(45), 1,
      sym_comment,
  [969] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(115), 1,
      sym__unquoted_identifier,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_identifier,
    STATE(26), 1,
      sym__quoted_identifier,
    STATE(46), 1,
      sym_comment,
  [991] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(115), 1,
      sym__unquoted_identifier,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_identifier,
    STATE(26), 1,
      sym__quoted_identifier,
    STATE(47), 1,
      sym_comment,
  [1013] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(115), 1,
      sym__unquoted_identifier,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_identifier,
    STATE(26), 1,
      sym__quoted_identifier,
    STATE(48), 1,
      sym_comment,
  [1035] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(115), 1,
      sym__unquoted_identifier,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym__quoted_identifier,
    STATE(31), 1,
      sym_identifier,
    STATE(49), 1,
      sym_comment,
  [1057] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(115), 1,
      sym__unquoted_identifier,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_identifier,
    STATE(26), 1,
      sym__quoted_identifier,
    STATE(50), 1,
      sym_comment,
  [1079] = 3,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym_comment,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1092] = 2,
    STATE(52), 1,
      sym_comment,
    ACTIONS(131), 4,
      ts_builtin_sym_end,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1102] = 2,
    STATE(53), 1,
      sym_comment,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1112] = 4,
    ACTIONS(135), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(137), 1,
      sym__comment_ml,
    ACTIONS(139), 1,
      sym__comment_sl,
    STATE(54), 1,
      sym_comment,
  [1125] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(141), 1,
      aux_sym_reuse_settings_token2,
    STATE(55), 1,
      sym_comment,
  [1138] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(143), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_comment,
  [1151] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_comment,
  [1164] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      sym_comment,
  [1177] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(93), 1,
      anon_sym_EQ,
    STATE(59), 1,
      sym_comment,
  [1190] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(99), 1,
      anon_sym_EQ,
    STATE(60), 1,
      sym_comment,
  [1203] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_comment,
  [1216] = 4,
    ACTIONS(137), 1,
      sym__comment_ml,
    ACTIONS(139), 1,
      sym__comment_sl,
    ACTIONS(151), 1,
      aux_sym__quoted_identifier_token1,
    STATE(62), 1,
      sym_comment,
  [1229] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 83,
  [SMALL_STATE(5)] = 118,
  [SMALL_STATE(6)] = 153,
  [SMALL_STATE(7)] = 178,
  [SMALL_STATE(8)] = 205,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 257,
  [SMALL_STATE(11)] = 283,
  [SMALL_STATE(12)] = 309,
  [SMALL_STATE(13)] = 332,
  [SMALL_STATE(14)] = 355,
  [SMALL_STATE(15)] = 378,
  [SMALL_STATE(16)] = 401,
  [SMALL_STATE(17)] = 424,
  [SMALL_STATE(18)] = 447,
  [SMALL_STATE(19)] = 470,
  [SMALL_STATE(20)] = 493,
  [SMALL_STATE(21)] = 516,
  [SMALL_STATE(22)] = 539,
  [SMALL_STATE(23)] = 560,
  [SMALL_STATE(24)] = 583,
  [SMALL_STATE(25)] = 606,
  [SMALL_STATE(26)] = 626,
  [SMALL_STATE(27)] = 642,
  [SMALL_STATE(28)] = 662,
  [SMALL_STATE(29)] = 682,
  [SMALL_STATE(30)] = 702,
  [SMALL_STATE(31)] = 718,
  [SMALL_STATE(32)] = 733,
  [SMALL_STATE(33)] = 747,
  [SMALL_STATE(34)] = 761,
  [SMALL_STATE(35)] = 775,
  [SMALL_STATE(36)] = 789,
  [SMALL_STATE(37)] = 803,
  [SMALL_STATE(38)] = 817,
  [SMALL_STATE(39)] = 831,
  [SMALL_STATE(40)] = 845,
  [SMALL_STATE(41)] = 859,
  [SMALL_STATE(42)] = 881,
  [SMALL_STATE(43)] = 903,
  [SMALL_STATE(44)] = 925,
  [SMALL_STATE(45)] = 947,
  [SMALL_STATE(46)] = 969,
  [SMALL_STATE(47)] = 991,
  [SMALL_STATE(48)] = 1013,
  [SMALL_STATE(49)] = 1035,
  [SMALL_STATE(50)] = 1057,
  [SMALL_STATE(51)] = 1079,
  [SMALL_STATE(52)] = 1092,
  [SMALL_STATE(53)] = 1102,
  [SMALL_STATE(54)] = 1112,
  [SMALL_STATE(55)] = 1125,
  [SMALL_STATE(56)] = 1138,
  [SMALL_STATE(57)] = 1151,
  [SMALL_STATE(58)] = 1164,
  [SMALL_STATE(59)] = 1177,
  [SMALL_STATE(60)] = 1190,
  [SMALL_STATE(61)] = 1203,
  [SMALL_STATE(62)] = 1216,
  [SMALL_STATE(63)] = 1229,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 3, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 3, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 3, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 3, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 6, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 6, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 6, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 6, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 5, .production_id = 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 5, .production_id = 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 5, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(40),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 5, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 2, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4, .production_id = 6),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 3, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compiler_parameter_clause, 3, .production_id = 7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 5, .production_id = 6),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3, .production_id = 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reuse_settings, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_editionable_noneditionable, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [145] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_plsql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
