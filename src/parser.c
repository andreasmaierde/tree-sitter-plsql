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
#define STATE_COUNT 204
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 135
#define ALIAS_COUNT 0
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 17

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
  aux_sym_cursor_declaration_token1 = 39,
  aux_sym_cursor_parameter_dec_token1 = 40,
  aux_sym__character_datatypes_varchar2_token1 = 41,
  aux_sym__character_datatypes_nchar_token1 = 42,
  aux_sym__character_datatypes_nvarchar2_token1 = 43,
  aux_sym__number_datatypes_token1 = 44,
  aux_sym__number_datatypes_token2 = 45,
  aux_sym__number_datatypes_number_token1 = 46,
  aux_sym__number_datatypes_float_token1 = 47,
  aux_sym__long_and_raw_datatypes_long_raw_token1 = 48,
  aux_sym__long_and_raw_datatypes_long_raw_token2 = 49,
  aux_sym__datetime_datatypes_token1 = 50,
  aux_sym__datetime_datatypes_date_timestamp_token1 = 51,
  aux_sym__datetime_datatypes_date_timestamp_token2 = 52,
  aux_sym__datetime_datatypes_date_timestamp_token3 = 53,
  aux_sym__datetime_datatypes_date_timestamp_token4 = 54,
  aux_sym__datetime_datatypes_date_timestamp_token5 = 55,
  aux_sym__datetime_datatypes_date_interval_year_token2 = 56,
  aux_sym__datetime_datatypes_date_interval_year_token3 = 57,
  aux_sym__datetime_datatypes_date_interval_year_token4 = 58,
  aux_sym__datetime_datatypes_date_interval_day_token1 = 59,
  aux_sym__datetime_datatypes_date_interval_day_token2 = 60,
  aux_sym__large_object_datatypes_token1 = 61,
  aux_sym__large_object_datatypes_token2 = 62,
  aux_sym__large_object_datatypes_token3 = 63,
  aux_sym__large_object_datatypes_token4 = 64,
  aux_sym__rowid_datatypes_token1 = 65,
  aux_sym__rowid_datatypes_urowid_token1 = 66,
  aux_sym__ansi_supported_datatypes_token3 = 67,
  aux_sym__ansi_supported_datatypes_token4 = 68,
  aux_sym__ansi_supported_datatypes_character_token1 = 69,
  aux_sym__ansi_supported_datatypes_character_token2 = 70,
  aux_sym__ansi_supported_datatypes_varchar_token1 = 71,
  aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token1 = 72,
  aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token2 = 73,
  aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token3 = 74,
  aux_sym__ansi_supported_datatypes_double_precision_token1 = 75,
  aux_sym__ansi_supported_datatypes_double_precision_token2 = 76,
  aux_sym__oracle_supplied_types_any_types_token1 = 77,
  aux_sym__oracle_supplied_types_any_types_token2 = 78,
  aux_sym__oracle_supplied_types_any_types_token3 = 79,
  aux_sym__oracle_supplied_types_any_types_token4 = 80,
  aux_sym__oracle_supplied_types_xml_types_token1 = 81,
  aux_sym__oracle_supplied_types_xml_types_token2 = 82,
  aux_sym__oracle_supplied_types_spatial_types_token1 = 83,
  aux_sym__oracle_supplied_types_spatial_types_token2 = 84,
  aux_sym__oracle_supplied_types_spatial_types_token3 = 85,
  anon_sym_COMMA = 86,
  sym__unquoted_identifier = 87,
  anon_sym_DQUOTE = 88,
  aux_sym__quoted_identifier_token1 = 89,
  sym__single_quote_string = 90,
  sym__number = 91,
  sym__number_minus = 92,
  sym__comment_ml = 93,
  sym__comment_sl = 94,
  aux_sym_keyword_null_token1 = 95,
  aux_sym_keyword_true_token1 = 96,
  aux_sym_keyword_false_token1 = 97,
  sym_source_file = 98,
  sym__element = 99,
  sym_sql_statement = 100,
  sym__ddl_statement = 101,
  sym__create_statement = 102,
  sym_create_package = 103,
  sym__alter_statement = 104,
  sym_alter_package = 105,
  sym_alter_procedure = 106,
  sym_alter_function = 107,
  sym_alter_library = 108,
  sym_compile_clause = 109,
  sym__compiler_parameter_clause = 110,
  sym_editionable_noneditionable = 111,
  sym_sharing_clause = 112,
  sym_default_collation_clause = 113,
  sym_invoker_rights_clause = 114,
  sym_accessible_by_clause = 115,
  sym_accessor = 116,
  sym_unit_kind = 117,
  sym_reuse_settings = 118,
  sym__schema = 119,
  sym_is_as = 120,
  sym_end_obj = 121,
  sym_identifier = 122,
  sym__quoted_identifier = 123,
  sym__literal = 124,
  sym_literal_string = 125,
  sym_literal_number = 126,
  sym_comment = 127,
  sym_keyword_null = 128,
  sym_keyword_true = 129,
  sym_keyword_false = 130,
  aux_sym_source_file_repeat1 = 131,
  aux_sym_create_package_repeat1 = 132,
  aux_sym_alter_package_repeat1 = 133,
  aux_sym_accessible_by_clause_repeat1 = 134,
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
  [aux_sym_cursor_declaration_token1] = "cursor",
  [aux_sym_cursor_parameter_dec_token1] = "in",
  [aux_sym__character_datatypes_varchar2_token1] = "varchar2",
  [aux_sym__character_datatypes_nchar_token1] = "nchar",
  [aux_sym__character_datatypes_nvarchar2_token1] = "nvarchar2",
  [aux_sym__number_datatypes_token1] = "binary_float",
  [aux_sym__number_datatypes_token2] = "binary_double",
  [aux_sym__number_datatypes_number_token1] = "number",
  [aux_sym__number_datatypes_float_token1] = "float",
  [aux_sym__long_and_raw_datatypes_long_raw_token1] = "long",
  [aux_sym__long_and_raw_datatypes_long_raw_token2] = "raw",
  [aux_sym__datetime_datatypes_token1] = "date",
  [aux_sym__datetime_datatypes_date_timestamp_token1] = "timestamp",
  [aux_sym__datetime_datatypes_date_timestamp_token2] = "with",
  [aux_sym__datetime_datatypes_date_timestamp_token3] = "local",
  [aux_sym__datetime_datatypes_date_timestamp_token4] = "time",
  [aux_sym__datetime_datatypes_date_timestamp_token5] = "zone",
  [aux_sym__datetime_datatypes_date_interval_year_token2] = "year",
  [aux_sym__datetime_datatypes_date_interval_year_token3] = "to",
  [aux_sym__datetime_datatypes_date_interval_year_token4] = "month",
  [aux_sym__datetime_datatypes_date_interval_day_token1] = "day",
  [aux_sym__datetime_datatypes_date_interval_day_token2] = "second",
  [aux_sym__large_object_datatypes_token1] = "blob",
  [aux_sym__large_object_datatypes_token2] = "clob",
  [aux_sym__large_object_datatypes_token3] = "nclob",
  [aux_sym__large_object_datatypes_token4] = "bfile",
  [aux_sym__rowid_datatypes_token1] = "rowid",
  [aux_sym__rowid_datatypes_urowid_token1] = "urowid",
  [aux_sym__ansi_supported_datatypes_token3] = "smallint",
  [aux_sym__ansi_supported_datatypes_token4] = "real",
  [aux_sym__ansi_supported_datatypes_character_token1] = "character",
  [aux_sym__ansi_supported_datatypes_character_token2] = "varying",
  [aux_sym__ansi_supported_datatypes_varchar_token1] = "varchar",
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token1] = "numeric",
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token2] = "decimal",
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token3] = "dec",
  [aux_sym__ansi_supported_datatypes_double_precision_token1] = "double",
  [aux_sym__ansi_supported_datatypes_double_precision_token2] = "precision",
  [aux_sym__oracle_supplied_types_any_types_token1] = "sys",
  [aux_sym__oracle_supplied_types_any_types_token2] = "anydata",
  [aux_sym__oracle_supplied_types_any_types_token3] = "anytype",
  [aux_sym__oracle_supplied_types_any_types_token4] = "anydataset",
  [aux_sym__oracle_supplied_types_xml_types_token1] = "xmltype",
  [aux_sym__oracle_supplied_types_xml_types_token2] = "uritype",
  [aux_sym__oracle_supplied_types_spatial_types_token1] = "sdo_geometry",
  [aux_sym__oracle_supplied_types_spatial_types_token2] = "sdo_topo_geometry",
  [aux_sym__oracle_supplied_types_spatial_types_token3] = "sdo_georaster",
  [anon_sym_COMMA] = ",",
  [sym__unquoted_identifier] = "_unquoted_identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_identifier_token1] = "_quoted_identifier_token1",
  [sym__single_quote_string] = "_single_quote_string",
  [sym__number] = "_number",
  [sym__number_minus] = "_number_minus",
  [sym__comment_ml] = "_comment_ml",
  [sym__comment_sl] = "_comment_sl",
  [aux_sym_keyword_null_token1] = "null",
  [aux_sym_keyword_true_token1] = "true",
  [aux_sym_keyword_false_token1] = "false",
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
  [sym_identifier] = "identifier",
  [sym__quoted_identifier] = "_quoted_identifier",
  [sym__literal] = "_literal",
  [sym_literal_string] = "literal_string",
  [sym_literal_number] = "literal_number",
  [sym_comment] = "comment",
  [sym_keyword_null] = "keyword_null",
  [sym_keyword_true] = "keyword_true",
  [sym_keyword_false] = "keyword_false",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_create_package_repeat1] = "create_package_repeat1",
  [aux_sym_alter_package_repeat1] = "alter_package_repeat1",
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
  [aux_sym_cursor_declaration_token1] = aux_sym_cursor_declaration_token1,
  [aux_sym_cursor_parameter_dec_token1] = aux_sym_cursor_parameter_dec_token1,
  [aux_sym__character_datatypes_varchar2_token1] = aux_sym__character_datatypes_varchar2_token1,
  [aux_sym__character_datatypes_nchar_token1] = aux_sym__character_datatypes_nchar_token1,
  [aux_sym__character_datatypes_nvarchar2_token1] = aux_sym__character_datatypes_nvarchar2_token1,
  [aux_sym__number_datatypes_token1] = aux_sym__number_datatypes_token1,
  [aux_sym__number_datatypes_token2] = aux_sym__number_datatypes_token2,
  [aux_sym__number_datatypes_number_token1] = aux_sym__number_datatypes_number_token1,
  [aux_sym__number_datatypes_float_token1] = aux_sym__number_datatypes_float_token1,
  [aux_sym__long_and_raw_datatypes_long_raw_token1] = aux_sym__long_and_raw_datatypes_long_raw_token1,
  [aux_sym__long_and_raw_datatypes_long_raw_token2] = aux_sym__long_and_raw_datatypes_long_raw_token2,
  [aux_sym__datetime_datatypes_token1] = aux_sym__datetime_datatypes_token1,
  [aux_sym__datetime_datatypes_date_timestamp_token1] = aux_sym__datetime_datatypes_date_timestamp_token1,
  [aux_sym__datetime_datatypes_date_timestamp_token2] = aux_sym__datetime_datatypes_date_timestamp_token2,
  [aux_sym__datetime_datatypes_date_timestamp_token3] = aux_sym__datetime_datatypes_date_timestamp_token3,
  [aux_sym__datetime_datatypes_date_timestamp_token4] = aux_sym__datetime_datatypes_date_timestamp_token4,
  [aux_sym__datetime_datatypes_date_timestamp_token5] = aux_sym__datetime_datatypes_date_timestamp_token5,
  [aux_sym__datetime_datatypes_date_interval_year_token2] = aux_sym__datetime_datatypes_date_interval_year_token2,
  [aux_sym__datetime_datatypes_date_interval_year_token3] = aux_sym__datetime_datatypes_date_interval_year_token3,
  [aux_sym__datetime_datatypes_date_interval_year_token4] = aux_sym__datetime_datatypes_date_interval_year_token4,
  [aux_sym__datetime_datatypes_date_interval_day_token1] = aux_sym__datetime_datatypes_date_interval_day_token1,
  [aux_sym__datetime_datatypes_date_interval_day_token2] = aux_sym__datetime_datatypes_date_interval_day_token2,
  [aux_sym__large_object_datatypes_token1] = aux_sym__large_object_datatypes_token1,
  [aux_sym__large_object_datatypes_token2] = aux_sym__large_object_datatypes_token2,
  [aux_sym__large_object_datatypes_token3] = aux_sym__large_object_datatypes_token3,
  [aux_sym__large_object_datatypes_token4] = aux_sym__large_object_datatypes_token4,
  [aux_sym__rowid_datatypes_token1] = aux_sym__rowid_datatypes_token1,
  [aux_sym__rowid_datatypes_urowid_token1] = aux_sym__rowid_datatypes_urowid_token1,
  [aux_sym__ansi_supported_datatypes_token3] = aux_sym__ansi_supported_datatypes_token3,
  [aux_sym__ansi_supported_datatypes_token4] = aux_sym__ansi_supported_datatypes_token4,
  [aux_sym__ansi_supported_datatypes_character_token1] = aux_sym__ansi_supported_datatypes_character_token1,
  [aux_sym__ansi_supported_datatypes_character_token2] = aux_sym__ansi_supported_datatypes_character_token2,
  [aux_sym__ansi_supported_datatypes_varchar_token1] = aux_sym__ansi_supported_datatypes_varchar_token1,
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token1] = aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token1,
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token2] = aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token2,
  [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token3] = aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token3,
  [aux_sym__ansi_supported_datatypes_double_precision_token1] = aux_sym__ansi_supported_datatypes_double_precision_token1,
  [aux_sym__ansi_supported_datatypes_double_precision_token2] = aux_sym__ansi_supported_datatypes_double_precision_token2,
  [aux_sym__oracle_supplied_types_any_types_token1] = aux_sym__oracle_supplied_types_any_types_token1,
  [aux_sym__oracle_supplied_types_any_types_token2] = aux_sym__oracle_supplied_types_any_types_token2,
  [aux_sym__oracle_supplied_types_any_types_token3] = aux_sym__oracle_supplied_types_any_types_token3,
  [aux_sym__oracle_supplied_types_any_types_token4] = aux_sym__oracle_supplied_types_any_types_token4,
  [aux_sym__oracle_supplied_types_xml_types_token1] = aux_sym__oracle_supplied_types_xml_types_token1,
  [aux_sym__oracle_supplied_types_xml_types_token2] = aux_sym__oracle_supplied_types_xml_types_token2,
  [aux_sym__oracle_supplied_types_spatial_types_token1] = aux_sym__oracle_supplied_types_spatial_types_token1,
  [aux_sym__oracle_supplied_types_spatial_types_token2] = aux_sym__oracle_supplied_types_spatial_types_token2,
  [aux_sym__oracle_supplied_types_spatial_types_token3] = aux_sym__oracle_supplied_types_spatial_types_token3,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__unquoted_identifier] = sym__unquoted_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_identifier_token1] = aux_sym__quoted_identifier_token1,
  [sym__single_quote_string] = sym__single_quote_string,
  [sym__number] = sym__number,
  [sym__number_minus] = sym__number_minus,
  [sym__comment_ml] = sym__comment_ml,
  [sym__comment_sl] = sym__comment_sl,
  [aux_sym_keyword_null_token1] = aux_sym_keyword_null_token1,
  [aux_sym_keyword_true_token1] = aux_sym_keyword_true_token1,
  [aux_sym_keyword_false_token1] = aux_sym_keyword_false_token1,
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
  [sym_identifier] = sym_identifier,
  [sym__quoted_identifier] = sym__quoted_identifier,
  [sym__literal] = sym__literal,
  [sym_literal_string] = sym_literal_string,
  [sym_literal_number] = sym_literal_number,
  [sym_comment] = sym_comment,
  [sym_keyword_null] = sym_keyword_null,
  [sym_keyword_true] = sym_keyword_true,
  [sym_keyword_false] = sym_keyword_false,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_create_package_repeat1] = aux_sym_create_package_repeat1,
  [aux_sym_alter_package_repeat1] = aux_sym_alter_package_repeat1,
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
  [aux_sym_cursor_declaration_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cursor_parameter_dec_token1] = {
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
  [aux_sym__number_datatypes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__number_datatypes_token2] = {
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
  [aux_sym__datetime_datatypes_token1] = {
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
  [aux_sym__large_object_datatypes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__large_object_datatypes_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__large_object_datatypes_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__large_object_datatypes_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__rowid_datatypes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__rowid_datatypes_urowid_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ansi_supported_datatypes_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ansi_supported_datatypes_token4] = {
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
  [aux_sym__oracle_supplied_types_any_types_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__oracle_supplied_types_any_types_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__oracle_supplied_types_any_types_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__oracle_supplied_types_any_types_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__oracle_supplied_types_xml_types_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__oracle_supplied_types_xml_types_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__oracle_supplied_types_spatial_types_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__oracle_supplied_types_spatial_types_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__oracle_supplied_types_spatial_types_token3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym__single_quote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__number_minus] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_ml] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_sl] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_keyword_null_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyword_true_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyword_false_token1] = {
    .visible = true,
    .named = false,
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
  [sym_literal_string] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_null] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_true] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_false] = {
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
  [aux_sym_alter_package_repeat1] = {
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
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 1},
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
    {field_compile_parameter_name, 1, .inherited = true},
    {field_compile_parameter_value, 1, .inherited = true},
  [7] =
    {field_obj_name, 3},
  [8] =
    {field_compile_parameter_name, 2, .inherited = true},
    {field_compile_parameter_value, 2, .inherited = true},
  [10] =
    {field_obj_name, 4},
  [11] =
    {field_obj_name, 4},
    {field_schema_name, 3, .inherited = true},
  [13] =
    {field_compile_parameter_name, 3, .inherited = true},
    {field_compile_parameter_value, 3, .inherited = true},
  [15] =
    {field_compile_parameter_name, 0},
    {field_compile_parameter_value, 2},
  [17] =
    {field_obj_name, 5},
    {field_schema_name, 4, .inherited = true},
  [19] =
    {field_obj_name, 5},
  [20] =
    {field_schema_name, 0, .inherited = true},
  [21] =
    {field_obj_name, 6},
    {field_schema_name, 5, .inherited = true},
  [23] =
    {field_schema_name, 1, .inherited = true},
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
  [63] = 60,
  [64] = 64,
  [65] = 65,
  [66] = 29,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 60,
  [75] = 29,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
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
  [195] = 85,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 189,
  [200] = 189,
  [201] = 184,
  [202] = 184,
  [203] = 152,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(173);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == ')') ADVANCE(202);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(174);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '\\') SKIP(163)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(393);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(407);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(269);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(472);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(412);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(371);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(527);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(273);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(414);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(542);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(276);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(418);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(464);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(390);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('G' <= lookahead && lookahead <= 'Q') ||
          ('g' <= lookahead && lookahead <= 'q')) ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
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
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == ')') ADVANCE(202);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(592);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(274);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(174);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(620);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(622);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(174);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(160);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(136);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(66);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(623);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(627);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(629);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(157);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(114);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(133);
      END_STATE();
    case 39:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(99);
      END_STATE();
    case 40:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(45);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 50:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 51:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 52:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 74:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 75:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 76:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 77:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 78:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 80:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 82:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 83:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 84:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 86:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 90:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 91:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(630);
      END_STATE();
    case 92:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 93:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 102:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 103:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 104:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 108:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 110:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 138:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      END_STATE();
    case 140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 141:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(57);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 151:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 155:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 156:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 157:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 158:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 159:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 160:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(199);
      END_STATE();
    case 161:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(14);
      END_STATE();
    case 162:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 163:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(162)
      END_STATE();
    case 164:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') SKIP(170)
      END_STATE();
    case 165:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') SKIP(170)
      if (lookahead == '\r') SKIP(164)
      END_STATE();
    case 166:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') SKIP(171)
      END_STATE();
    case 167:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') SKIP(171)
      if (lookahead == '\r') SKIP(166)
      END_STATE();
    case 168:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') SKIP(172)
      END_STATE();
    case 169:
      if (eof) ADVANCE(173);
      if (lookahead == '\n') SKIP(172)
      if (lookahead == '\r') SKIP(168)
      END_STATE();
    case 170:
      if (eof) ADVANCE(173);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(174);
      if (lookahead == '\\') SKIP(165)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(493);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(500);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(375);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(515);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(275);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(170)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 171:
      if (eof) ADVANCE(173);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(174);
      if (lookahead == '\\') SKIP(167)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(493);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(500);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(515);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(275);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(171)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 172:
      if (eof) ADVANCE(173);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(174);
      if (lookahead == '\\') SKIP(169)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(500);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(515);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(172)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_create_package_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_create_package_token2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_create_package_token3);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_create_package_token4);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_alter_package_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_alter_procedure_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_alter_function_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_alter_library_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_compile_clause_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_compile_clause_token2);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_compile_clause_token3);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_compile_clause_token4);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_editionable_noneditionable_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_editionable_noneditionable_token2);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_sharing_clause_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_sharing_clause_token2);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_default_collation_clause_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_default_collation_clause_token2);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_default_collation_clause_token3);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_invoker_rights_clause_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_invoker_rights_clause_token2);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_invoker_rights_clause_token3);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_accessible_by_clause_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_accessible_by_clause_token2);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_accessible_by_clause_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(347);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_unit_kind_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_unit_kind_token2);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_reuse_settings_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_reuse_settings_token2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_byte_char_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_byte_char_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_is_as_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_is_as_token2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_end_obj_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_cursor_declaration_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_cursor_parameter_dec_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__character_datatypes_varchar2_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__character_datatypes_nchar_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__character_datatypes_nvarchar2_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__number_datatypes_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__number_datatypes_token2);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__number_datatypes_number_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__number_datatypes_float_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__long_and_raw_datatypes_long_raw_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__long_and_raw_datatypes_long_raw_token2);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_timestamp_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_timestamp_token2);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_timestamp_token3);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_timestamp_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(578);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_timestamp_token5);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_interval_year_token2);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_interval_year_token3);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_interval_year_token4);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_interval_day_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__datetime_datatypes_date_interval_day_token2);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__large_object_datatypes_token1);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__large_object_datatypes_token2);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__large_object_datatypes_token3);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__large_object_datatypes_token4);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__rowid_datatypes_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__rowid_datatypes_urowid_token1);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_token3);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_token4);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_character_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_character_token2);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_varchar_token1);
      if (lookahead == '2') ADVANCE(215);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token2);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_double_precision_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__ansi_supported_datatypes_double_precision_token2);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__oracle_supplied_types_any_types_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__oracle_supplied_types_any_types_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__oracle_supplied_types_any_types_token3);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__oracle_supplied_types_any_types_token4);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__oracle_supplied_types_xml_types_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__oracle_supplied_types_xml_types_token2);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__oracle_supplied_types_spatial_types_token1);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__oracle_supplied_types_spatial_types_token2);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__oracle_supplied_types_spatial_types_token3);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '2') ADVANCE(217);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(342);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(598);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(324);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(403);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(576);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(594);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(499);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(477);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(601);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(510);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(528);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(490);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(529);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(545);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(443);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(450);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(560);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(544);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(532);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(445);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(546);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(537);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(577);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(579);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(590);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(235);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(236);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(237);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(593);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(278);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(593);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(553);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(454);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(380);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(456);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(457);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(458);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(459);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(564);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(409);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(483);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(448);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(281);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(440);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(246);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(372);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(410);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(432);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(427);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(512);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(374);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(503);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(585);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(288);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(583);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(411);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(587);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(302);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(212);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(239);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(234);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(240);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(604);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(494);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(285);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(388);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(554);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(595);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(296);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(609);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(516);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(462);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(420);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(420);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(299);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(439);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(479);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(540);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(417);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(491);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(496);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(338);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(200);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(424);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(222);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(184);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(244);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(265);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(404);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(555);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(376);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(498);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(361);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(378);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(383);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(226);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(232);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(279);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(447);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(543);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(422);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(501);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(293);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(294);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(328);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(468);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(415);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(522);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(351);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(334);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(574);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(478);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(335);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(586);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(602);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(563);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(480);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(504);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(487);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(455);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(482);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(505);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(507);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(591);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(297);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(575);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(630);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(559);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(461);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(526);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(311);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(557);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(298);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(566);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(354);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(358);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(360);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(366);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(367);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(430);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(301);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(514);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(588);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(526);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(518);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(519);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(350);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(381);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(284);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(290);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(398);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(571);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(400);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(349);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(572);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(300);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(353);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(567);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(392);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(449);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(286);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(338);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(262);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(469);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(305);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(521);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(465);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(481);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(485);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(473);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(474);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(475);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(533);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(476);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(470);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(467);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(599);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(225);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(194);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(388);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(502);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(352);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(359);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(363);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(364);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(431);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(425);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(608);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(605);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(606);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(607);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(522);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(508);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(266);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(437);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(355);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(356);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(584);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(429);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(377);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(233);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(610);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(611);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(436);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(477);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(396);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(310);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(452);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(560);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(561);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(314);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(419);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(426);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(341);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(186);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(182);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(257);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(258);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(263);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(523);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(524);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(525);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(618);
      if (lookahead == '\r') ADVANCE(615);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(618);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(620);
      if (lookahead == '"') ADVANCE(628);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '*') ADVANCE(622);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(619);
      if (lookahead == '/') ADVANCE(617);
      if (lookahead == '\\') ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(618);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '*') ADVANCE(621);
      if (lookahead == '/') ADVANCE(620);
      if (lookahead != 0) ADVANCE(622);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '*') ADVANCE(621);
      if (lookahead != 0) ADVANCE(622);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(161);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__number_minus);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__comment_ml);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__comment_sl);
      if (lookahead == '"') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(629);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__comment_sl);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_keyword_null_token1);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_keyword_true_token1);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_keyword_false_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 170},
  [3] = {.lex_state = 171},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 172},
  [12] = {.lex_state = 172},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 170},
  [20] = {.lex_state = 170},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 170},
  [23] = {.lex_state = 170},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 170},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 170},
  [44] = {.lex_state = 170},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 170},
  [48] = {.lex_state = 170},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 170},
  [51] = {.lex_state = 170},
  [52] = {.lex_state = 170},
  [53] = {.lex_state = 170},
  [54] = {.lex_state = 170},
  [55] = {.lex_state = 170},
  [56] = {.lex_state = 170},
  [57] = {.lex_state = 170},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 170},
  [65] = {.lex_state = 170},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 170},
  [69] = {.lex_state = 170},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 170},
  [73] = {.lex_state = 170},
  [74] = {.lex_state = 170},
  [75] = {.lex_state = 170},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 170},
  [80] = {.lex_state = 170},
  [81] = {.lex_state = 170},
  [82] = {.lex_state = 170},
  [83] = {.lex_state = 170},
  [84] = {.lex_state = 170},
  [85] = {.lex_state = 170},
  [86] = {.lex_state = 170},
  [87] = {.lex_state = 170},
  [88] = {.lex_state = 170},
  [89] = {.lex_state = 170},
  [90] = {.lex_state = 170},
  [91] = {.lex_state = 170},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 170},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 13},
  [167] = {.lex_state = 13},
  [168] = {.lex_state = 13},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 13},
  [174] = {.lex_state = 13},
  [175] = {.lex_state = 13},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 13},
  [181] = {.lex_state = 13},
  [182] = {.lex_state = 13},
  [183] = {.lex_state = 13},
  [184] = {.lex_state = 618},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 13},
  [191] = {.lex_state = 13},
  [192] = {.lex_state = 13},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 13},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 13},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 13},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 618},
  [202] = {.lex_state = 618},
  [203] = {(TSStateId)(-1)},
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
    [aux_sym_cursor_declaration_token1] = ACTIONS(1),
    [aux_sym_cursor_parameter_dec_token1] = ACTIONS(1),
    [aux_sym__character_datatypes_varchar2_token1] = ACTIONS(1),
    [aux_sym__character_datatypes_nchar_token1] = ACTIONS(1),
    [aux_sym__character_datatypes_nvarchar2_token1] = ACTIONS(1),
    [aux_sym__number_datatypes_token1] = ACTIONS(1),
    [aux_sym__number_datatypes_token2] = ACTIONS(1),
    [aux_sym__number_datatypes_number_token1] = ACTIONS(1),
    [aux_sym__number_datatypes_float_token1] = ACTIONS(1),
    [aux_sym__long_and_raw_datatypes_long_raw_token1] = ACTIONS(1),
    [aux_sym__long_and_raw_datatypes_long_raw_token2] = ACTIONS(1),
    [aux_sym__datetime_datatypes_token1] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_timestamp_token1] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_timestamp_token2] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_timestamp_token3] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_timestamp_token4] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_timestamp_token5] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_interval_year_token2] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_interval_year_token3] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_interval_year_token4] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_interval_day_token1] = ACTIONS(1),
    [aux_sym__datetime_datatypes_date_interval_day_token2] = ACTIONS(1),
    [aux_sym__large_object_datatypes_token1] = ACTIONS(1),
    [aux_sym__large_object_datatypes_token2] = ACTIONS(1),
    [aux_sym__large_object_datatypes_token3] = ACTIONS(1),
    [aux_sym__large_object_datatypes_token4] = ACTIONS(1),
    [aux_sym__rowid_datatypes_token1] = ACTIONS(1),
    [aux_sym__rowid_datatypes_urowid_token1] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_token3] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_token4] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_character_token1] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_character_token2] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_varchar_token1] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token1] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token2] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_numeric_decimal_dec_token3] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_double_precision_token1] = ACTIONS(1),
    [aux_sym__ansi_supported_datatypes_double_precision_token2] = ACTIONS(1),
    [aux_sym__oracle_supplied_types_any_types_token1] = ACTIONS(1),
    [aux_sym__oracle_supplied_types_any_types_token2] = ACTIONS(1),
    [aux_sym__oracle_supplied_types_any_types_token3] = ACTIONS(1),
    [aux_sym__oracle_supplied_types_any_types_token4] = ACTIONS(1),
    [aux_sym__oracle_supplied_types_xml_types_token1] = ACTIONS(1),
    [aux_sym__oracle_supplied_types_xml_types_token2] = ACTIONS(1),
    [aux_sym__oracle_supplied_types_spatial_types_token1] = ACTIONS(1),
    [aux_sym__oracle_supplied_types_spatial_types_token2] = ACTIONS(1),
    [aux_sym__oracle_supplied_types_spatial_types_token3] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__unquoted_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__single_quote_string] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym__number_minus] = ACTIONS(1),
    [sym__comment_ml] = ACTIONS(3),
    [sym__comment_sl] = ACTIONS(5),
    [aux_sym_keyword_null_token1] = ACTIONS(1),
    [aux_sym_keyword_true_token1] = ACTIONS(1),
    [aux_sym_keyword_false_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(185),
    [sym__element] = STATE(6),
    [sym_sql_statement] = STATE(6),
    [sym__ddl_statement] = STATE(140),
    [sym__create_statement] = STATE(140),
    [sym_create_package] = STATE(140),
    [sym__alter_statement] = STATE(140),
    [sym_alter_package] = STATE(140),
    [sym_alter_procedure] = STATE(140),
    [sym_alter_function] = STATE(140),
    [sym_alter_library] = STATE(140),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_create_package_token1] = ACTIONS(5),
    [aux_sym_alter_package_token1] = ACTIONS(9),
    [sym__comment_ml] = ACTIONS(11),
    [sym__comment_sl] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
    STATE(29), 1,
      sym__quoted_identifier,
    STATE(64), 1,
      sym__compiler_parameter_clause,
    STATE(91), 1,
      sym_reuse_settings,
    STATE(186), 1,
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
      sym__comment_ml,
      sym__comment_sl,
  [44] = 10,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(21), 1,
      sym__unquoted_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_comment,
    STATE(29), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym__compiler_parameter_clause,
    STATE(87), 1,
      sym_reuse_settings,
    STATE(186), 1,
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
      sym__comment_ml,
      sym__comment_sl,
  [85] = 6,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_create_package_token1,
    ACTIONS(34), 1,
      aux_sym_alter_package_token1,
    ACTIONS(37), 2,
      sym__comment_ml,
      sym__comment_sl,
    STATE(4), 4,
      sym__element,
      sym_sql_statement,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(140), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [115] = 12,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 1,
      sym__unquoted_identifier,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym__quoted_identifier,
    STATE(70), 1,
      sym_identifier,
    STATE(77), 1,
      sym_accessor,
    STATE(103), 1,
      sym_unit_kind,
    STATE(132), 1,
      sym__schema,
    STATE(5), 2,
      sym_comment,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(40), 5,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
  [157] = 7,
    ACTIONS(5), 1,
      aux_sym_create_package_token1,
    ACTIONS(9), 1,
      aux_sym_alter_package_token1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_comment,
    ACTIONS(11), 2,
      sym__comment_ml,
      sym__comment_sl,
    STATE(4), 3,
      sym__element,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
    STATE(140), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [189] = 13,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_comment,
    STATE(42), 1,
      sym_sharing_clause,
    STATE(45), 1,
      aux_sym_create_package_repeat1,
    STATE(161), 1,
      sym_is_as,
    ACTIONS(53), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [233] = 13,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(8), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_create_package_repeat1,
    STATE(30), 1,
      sym_sharing_clause,
    STATE(182), 1,
      sym_is_as,
    ACTIONS(53), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [277] = 13,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_comment,
    STATE(27), 1,
      sym_sharing_clause,
    STATE(46), 1,
      aux_sym_create_package_repeat1,
    STATE(155), 1,
      sym_is_as,
    ACTIONS(53), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [321] = 13,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(10), 1,
      sym_comment,
    STATE(38), 1,
      sym_sharing_clause,
    STATE(40), 1,
      aux_sym_create_package_repeat1,
    STATE(176), 1,
      sym_is_as,
    ACTIONS(53), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [365] = 9,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(21), 1,
      sym__unquoted_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_comment,
    STATE(29), 1,
      sym__quoted_identifier,
    STATE(68), 1,
      sym__compiler_parameter_clause,
    STATE(87), 1,
      sym_reuse_settings,
    STATE(186), 1,
      sym_identifier,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [401] = 9,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    ACTIONS(21), 1,
      sym__unquoted_identifier,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_comment,
    STATE(29), 1,
      sym__quoted_identifier,
    STATE(65), 1,
      sym__compiler_parameter_clause,
    STATE(89), 1,
      sym_reuse_settings,
    STATE(186), 1,
      sym_identifier,
    ACTIONS(65), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [437] = 13,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      sym__unquoted_identifier,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      aux_sym_accessible_by_clause_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(66), 1,
      sym__quoted_identifier,
    STATE(70), 1,
      sym_identifier,
    STATE(77), 1,
      sym_accessor,
    STATE(103), 1,
      sym_unit_kind,
    STATE(132), 1,
      sym__schema,
    ACTIONS(67), 5,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
  [481] = 12,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(71), 1,
      sym__unquoted_identifier,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      aux_sym_accessible_by_clause_repeat1,
    STATE(14), 1,
      sym_comment,
    STATE(66), 1,
      sym__quoted_identifier,
    STATE(70), 1,
      sym_identifier,
    STATE(77), 1,
      sym_accessor,
    STATE(103), 1,
      sym_unit_kind,
    STATE(132), 1,
      sym__schema,
    ACTIONS(67), 5,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
  [522] = 12,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(15), 1,
      sym_comment,
    STATE(61), 1,
      sym_sharing_clause,
    STATE(62), 1,
      aux_sym_create_package_repeat1,
    STATE(175), 1,
      sym_is_as,
    ACTIONS(53), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [563] = 12,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(16), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_create_package_repeat1,
    STATE(37), 1,
      sym_sharing_clause,
    STATE(168), 1,
      sym_is_as,
    ACTIONS(53), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [604] = 12,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(17), 1,
      sym_comment,
    STATE(49), 1,
      sym_sharing_clause,
    STATE(58), 1,
      aux_sym_create_package_repeat1,
    STATE(160), 1,
      sym_is_as,
    ACTIONS(53), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [645] = 12,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(18), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_create_package_repeat1,
    STATE(33), 1,
      sym_sharing_clause,
    STATE(177), 1,
      sym_is_as,
    ACTIONS(53), 2,
      aux_sym_sharing_clause_token1,
      aux_sym_sharing_clause_token2,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [686] = 6,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(50), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [713] = 6,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(52), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [740] = 9,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(83), 1,
      sym__single_quote_string,
    ACTIONS(85), 1,
      sym__number,
    ACTIONS(87), 1,
      aux_sym_keyword_null_token1,
    ACTIONS(89), 1,
      aux_sym_keyword_true_token1,
    ACTIONS(91), 1,
      aux_sym_keyword_false_token1,
    STATE(21), 1,
      sym_comment,
    STATE(72), 6,
      sym__literal,
      sym_literal_string,
      sym_literal_number,
      sym_keyword_null,
      sym_keyword_true,
      sym_keyword_false,
  [773] = 6,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(54), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [800] = 6,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(79), 2,
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
      sym__comment_ml,
      sym__comment_sl,
  [827] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(24), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(170), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [861] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(25), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(153), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [895] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(26), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(172), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [929] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(27), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_create_package_repeat1,
    STATE(178), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [963] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(28), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(162), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [997] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    STATE(29), 1,
      sym_comment,
    ACTIONS(97), 10,
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
  [1019] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(30), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_create_package_repeat1,
    STATE(162), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1053] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(31), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(158), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1087] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(32), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(156), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1121] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(25), 1,
      aux_sym_create_package_repeat1,
    STATE(33), 1,
      sym_comment,
    STATE(167), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1155] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(34), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(181), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1189] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(35), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(165), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1223] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(36), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(154), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1257] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(26), 1,
      aux_sym_create_package_repeat1,
    STATE(37), 1,
      sym_comment,
    STATE(173), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1291] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(36), 1,
      aux_sym_create_package_repeat1,
    STATE(38), 1,
      sym_comment,
    STATE(169), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1325] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(39), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(171), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1359] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(40), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(169), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1393] = 5,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(57), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1417] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(35), 1,
      aux_sym_create_package_repeat1,
    STATE(42), 1,
      sym_comment,
    STATE(163), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1451] = 5,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(57), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1475] = 5,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(57), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1499] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(45), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(163), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1533] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(46), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(178), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1567] = 5,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(57), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1591] = 5,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(41), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1615] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(39), 1,
      aux_sym_create_package_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(180), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1649] = 5,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(57), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1673] = 5,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(47), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1697] = 5,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(57), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1721] = 5,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(44), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1745] = 5,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(57), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1769] = 5,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(43), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1793] = 5,
    ACTIONS(77), 1,
      aux_sym_compile_clause_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(79), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(57), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1817] = 4,
    ACTIONS(125), 1,
      aux_sym_compile_clause_token1,
    ACTIONS(128), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
    STATE(57), 4,
      sym_compile_clause,
      sym_editionable_noneditionable,
      sym_comment,
      aux_sym_alter_package_repeat1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [1839] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(58), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(183), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1873] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(59), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(166), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1907] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    STATE(60), 1,
      sym_comment,
    ACTIONS(131), 10,
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
  [1929] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(59), 1,
      aux_sym_create_package_repeat1,
    STATE(61), 1,
      sym_comment,
    STATE(157), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1963] = 10,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(55), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(57), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(59), 1,
      aux_sym_accessible_by_clause_token1,
    STATE(62), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_create_package_repeat1,
    STATE(164), 1,
      sym_is_as,
    ACTIONS(63), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [1997] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(133), 1,
      sym__unquoted_identifier,
    STATE(63), 1,
      sym_comment,
    ACTIONS(131), 8,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [2020] = 4,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    STATE(64), 1,
      sym_comment,
    STATE(83), 1,
      sym_reuse_settings,
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [2041] = 4,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    STATE(65), 1,
      sym_comment,
    STATE(86), 1,
      sym_reuse_settings,
    ACTIONS(137), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [2062] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(139), 1,
      sym__unquoted_identifier,
    STATE(66), 1,
      sym_comment,
    ACTIONS(97), 8,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [2085] = 6,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym__unquoted_identifier,
    STATE(67), 1,
      sym_comment,
    ACTIONS(141), 7,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DQUOTE,
  [2110] = 4,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    STATE(68), 1,
      sym_comment,
    STATE(88), 1,
      sym_reuse_settings,
    ACTIONS(145), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [2131] = 4,
    ACTIONS(19), 1,
      aux_sym_reuse_settings_token1,
    STATE(69), 1,
      sym_comment,
    STATE(90), 1,
      sym_reuse_settings,
    ACTIONS(145), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [2152] = 6,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(149), 1,
      sym__unquoted_identifier,
    STATE(70), 1,
      sym_comment,
    ACTIONS(147), 7,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DQUOTE,
  [2177] = 8,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(151), 1,
      aux_sym_default_collation_clause_token1,
    ACTIONS(154), 1,
      aux_sym_invoker_rights_clause_token1,
    ACTIONS(157), 1,
      aux_sym_accessible_by_clause_token1,
    ACTIONS(160), 2,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
    STATE(71), 2,
      sym_comment,
      aux_sym_create_package_repeat1,
    STATE(106), 3,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
  [2206] = 2,
    STATE(72), 1,
      sym_comment,
    ACTIONS(162), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      sym__comment_ml,
      sym__comment_sl,
  [2222] = 2,
    STATE(73), 1,
      sym_comment,
    ACTIONS(164), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      sym__comment_ml,
      sym__comment_sl,
  [2238] = 2,
    STATE(74), 1,
      sym_comment,
    ACTIONS(131), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      anon_sym_DOT,
      sym__comment_ml,
      sym__comment_sl,
  [2254] = 2,
    STATE(75), 1,
      sym_comment,
    ACTIONS(97), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      anon_sym_DOT,
      sym__comment_ml,
      sym__comment_sl,
  [2270] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(168), 1,
      sym__unquoted_identifier,
    STATE(76), 1,
      sym_comment,
    ACTIONS(166), 7,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DQUOTE,
  [2292] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(172), 1,
      sym__unquoted_identifier,
    STATE(77), 1,
      sym_comment,
    ACTIONS(170), 7,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DQUOTE,
  [2314] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(176), 1,
      sym__unquoted_identifier,
    STATE(78), 1,
      sym_comment,
    ACTIONS(174), 7,
      aux_sym_create_package_token4,
      aux_sym_alter_procedure_token1,
      aux_sym_alter_function_token1,
      anon_sym_RPAREN,
      aux_sym_unit_kind_token1,
      aux_sym_unit_kind_token2,
      anon_sym_DQUOTE,
  [2336] = 2,
    STATE(79), 1,
      sym_comment,
    ACTIONS(178), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      sym__comment_ml,
      sym__comment_sl,
  [2352] = 2,
    STATE(80), 1,
      sym_comment,
    ACTIONS(180), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      sym__comment_ml,
      sym__comment_sl,
  [2368] = 2,
    STATE(81), 1,
      sym_comment,
    ACTIONS(182), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      sym__comment_ml,
      sym__comment_sl,
  [2384] = 2,
    STATE(82), 1,
      sym_comment,
    ACTIONS(184), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      aux_sym_reuse_settings_token1,
      sym__comment_ml,
      sym__comment_sl,
  [2400] = 2,
    STATE(83), 1,
      sym_comment,
    ACTIONS(186), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [2415] = 2,
    STATE(84), 1,
      sym_comment,
    ACTIONS(188), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [2430] = 2,
    STATE(85), 1,
      sym_comment,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [2445] = 2,
    STATE(86), 1,
      sym_comment,
    ACTIONS(192), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [2460] = 2,
    STATE(87), 1,
      sym_comment,
    ACTIONS(65), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [2475] = 2,
    STATE(88), 1,
      sym_comment,
    ACTIONS(194), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [2490] = 2,
    STATE(89), 1,
      sym_comment,
    ACTIONS(196), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [2505] = 2,
    STATE(90), 1,
      sym_comment,
    ACTIONS(194), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [2520] = 2,
    STATE(91), 1,
      sym_comment,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      aux_sym_compile_clause_token1,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
      sym__comment_ml,
      sym__comment_sl,
  [2535] = 8,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym__unquoted_identifier,
    STATE(8), 1,
      sym_identifier,
    STATE(29), 1,
      sym__quoted_identifier,
    STATE(92), 1,
      sym_comment,
    STATE(148), 1,
      sym__schema,
  [2560] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(200), 1,
      aux_sym_create_package_token2,
    ACTIONS(202), 1,
      aux_sym_create_package_token4,
    STATE(93), 1,
      sym_comment,
    STATE(187), 1,
      sym_editionable_noneditionable,
    ACTIONS(204), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
  [2583] = 8,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(206), 1,
      sym__unquoted_identifier,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_identifier,
    STATE(75), 1,
      sym__quoted_identifier,
    STATE(94), 1,
      sym_comment,
    STATE(121), 1,
      sym__schema,
  [2608] = 8,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym__unquoted_identifier,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym__quoted_identifier,
    STATE(95), 1,
      sym_comment,
    STATE(197), 1,
      sym_identifier,
  [2633] = 8,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(206), 1,
      sym__unquoted_identifier,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_identifier,
    STATE(75), 1,
      sym__quoted_identifier,
    STATE(96), 1,
      sym_comment,
    STATE(123), 1,
      sym__schema,
  [2658] = 8,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(206), 1,
      sym__unquoted_identifier,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_identifier,
    STATE(75), 1,
      sym__quoted_identifier,
    STATE(97), 1,
      sym_comment,
    STATE(119), 1,
      sym__schema,
  [2683] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    STATE(98), 1,
      sym_comment,
    ACTIONS(212), 5,
      aux_sym_default_collation_clause_token1,
      aux_sym_invoker_rights_clause_token1,
      aux_sym_accessible_by_clause_token1,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
  [2700] = 8,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym__unquoted_identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(29), 1,
      sym__quoted_identifier,
    STATE(99), 1,
      sym_comment,
    STATE(125), 1,
      sym__schema,
  [2725] = 8,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(206), 1,
      sym__unquoted_identifier,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_identifier,
    STATE(75), 1,
      sym__quoted_identifier,
    STATE(100), 1,
      sym_comment,
    STATE(118), 1,
      sym__schema,
  [2750] = 8,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym__unquoted_identifier,
    STATE(10), 1,
      sym_identifier,
    STATE(29), 1,
      sym__quoted_identifier,
    STATE(101), 1,
      sym_comment,
    STATE(111), 1,
      sym__schema,
  [2775] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    STATE(102), 1,
      sym_comment,
    ACTIONS(214), 5,
      aux_sym_default_collation_clause_token1,
      aux_sym_invoker_rights_clause_token1,
      aux_sym_accessible_by_clause_token1,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
  [2792] = 8,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      sym__unquoted_identifier,
    STATE(66), 1,
      sym__quoted_identifier,
    STATE(67), 1,
      sym_identifier,
    STATE(103), 1,
      sym_comment,
    STATE(142), 1,
      sym__schema,
  [2817] = 8,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym__unquoted_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(29), 1,
      sym__quoted_identifier,
    STATE(104), 1,
      sym_comment,
    STATE(122), 1,
      sym__schema,
  [2842] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    STATE(105), 1,
      sym_comment,
    ACTIONS(218), 5,
      aux_sym_default_collation_clause_token1,
      aux_sym_invoker_rights_clause_token1,
      aux_sym_accessible_by_clause_token1,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
  [2859] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    STATE(106), 1,
      sym_comment,
    ACTIONS(220), 5,
      aux_sym_default_collation_clause_token1,
      aux_sym_invoker_rights_clause_token1,
      aux_sym_accessible_by_clause_token1,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
  [2876] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    STATE(107), 1,
      sym_comment,
    ACTIONS(222), 5,
      aux_sym_default_collation_clause_token1,
      aux_sym_invoker_rights_clause_token1,
      aux_sym_accessible_by_clause_token1,
      aux_sym_is_as_token1,
      aux_sym_is_as_token2,
  [2893] = 2,
    STATE(108), 1,
      sym_comment,
    ACTIONS(224), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [2905] = 2,
    STATE(109), 1,
      sym_comment,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [2917] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(228), 1,
      aux_sym_create_package_token4,
    ACTIONS(230), 1,
      aux_sym_alter_procedure_token1,
    ACTIONS(232), 1,
      aux_sym_alter_function_token1,
    ACTIONS(234), 1,
      aux_sym_alter_library_token1,
    STATE(110), 1,
      sym_comment,
  [2939] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym__unquoted_identifier,
    STATE(16), 1,
      sym_identifier,
    STATE(29), 1,
      sym__quoted_identifier,
    STATE(111), 1,
      sym_comment,
  [2961] = 2,
    STATE(112), 1,
      sym_comment,
    ACTIONS(236), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [2973] = 2,
    STATE(113), 1,
      sym_comment,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [2985] = 2,
    STATE(114), 1,
      sym_comment,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [2997] = 2,
    STATE(115), 1,
      sym_comment,
    ACTIONS(242), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3009] = 2,
    STATE(116), 1,
      sym_comment,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3021] = 2,
    STATE(117), 1,
      sym_comment,
    ACTIONS(244), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3033] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(206), 1,
      sym__unquoted_identifier,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_identifier,
    STATE(75), 1,
      sym__quoted_identifier,
    STATE(118), 1,
      sym_comment,
  [3055] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(206), 1,
      sym__unquoted_identifier,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_identifier,
    STATE(75), 1,
      sym__quoted_identifier,
    STATE(119), 1,
      sym_comment,
  [3077] = 2,
    STATE(120), 1,
      sym_comment,
    ACTIONS(246), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3089] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(206), 1,
      sym__unquoted_identifier,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym_identifier,
    STATE(75), 1,
      sym__quoted_identifier,
    STATE(121), 1,
      sym_comment,
  [3111] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym__unquoted_identifier,
    STATE(18), 1,
      sym_identifier,
    STATE(29), 1,
      sym__quoted_identifier,
    STATE(122), 1,
      sym_comment,
  [3133] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(206), 1,
      sym__unquoted_identifier,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_identifier,
    STATE(75), 1,
      sym__quoted_identifier,
    STATE(123), 1,
      sym_comment,
  [3155] = 2,
    STATE(124), 1,
      sym_comment,
    ACTIONS(248), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3167] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym__unquoted_identifier,
    STATE(15), 1,
      sym_identifier,
    STATE(29), 1,
      sym__quoted_identifier,
    STATE(125), 1,
      sym_comment,
  [3189] = 2,
    STATE(126), 1,
      sym_comment,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3201] = 2,
    STATE(127), 1,
      sym_comment,
    ACTIONS(252), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3213] = 2,
    STATE(128), 1,
      sym_comment,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3225] = 2,
    STATE(129), 1,
      sym_comment,
    ACTIONS(256), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3237] = 2,
    STATE(130), 1,
      sym_comment,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3249] = 2,
    STATE(131), 1,
      sym_comment,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3261] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      sym__unquoted_identifier,
    STATE(66), 1,
      sym__quoted_identifier,
    STATE(78), 1,
      sym_identifier,
    STATE(132), 1,
      sym_comment,
  [3283] = 6,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(260), 1,
      aux_sym_create_package_token4,
    STATE(133), 1,
      sym_comment,
    STATE(188), 1,
      sym_editionable_noneditionable,
    ACTIONS(204), 2,
      aux_sym_editionable_noneditionable_token1,
      aux_sym_editionable_noneditionable_token2,
  [3303] = 2,
    STATE(134), 1,
      sym_comment,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3315] = 2,
    STATE(135), 1,
      sym_comment,
    ACTIONS(262), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3327] = 2,
    STATE(136), 1,
      sym_comment,
    ACTIONS(264), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3339] = 2,
    STATE(137), 1,
      sym_comment,
    ACTIONS(266), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3351] = 2,
    STATE(138), 1,
      sym_comment,
    ACTIONS(266), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3363] = 2,
    STATE(139), 1,
      sym_comment,
    ACTIONS(268), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3375] = 3,
    ACTIONS(272), 1,
      anon_sym_SEMI,
    STATE(140), 1,
      sym_comment,
    ACTIONS(270), 5,
      ts_builtin_sym_end,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3389] = 2,
    STATE(141), 1,
      sym_comment,
    ACTIONS(274), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3401] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      sym__unquoted_identifier,
    STATE(66), 1,
      sym__quoted_identifier,
    STATE(76), 1,
      sym_identifier,
    STATE(142), 1,
      sym_comment,
  [3423] = 2,
    STATE(143), 1,
      sym_comment,
    ACTIONS(276), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3435] = 2,
    STATE(144), 1,
      sym_comment,
    ACTIONS(278), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3447] = 2,
    STATE(145), 1,
      sym_comment,
    ACTIONS(280), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3459] = 2,
    STATE(146), 1,
      sym_comment,
    ACTIONS(282), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3471] = 2,
    STATE(147), 1,
      sym_comment,
    ACTIONS(284), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3483] = 7,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym__unquoted_identifier,
    STATE(17), 1,
      sym_identifier,
    STATE(29), 1,
      sym__quoted_identifier,
    STATE(148), 1,
      sym_comment,
  [3505] = 2,
    STATE(149), 1,
      sym_comment,
    ACTIONS(286), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3517] = 2,
    STATE(150), 1,
      sym_comment,
    ACTIONS(288), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3529] = 2,
    STATE(151), 1,
      sym_comment,
    ACTIONS(290), 5,
      ts_builtin_sym_end,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3540] = 2,
    STATE(152), 1,
      sym_comment,
    ACTIONS(292), 5,
      ts_builtin_sym_end,
      aux_sym_create_package_token1,
      aux_sym_alter_package_token1,
      sym__comment_ml,
      sym__comment_sl,
  [3551] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(117), 1,
      sym_end_obj,
    STATE(153), 1,
      sym_comment,
  [3567] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(136), 1,
      sym_end_obj,
    STATE(154), 1,
      sym_comment,
  [3583] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(124), 1,
      sym_end_obj,
    STATE(155), 1,
      sym_comment,
  [3599] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(131), 1,
      sym_end_obj,
    STATE(156), 1,
      sym_comment,
  [3615] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(128), 1,
      sym_end_obj,
    STATE(157), 1,
      sym_comment,
  [3631] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(129), 1,
      sym_end_obj,
    STATE(158), 1,
      sym_comment,
  [3647] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    STATE(159), 1,
      sym_comment,
    ACTIONS(296), 2,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [3661] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(127), 1,
      sym_end_obj,
    STATE(160), 1,
      sym_comment,
  [3677] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(150), 1,
      sym_end_obj,
    STATE(161), 1,
      sym_comment,
  [3693] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(126), 1,
      sym_end_obj,
    STATE(162), 1,
      sym_comment,
  [3709] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(144), 1,
      sym_end_obj,
    STATE(163), 1,
      sym_comment,
  [3725] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(130), 1,
      sym_end_obj,
    STATE(164), 1,
      sym_comment,
  [3741] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(135), 1,
      sym_end_obj,
    STATE(165), 1,
      sym_comment,
  [3757] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(143), 1,
      sym_end_obj,
    STATE(166), 1,
      sym_comment,
  [3773] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(134), 1,
      sym_end_obj,
    STATE(167), 1,
      sym_comment,
  [3789] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(139), 1,
      sym_end_obj,
    STATE(168), 1,
      sym_comment,
  [3805] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(141), 1,
      sym_end_obj,
    STATE(169), 1,
      sym_comment,
  [3821] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(137), 1,
      sym_end_obj,
    STATE(170), 1,
      sym_comment,
  [3837] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(112), 1,
      sym_end_obj,
    STATE(171), 1,
      sym_comment,
  [3853] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(120), 1,
      sym_end_obj,
    STATE(172), 1,
      sym_comment,
  [3869] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(138), 1,
      sym_end_obj,
    STATE(173), 1,
      sym_comment,
  [3885] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    STATE(174), 1,
      sym_comment,
    ACTIONS(298), 2,
      aux_sym_invoker_rights_clause_token2,
      aux_sym_invoker_rights_clause_token3,
  [3899] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(146), 1,
      sym_end_obj,
    STATE(175), 1,
      sym_comment,
  [3915] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(115), 1,
      sym_end_obj,
    STATE(176), 1,
      sym_comment,
  [3931] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(109), 1,
      sym_end_obj,
    STATE(177), 1,
      sym_comment,
  [3947] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(147), 1,
      sym_end_obj,
    STATE(178), 1,
      sym_comment,
  [3963] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    STATE(179), 1,
      sym_comment,
    ACTIONS(300), 2,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [3977] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(116), 1,
      sym_end_obj,
    STATE(180), 1,
      sym_comment,
  [3993] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(113), 1,
      sym_end_obj,
    STATE(181), 1,
      sym_comment,
  [4009] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(145), 1,
      sym_end_obj,
    STATE(182), 1,
      sym_comment,
  [4025] = 5,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(294), 1,
      aux_sym_end_obj_token1,
    STATE(114), 1,
      sym_end_obj,
    STATE(183), 1,
      sym_comment,
  [4041] = 4,
    ACTIONS(302), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(304), 1,
      sym__comment_ml,
    ACTIONS(306), 1,
      sym__comment_sl,
    STATE(184), 1,
      sym_comment,
  [4054] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    STATE(185), 1,
      sym_comment,
  [4067] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(310), 1,
      anon_sym_EQ,
    STATE(186), 1,
      sym_comment,
  [4080] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(312), 1,
      aux_sym_create_package_token4,
    STATE(187), 1,
      sym_comment,
  [4093] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(314), 1,
      aux_sym_create_package_token4,
    STATE(188), 1,
      sym_comment,
  [4106] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    STATE(189), 1,
      sym_comment,
  [4119] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(318), 1,
      aux_sym_accessible_by_clause_token2,
    STATE(190), 1,
      sym_comment,
  [4132] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(320), 1,
      aux_sym_default_collation_clause_token3,
    STATE(191), 1,
      sym_comment,
  [4145] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(322), 1,
      aux_sym_default_collation_clause_token2,
    STATE(192), 1,
      sym_comment,
  [4158] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym_comment,
  [4171] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(326), 1,
      aux_sym_create_package_token3,
    STATE(194), 1,
      sym_comment,
  [4184] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(190), 1,
      aux_sym_create_package_token4,
    STATE(195), 1,
      sym_comment,
  [4197] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(328), 1,
      aux_sym_end_obj_token1,
    STATE(196), 1,
      sym_comment,
  [4210] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      sym_comment,
  [4223] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(332), 1,
      aux_sym_reuse_settings_token2,
    STATE(198), 1,
      sym_comment,
  [4236] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_comment,
  [4249] = 4,
    ACTIONS(3), 1,
      sym__comment_ml,
    ACTIONS(5), 1,
      sym__comment_sl,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      sym_comment,
  [4262] = 4,
    ACTIONS(304), 1,
      sym__comment_ml,
    ACTIONS(306), 1,
      sym__comment_sl,
    ACTIONS(338), 1,
      aux_sym__quoted_identifier_token1,
    STATE(201), 1,
      sym_comment,
  [4275] = 4,
    ACTIONS(304), 1,
      sym__comment_ml,
    ACTIONS(306), 1,
      sym__comment_sl,
    ACTIONS(340), 1,
      aux_sym__quoted_identifier_token1,
    STATE(202), 1,
      sym_comment,
  [4288] = 1,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 85,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 189,
  [SMALL_STATE(8)] = 233,
  [SMALL_STATE(9)] = 277,
  [SMALL_STATE(10)] = 321,
  [SMALL_STATE(11)] = 365,
  [SMALL_STATE(12)] = 401,
  [SMALL_STATE(13)] = 437,
  [SMALL_STATE(14)] = 481,
  [SMALL_STATE(15)] = 522,
  [SMALL_STATE(16)] = 563,
  [SMALL_STATE(17)] = 604,
  [SMALL_STATE(18)] = 645,
  [SMALL_STATE(19)] = 686,
  [SMALL_STATE(20)] = 713,
  [SMALL_STATE(21)] = 740,
  [SMALL_STATE(22)] = 773,
  [SMALL_STATE(23)] = 800,
  [SMALL_STATE(24)] = 827,
  [SMALL_STATE(25)] = 861,
  [SMALL_STATE(26)] = 895,
  [SMALL_STATE(27)] = 929,
  [SMALL_STATE(28)] = 963,
  [SMALL_STATE(29)] = 997,
  [SMALL_STATE(30)] = 1019,
  [SMALL_STATE(31)] = 1053,
  [SMALL_STATE(32)] = 1087,
  [SMALL_STATE(33)] = 1121,
  [SMALL_STATE(34)] = 1155,
  [SMALL_STATE(35)] = 1189,
  [SMALL_STATE(36)] = 1223,
  [SMALL_STATE(37)] = 1257,
  [SMALL_STATE(38)] = 1291,
  [SMALL_STATE(39)] = 1325,
  [SMALL_STATE(40)] = 1359,
  [SMALL_STATE(41)] = 1393,
  [SMALL_STATE(42)] = 1417,
  [SMALL_STATE(43)] = 1451,
  [SMALL_STATE(44)] = 1475,
  [SMALL_STATE(45)] = 1499,
  [SMALL_STATE(46)] = 1533,
  [SMALL_STATE(47)] = 1567,
  [SMALL_STATE(48)] = 1591,
  [SMALL_STATE(49)] = 1615,
  [SMALL_STATE(50)] = 1649,
  [SMALL_STATE(51)] = 1673,
  [SMALL_STATE(52)] = 1697,
  [SMALL_STATE(53)] = 1721,
  [SMALL_STATE(54)] = 1745,
  [SMALL_STATE(55)] = 1769,
  [SMALL_STATE(56)] = 1793,
  [SMALL_STATE(57)] = 1817,
  [SMALL_STATE(58)] = 1839,
  [SMALL_STATE(59)] = 1873,
  [SMALL_STATE(60)] = 1907,
  [SMALL_STATE(61)] = 1929,
  [SMALL_STATE(62)] = 1963,
  [SMALL_STATE(63)] = 1997,
  [SMALL_STATE(64)] = 2020,
  [SMALL_STATE(65)] = 2041,
  [SMALL_STATE(66)] = 2062,
  [SMALL_STATE(67)] = 2085,
  [SMALL_STATE(68)] = 2110,
  [SMALL_STATE(69)] = 2131,
  [SMALL_STATE(70)] = 2152,
  [SMALL_STATE(71)] = 2177,
  [SMALL_STATE(72)] = 2206,
  [SMALL_STATE(73)] = 2222,
  [SMALL_STATE(74)] = 2238,
  [SMALL_STATE(75)] = 2254,
  [SMALL_STATE(76)] = 2270,
  [SMALL_STATE(77)] = 2292,
  [SMALL_STATE(78)] = 2314,
  [SMALL_STATE(79)] = 2336,
  [SMALL_STATE(80)] = 2352,
  [SMALL_STATE(81)] = 2368,
  [SMALL_STATE(82)] = 2384,
  [SMALL_STATE(83)] = 2400,
  [SMALL_STATE(84)] = 2415,
  [SMALL_STATE(85)] = 2430,
  [SMALL_STATE(86)] = 2445,
  [SMALL_STATE(87)] = 2460,
  [SMALL_STATE(88)] = 2475,
  [SMALL_STATE(89)] = 2490,
  [SMALL_STATE(90)] = 2505,
  [SMALL_STATE(91)] = 2520,
  [SMALL_STATE(92)] = 2535,
  [SMALL_STATE(93)] = 2560,
  [SMALL_STATE(94)] = 2583,
  [SMALL_STATE(95)] = 2608,
  [SMALL_STATE(96)] = 2633,
  [SMALL_STATE(97)] = 2658,
  [SMALL_STATE(98)] = 2683,
  [SMALL_STATE(99)] = 2700,
  [SMALL_STATE(100)] = 2725,
  [SMALL_STATE(101)] = 2750,
  [SMALL_STATE(102)] = 2775,
  [SMALL_STATE(103)] = 2792,
  [SMALL_STATE(104)] = 2817,
  [SMALL_STATE(105)] = 2842,
  [SMALL_STATE(106)] = 2859,
  [SMALL_STATE(107)] = 2876,
  [SMALL_STATE(108)] = 2893,
  [SMALL_STATE(109)] = 2905,
  [SMALL_STATE(110)] = 2917,
  [SMALL_STATE(111)] = 2939,
  [SMALL_STATE(112)] = 2961,
  [SMALL_STATE(113)] = 2973,
  [SMALL_STATE(114)] = 2985,
  [SMALL_STATE(115)] = 2997,
  [SMALL_STATE(116)] = 3009,
  [SMALL_STATE(117)] = 3021,
  [SMALL_STATE(118)] = 3033,
  [SMALL_STATE(119)] = 3055,
  [SMALL_STATE(120)] = 3077,
  [SMALL_STATE(121)] = 3089,
  [SMALL_STATE(122)] = 3111,
  [SMALL_STATE(123)] = 3133,
  [SMALL_STATE(124)] = 3155,
  [SMALL_STATE(125)] = 3167,
  [SMALL_STATE(126)] = 3189,
  [SMALL_STATE(127)] = 3201,
  [SMALL_STATE(128)] = 3213,
  [SMALL_STATE(129)] = 3225,
  [SMALL_STATE(130)] = 3237,
  [SMALL_STATE(131)] = 3249,
  [SMALL_STATE(132)] = 3261,
  [SMALL_STATE(133)] = 3283,
  [SMALL_STATE(134)] = 3303,
  [SMALL_STATE(135)] = 3315,
  [SMALL_STATE(136)] = 3327,
  [SMALL_STATE(137)] = 3339,
  [SMALL_STATE(138)] = 3351,
  [SMALL_STATE(139)] = 3363,
  [SMALL_STATE(140)] = 3375,
  [SMALL_STATE(141)] = 3389,
  [SMALL_STATE(142)] = 3401,
  [SMALL_STATE(143)] = 3423,
  [SMALL_STATE(144)] = 3435,
  [SMALL_STATE(145)] = 3447,
  [SMALL_STATE(146)] = 3459,
  [SMALL_STATE(147)] = 3471,
  [SMALL_STATE(148)] = 3483,
  [SMALL_STATE(149)] = 3505,
  [SMALL_STATE(150)] = 3517,
  [SMALL_STATE(151)] = 3529,
  [SMALL_STATE(152)] = 3540,
  [SMALL_STATE(153)] = 3551,
  [SMALL_STATE(154)] = 3567,
  [SMALL_STATE(155)] = 3583,
  [SMALL_STATE(156)] = 3599,
  [SMALL_STATE(157)] = 3615,
  [SMALL_STATE(158)] = 3631,
  [SMALL_STATE(159)] = 3647,
  [SMALL_STATE(160)] = 3661,
  [SMALL_STATE(161)] = 3677,
  [SMALL_STATE(162)] = 3693,
  [SMALL_STATE(163)] = 3709,
  [SMALL_STATE(164)] = 3725,
  [SMALL_STATE(165)] = 3741,
  [SMALL_STATE(166)] = 3757,
  [SMALL_STATE(167)] = 3773,
  [SMALL_STATE(168)] = 3789,
  [SMALL_STATE(169)] = 3805,
  [SMALL_STATE(170)] = 3821,
  [SMALL_STATE(171)] = 3837,
  [SMALL_STATE(172)] = 3853,
  [SMALL_STATE(173)] = 3869,
  [SMALL_STATE(174)] = 3885,
  [SMALL_STATE(175)] = 3899,
  [SMALL_STATE(176)] = 3915,
  [SMALL_STATE(177)] = 3931,
  [SMALL_STATE(178)] = 3947,
  [SMALL_STATE(179)] = 3963,
  [SMALL_STATE(180)] = 3977,
  [SMALL_STATE(181)] = 3993,
  [SMALL_STATE(182)] = 4009,
  [SMALL_STATE(183)] = 4025,
  [SMALL_STATE(184)] = 4041,
  [SMALL_STATE(185)] = 4054,
  [SMALL_STATE(186)] = 4067,
  [SMALL_STATE(187)] = 4080,
  [SMALL_STATE(188)] = 4093,
  [SMALL_STATE(189)] = 4106,
  [SMALL_STATE(190)] = 4119,
  [SMALL_STATE(191)] = 4132,
  [SMALL_STATE(192)] = 4145,
  [SMALL_STATE(193)] = 4158,
  [SMALL_STATE(194)] = 4171,
  [SMALL_STATE(195)] = 4184,
  [SMALL_STATE(196)] = 4197,
  [SMALL_STATE(197)] = 4210,
  [SMALL_STATE(198)] = 4223,
  [SMALL_STATE(199)] = 4236,
  [SMALL_STATE(200)] = 4249,
  [SMALL_STATE(201)] = 4262,
  [SMALL_STATE(202)] = 4275,
  [SMALL_STATE(203)] = 4288,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(179),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(66),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(202),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 3, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 3, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 3, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 3, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 5, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 5, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 5, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 5, .production_id = 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(85),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 2, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4, .production_id = 10),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3, .production_id = 7),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 1),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(192),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(174),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(190),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compiler_parameter_clause, 3, .production_id = 11),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_null, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 3, .production_id = 16),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 3, .production_id = 16),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 2, .production_id = 14),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 2, .production_id = 14),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_number, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_false, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_true, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3, .production_id = 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reuse_settings, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_editionable_noneditionable, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 5, .production_id = 10),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4, .production_id = 7),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_collation_clause, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invoker_rights_clause, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessible_by_clause, 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sharing_clause, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 12),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 11, .production_id = 15),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 13),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 15),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 6, .production_id = 6),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 12),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 9),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 8),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 13),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 15),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 8),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 12),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 6),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 9),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 9),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 6),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 6, .production_id = 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 13),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 6, .production_id = 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 8),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 5, .production_id = 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__schema, 2, .production_id = 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_kind, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [308] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_as, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
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
