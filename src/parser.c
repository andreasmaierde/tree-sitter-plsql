#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 234
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 165
#define ALIAS_COUNT 0
#define TOKEN_COUNT 127
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 19

enum {
  anon_sym_SEMI = 1,
  aux_sym_create_package_token1 = 2,
  aux_sym_create_package_token2 = 3,
  aux_sym_create_package_token3 = 4,
  aux_sym_create_package_token4 = 5,
  aux_sym_alter_package_token1 = 6,
  aux_sym_alter_procedure_token1 = 7,
  aux_sym_alter_function_token1 = 8,
  aux_sym_alter_library_token1 = 9,
  aux_sym_compile_clause_token1 = 10,
  aux_sym_compile_clause_token2 = 11,
  aux_sym_compile_clause_token3 = 12,
  aux_sym_compile_clause_token4 = 13,
  anon_sym_EQ = 14,
  aux_sym_editionable_noneditionable_token1 = 15,
  aux_sym_editionable_noneditionable_token2 = 16,
  aux_sym_sharing_clause_token1 = 17,
  aux_sym_sharing_clause_token2 = 18,
  aux_sym_default_collation_clause_token1 = 19,
  aux_sym_default_collation_clause_token2 = 20,
  aux_sym_default_collation_clause_token3 = 21,
  aux_sym_invoker_rights_clause_token1 = 22,
  aux_sym_invoker_rights_clause_token2 = 23,
  aux_sym_invoker_rights_clause_token3 = 24,
  aux_sym_accessible_by_clause_token1 = 25,
  aux_sym_accessible_by_clause_token2 = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  aux_sym_unit_kind_token1 = 29,
  aux_sym_unit_kind_token2 = 30,
  aux_sym_reuse_settings_token1 = 31,
  aux_sym_reuse_settings_token2 = 32,
  anon_sym_DOT = 33,
  aux_sym_byte_char_token1 = 34,
  aux_sym_byte_char_token2 = 35,
  aux_sym_is_as_token1 = 36,
  aux_sym_is_as_token2 = 37,
  aux_sym_end_obj_token1 = 38,
  aux_sym_is_null_token1 = 39,
  aux_sym_is_not_null_token1 = 40,
  aux_sym__expression_boolean_token1 = 41,
  aux_sym__character_datatypes_varchar2_token1 = 42,
  aux_sym__character_datatypes_nchar_token1 = 43,
  aux_sym__character_datatypes_nvarchar2_token1 = 44,
  aux_sym__number_datatypes_keyword_token1 = 45,
  aux_sym__number_datatypes_keyword_token2 = 46,
  aux_sym__number_datatypes_keyword_token3 = 47,
  aux_sym__number_datatypes_keyword_token4 = 48,
  aux_sym__number_datatypes_keyword_token5 = 49,
  aux_sym__number_datatypes_keyword_token6 = 50,
  aux_sym__number_datatypes_keyword_token7 = 51,
  aux_sym__number_datatypes_keyword_token8 = 52,
  aux_sym__number_datatypes_keyword_token9 = 53,
  aux_sym__number_datatypes_keyword_token10 = 54,
  aux_sym__number_datatypes_keyword_token11 = 55,
  aux_sym__number_datatypes_keyword_token12 = 56,
  aux_sym__number_datatypes_keyword_token13 = 57,
  aux_sym__number_datatypes_keyword_token14 = 58,
  aux_sym__number_datatypes_keyword_token15 = 59,
  aux_sym__number_datatypes_keyword_token16 = 60,
  aux_sym__number_datatypes_number_token1 = 61,
  aux_sym__number_datatypes_float_token1 = 62,
  aux_sym__long_and_raw_datatypes_long_raw_token1 = 63,
  aux_sym__long_and_raw_datatypes_long_raw_token2 = 64,
  aux_sym__datetime_datatypes_keyword_token1 = 65,
  aux_sym__datetime_datatypes_date_timestamp_token1 = 66,
  aux_sym__datetime_datatypes_date_timestamp_token2 = 67,
  aux_sym__datetime_datatypes_date_timestamp_token3 = 68,
  aux_sym__datetime_datatypes_date_timestamp_token4 = 69,
  aux_sym__datetime_datatypes_date_timestamp_token5 = 70,
  aux_sym__datetime_datatypes_date_interval_year_token1 = 71,
  aux_sym__datetime_datatypes_date_interval_year_token2 = 72,
  aux_sym__datetime_datatypes_date_interval_year_token3 = 73,
  aux_sym__datetime_datatypes_date_interval_year_token4 = 74,
  aux_sym__datetime_datatypes_date_interval_day_token1 = 75,
  aux_sym__datetime_datatypes_date_interval_day_token2 = 76,
  aux_sym_large_object_datatypes_token1 = 77,
  aux_sym_large_object_datatypes_token2 = 78,
  aux_sym_large_object_datatypes_token3 = 79,
  aux_sym_large_object_datatypes_token4 = 80,
  aux_sym_rowid_datatypes_token1 = 81,
  anon_sym_PERCENT = 82,
  aux_sym__referenced_datatypes_rowtype_token1 = 83,
  aux_sym_logical_datatypes_token1 = 84,
  aux_sym__rowid_datatypes_urowid_token1 = 85,
  aux_sym__ansi_supported_datatypes_character_token1 = 86,
  aux_sym__ansi_supported_datatypes_character_token2 = 87,
  aux_sym__ansi_supported_datatypes_varchar_token1 = 88,
  aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token1 = 89,
  aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token2 = 90,
  aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token3 = 91,
  aux_sym__ansi_supported_datatypes_double_precision_token1 = 92,
  aux_sym__ansi_supported_datatypes_double_precision_token2 = 93,
  aux_sym_supplied_datatypes_any_types_token1 = 94,
  aux_sym_supplied_datatypes_any_types_token2 = 95,
  aux_sym_supplied_datatypes_any_types_token3 = 96,
  aux_sym_supplied_datatypes_any_types_token4 = 97,
  aux_sym_supplied_datatypes_xml_types_token1 = 98,
  aux_sym_supplied_datatypes_xml_types_token2 = 99,
  aux_sym_supplied_datatypes_spatial_types_token1 = 100,
  aux_sym_supplied_datatypes_spatial_types_token2 = 101,
  aux_sym_supplied_datatypes_spatial_types_token3 = 102,
  aux_sym_object_datatypes_token1 = 103,
  aux_sym_object_datatypes_token2 = 104,
  aux_sym_object_datatypes_token3 = 105,
  aux_sym_object_datatypes_token4 = 106,
  aux_sym_object_datatypes_token5 = 107,
  anon_sym_COMMA = 108,
  anon_sym_EQ_GT = 109,
  anon_sym_LT = 110,
  anon_sym_LT_EQ = 111,
  anon_sym_GT = 112,
  anon_sym_GT_EQ = 113,
  anon_sym_LT_GT = 114,
  anon_sym_BANG_EQ = 115,
  anon_sym_TILDE_EQ = 116,
  anon_sym_CARET_EQ = 117,
  sym__unquoted_identifier = 118,
  anon_sym_DQUOTE = 119,
  aux_sym__quoted_identifier_token1 = 120,
  aux_sym_literal_boolean_token1 = 121,
  aux_sym_literal_boolean_token2 = 122,
  sym__single_quote_string = 123,
  sym__number = 124,
  sym_comment_ml = 125,
  sym_comment_sl = 126,
  sym_source_file = 127,
  sym__element = 128,
  sym_sql_statement = 129,
  sym__ddl_statement = 130,
  sym__create_statement = 131,
  sym_create_package = 132,
  sym__alter_statement = 133,
  sym_alter_package = 134,
  sym_alter_procedure = 135,
  sym_alter_function = 136,
  sym_alter_library = 137,
  sym_compile_clause = 138,
  sym__compiler_parameter_clause = 139,
  sym_editionable_noneditionable = 140,
  sym_sharing_clause = 141,
  sym_default_collation_clause = 142,
  sym_invoker_rights_clause = 143,
  sym_accessible_by_clause = 144,
  sym_accessor = 145,
  sym_unit_kind = 146,
  sym_reuse_settings = 147,
  sym__schema = 148,
  sym_is_as = 149,
  sym_end_obj = 150,
  sym_package_item_list = 151,
  sym_identifier = 152,
  sym__quoted_identifier = 153,
  sym__literal = 154,
  sym_literal_boolean = 155,
  sym_literal_number = 156,
  sym_literal_string = 157,
  sym_comment = 158,
  aux_sym_source_file_repeat1 = 159,
  aux_sym_create_package_repeat1 = 160,
  aux_sym_create_package_repeat2 = 161,
  aux_sym_alter_package_repeat1 = 162,
  aux_sym_compile_clause_repeat1 = 163,
  aux_sym_accessible_by_clause_repeat1 = 164,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_package_token1] = "create",
  [aux_sym_create_package_token2] = "or",
  [aux_sym_create_package_token3] = "replace",
  [aux_sym_create_package_token4] = "package",
  [aux_sym_alter_package_token1] = "alter",
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
  [aux_sym_sharing_clause_token1] = "metadata",
  [aux_sym_sharing_clause_token2] = "none",
  [aux_sym_default_collation_clause_token1] = "default",
  [aux_sym_default_collation_clause_token2] = "collation",
  [aux_sym_default_collation_clause_token3] = "using_nls_comp",
  [aux_sym_invoker_rights_clause_token1] = "authid",
  [aux_sym_invoker_rights_clause_token2] = "current_user",
  [aux_sym_invoker_rights_clause_token3] = "definer",
  [aux_sym_accessible_by_clause_token1] = "accessible",
  [aux_sym_accessible_by_clause_token2] = "by",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_unit_kind_token1] = "trigger",
  [aux_sym_unit_kind_token2] = "type",
  [aux_sym_reuse_settings_token1] = "reuse",
  [aux_sym_reuse_settings_token2] = "settings",
  [anon_sym_DOT] = ".",
  [aux_sym_byte_char_token1] = "byte",
  [aux_sym_byte_char_token2] = "char",
  [aux_sym_is_as_token1] = "is",
  [aux_sym_is_as_token2] = "as",
  [aux_sym_end_obj_token1] = "end",
  [aux_sym_is_null_token1] = "null",
  [aux_sym_is_not_null_token1] = "not",
  [aux_sym__expression_boolean_token1] = "todo",
  [aux_sym__character_datatypes_varchar2_token1] = "varchar2",
  [aux_sym__character_datatypes_nchar_token1] = "nchar",
  [aux_sym__character_datatypes_nvarchar2_token1] = "nvarchar2",
  [aux_sym__number_datatypes_keyword_token1] = "int",
  [aux_sym__number_datatypes_keyword_token2] = "smallint",
  [aux_sym__number_datatypes_keyword_token3] = "real",
  [aux_sym__number_datatypes_keyword_token4] = "binary_float",
  [aux_sym__number_datatypes_keyword_token5] = "binary_double",
  [aux_sym__number_datatypes_keyword_token6] = "simple_float",
  [aux_sym__number_datatypes_keyword_token7] = "simple_double",
  [aux_sym__number_datatypes_keyword_token8] = "binary_interger",
  [aux_sym__number_datatypes_keyword_token9] = "pls_interger",
  [aux_sym__number_datatypes_keyword_token10] = "natural",
  [aux_sym__number_datatypes_keyword_token11] = "naturaln",
  [aux_sym__number_datatypes_keyword_token12] = "positive",
  [aux_sym__number_datatypes_keyword_token13] = "positiven",
  [aux_sym__number_datatypes_keyword_token14] = "signtype",
  [aux_sym__number_datatypes_keyword_token15] = "simple_interger",
  [aux_sym__number_datatypes_keyword_token16] = "integer",
  [aux_sym__number_datatypes_number_token1] = "number",
  [aux_sym__number_datatypes_float_token1] = "float",
  [aux_sym__long_and_raw_datatypes_long_raw_token1] = "long",
  [aux_sym__long_and_raw_datatypes_long_raw_token2] = "raw",
  [aux_sym__datetime_datatypes_keyword_token1] = "date",
  [aux_sym__datetime_datatypes_date_timestamp_token1] = "timestamp",
  [aux_sym__datetime_datatypes_date_timestamp_token2] = "with",
  [aux_sym__datetime_datatypes_date_timestamp_token3] = "local",
  [aux_sym__datetime_datatypes_date_timestamp_token4] = "time",
  [aux_sym__datetime_datatypes_date_timestamp_token5] = "zone",
  [aux_sym__datetime_datatypes_date_interval_year_token1] = "interval",
  [aux_sym__datetime_datatypes_date_interval_year_token2] = "year",
  [aux_sym__datetime_datatypes_date_interval_year_token3] = "to",
  [aux_sym__datetime_datatypes_date_interval_year_token4] = "month",
  [aux_sym__datetime_datatypes_date_interval_day_token1] = "day",
  [aux_sym__datetime_datatypes_date_interval_day_token2] = "second",
  [aux_sym_large_object_datatypes_token1] = "blob",
  [aux_sym_large_object_datatypes_token2] = "clob",
  [aux_sym_large_object_datatypes_token3] = "nclob",
  [aux_sym_large_object_datatypes_token4] = "bfile",
  [aux_sym_rowid_datatypes_token1] = "rowid",
  [anon_sym_PERCENT] = "%",
  [aux_sym__referenced_datatypes_rowtype_token1] = "rowtype",
  [aux_sym_logical_datatypes_token1] = "boolean",
  [aux_sym__rowid_datatypes_urowid_token1] = "urowid",
  [aux_sym__ansi_supported_datatypes_character_token1] = "character",
  [aux_sym__ansi_supported_datatypes_character_token2] = "varying",
  [aux_sym__ansi_supported_datatypes_varchar_token1] = "varchar",
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token1] = "numeric",
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token2] = "decimal",
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token3] = "dec",
  [aux_sym__ansi_supported_datatypes_double_precision_token1] = "double",
  [aux_sym__ansi_supported_datatypes_double_precision_token2] = "precision",
  [aux_sym_supplied_datatypes_any_types_token1] = "sys",
  [aux_sym_supplied_datatypes_any_types_token2] = "anydata",
  [aux_sym_supplied_datatypes_any_types_token3] = "anytype",
  [aux_sym_supplied_datatypes_any_types_token4] = "anydataset",
  [aux_sym_supplied_datatypes_xml_types_token1] = "xmltype",
  [aux_sym_supplied_datatypes_xml_types_token2] = "uritype",
  [aux_sym_supplied_datatypes_spatial_types_token1] = "sdo_geometry",
  [aux_sym_supplied_datatypes_spatial_types_token2] = "sdo_topo_geometry",
  [aux_sym_supplied_datatypes_spatial_types_token3] = "sdo_georaster",
  [aux_sym_object_datatypes_token1] = "json_element_t",
  [aux_sym_object_datatypes_token2] = "json_array_t",
  [aux_sym_object_datatypes_token3] = "json_object_t",
  [aux_sym_object_datatypes_token4] = "json_scalar_t",
  [aux_sym_object_datatypes_token5] = "json_key_list",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [sym__unquoted_identifier] = "_unquoted_identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_identifier_token1] = "_quoted_identifier_token1",
  [aux_sym_literal_boolean_token1] = "true",
  [aux_sym_literal_boolean_token2] = "false",
  [sym__single_quote_string] = "_single_quote_string",
  [sym__number] = "_number",
  [sym_comment_ml] = "comment_ml",
  [sym_comment_sl] = "comment_sl",
  [sym_source_file] = "source_file",
  [sym__element] = "_element",
  [sym_sql_statement] = "sql_statement",
  [sym__ddl_statement] = "_ddl_statement",
  [sym__create_statement] = "_create_statement",
  [sym_create_package] = "create_package",
  [sym__alter_statement] = "_alter_statement",
  [sym_alter_package] = "alter_package",
  [sym_alter_procedure] = "alter_procedure",
  [sym_alter_function] = "alter_function",
  [sym_alter_library] = "alter_library",
  [sym_compile_clause] = "compile_clause",
  [sym__compiler_parameter_clause] = "_compiler_parameter_clause",
  [sym_editionable_noneditionable] = "editionable_noneditionable",
  [sym_sharing_clause] = "sharing_clause",
  [sym_default_collation_clause] = "default_collation_clause",
  [sym_invoker_rights_clause] = "invoker_rights_clause",
  [sym_accessible_by_clause] = "accessible_by_clause",
  [sym_accessor] = "accessor",
  [sym_unit_kind] = "unit_kind",
  [sym_reuse_settings] = "reuse_settings",
  [sym__schema] = "_schema",
  [sym_is_as] = "is_as",
  [sym_end_obj] = "end_obj",
  [sym_package_item_list] = "package_item_list",
  [sym_identifier] = "identifier",
  [sym__quoted_identifier] = "_quoted_identifier",
  [sym__literal] = "_literal",
  [sym_literal_boolean] = "literal_boolean",
  [sym_literal_number] = "literal_number",
  [sym_literal_string] = "literal_string",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_create_package_repeat1] = "create_package_repeat1",
  [aux_sym_create_package_repeat2] = "create_package_repeat2",
  [aux_sym_alter_package_repeat1] = "alter_package_repeat1",
  [aux_sym_compile_clause_repeat1] = "compile_clause_repeat1",
  [aux_sym_accessible_by_clause_repeat1] = "accessible_by_clause_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_create_package_token1] = aux_sym_create_package_token1,
  [aux_sym_create_package_token2] = aux_sym_create_package_token2,
  [aux_sym_create_package_token3] = aux_sym_create_package_token3,
  [aux_sym_create_package_token4] = aux_sym_create_package_token4,
  [aux_sym_alter_package_token1] = aux_sym_alter_package_token1,
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
  [aux_sym_sharing_clause_token1] = aux_sym_sharing_clause_token1,
  [aux_sym_sharing_clause_token2] = aux_sym_sharing_clause_token2,
  [aux_sym_default_collation_clause_token1] = aux_sym_default_collation_clause_token1,
  [aux_sym_default_collation_clause_token2] = aux_sym_default_collation_clause_token2,
  [aux_sym_default_collation_clause_token3] = aux_sym_default_collation_clause_token3,
  [aux_sym_invoker_rights_clause_token1] = aux_sym_invoker_rights_clause_token1,
  [aux_sym_invoker_rights_clause_token2] = aux_sym_invoker_rights_clause_token2,
  [aux_sym_invoker_rights_clause_token3] = aux_sym_invoker_rights_clause_token3,
  [aux_sym_accessible_by_clause_token1] = aux_sym_accessible_by_clause_token1,
  [aux_sym_accessible_by_clause_token2] = aux_sym_accessible_by_clause_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_unit_kind_token1] = aux_sym_unit_kind_token1,
  [aux_sym_unit_kind_token2] = aux_sym_unit_kind_token2,
  [aux_sym_reuse_settings_token1] = aux_sym_reuse_settings_token1,
  [aux_sym_reuse_settings_token2] = aux_sym_reuse_settings_token2,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_byte_char_token1] = aux_sym_byte_char_token1,
  [aux_sym_byte_char_token2] = aux_sym_byte_char_token2,
  [aux_sym_is_as_token1] = aux_sym_is_as_token1,
  [aux_sym_is_as_token2] = aux_sym_is_as_token2,
  [aux_sym_end_obj_token1] = aux_sym_end_obj_token1,
  [aux_sym_is_null_token1] = aux_sym_is_null_token1,
  [aux_sym_is_not_null_token1] = aux_sym_is_not_null_token1,
  [aux_sym__expression_boolean_token1] = aux_sym__expression_boolean_token1,
  [aux_sym__character_datatypes_varchar2_token1] = aux_sym__character_datatypes_varchar2_token1,
  [aux_sym__character_datatypes_nchar_token1] = aux_sym__character_datatypes_nchar_token1,
  [aux_sym__character_datatypes_nvarchar2_token1] = aux_sym__character_datatypes_nvarchar2_token1,
  [aux_sym__number_datatypes_keyword_token1] = aux_sym__number_datatypes_keyword_token1,
  [aux_sym__number_datatypes_keyword_token2] = aux_sym__number_datatypes_keyword_token2,
  [aux_sym__number_datatypes_keyword_token3] = aux_sym__number_datatypes_keyword_token3,
  [aux_sym__number_datatypes_keyword_token4] = aux_sym__number_datatypes_keyword_token4,
  [aux_sym__number_datatypes_keyword_token5] = aux_sym__number_datatypes_keyword_token5,
  [aux_sym__number_datatypes_keyword_token6] = aux_sym__number_datatypes_keyword_token6,
  [aux_sym__number_datatypes_keyword_token7] = aux_sym__number_datatypes_keyword_token7,
  [aux_sym__number_datatypes_keyword_token8] = aux_sym__number_datatypes_keyword_token8,
  [aux_sym__number_datatypes_keyword_token9] = aux_sym__number_datatypes_keyword_token9,
  [aux_sym__number_datatypes_keyword_token10] = aux_sym__number_datatypes_keyword_token10,
  [aux_sym__number_datatypes_keyword_token11] = aux_sym__number_datatypes_keyword_token11,
  [aux_sym__number_datatypes_keyword_token12] = aux_sym__number_datatypes_keyword_token12,
  [aux_sym__number_datatypes_keyword_token13] = aux_sym__number_datatypes_keyword_token13,
  [aux_sym__number_datatypes_keyword_token14] = aux_sym__number_datatypes_keyword_token14,
  [aux_sym__number_datatypes_keyword_token15] = aux_sym__number_datatypes_keyword_token15,
  [aux_sym__number_datatypes_keyword_token16] = aux_sym__number_datatypes_keyword_token16,
  [aux_sym__number_datatypes_number_token1] = aux_sym__number_datatypes_number_token1,
  [aux_sym__number_datatypes_float_token1] = aux_sym__number_datatypes_float_token1,
  [aux_sym__long_and_raw_datatypes_long_raw_token1] = aux_sym__long_and_raw_datatypes_long_raw_token1,
  [aux_sym__long_and_raw_datatypes_long_raw_token2] = aux_sym__long_and_raw_datatypes_long_raw_token2,
  [aux_sym__datetime_datatypes_keyword_token1] = aux_sym__datetime_datatypes_keyword_token1,
  [aux_sym__datetime_datatypes_date_timestamp_token1] = aux_sym__datetime_datatypes_date_timestamp_token1,
  [aux_sym__datetime_datatypes_date_timestamp_token2] = aux_sym__datetime_datatypes_date_timestamp_token2,
  [aux_sym__datetime_datatypes_date_timestamp_token3] = aux_sym__datetime_datatypes_date_timestamp_token3,
  [aux_sym__datetime_datatypes_date_timestamp_token4] = aux_sym__datetime_datatypes_date_timestamp_token4,
  [aux_sym__datetime_datatypes_date_timestamp_token5] = aux_sym__datetime_datatypes_date_timestamp_token5,
  [aux_sym__datetime_datatypes_date_interval_year_token1] = aux_sym__datetime_datatypes_date_interval_year_token1,
  [aux_sym__datetime_datatypes_date_interval_year_token2] = aux_sym__datetime_datatypes_date_interval_year_token2,
  [aux_sym__datetime_datatypes_date_interval_year_token3] = aux_sym__datetime_datatypes_date_interval_year_token3,
  [aux_sym__datetime_datatypes_date_interval_year_token4] = aux_sym__datetime_datatypes_date_interval_year_token4,
  [aux_sym__datetime_datatypes_date_interval_day_token1] = aux_sym__datetime_datatypes_date_interval_day_token1,
  [aux_sym__datetime_datatypes_date_interval_day_token2] = aux_sym__datetime_datatypes_date_interval_day_token2,
  [aux_sym_large_object_datatypes_token1] = aux_sym_large_object_datatypes_token1,
  [aux_sym_large_object_datatypes_token2] = aux_sym_large_object_datatypes_token2,
  [aux_sym_large_object_datatypes_token3] = aux_sym_large_object_datatypes_token3,
  [aux_sym_large_object_datatypes_token4] = aux_sym_large_object_datatypes_token4,
  [aux_sym_rowid_datatypes_token1] = aux_sym_rowid_datatypes_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym__referenced_datatypes_rowtype_token1] = aux_sym__referenced_datatypes_rowtype_token1,
  [aux_sym_logical_datatypes_token1] = aux_sym_logical_datatypes_token1,
  [aux_sym__rowid_datatypes_urowid_token1] = aux_sym__rowid_datatypes_urowid_token1,
  [aux_sym__ansi_supported_datatypes_character_token1] = aux_sym__ansi_supported_datatypes_character_token1,
  [aux_sym__ansi_supported_datatypes_character_token2] = aux_sym__ansi_supported_datatypes_character_token2,
  [aux_sym__ansi_supported_datatypes_varchar_token1] = aux_sym__ansi_supported_datatypes_varchar_token1,
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token1] = aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token1,
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token2] = aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token2,
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token3] = aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token3,
  [aux_sym__ansi_supported_datatypes_double_precision_token1] = aux_sym__ansi_supported_datatypes_double_precision_token1,
  [aux_sym__ansi_supported_datatypes_double_precision_token2] = aux_sym__ansi_supported_datatypes_double_precision_token2,
  [aux_sym_supplied_datatypes_any_types_token1] = aux_sym_supplied_datatypes_any_types_token1,
  [aux_sym_supplied_datatypes_any_types_token2] = aux_sym_supplied_datatypes_any_types_token2,
  [aux_sym_supplied_datatypes_any_types_token3] = aux_sym_supplied_datatypes_any_types_token3,
  [aux_sym_supplied_datatypes_any_types_token4] = aux_sym_supplied_datatypes_any_types_token4,
  [aux_sym_supplied_datatypes_xml_types_token1] = aux_sym_supplied_datatypes_xml_types_token1,
  [aux_sym_supplied_datatypes_xml_types_token2] = aux_sym_supplied_datatypes_xml_types_token2,
  [aux_sym_supplied_datatypes_spatial_types_token1] = aux_sym_supplied_datatypes_spatial_types_token1,
  [aux_sym_supplied_datatypes_spatial_types_token2] = aux_sym_supplied_datatypes_spatial_types_token2,
  [aux_sym_supplied_datatypes_spatial_types_token3] = aux_sym_supplied_datatypes_spatial_types_token3,
  [aux_sym_object_datatypes_token1] = aux_sym_object_datatypes_token1,
  [aux_sym_object_datatypes_token2] = aux_sym_object_datatypes_token2,
  [aux_sym_object_datatypes_token3] = aux_sym_object_datatypes_token3,
  [aux_sym_object_datatypes_token4] = aux_sym_object_datatypes_token4,
  [aux_sym_object_datatypes_token5] = aux_sym_object_datatypes_token5,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [sym__unquoted_identifier] = sym__unquoted_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_identifier_token1] = aux_sym__quoted_identifier_token1,
  [aux_sym_literal_boolean_token1] = aux_sym_literal_boolean_token1,
  [aux_sym_literal_boolean_token2] = aux_sym_literal_boolean_token2,
  [sym__single_quote_string] = sym__single_quote_string,
  [sym__number] = sym__number,
  [sym_comment_ml] = sym_comment_ml,
  [sym_comment_sl] = sym_comment_sl,
  [sym_source_file] = sym_source_file,
  [sym__element] = sym__element,
  [sym_sql_statement] = sym_sql_statement,
  [sym__ddl_statement] = sym__ddl_statement,
  [sym__create_statement] = sym__create_statement,
  [sym_create_package] = sym_create_package,
  [sym__alter_statement] = sym__alter_statement,
  [sym_alter_package] = sym_alter_package,
  [sym_alter_procedure] = sym_alter_procedure,
  [sym_alter_function] = sym_alter_function,
  [sym_alter_library] = sym_alter_library,
  [sym_compile_clause] = sym_compile_clause,
  [sym__compiler_parameter_clause] = sym__compiler_parameter_clause,
  [sym_editionable_noneditionable] = sym_editionable_noneditionable,
  [sym_sharing_clause] = sym_sharing_clause,
  [sym_default_collation_clause] = sym_default_collation_clause,
  [sym_invoker_rights_clause] = sym_invoker_rights_clause,
  [sym_accessible_by_clause] = sym_accessible_by_clause,
  [sym_accessor] = sym_accessor,
  [sym_unit_kind] = sym_unit_kind,
  [sym_reuse_settings] = sym_reuse_settings,
  [sym__schema] = sym__schema,
  [sym_is_as] = sym_is_as,
  [sym_end_obj] = sym_end_obj,
  [sym_package_item_list] = sym_package_item_list,
  [sym_identifier] = sym_identifier,
  [sym__quoted_identifier] = sym__quoted_identifier,
  [sym__literal] = sym__literal,
  [sym_literal_boolean] = sym_literal_boolean,
  [sym_literal_number] = sym_literal_number,
  [sym_literal_string] = sym_literal_string,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_create_package_repeat1] = aux_sym_create_package_repeat1,
  [aux_sym_create_package_repeat2] = aux_sym_create_package_repeat2,
  [aux_sym_alter_package_repeat1] = aux_sym_alter_package_repeat1,
  [aux_sym_compile_clause_repeat1] = aux_sym_compile_clause_repeat1,
  [aux_sym_accessible_by_clause_repeat1] = aux_sym_accessible_by_clause_repeat1,
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
  [aux_sym_create_package_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_package_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_package_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_package_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_alter_package_token1] = {
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
  [aux_sym_sharing_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sharing_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_default_collation_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_default_collation_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_default_collation_clause_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_invoker_rights_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_invoker_rights_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_invoker_rights_clause_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accessible_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accessible_by_clause_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unit_kind_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unit_kind_token2] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_byte_char_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_byte_char_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_is_as_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_is_as_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_end_obj_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_is_null_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_is_not_null_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_boolean_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__character_datatypes_varchar2_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__character_datatypes_nchar_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__character_datatypes_nvarchar2_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token11] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token13] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token14] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token15] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_keyword_token16] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_number_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_float_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__long_and_raw_datatypes_long_raw_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__long_and_raw_datatypes_long_raw_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__datetime_datatypes_keyword_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__datetime_datatypes_date_timestamp_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__datetime_datatypes_date_timestamp_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__datetime_datatypes_date_timestamp_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__datetime_datatypes_date_timestamp_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__datetime_datatypes_date_timestamp_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__datetime_datatypes_date_interval_year_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__datetime_datatypes_date_interval_year_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__datetime_datatypes_date_interval_year_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__datetime_datatypes_date_interval_year_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__datetime_datatypes_date_interval_day_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__datetime_datatypes_date_interval_day_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_large_object_datatypes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_large_object_datatypes_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_large_object_datatypes_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_large_object_datatypes_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rowid_datatypes_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__referenced_datatypes_rowtype_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_logical_datatypes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__rowid_datatypes_urowid_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ansi_supported_datatypes_character_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ansi_supported_datatypes_character_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ansi_supported_datatypes_varchar_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ansi_supported_datatypes_double_precision_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ansi_supported_datatypes_double_precision_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_supplied_datatypes_any_types_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_supplied_datatypes_any_types_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_supplied_datatypes_any_types_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_supplied_datatypes_any_types_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_supplied_datatypes_xml_types_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_supplied_datatypes_xml_types_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_supplied_datatypes_spatial_types_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_supplied_datatypes_spatial_types_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_supplied_datatypes_spatial_types_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_datatypes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_datatypes_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_datatypes_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_datatypes_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_datatypes_token5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
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
  [aux_sym_literal_boolean_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_boolean_token2] = {
    .visible = true,
    .named = false,
  },
  [sym__single_quote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_ml] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_sl] = {
    .visible = true,
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
  [sym__create_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_create_package] = {
    .visible = true,
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
  [sym_sharing_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_default_collation_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_invoker_rights_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_accessible_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_reuse_settings] = {
    .visible = true,
    .named = true,
  },
  [sym__schema] = {
    .visible = false,
    .named = true,
  },
  [sym_is_as] = {
    .visible = true,
    .named = true,
  },
  [sym_end_obj] = {
    .visible = true,
    .named = true,
  },
  [sym_package_item_list] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_string] = {
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
  [aux_sym_create_package_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_package_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alter_package_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compile_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accessible_by_clause_repeat1] = {
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
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 4},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 1},
  [13] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 1},
  [17] = {.index = 27, .length = 1},
  [18] = {.index = 28, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_obj_name, 2},
  [1] =
    {field_schema_name, 0},
  [2] =
    {field_obj_name, 3},
    {field_schema_name, 2, .inherited = true},
  [4] =
    {field_name, 1},
  [5] =
    {field_compile_parameter_name, 0, .inherited = true},
    {field_compile_parameter_value, 0, .inherited = true},
  [7] =
    {field_compile_parameter_name, 1, .inherited = true},
    {field_compile_parameter_value, 1, .inherited = true},
  [9] =
    {field_compile_parameter_name, 2, .inherited = true},
    {field_compile_parameter_value, 2, .inherited = true},
  [11] =
    {field_compile_parameter_name, 0, .inherited = true},
    {field_compile_parameter_name, 1, .inherited = true},
    {field_compile_parameter_value, 0, .inherited = true},
    {field_compile_parameter_value, 1, .inherited = true},
  [15] =
    {field_obj_name, 3},
  [16] =
    {field_compile_parameter_name, 3, .inherited = true},
    {field_compile_parameter_value, 3, .inherited = true},
  [18] =
    {field_compile_parameter_name, 0},
    {field_compile_parameter_value, 2},
  [20] =
    {field_obj_name, 4},
  [21] =
    {field_schema_name, 0, .inherited = true},
  [22] =
    {field_obj_name, 4},
    {field_schema_name, 3, .inherited = true},
  [24] =
    {field_obj_name, 5},
    {field_schema_name, 4, .inherited = true},
  [26] =
    {field_obj_name, 5},
  [27] =
    {field_schema_name, 1, .inherited = true},
  [28] =
    {field_obj_name, 6},
    {field_schema_name, 5, .inherited = true},
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
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 60,
  [76] = 76,
  [77] = 47,
  [78] = 78,
  [79] = 79,
  [80] = 47,
  [81] = 60,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 84,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 218,
  [229] = 218,
  [230] = 221,
  [231] = 221,
  [232] = 232,
  [233] = 179,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(175);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(756);
      if (lookahead == '%') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == ',') ADVANCE(285);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(176);
      if (lookahead == '<') ADVANCE(287);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(289);
      if (lookahead == '\\') SKIP(165)
      if (lookahead == '^') ADVANCE(22);
      if (lookahead == '~') ADVANCE(23);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(466);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(486);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(310);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(311);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(679);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(490);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(432);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(633);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(315);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(492);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(651);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(319);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(499);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(556);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(459);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('G' <= lookahead && lookahead <= 'Q') ||
          ('g' <= lookahead && lookahead <= 'q')) ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(770);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(756);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(727);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(316);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(659);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(756);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(176);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(763);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(765);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(176);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(162);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(29);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(770);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(769);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(768);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(771);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(773);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(292);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(294);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(293);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(159);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(116);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(135);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(103);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 52:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 53:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 54:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 56:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 76:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 77:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 78:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 79:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 80:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 82:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 83:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 84:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 85:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 86:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 92:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(33);
      END_STATE();
    case 93:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 104:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 128:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 141:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 145:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 157:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 158:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 159:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 160:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 161:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(184);
      END_STATE();
    case 162:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(202);
      END_STATE();
    case 163:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(14);
      END_STATE();
    case 164:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 165:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(164)
      END_STATE();
    case 166:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') SKIP(172)
      END_STATE();
    case 167:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') SKIP(172)
      if (lookahead == '\r') SKIP(166)
      END_STATE();
    case 168:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') SKIP(173)
      END_STATE();
    case 169:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') SKIP(173)
      if (lookahead == '\r') SKIP(168)
      END_STATE();
    case 170:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') SKIP(174)
      END_STATE();
    case 171:
      if (eof) ADVANCE(175);
      if (lookahead == '\n') SKIP(174)
      if (lookahead == '\r') SKIP(170)
      END_STATE();
    case 172:
      if (eof) ADVANCE(175);
      if (lookahead == '"') ADVANCE(756);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(176);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '\\') SKIP(167)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(524);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(606);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(601);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(436);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(615);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(172)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 173:
      if (eof) ADVANCE(175);
      if (lookahead == '"') ADVANCE(756);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(176);
      if (lookahead == '\\') SKIP(169)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(524);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(606);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(601);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(615);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(173)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 174:
      if (eof) ADVANCE(175);
      if (lookahead == '"') ADVANCE(756);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(176);
      if (lookahead == '\\') SKIP(171)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(524);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(601);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(615);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(174)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_create_package_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_create_package_token2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_create_package_token3);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_create_package_token4);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_alter_package_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_alter_procedure_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_alter_function_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_alter_library_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_compile_clause_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_compile_clause_token2);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_compile_clause_token3);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_compile_clause_token4);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(286);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_editionable_noneditionable_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_editionable_noneditionable_token2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_sharing_clause_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_sharing_clause_token2);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_default_collation_clause_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_default_collation_clause_token2);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_default_collation_clause_token3);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_invoker_rights_clause_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_invoker_rights_clause_token2);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_invoker_rights_clause_token3);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_accessible_by_clause_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_accessible_by_clause_token2);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_accessible_by_clause_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_unit_kind_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_unit_kind_token2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_reuse_settings_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_reuse_settings_token2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_byte_char_token1);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_byte_char_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_is_as_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_is_as_token2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_end_obj_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_is_null_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_is_not_null_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__expression_boolean_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__character_datatypes_varchar2_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__character_datatypes_nchar_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__character_datatypes_nvarchar2_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token2);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token3);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token4);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token5);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token6);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token7);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token9);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token10);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token11);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token12);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token13);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token14);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token15);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__number_datatypes_keyword_token16);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__number_datatypes_number_token1);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__number_datatypes_float_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__long_and_raw_datatypes_long_raw_token1);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__long_and_raw_datatypes_long_raw_token2);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_keyword_token1);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_timestamp_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_timestamp_token2);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_timestamp_token3);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_timestamp_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(707);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_timestamp_token5);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_interval_year_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_interval_year_token2);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_interval_year_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(593);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_interval_year_token4);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_interval_day_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_interval_day_token2);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_large_object_datatypes_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_large_object_datatypes_token2);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_large_object_datatypes_token3);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_large_object_datatypes_token4);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_rowid_datatypes_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__referenced_datatypes_rowtype_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_logical_datatypes_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__rowid_datatypes_urowid_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_character_token1);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_character_token2);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_varchar_token1);
      if (lookahead == '2') ADVANCE(219);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token2);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_double_precision_token1);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_double_precision_token2);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_supplied_datatypes_any_types_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_supplied_datatypes_any_types_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(442);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_supplied_datatypes_any_types_token3);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_supplied_datatypes_any_types_token4);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_supplied_datatypes_xml_types_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_supplied_datatypes_xml_types_token2);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_supplied_datatypes_spatial_types_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_supplied_datatypes_spatial_types_token2);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_supplied_datatypes_spatial_types_token3);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_object_datatypes_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_object_datatypes_token2);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_object_datatypes_token3);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_object_datatypes_token4);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_object_datatypes_token5);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(288);
      if (lookahead == '>') ADVANCE(291);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '2') ADVANCE(221);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(474);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(395);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(734);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(376);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(584);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(549);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(691);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(694);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(696);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(505);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(704);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(729);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(531);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(598);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(570);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(739);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(740);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(370);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(670);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(680);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(431);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(370);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(612);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(370);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(731);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(585);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(487);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(577);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(533);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(324);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(654);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(526);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(534);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(677);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(636);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(527);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(682);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(686);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(638);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(528);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(529);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(643);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(690);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(644);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(692);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(664);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(709);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(662);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(456);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(358);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(475);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(749);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(708);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(720);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(723);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(368);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(254);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(255);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(522);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(728);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(268);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(322);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(728);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(666);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(539);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(440);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(543);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(544);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(545);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(546);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(547);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(372);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(702);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(742);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(684);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(523);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(266);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(488);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(509);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(503);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(491);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(613);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(433);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(712);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(418);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(329);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(468);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(604);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(713);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(338);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(715);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(489);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(718);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(353);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(253);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(262);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(743);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(548);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(743);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(596);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(477);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(327);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(455);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(671);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(618);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(553);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(590);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(501);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(501);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(733);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(346);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(750);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(350);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(620);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(554);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(521);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(766);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(767);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(594);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(710);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(650);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(711);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(497);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(586);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(203);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(506);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(240);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(186);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(264);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(479);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(301);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(672);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(435);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(417);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(439);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(591);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(631);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(443);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(738);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(445);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(449);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(451);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(452);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(244);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(251);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(498);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(597);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(532);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(430);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(653);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(333);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(603);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(339);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(341);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(380);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(467);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(493);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(625);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(471);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(407);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(471);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(737);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(751);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(537);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(697);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(701);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(391);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(683);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(371);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(588);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(386);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(575);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(719);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(576);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(678);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(706);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(607);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(582);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(541);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(608);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(609);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(610);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(611);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(364);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(619);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(726);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(454);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(347);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(702);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(216);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(245);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(676);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(550);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(632);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(525);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(363);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(348);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(674);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(551);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(410);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(687);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(414);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(464);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(416);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(425);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(426);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(428);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(429);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(437);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(510);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(513);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(343);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(616);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(617);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(721);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(555);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(632);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(621);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(622);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(406);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(444);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(457);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(334);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(460);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(261);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(385);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(685);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(297);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(472);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(473);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(470);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(699);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(409);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(703);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(688);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(535);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(441);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(328);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(714);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(716);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(724);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(722);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(725);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(561);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(331);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(580);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(624);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(557);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(430);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(572);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(574);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(393);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(579);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(567);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(568);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(569);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(562);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(340);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(735);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(589);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(736);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(243);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(197);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(455);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(605);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(408);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(415);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(419);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(420);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(421);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(423);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(514);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(508);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(500);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(747);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(661);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(744);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(745);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(746);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(504);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(494);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(625);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(660);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(335);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(480);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(481);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(482);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(675);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(300);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(519);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(412);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(693);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(602);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(511);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(717);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(517);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(483);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(484);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(512);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(299);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(252);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(495);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(321);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(413);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(656);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(507);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(446);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(447);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(450);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(752);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(753);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(754);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(462);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(520);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(570);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(469);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(362);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(665);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(538);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(677);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(663);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(681);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(366);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(367);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(422);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(337);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(241);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(496);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(502);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(399);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(188);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(184);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(277);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(278);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(298);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(302);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(303);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(626);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(627);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(628);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(629);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(630);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(761);
      if (lookahead == '\r') ADVANCE(758);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(763);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(761);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(763);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '"') ADVANCE(772);
      if (lookahead != 0) ADVANCE(759);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '*') ADVANCE(765);
      if (lookahead != 0) ADVANCE(763);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(762);
      if (lookahead == '/') ADVANCE(760);
      if (lookahead == '\\') ADVANCE(757);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(761);
      if (lookahead != 0) ADVANCE(763);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(759);
      if (lookahead != 0) ADVANCE(763);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(763);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '*') ADVANCE(764);
      if (lookahead == '/') ADVANCE(763);
      if (lookahead != 0) ADVANCE(765);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '*') ADVANCE(764);
      if (lookahead != 0) ADVANCE(765);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_literal_boolean_token1);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_literal_boolean_token2);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(163);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(770);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_comment_ml);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_comment_sl);
      if (lookahead == '"') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(773);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_comment_sl);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(773);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 172},
  [3] = {.lex_state = 173},
  [4] = {.lex_state = 174},
  [5] = {.lex_state = 174},
  [6] = {.lex_state = 174},
  [7] = {.lex_state = 174},
  [8] = {.lex_state = 174},
  [9] = {.lex_state = 174},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 174},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 172},
  [25] = {.lex_state = 172},
  [26] = {.lex_state = 172},
  [27] = {.lex_state = 172},
  [28] = {.lex_state = 174},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 174},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 174},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 172},
  [35] = {.lex_state = 172},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 172},
  [38] = {.lex_state = 172},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 172},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 172},
  [51] = {.lex_state = 172},
  [52] = {.lex_state = 172},
  [53] = {.lex_state = 172},
  [54] = {.lex_state = 172},
  [55] = {.lex_state = 172},
  [56] = {.lex_state = 172},
  [57] = {.lex_state = 174},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 174},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 172},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 172},
  [81] = {.lex_state = 172},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 172},
  [84] = {.lex_state = 172},
  [85] = {.lex_state = 172},
  [86] = {.lex_state = 172},
  [87] = {.lex_state = 172},
  [88] = {.lex_state = 172},
  [89] = {.lex_state = 172},
  [90] = {.lex_state = 172},
  [91] = {.lex_state = 172},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 172},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 13},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 13},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 13},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 172},
  [214] = {.lex_state = 13},
  [215] = {.lex_state = 13},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 761},
  [222] = {.lex_state = 13},
  [223] = {.lex_state = 13},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 13},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 761},
  [231] = {.lex_state = 761},
  [232] = {.lex_state = 0},
  [233] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_create_package_token1] = ACTIONS(1),
    [aux_sym_create_package_token2] = ACTIONS(1),
    [aux_sym_create_package_token3] = ACTIONS(1),
    [aux_sym_create_package_token4] = ACTIONS(1),
    [aux_sym_alter_package_token1] = ACTIONS(1),
    [aux_sym_alter_procedure_token1] = ACTIONS(1),
    [aux_sym_alter_function_token1] = ACTIONS(1),
    [aux_sym_alter_library_token1] = ACTIONS(1),
    [aux_sym_compile_clause_token1] = ACTIONS(1),
    [aux_sym_compile_clause_token2] = ACTIONS(1),
    [aux_sym_compile_clause_token3] = ACTIONS(1),
    [aux_sym_compile_clause_token4] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_editionable_noneditionable_token1] = ACTIONS(1),
    [aux_sym_sharing_clause_token1] = ACTIONS(1),
    [aux_sym_sharing_clause_token2] = ACTIONS(1),
    [aux_sym_default_collation_clause_token1] = ACTIONS(1),
    [aux_sym_default_collation_clause_token2] = ACTIONS(1),
    [aux_sym_default_collation_clause_token3] = ACTIONS(1),
    [aux_sym_invoker_rights_clause_token1] = ACTIONS(1),
    [aux_sym_invoker_rights_clause_token2] = ACTIONS(1),
    [aux_sym_invoker_rights_clause_token3] = ACTIONS(1),
    [aux_sym_accessible_by_clause_token1] = ACTIONS(1),
    [aux_sym_accessible_by_clause_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_unit_kind_token1] = ACTIONS(1),
    [aux_sym_unit_kind_token2] = ACTIONS(1),
    [aux_sym_reuse_settings_token1] = ACTIONS(1),
    [aux_sym_reuse_settings_token2] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_byte_char_token1] = ACTIONS(1),
    [aux_sym_byte_char_token2] = ACTIONS(1),
    [aux_sym_is_as_token1] = ACTIONS(1),
    [aux_sym_is_as_token2] = ACTIONS(1),
    [aux_sym_end_obj_token1] = ACTIONS(1),
    [aux_sym_is_null_token1] = ACTIONS(1),
    [aux_sym_is_not_null_token1] = ACTIONS(1),
    [aux_sym__expression_boolean_token1] = ACTIONS(1),
    [aux_sym__character_datatypes_varchar2_token1] = ACTIONS(1),
    [aux_sym__character_datatypes_nchar_token1] = ACTIONS(1),
    [aux_sym__character_datatypes_nvarchar2_token1] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token1] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token2] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token3] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token4] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token5] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token6] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token7] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token8] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token9] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token10] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token11] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token12] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token13] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token14] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token15] = ACTIONS(1),
    [aux_sym__number_datatypes_keyword_token16] = ACTIONS(1),
    [aux_sym__number_datatypes_number_token1] = ACTIONS(1),
    [aux_sym__number_datatypes_float_token1] = ACTIONS(1),
    [aux_sym__long_and_raw_datatypes_long_raw_token1] = ACTIONS(1),
    [aux_sym__long_and_raw_datatypes_long_raw_token2] = ACTIONS(1),
    [aux_sym__datetime_datatypes_keyword_token1] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_timestamp_token1] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_timestamp_token2] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_timestamp_token3] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_timestamp_token4] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_timestamp_token5] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_interval_year_token1] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_interval_year_token2] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_interval_year_token3] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_interval_year_token4] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_interval_day_token1] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_interval_day_token2] = ACTIONS(1),
    [aux_sym_large_object_datatypes_token1] = ACTIONS(1),
    [aux_sym_large_object_datatypes_token2] = ACTIONS(1),
    [aux_sym_large_object_datatypes_token3] = ACTIONS(1),
    [aux_sym_large_object_datatypes_token4] = ACTIONS(1),
    [aux_sym_rowid_datatypes_token1] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym__referenced_datatypes_rowtype_token1] = ACTIONS(1),
    [aux_sym_logical_datatypes_token1] = ACTIONS(1),
    [aux_sym__rowid_datatypes_urowid_token1] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_character_token1] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_character_token2] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_varchar_token1] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token1] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token2] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token3] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_double_precision_token1] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_double_precision_token2] = ACTIONS(1),
    [aux_sym_supplied_datatypes_any_types_token1] = ACTIONS(1),
    [aux_sym_supplied_datatypes_any_types_token2] = ACTIONS(1),
    [aux_sym_supplied_datatypes_any_types_token3] = ACTIONS(1),
    [aux_sym_supplied_datatypes_any_types_token4] = ACTIONS(1),
    [aux_sym_supplied_datatypes_xml_types_token1] = ACTIONS(1),
    [aux_sym_supplied_datatypes_xml_types_token2] = ACTIONS(1),
    [aux_sym_supplied_datatypes_spatial_types_token1] = ACTIONS(1),
    [aux_sym_supplied_datatypes_spatial_types_token2] = ACTIONS(1),
    [aux_sym_supplied_datatypes_spatial_types_token3] = ACTIONS(1),
    [aux_sym_object_datatypes_token1] = ACTIONS(1),
    [aux_sym_object_datatypes_token2] = ACTIONS(1),
    [aux_sym_object_datatypes_token3] = ACTIONS(1),
    [aux_sym_object_datatypes_token4] = ACTIONS(1),
    [aux_sym_object_datatypes_token5] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [sym__unquoted_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_literal_boolean_token1] = ACTIONS(1),
    [aux_sym_literal_boolean_token2] = ACTIONS(1),
    [sym__single_quote_string] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(225),
    [sym__element] = STATE(10),
    [sym_sql_statement] = STATE(10),
    [sym__ddl_statement] = STATE(175),
    [sym__create_statement] = STATE(175),
    [sym_create_package] = STATE(175),
    [sym__alter_statement] = STATE(175),
    [sym_alter_package] = STATE(175),
    [sym_alter_procedure] = STATE(175),
    [sym_alter_function] = STATE(175),
    [sym_alter_library] = STATE(175),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_create_package_token1] = ACTIONS(5),
    [aux_sym_alter_package_token1] = ACTIONS(9),
    [sym_comment_ml] = ACTIONS(11),
    [sym_comment_sl] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(17), 1,
      aux_sym_compile_clause_token2,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(21), 1,
      sym__unquoted_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_compile_clause_repeat1,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(57), 1,
      sym__compiler_parameter_clause,
    STATE(86), 1,
      sym_reuse_settings,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(15), 3,
      aux_sym_create_package_token4,
      aux_sym_compile_clause_token3,
      aux_sym_compile_clause_token4,
    ACTIONS(13), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [47] = 11,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(21), 1,
      sym__unquoted_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_compile_clause_repeat1,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(57), 1,
      sym__compiler_parameter_clause,
    STATE(91), 1,
      sym_reuse_settings,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(27), 3,
      aux_sym_create_package_token4,
      aux_sym_compile_clause_token3,
      aux_sym_compile_clause_token4,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [91] = 10,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(21), 1,
      sym__unquoted_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_compile_clause_repeat1,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(57), 1,
      sym__compiler_parameter_clause,
    STATE(87), 1,
      sym_reuse_settings,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(29), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [130] = 10,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(21), 1,
      sym__unquoted_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_compile_clause_repeat1,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(57), 1,
      sym__compiler_parameter_clause,
    STATE(85), 1,
      sym_reuse_settings,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(31), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [169] = 10,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(21), 1,
      sym__unquoted_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_compile_clause_repeat1,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(57), 1,
      sym__compiler_parameter_clause,
    STATE(89), 1,
      sym_reuse_settings,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(29), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [208] = 10,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(21), 1,
      sym__unquoted_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      aux_sym_compile_clause_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(57), 1,
      sym__compiler_parameter_clause,
    STATE(91), 1,
      sym_reuse_settings,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [247] = 10,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(21), 1,
      sym__unquoted_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_compile_clause_repeat1,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(57), 1,
      sym__compiler_parameter_clause,
    STATE(83), 1,
      sym_reuse_settings,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(33), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [286] = 10,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(21), 1,
      sym__unquoted_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      aux_sym_compile_clause_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(57), 1,
      sym__compiler_parameter_clause,
    STATE(88), 1,
      sym_reuse_settings,
    STATE(213), 1,
      sym_identifier,
    ACTIONS(35), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [325] = 7,
    ACTIONS(5), 1,
      aux_sym_create_package_token1,
    ACTIONS(9), 1,
      aux_sym_alter_package_token1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_comment,
    ACTIONS(11), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(14), 3,
      sym__element,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
    STATE(175), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [357] = 12,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    ACTIONS(44), 1,
      sym__unquoted_identifier,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_identifier,
    STATE(77), 1,
      sym__quoted_identifier,
    STATE(82), 1,
      sym_accessor,
    STATE(105), 1,
      sym_unit_kind,
    STATE(136), 1,
      sym__schema,
    STATE(11), 2,
      sym_comment,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(39), 5,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
  [399] = 13,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(12), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_create_package_repeat1,
    STATE(40), 1,
      sym_sharing_clause,
    STATE(182), 1,
      sym_is_as,
    ACTIONS(50), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [443] = 13,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(13), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_create_package_repeat1,
    STATE(33), 1,
      sym_sharing_clause,
    STATE(191), 1,
      sym_is_as,
    ACTIONS(50), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [487] = 6,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      aux_sym_create_package_token1,
    ACTIONS(67), 1,
      aux_sym_alter_package_token1,
    ACTIONS(70), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(14), 4,
      sym__element,
      sym_sql_statement,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(175), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [517] = 13,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_create_package_repeat1,
    STATE(71), 1,
      sym_sharing_clause,
    STATE(188), 1,
      sym_is_as,
    ACTIONS(50), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [561] = 7,
    ACTIONS(75), 1,
      sym__unquoted_identifier,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(57), 1,
      sym__compiler_parameter_clause,
    STATE(213), 1,
      sym_identifier,
    STATE(16), 2,
      sym_comment,
      aux_sym_compile_clause_repeat1,
    ACTIONS(73), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      sym_comment_ml,
      sym_comment_sl,
  [593] = 13,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(85), 1,
      sym__unquoted_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_accessible_by_clause_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(76), 1,
      sym_identifier,
    STATE(77), 1,
      sym__quoted_identifier,
    STATE(82), 1,
      sym_accessor,
    STATE(105), 1,
      sym_unit_kind,
    STATE(136), 1,
      sym__schema,
    ACTIONS(81), 5,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
  [637] = 13,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(18), 1,
      sym_comment,
    STATE(42), 1,
      sym_sharing_clause,
    STATE(45), 1,
      aux_sym_create_package_repeat1,
    STATE(210), 1,
      sym_is_as,
    ACTIONS(50), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [681] = 12,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(19), 1,
      sym_comment,
    STATE(67), 1,
      sym_sharing_clause,
    STATE(70), 1,
      aux_sym_create_package_repeat1,
    STATE(202), 1,
      sym_is_as,
    ACTIONS(50), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [722] = 12,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(20), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_create_package_repeat1,
    STATE(44), 1,
      sym_sharing_clause,
    STATE(208), 1,
      sym_is_as,
    ACTIONS(50), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [763] = 12,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(85), 1,
      sym__unquoted_identifier,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym_accessible_by_clause_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(76), 1,
      sym_identifier,
    STATE(77), 1,
      sym__quoted_identifier,
    STATE(82), 1,
      sym_accessor,
    STATE(105), 1,
      sym_unit_kind,
    STATE(136), 1,
      sym__schema,
    ACTIONS(81), 5,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
  [804] = 12,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(22), 1,
      sym_comment,
    STATE(61), 1,
      sym_sharing_clause,
    STATE(63), 1,
      aux_sym_create_package_repeat1,
    STATE(207), 1,
      sym_is_as,
    ACTIONS(50), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [845] = 12,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(23), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_create_package_repeat1,
    STATE(58), 1,
      sym_sharing_clause,
    STATE(185), 1,
      sym_is_as,
    ACTIONS(50), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [886] = 6,
    ACTIONS(58), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(54), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [913] = 6,
    ACTIONS(58), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(56), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [940] = 6,
    ACTIONS(58), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(50), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [967] = 6,
    ACTIONS(58), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(52), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [994] = 3,
    ACTIONS(103), 1,
      sym__unquoted_identifier,
    STATE(28), 1,
      sym_comment,
    ACTIONS(101), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      anon_sym_DQUOTE,
      sym_comment_ml,
      sym_comment_sl,
  [1014] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(29), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(197), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1048] = 3,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    STATE(30), 1,
      sym_comment,
    ACTIONS(105), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      anon_sym_DQUOTE,
      sym_comment_ml,
      sym_comment_sl,
  [1068] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(31), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(211), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1102] = 3,
    ACTIONS(111), 1,
      sym__unquoted_identifier,
    STATE(32), 1,
      sym_comment,
    ACTIONS(109), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      anon_sym_DQUOTE,
      sym_comment_ml,
      sym_comment_sl,
  [1122] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(33), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_create_package_repeat1,
    STATE(211), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1156] = 5,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(38), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [1180] = 5,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(38), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [1204] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(36), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(186), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1238] = 5,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(38), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [1262] = 4,
    ACTIONS(121), 1,
      aux_sym_compile_clause_token1,
    ACTIONS(124), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(38), 4,
      sym_compile_clause,
      sym_editionable_noneditionable,
      sym_comment,
      aux_sym_alter_package_repeat1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [1284] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(39), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(184), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1318] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(40), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_create_package_repeat1,
    STATE(184), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1352] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(41), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(200), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1386] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(42), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_create_package_repeat1,
    STATE(187), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1420] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(43), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(190), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1454] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(44), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_create_package_repeat1,
    STATE(192), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1488] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(45), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(187), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1522] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(46), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(196), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1556] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(47), 1,
      sym_comment,
    ACTIONS(127), 10,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
      aux_sym_default_collation_clause_token1,
      aux_sym_invoker_rights_clause_token1,
      aux_sym_accessible_by_clause_token1,
      anon_sym_DOT,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
  [1578] = 5,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(62), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [1602] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(49), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(189), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1636] = 5,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(38), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [1660] = 5,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(37), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [1684] = 5,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(38), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [1708] = 5,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(35), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [1732] = 5,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(38), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [1756] = 5,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(34), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [1780] = 5,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(38), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [1804] = 3,
    ACTIONS(147), 1,
      sym__unquoted_identifier,
    STATE(57), 1,
      sym_comment,
    ACTIONS(145), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      anon_sym_DQUOTE,
      sym_comment_ml,
      sym_comment_sl,
  [1824] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(58), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_create_package_repeat1,
    STATE(194), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1858] = 3,
    ACTIONS(151), 1,
      sym__unquoted_identifier,
    STATE(59), 1,
      sym_comment,
    ACTIONS(149), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      anon_sym_DQUOTE,
      sym_comment_ml,
      sym_comment_sl,
  [1878] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(60), 1,
      sym_comment,
    ACTIONS(153), 10,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
      aux_sym_default_collation_clause_token1,
      aux_sym_invoker_rights_clause_token1,
      aux_sym_accessible_by_clause_token1,
      anon_sym_DOT,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
  [1900] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(61), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_create_package_repeat1,
    STATE(193), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1934] = 5,
    ACTIONS(91), 1,
      aux_sym_compile_clause_token1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(38), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(155), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [1958] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(63), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(195), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1992] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(64), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(199), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [2026] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(65), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(203), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [2060] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(66), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(206), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [2094] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(36), 1,
      aux_sym_create_package_repeat1,
    STATE(67), 1,
      sym_comment,
    STATE(201), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [2128] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(68), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(183), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [2162] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(69), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(212), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [2196] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(70), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_create_package_repeat1,
    STATE(198), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [2230] = 10,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(52), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(54), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(56), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(46), 1,
      aux_sym_create_package_repeat1,
    STATE(71), 1,
      sym_comment,
    STATE(203), 1,
      sym_is_as,
    ACTIONS(60), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [2264] = 8,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(157), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(160), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(163), 1,
      aux_sym_accessible_by_clause_token1,
    ACTIONS(166), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(72), 2,
      sym_comment,
      aux_sym_create_package_repeat1,
    STATE(93), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [2293] = 6,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(58), 1,
      anon_sym_DOT,
    ACTIONS(170), 1,
      sym__unquoted_identifier,
    STATE(73), 1,
      sym_comment,
    ACTIONS(168), 7,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DQUOTE,
  [2318] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(174), 1,
      sym__single_quote_string,
    ACTIONS(176), 1,
      sym__number,
    STATE(74), 1,
      sym_comment,
    ACTIONS(172), 3,
      aux_sym_is_null_token1,
      aux_sym_literal_boolean_token1,
      aux_sym_literal_boolean_token2,
    STATE(59), 4,
      sym__literal,
      sym_literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2345] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(178), 1,
      sym__unquoted_identifier,
    STATE(75), 1,
      sym_comment,
    ACTIONS(153), 8,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [2368] = 6,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(58), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      sym__unquoted_identifier,
    STATE(76), 1,
      sym_comment,
    ACTIONS(180), 7,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DQUOTE,
  [2393] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(184), 1,
      sym__unquoted_identifier,
    STATE(77), 1,
      sym_comment,
    ACTIONS(127), 8,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [2416] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(188), 1,
      sym__unquoted_identifier,
    STATE(78), 1,
      sym_comment,
    ACTIONS(186), 7,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DQUOTE,
  [2438] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(192), 1,
      sym__unquoted_identifier,
    STATE(79), 1,
      sym_comment,
    ACTIONS(190), 7,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DQUOTE,
  [2460] = 2,
    STATE(80), 1,
      sym_comment,
    ACTIONS(127), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      anon_sym_DOT,
      sym_comment_ml,
      sym_comment_sl,
  [2476] = 2,
    STATE(81), 1,
      sym_comment,
    ACTIONS(153), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      anon_sym_DOT,
      sym_comment_ml,
      sym_comment_sl,
  [2492] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(196), 1,
      sym__unquoted_identifier,
    STATE(82), 1,
      sym_comment,
    ACTIONS(194), 7,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DQUOTE,
  [2514] = 2,
    STATE(83), 1,
      sym_comment,
    ACTIONS(198), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [2529] = 2,
    STATE(84), 1,
      sym_comment,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [2544] = 2,
    STATE(85), 1,
      sym_comment,
    ACTIONS(202), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [2559] = 2,
    STATE(86), 1,
      sym_comment,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [2574] = 2,
    STATE(87), 1,
      sym_comment,
    ACTIONS(204), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [2589] = 2,
    STATE(88), 1,
      sym_comment,
    ACTIONS(206), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [2604] = 2,
    STATE(89), 1,
      sym_comment,
    ACTIONS(204), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [2619] = 2,
    STATE(90), 1,
      sym_comment,
    ACTIONS(208), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [2634] = 2,
    STATE(91), 1,
      sym_comment,
    ACTIONS(35), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym_comment_ml,
      sym_comment_sl,
  [2649] = 8,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(92), 1,
      sym_comment,
    STATE(151), 1,
      sym__schema,
  [2674] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(93), 1,
      sym_comment,
    ACTIONS(212), 5,
      aux_sym_default_collation_clause_token1,
      aux_sym_invoker_rights_clause_token1,
      aux_sym_accessible_by_clause_token1,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
  [2691] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(94), 1,
      sym_comment,
    ACTIONS(214), 5,
      aux_sym_default_collation_clause_token1,
      aux_sym_invoker_rights_clause_token1,
      aux_sym_accessible_by_clause_token1,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
  [2708] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(216), 1,
      aux_sym_create_package_token2,
    ACTIONS(218), 1,
      aux_sym_create_package_token4,
    STATE(95), 1,
      sym_comment,
    STATE(227), 1,
      sym_editionable_noneditionable,
    ACTIONS(220), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
  [2731] = 8,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(222), 1,
      sym__unquoted_identifier,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_identifier,
    STATE(80), 1,
      sym__quoted_identifier,
    STATE(96), 1,
      sym_comment,
    STATE(155), 1,
      sym__schema,
  [2756] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(97), 1,
      sym_comment,
    ACTIONS(226), 5,
      aux_sym_default_collation_clause_token1,
      aux_sym_invoker_rights_clause_token1,
      aux_sym_accessible_by_clause_token1,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
  [2773] = 8,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(222), 1,
      sym__unquoted_identifier,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_identifier,
    STATE(80), 1,
      sym__quoted_identifier,
    STATE(98), 1,
      sym_comment,
    STATE(154), 1,
      sym__schema,
  [2798] = 8,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(222), 1,
      sym__unquoted_identifier,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym_identifier,
    STATE(80), 1,
      sym__quoted_identifier,
    STATE(99), 1,
      sym_comment,
    STATE(153), 1,
      sym__schema,
  [2823] = 8,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(222), 1,
      sym__unquoted_identifier,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_identifier,
    STATE(80), 1,
      sym__quoted_identifier,
    STATE(100), 1,
      sym_comment,
    STATE(152), 1,
      sym__schema,
  [2848] = 8,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym__unquoted_identifier,
    STATE(15), 1,
      sym_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(101), 1,
      sym_comment,
    STATE(121), 1,
      sym__schema,
  [2873] = 8,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym__unquoted_identifier,
    STATE(13), 1,
      sym_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(102), 1,
      sym_comment,
    STATE(120), 1,
      sym__schema,
  [2898] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(103), 1,
      sym_comment,
    ACTIONS(228), 5,
      aux_sym_default_collation_clause_token1,
      aux_sym_invoker_rights_clause_token1,
      aux_sym_accessible_by_clause_token1,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
  [2915] = 8,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym__unquoted_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(104), 1,
      sym_comment,
    STATE(157), 1,
      sym__schema,
  [2940] = 8,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      sym__unquoted_identifier,
    STATE(73), 1,
      sym_identifier,
    STATE(77), 1,
      sym__quoted_identifier,
    STATE(105), 1,
      sym_comment,
    STATE(171), 1,
      sym__schema,
  [2965] = 8,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym__unquoted_identifier,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(106), 1,
      sym_comment,
    STATE(217), 1,
      sym_identifier,
  [2990] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(107), 1,
      sym_comment,
    ACTIONS(234), 5,
      aux_sym_default_collation_clause_token1,
      aux_sym_invoker_rights_clause_token1,
      aux_sym_accessible_by_clause_token1,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
  [3007] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(108), 1,
      sym_comment,
    STATE(149), 1,
      sym_end_obj,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3029] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(109), 1,
      sym_comment,
    STATE(173), 1,
      sym_end_obj,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3051] = 2,
    STATE(110), 1,
      sym_comment,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3063] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(111), 1,
      sym_comment,
    STATE(139), 1,
      sym_end_obj,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3085] = 2,
    STATE(112), 1,
      sym_comment,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3097] = 2,
    STATE(113), 1,
      sym_comment,
    ACTIONS(242), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3109] = 2,
    STATE(114), 1,
      sym_comment,
    ACTIONS(244), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3121] = 2,
    STATE(115), 1,
      sym_comment,
    ACTIONS(246), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3133] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(116), 1,
      sym_comment,
    STATE(166), 1,
      sym_end_obj,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3155] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(117), 1,
      sym_comment,
    STATE(129), 1,
      sym_end_obj,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3177] = 2,
    STATE(118), 1,
      sym_comment,
    ACTIONS(248), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3189] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(119), 1,
      sym_comment,
    STATE(156), 1,
      sym_end_obj,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3211] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym__unquoted_identifier,
    STATE(20), 1,
      sym_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(120), 1,
      sym_comment,
  [3233] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym__unquoted_identifier,
    STATE(19), 1,
      sym_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(121), 1,
      sym_comment,
  [3255] = 2,
    STATE(122), 1,
      sym_comment,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3267] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(110), 1,
      sym_end_obj,
    STATE(123), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3289] = 2,
    STATE(124), 1,
      sym_comment,
    ACTIONS(252), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3301] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(125), 1,
      sym_comment,
    STATE(163), 1,
      sym_end_obj,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3323] = 2,
    STATE(126), 1,
      sym_comment,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3335] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(112), 1,
      sym_end_obj,
    STATE(127), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3357] = 2,
    STATE(128), 1,
      sym_comment,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3369] = 2,
    STATE(129), 1,
      sym_comment,
    ACTIONS(256), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3381] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(130), 1,
      sym_comment,
    STATE(168), 1,
      sym_end_obj,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3403] = 2,
    STATE(131), 1,
      sym_comment,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3415] = 2,
    STATE(132), 1,
      sym_comment,
    ACTIONS(260), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3427] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(133), 1,
      sym_comment,
    STATE(170), 1,
      sym_end_obj,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3449] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(115), 1,
      sym_end_obj,
    STATE(134), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3471] = 2,
    STATE(135), 1,
      sym_comment,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3483] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      sym__unquoted_identifier,
    STATE(77), 1,
      sym__quoted_identifier,
    STATE(78), 1,
      sym_identifier,
    STATE(136), 1,
      sym_comment,
  [3505] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(262), 1,
      aux_sym_create_package_token4,
    ACTIONS(264), 1,
      aux_sym_alter_procedure_token1,
    ACTIONS(266), 1,
      aux_sym_alter_function_token1,
    ACTIONS(268), 1,
      aux_sym_alter_library_token1,
    STATE(137), 1,
      sym_comment,
  [3527] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(138), 1,
      sym_comment,
    STATE(172), 1,
      sym_end_obj,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3549] = 2,
    STATE(139), 1,
      sym_comment,
    ACTIONS(270), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3561] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(140), 1,
      sym_comment,
    STATE(176), 1,
      sym_end_obj,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3583] = 2,
    STATE(141), 1,
      sym_comment,
    ACTIONS(272), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3595] = 2,
    STATE(142), 1,
      sym_comment,
    ACTIONS(274), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3607] = 2,
    STATE(143), 1,
      sym_comment,
    ACTIONS(276), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3619] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(118), 1,
      sym_end_obj,
    STATE(144), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3641] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(132), 1,
      sym_end_obj,
    STATE(145), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3663] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(122), 1,
      sym_end_obj,
    STATE(146), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3685] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(114), 1,
      sym_end_obj,
    STATE(147), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3707] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(124), 1,
      sym_end_obj,
    STATE(148), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3729] = 2,
    STATE(149), 1,
      sym_comment,
    ACTIONS(278), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3741] = 2,
    STATE(150), 1,
      sym_comment,
    ACTIONS(280), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3753] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym__unquoted_identifier,
    STATE(23), 1,
      sym_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(151), 1,
      sym_comment,
  [3775] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(222), 1,
      sym__unquoted_identifier,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_identifier,
    STATE(80), 1,
      sym__quoted_identifier,
    STATE(152), 1,
      sym_comment,
  [3797] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(222), 1,
      sym__unquoted_identifier,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_identifier,
    STATE(80), 1,
      sym__quoted_identifier,
    STATE(153), 1,
      sym_comment,
  [3819] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(222), 1,
      sym__unquoted_identifier,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym_identifier,
    STATE(80), 1,
      sym__quoted_identifier,
    STATE(154), 1,
      sym_comment,
  [3841] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(222), 1,
      sym__unquoted_identifier,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_identifier,
    STATE(80), 1,
      sym__quoted_identifier,
    STATE(155), 1,
      sym_comment,
  [3863] = 2,
    STATE(156), 1,
      sym_comment,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3875] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym__unquoted_identifier,
    STATE(22), 1,
      sym_identifier,
    STATE(47), 1,
      sym__quoted_identifier,
    STATE(157), 1,
      sym_comment,
  [3897] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(126), 1,
      sym_end_obj,
    STATE(158), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3919] = 2,
    STATE(159), 1,
      sym_comment,
    ACTIONS(282), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [3931] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(159), 1,
      sym_end_obj,
    STATE(160), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3953] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(128), 1,
      sym_end_obj,
    STATE(161), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3975] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(150), 1,
      sym_end_obj,
    STATE(162), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [3997] = 2,
    STATE(163), 1,
      sym_comment,
    ACTIONS(284), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [4009] = 6,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(286), 1,
      aux_sym_create_package_token4,
    STATE(164), 1,
      sym_comment,
    STATE(220), 1,
      sym_editionable_noneditionable,
    ACTIONS(220), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
  [4029] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(131), 1,
      sym_end_obj,
    STATE(165), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [4051] = 2,
    STATE(166), 1,
      sym_comment,
    ACTIONS(288), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [4063] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(143), 1,
      sym_end_obj,
    STATE(167), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [4085] = 2,
    STATE(168), 1,
      sym_comment,
    ACTIONS(290), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [4097] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(142), 1,
      sym_end_obj,
    STATE(169), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [4119] = 2,
    STATE(170), 1,
      sym_comment,
    ACTIONS(290), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [4131] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      sym__unquoted_identifier,
    STATE(77), 1,
      sym__quoted_identifier,
    STATE(79), 1,
      sym_identifier,
    STATE(171), 1,
      sym_comment,
  [4153] = 2,
    STATE(172), 1,
      sym_comment,
    ACTIONS(292), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [4165] = 2,
    STATE(173), 1,
      sym_comment,
    ACTIONS(294), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [4177] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(113), 1,
      sym_end_obj,
    STATE(174), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [4199] = 3,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    STATE(175), 1,
      sym_comment,
    ACTIONS(296), 5,
      ts_builtin_sym_end,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [4213] = 2,
    STATE(176), 1,
      sym_comment,
    ACTIONS(300), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [4225] = 2,
    STATE(177), 1,
      sym_comment,
    ACTIONS(302), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [4237] = 7,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(236), 1,
      aux_sym_end_obj_token1,
    STATE(135), 1,
      sym_end_obj,
    STATE(178), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_create_package_repeat2,
    STATE(226), 1,
      sym_package_item_list,
  [4259] = 2,
    STATE(179), 1,
      sym_comment,
    ACTIONS(304), 5,
      ts_builtin_sym_end,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [4270] = 2,
    STATE(180), 1,
      sym_comment,
    ACTIONS(306), 5,
      ts_builtin_sym_end,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym_comment_ml,
      sym_comment_sl,
  [4281] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(308), 1,
      aux_sym_end_obj_token1,
    STATE(226), 1,
      sym_package_item_list,
    STATE(181), 2,
      sym_comment,
      aux_sym_create_package_repeat2,
  [4298] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(167), 1,
      aux_sym_create_package_repeat2,
    STATE(182), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4314] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(140), 1,
      aux_sym_create_package_repeat2,
    STATE(183), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4330] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(144), 1,
      aux_sym_create_package_repeat2,
    STATE(184), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4346] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(146), 1,
      aux_sym_create_package_repeat2,
    STATE(185), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4362] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(134), 1,
      aux_sym_create_package_repeat2,
    STATE(186), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4378] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(111), 1,
      aux_sym_create_package_repeat2,
    STATE(187), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4394] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(108), 1,
      aux_sym_create_package_repeat2,
    STATE(188), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4410] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(127), 1,
      aux_sym_create_package_repeat2,
    STATE(189), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4426] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(158), 1,
      aux_sym_create_package_repeat2,
    STATE(190), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4442] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(125), 1,
      aux_sym_create_package_repeat2,
    STATE(191), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4458] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(161), 1,
      aux_sym_create_package_repeat2,
    STATE(192), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4474] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(130), 1,
      aux_sym_create_package_repeat2,
    STATE(193), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4490] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(123), 1,
      aux_sym_create_package_repeat2,
    STATE(194), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4506] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(133), 1,
      aux_sym_create_package_repeat2,
    STATE(195), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4522] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(117), 1,
      aux_sym_create_package_repeat2,
    STATE(196), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4538] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(119), 1,
      aux_sym_create_package_repeat2,
    STATE(197), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4554] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(165), 1,
      aux_sym_create_package_repeat2,
    STATE(198), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4570] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(116), 1,
      aux_sym_create_package_repeat2,
    STATE(199), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4586] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(148), 1,
      aux_sym_create_package_repeat2,
    STATE(200), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4602] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(178), 1,
      aux_sym_create_package_repeat2,
    STATE(201), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4618] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(109), 1,
      aux_sym_create_package_repeat2,
    STATE(202), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4634] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(147), 1,
      aux_sym_create_package_repeat2,
    STATE(203), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4650] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(204), 1,
      sym_comment,
    ACTIONS(310), 2,
      aux_sym_invoker_rights_clause_token2,
      aux_sym_invoker_rights_clause_token3,
  [4664] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(205), 1,
      sym_comment,
    ACTIONS(312), 2,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [4678] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(169), 1,
      aux_sym_create_package_repeat2,
    STATE(206), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4694] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(145), 1,
      aux_sym_create_package_repeat2,
    STATE(207), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4710] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(160), 1,
      aux_sym_create_package_repeat2,
    STATE(208), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4726] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(209), 1,
      sym_comment,
    ACTIONS(314), 2,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [4740] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(174), 1,
      aux_sym_create_package_repeat2,
    STATE(210), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4756] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(162), 1,
      aux_sym_create_package_repeat2,
    STATE(211), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4772] = 5,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(138), 1,
      aux_sym_create_package_repeat2,
    STATE(212), 1,
      sym_comment,
    STATE(226), 1,
      sym_package_item_list,
  [4788] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(316), 1,
      anon_sym_EQ,
    STATE(213), 1,
      sym_comment,
  [4801] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(318), 1,
      aux_sym_default_collation_clause_token3,
    STATE(214), 1,
      sym_comment,
  [4814] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(320), 1,
      aux_sym_accessible_by_clause_token2,
    STATE(215), 1,
      sym_comment,
  [4827] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(322), 1,
      aux_sym_default_collation_clause_token2,
    STATE(216), 1,
      sym_comment,
  [4840] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    STATE(217), 1,
      sym_comment,
  [4853] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    STATE(218), 1,
      sym_comment,
  [4866] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(200), 1,
      aux_sym_create_package_token4,
    STATE(219), 1,
      sym_comment,
  [4879] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(328), 1,
      aux_sym_create_package_token4,
    STATE(220), 1,
      sym_comment,
  [4892] = 4,
    ACTIONS(330), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(332), 1,
      sym_comment_ml,
    ACTIONS(334), 1,
      sym_comment_sl,
    STATE(221), 1,
      sym_comment,
  [4905] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(336), 1,
      aux_sym_reuse_settings_token2,
    STATE(222), 1,
      sym_comment,
  [4918] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(338), 1,
      aux_sym_create_package_token3,
    STATE(223), 1,
      sym_comment,
  [4931] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(224), 1,
      sym_comment,
  [4944] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_comment,
  [4957] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(344), 1,
      aux_sym_end_obj_token1,
    STATE(226), 1,
      sym_comment,
  [4970] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(346), 1,
      aux_sym_create_package_token4,
    STATE(227), 1,
      sym_comment,
  [4983] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    STATE(228), 1,
      sym_comment,
  [4996] = 4,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    STATE(229), 1,
      sym_comment,
  [5009] = 4,
    ACTIONS(332), 1,
      sym_comment_ml,
    ACTIONS(334), 1,
      sym_comment_sl,
    ACTIONS(352), 1,
      aux_sym__quoted_identifier_token1,
    STATE(230), 1,
      sym_comment,
  [5022] = 4,
    ACTIONS(332), 1,
      sym_comment_ml,
    ACTIONS(334), 1,
      sym_comment_sl,
    ACTIONS(354), 1,
      aux_sym__quoted_identifier_token1,
    STATE(231), 1,
      sym_comment,
  [5035] = 3,
    ACTIONS(3), 1,
      sym_comment_ml,
    ACTIONS(5), 1,
      sym_comment_sl,
    STATE(232), 1,
      sym_comment,
  [5045] = 1,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 91,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 208,
  [SMALL_STATE(8)] = 247,
  [SMALL_STATE(9)] = 286,
  [SMALL_STATE(10)] = 325,
  [SMALL_STATE(11)] = 357,
  [SMALL_STATE(12)] = 399,
  [SMALL_STATE(13)] = 443,
  [SMALL_STATE(14)] = 487,
  [SMALL_STATE(15)] = 517,
  [SMALL_STATE(16)] = 561,
  [SMALL_STATE(17)] = 593,
  [SMALL_STATE(18)] = 637,
  [SMALL_STATE(19)] = 681,
  [SMALL_STATE(20)] = 722,
  [SMALL_STATE(21)] = 763,
  [SMALL_STATE(22)] = 804,
  [SMALL_STATE(23)] = 845,
  [SMALL_STATE(24)] = 886,
  [SMALL_STATE(25)] = 913,
  [SMALL_STATE(26)] = 940,
  [SMALL_STATE(27)] = 967,
  [SMALL_STATE(28)] = 994,
  [SMALL_STATE(29)] = 1014,
  [SMALL_STATE(30)] = 1048,
  [SMALL_STATE(31)] = 1068,
  [SMALL_STATE(32)] = 1102,
  [SMALL_STATE(33)] = 1122,
  [SMALL_STATE(34)] = 1156,
  [SMALL_STATE(35)] = 1180,
  [SMALL_STATE(36)] = 1204,
  [SMALL_STATE(37)] = 1238,
  [SMALL_STATE(38)] = 1262,
  [SMALL_STATE(39)] = 1284,
  [SMALL_STATE(40)] = 1318,
  [SMALL_STATE(41)] = 1352,
  [SMALL_STATE(42)] = 1386,
  [SMALL_STATE(43)] = 1420,
  [SMALL_STATE(44)] = 1454,
  [SMALL_STATE(45)] = 1488,
  [SMALL_STATE(46)] = 1522,
  [SMALL_STATE(47)] = 1556,
  [SMALL_STATE(48)] = 1578,
  [SMALL_STATE(49)] = 1602,
  [SMALL_STATE(50)] = 1636,
  [SMALL_STATE(51)] = 1660,
  [SMALL_STATE(52)] = 1684,
  [SMALL_STATE(53)] = 1708,
  [SMALL_STATE(54)] = 1732,
  [SMALL_STATE(55)] = 1756,
  [SMALL_STATE(56)] = 1780,
  [SMALL_STATE(57)] = 1804,
  [SMALL_STATE(58)] = 1824,
  [SMALL_STATE(59)] = 1858,
  [SMALL_STATE(60)] = 1878,
  [SMALL_STATE(61)] = 1900,
  [SMALL_STATE(62)] = 1934,
  [SMALL_STATE(63)] = 1958,
  [SMALL_STATE(64)] = 1992,
  [SMALL_STATE(65)] = 2026,
  [SMALL_STATE(66)] = 2060,
  [SMALL_STATE(67)] = 2094,
  [SMALL_STATE(68)] = 2128,
  [SMALL_STATE(69)] = 2162,
  [SMALL_STATE(70)] = 2196,
  [SMALL_STATE(71)] = 2230,
  [SMALL_STATE(72)] = 2264,
  [SMALL_STATE(73)] = 2293,
  [SMALL_STATE(74)] = 2318,
  [SMALL_STATE(75)] = 2345,
  [SMALL_STATE(76)] = 2368,
  [SMALL_STATE(77)] = 2393,
  [SMALL_STATE(78)] = 2416,
  [SMALL_STATE(79)] = 2438,
  [SMALL_STATE(80)] = 2460,
  [SMALL_STATE(81)] = 2476,
  [SMALL_STATE(82)] = 2492,
  [SMALL_STATE(83)] = 2514,
  [SMALL_STATE(84)] = 2529,
  [SMALL_STATE(85)] = 2544,
  [SMALL_STATE(86)] = 2559,
  [SMALL_STATE(87)] = 2574,
  [SMALL_STATE(88)] = 2589,
  [SMALL_STATE(89)] = 2604,
  [SMALL_STATE(90)] = 2619,
  [SMALL_STATE(91)] = 2634,
  [SMALL_STATE(92)] = 2649,
  [SMALL_STATE(93)] = 2674,
  [SMALL_STATE(94)] = 2691,
  [SMALL_STATE(95)] = 2708,
  [SMALL_STATE(96)] = 2731,
  [SMALL_STATE(97)] = 2756,
  [SMALL_STATE(98)] = 2773,
  [SMALL_STATE(99)] = 2798,
  [SMALL_STATE(100)] = 2823,
  [SMALL_STATE(101)] = 2848,
  [SMALL_STATE(102)] = 2873,
  [SMALL_STATE(103)] = 2898,
  [SMALL_STATE(104)] = 2915,
  [SMALL_STATE(105)] = 2940,
  [SMALL_STATE(106)] = 2965,
  [SMALL_STATE(107)] = 2990,
  [SMALL_STATE(108)] = 3007,
  [SMALL_STATE(109)] = 3029,
  [SMALL_STATE(110)] = 3051,
  [SMALL_STATE(111)] = 3063,
  [SMALL_STATE(112)] = 3085,
  [SMALL_STATE(113)] = 3097,
  [SMALL_STATE(114)] = 3109,
  [SMALL_STATE(115)] = 3121,
  [SMALL_STATE(116)] = 3133,
  [SMALL_STATE(117)] = 3155,
  [SMALL_STATE(118)] = 3177,
  [SMALL_STATE(119)] = 3189,
  [SMALL_STATE(120)] = 3211,
  [SMALL_STATE(121)] = 3233,
  [SMALL_STATE(122)] = 3255,
  [SMALL_STATE(123)] = 3267,
  [SMALL_STATE(124)] = 3289,
  [SMALL_STATE(125)] = 3301,
  [SMALL_STATE(126)] = 3323,
  [SMALL_STATE(127)] = 3335,
  [SMALL_STATE(128)] = 3357,
  [SMALL_STATE(129)] = 3369,
  [SMALL_STATE(130)] = 3381,
  [SMALL_STATE(131)] = 3403,
  [SMALL_STATE(132)] = 3415,
  [SMALL_STATE(133)] = 3427,
  [SMALL_STATE(134)] = 3449,
  [SMALL_STATE(135)] = 3471,
  [SMALL_STATE(136)] = 3483,
  [SMALL_STATE(137)] = 3505,
  [SMALL_STATE(138)] = 3527,
  [SMALL_STATE(139)] = 3549,
  [SMALL_STATE(140)] = 3561,
  [SMALL_STATE(141)] = 3583,
  [SMALL_STATE(142)] = 3595,
  [SMALL_STATE(143)] = 3607,
  [SMALL_STATE(144)] = 3619,
  [SMALL_STATE(145)] = 3641,
  [SMALL_STATE(146)] = 3663,
  [SMALL_STATE(147)] = 3685,
  [SMALL_STATE(148)] = 3707,
  [SMALL_STATE(149)] = 3729,
  [SMALL_STATE(150)] = 3741,
  [SMALL_STATE(151)] = 3753,
  [SMALL_STATE(152)] = 3775,
  [SMALL_STATE(153)] = 3797,
  [SMALL_STATE(154)] = 3819,
  [SMALL_STATE(155)] = 3841,
  [SMALL_STATE(156)] = 3863,
  [SMALL_STATE(157)] = 3875,
  [SMALL_STATE(158)] = 3897,
  [SMALL_STATE(159)] = 3919,
  [SMALL_STATE(160)] = 3931,
  [SMALL_STATE(161)] = 3953,
  [SMALL_STATE(162)] = 3975,
  [SMALL_STATE(163)] = 3997,
  [SMALL_STATE(164)] = 4009,
  [SMALL_STATE(165)] = 4029,
  [SMALL_STATE(166)] = 4051,
  [SMALL_STATE(167)] = 4063,
  [SMALL_STATE(168)] = 4085,
  [SMALL_STATE(169)] = 4097,
  [SMALL_STATE(170)] = 4119,
  [SMALL_STATE(171)] = 4131,
  [SMALL_STATE(172)] = 4153,
  [SMALL_STATE(173)] = 4165,
  [SMALL_STATE(174)] = 4177,
  [SMALL_STATE(175)] = 4199,
  [SMALL_STATE(176)] = 4213,
  [SMALL_STATE(177)] = 4225,
  [SMALL_STATE(178)] = 4237,
  [SMALL_STATE(179)] = 4259,
  [SMALL_STATE(180)] = 4270,
  [SMALL_STATE(181)] = 4281,
  [SMALL_STATE(182)] = 4298,
  [SMALL_STATE(183)] = 4314,
  [SMALL_STATE(184)] = 4330,
  [SMALL_STATE(185)] = 4346,
  [SMALL_STATE(186)] = 4362,
  [SMALL_STATE(187)] = 4378,
  [SMALL_STATE(188)] = 4394,
  [SMALL_STATE(189)] = 4410,
  [SMALL_STATE(190)] = 4426,
  [SMALL_STATE(191)] = 4442,
  [SMALL_STATE(192)] = 4458,
  [SMALL_STATE(193)] = 4474,
  [SMALL_STATE(194)] = 4490,
  [SMALL_STATE(195)] = 4506,
  [SMALL_STATE(196)] = 4522,
  [SMALL_STATE(197)] = 4538,
  [SMALL_STATE(198)] = 4554,
  [SMALL_STATE(199)] = 4570,
  [SMALL_STATE(200)] = 4586,
  [SMALL_STATE(201)] = 4602,
  [SMALL_STATE(202)] = 4618,
  [SMALL_STATE(203)] = 4634,
  [SMALL_STATE(204)] = 4650,
  [SMALL_STATE(205)] = 4664,
  [SMALL_STATE(206)] = 4678,
  [SMALL_STATE(207)] = 4694,
  [SMALL_STATE(208)] = 4710,
  [SMALL_STATE(209)] = 4726,
  [SMALL_STATE(210)] = 4740,
  [SMALL_STATE(211)] = 4756,
  [SMALL_STATE(212)] = 4772,
  [SMALL_STATE(213)] = 4788,
  [SMALL_STATE(214)] = 4801,
  [SMALL_STATE(215)] = 4814,
  [SMALL_STATE(216)] = 4827,
  [SMALL_STATE(217)] = 4840,
  [SMALL_STATE(218)] = 4853,
  [SMALL_STATE(219)] = 4866,
  [SMALL_STATE(220)] = 4879,
  [SMALL_STATE(221)] = 4892,
  [SMALL_STATE(222)] = 4905,
  [SMALL_STATE(223)] = 4918,
  [SMALL_STATE(224)] = 4931,
  [SMALL_STATE(225)] = 4944,
  [SMALL_STATE(226)] = 4957,
  [SMALL_STATE(227)] = 4970,
  [SMALL_STATE(228)] = 4983,
  [SMALL_STATE(229)] = 4996,
  [SMALL_STATE(230)] = 5009,
  [SMALL_STATE(231)] = 5022,
  [SMALL_STATE(232)] = 5035,
  [SMALL_STATE(233)] = 5045,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3, .production_id = 7),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 2, .production_id = 6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4, .production_id = 10),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(205),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(77),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(231),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compile_clause_repeat1, 2, .production_id = 8),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compile_clause_repeat1, 2, .production_id = 8), SHIFT_REPEAT(47),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compile_clause_repeat1, 2, .production_id = 8), SHIFT_REPEAT(221),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 3, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 3, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 3, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 3, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_number, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_number, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_boolean, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_boolean, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 5, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 5, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 5, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(84),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compile_clause_repeat1, 1, .production_id = 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compile_clause_repeat1, 1, .production_id = 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compiler_parameter_clause, 3, .production_id = 11),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__compiler_parameter_clause, 3, .production_id = 11),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 5, .production_id = 3),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(216),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(204),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(215),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 2, .production_id = 13),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 2, .production_id = 13),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 3, .production_id = 17),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 3, .production_id = 17),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 5, .production_id = 10),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_editionable_noneditionable, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3, .production_id = 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4, .production_id = 7),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reuse_settings, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invoker_rights_clause, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessible_by_clause, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sharing_clause, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_collation_clause, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 11, .production_id = 18),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 11, .production_id = 15),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 6, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 9),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 14),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 16),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 18),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 12),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 15),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 9),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 14),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 16),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 9),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 12),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 15),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 12),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 11, .production_id = 16),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 12, .production_id = 18),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 14),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_package_repeat2, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_kind, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__schema, 2, .production_id = 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [342] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_package_repeat2, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
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
