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
#define STATE_COUNT 797
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 267
#define ALIAS_COUNT 0
#define TOKEN_COUNT 149
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_DOT = 5,
  anon_sym_PERCENT = 6,
  anon_sym_COMMA = 7,
  anon_sym_SQUOTE = 8,
  anon_sym_COLON_EQ = 9,
  anon_sym_EQ_GT = 10,
  anon_sym_LT = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_GT = 13,
  anon_sym_GT_EQ = 14,
  anon_sym_LT_GT = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_TILDE_EQ = 17,
  anon_sym_CARET_EQ = 18,
  sym__unquoted_identifier = 19,
  anon_sym_DQUOTE = 20,
  aux_sym__quoted_identifier_token1 = 21,
  sym__single_quote_string = 22,
  sym__number = 23,
  sym_comment_ml = 24,
  sym_comment_sl = 25,
  sym_kw_create = 26,
  sym_kw_alter = 27,
  sym_kw_package = 28,
  sym_kw_function = 29,
  sym_kw_procedure = 30,
  sym_kw_trigger = 31,
  sym_kw_type = 32,
  sym_kw_rowtype = 33,
  sym_kw_library = 34,
  sym_kw_true = 35,
  sym_kw_false = 36,
  sym_kw_null = 37,
  sym_kw_not = 38,
  sym_kw_row = 39,
  sym_kw_compile = 40,
  sym_kw_debug = 41,
  sym_kw_specification = 42,
  sym_kw_body = 43,
  sym_kw_begin = 44,
  sym_kw_end = 45,
  sym_kw_or = 46,
  sym_kw_and = 47,
  sym_kw_replace = 48,
  sym_kw_editionable = 49,
  sym_kw_noneditionable = 50,
  sym_kw_metadata = 51,
  sym_kw_none = 52,
  sym_kw_default = 53,
  sym_kw_collation = 54,
  sym_kw_using_nls_comp = 55,
  sym_kw_authid = 56,
  sym_kw_current_user = 57,
  sym_kw_definer = 58,
  sym_kw_accessible = 59,
  sym_kw_by = 60,
  sym_kw_reuse = 61,
  sym_kw_settings = 62,
  sym_kw_byte = 63,
  sym_kw_char = 64,
  sym_kw_is = 65,
  sym_kw_as = 66,
  sym_kw_deterministic = 67,
  sym_kw_pipelined = 68,
  sym_kw_parallel_enable = 69,
  sym_kw_result_cache = 70,
  sym_kw_exists = 71,
  sym_kw_between = 72,
  sym_kw_found = 73,
  sym_kw_isopen = 74,
  sym_kw_notfound = 75,
  sym_kw_in = 76,
  sym_kw_out = 77,
  sym_kw_nocopy = 78,
  sym_kw_like = 79,
  sym_kw_inserting = 80,
  sym_kw_deleting = 81,
  sym_kw_updating = 82,
  sym_kw_return = 83,
  sym_kw_varchar = 84,
  sym_kw_varchar2 = 85,
  sym_kw_nvarchar2 = 86,
  sym_kw_nchar = 87,
  sym_kw_int = 88,
  sym_kw_smallint = 89,
  sym_kw_real = 90,
  sym_kw_binary_float = 91,
  sym_kw_binary_double = 92,
  sym_kw_simple_float = 93,
  sym_kw_simple_double = 94,
  sym_kw_binary_integer = 95,
  sym_kw_pls_integer = 96,
  sym_kw_natural = 97,
  sym_kw_naturaln = 98,
  sym_kw_positive = 99,
  sym_kw_positiven = 100,
  sym_kw_signtype = 101,
  sym_kw_simple_integer = 102,
  sym_kw_integer = 103,
  sym_kw_number = 104,
  sym_kw_float = 105,
  sym_kw_long = 106,
  sym_kw_raw = 107,
  sym_kw_date = 108,
  sym_kw_timestamp = 109,
  sym_kw_with = 110,
  sym_kw_local = 111,
  sym_kw_time = 112,
  sym_kw_zone = 113,
  sym_kw_interval = 114,
  sym_kw_year = 115,
  sym_kw_month = 116,
  sym_kw_day = 117,
  sym_kw_minute = 118,
  sym_kw_second = 119,
  sym_kw_to = 120,
  sym_kw_blob = 121,
  sym_kw_clob = 122,
  sym_kw_nclob = 123,
  sym_kw_bfile = 124,
  sym_kw_rowid = 125,
  sym_kw_urowid = 126,
  sym_kw_boolean = 127,
  sym_kw_character = 128,
  sym_kw_varying = 129,
  sym_kw_numeric = 130,
  sym_kw_decimal = 131,
  sym_kw_dec = 132,
  sym_kw_double = 133,
  sym_kw_precision = 134,
  sym_kw_sys = 135,
  sym_kw_anydata = 136,
  sym_kw_anytype = 137,
  sym_kw_anydataset = 138,
  sym_kw_xmltype = 139,
  sym_kw_uritype = 140,
  sym_kw_sdo_geometry = 141,
  sym_kw_sdo_topo_geometry = 142,
  sym_kw_sdo_georaster = 143,
  sym_kw_json_element_t = 144,
  sym_kw_json_array_t = 145,
  sym_kw_json_object_t = 146,
  sym_kw_json_scalar_t = 147,
  sym_kw_json_key_list = 148,
  sym_source_file = 149,
  sym__element = 150,
  sym_sql_statement = 151,
  sym__ddl_statement = 152,
  sym__create_statement = 153,
  sym_create_package = 154,
  sym__alter_statement = 155,
  sym_alter_package = 156,
  sym_alter_procedure = 157,
  sym_alter_function = 158,
  sym_alter_library = 159,
  sym_compile_clause = 160,
  sym_compiler_parameter_clause = 161,
  sym_editionable_noneditionable = 162,
  sym_sharing_clause = 163,
  sym_default_collation_clause = 164,
  sym_invoker_rights_clause = 165,
  sym_accessible_by_clause = 166,
  sym_accessor = 167,
  sym_unit_kind = 168,
  sym_reuse_settings = 169,
  sym__schema = 170,
  sym_byte_char = 171,
  sym_is_as = 172,
  sym_end_obj = 173,
  sym__package_item_list = 174,
  sym_create_obj = 175,
  sym_package_function_declaration = 176,
  sym_function_properties = 177,
  sym__is_null_or_is_not_null = 178,
  sym_is_null = 179,
  sym_is_not_null = 180,
  sym_expression = 181,
  sym__expression_elements = 182,
  sym__expression_boolean = 183,
  sym__expression_boolean_elements = 184,
  sym_expression_boolean_ref = 185,
  sym__other_boolean_form = 186,
  sym__other_boolean_form_collection = 187,
  sym__other_boolean_form_expression = 188,
  sym__other_boolean_form_named_cursor = 189,
  sym__other_boolean_form_expression_is = 190,
  sym__other_boolean_form_expression_between = 191,
  sym__other_boolean_form_expression_in = 192,
  sym__other_boolean_form_expression_like = 193,
  sym__other_boolean_form_expression_relational_operation = 194,
  sym_conditional_predicate = 195,
  sym_return_declaration = 196,
  sym_datatype = 197,
  sym_character_datatypes = 198,
  sym__character_datatypes_char = 199,
  sym__character_datatypes_varchar2 = 200,
  sym__character_datatypes_nchar = 201,
  sym__character_datatypes_nvarchar2 = 202,
  sym_number_datatypes = 203,
  sym__number_datatypes_keyword = 204,
  sym__number_datatypes_number = 205,
  sym__number_datatypes_float = 206,
  sym_long_and_raw_datatypes = 207,
  sym__long_and_raw_datatypes_long_raw = 208,
  sym__long_and_raw_datatypes_raw = 209,
  sym_datetime_datatypes = 210,
  sym__datetime_datatypes_keyword = 211,
  sym__datetime_datatypes_date_timestamp = 212,
  sym__datetime_datatypes_date_interval_year = 213,
  sym__datetime_datatypes_date_interval_day = 214,
  sym_large_object_datatypes = 215,
  sym_rowid_datatypes = 216,
  sym_referenced_datatypes = 217,
  sym__referenced_datatypes_type = 218,
  sym__referenced_datatypes_rowtype = 219,
  sym_logical_datatypes = 220,
  sym_subtype_datatypes = 221,
  sym__rowid_datatypes_urowid = 222,
  sym__ansi_supported_datatypes_character = 223,
  sym__ansi_supported_datatypes_char_nchar = 224,
  sym__ansi_supported_datatypes_varchar = 225,
  sym__ansi_supported_datatypes_national = 226,
  sym__ansi_supported_datatypes_numeric_decimal_dec = 227,
  sym__ansi_supported_datatypes_double_precision = 228,
  sym_supplied_datatypes_any_types = 229,
  sym_supplied_datatypes_xml_types = 230,
  sym_supplied_datatypes_spatial_types = 231,
  sym_object_datatypes = 232,
  sym_parameter_declaration = 233,
  sym_parameter_declaration_element = 234,
  sym_parameter_declaration_element_in = 235,
  sym_parameter_declaration_element_in_out_or_out = 236,
  sym_default_expression = 237,
  sym_parameter = 238,
  sym_parameter_element = 239,
  sym_parameter_element_positional = 240,
  sym_parameter_element_named = 241,
  sym_parameter_name = 242,
  sym_parameter_value = 243,
  sym__size = 244,
  sym__size_byte_char = 245,
  sym__size_precision_scale = 246,
  sym__precision = 247,
  sym__scale = 248,
  sym_relational_operator = 249,
  sym__relational_operator_not_equal = 250,
  sym_identifier = 251,
  sym__quoted_identifier = 252,
  sym__literal = 253,
  sym_literal_boolean = 254,
  sym_literal_number = 255,
  sym_literal_string = 256,
  aux_sym_source_file_repeat1 = 257,
  aux_sym_create_package_repeat1 = 258,
  aux_sym_create_package_repeat2 = 259,
  aux_sym_alter_package_repeat1 = 260,
  aux_sym_compile_clause_repeat1 = 261,
  aux_sym_accessible_by_clause_repeat1 = 262,
  aux_sym_package_function_declaration_repeat1 = 263,
  aux_sym__other_boolean_form_expression_in_repeat1 = 264,
  aux_sym_parameter_declaration_repeat1 = 265,
  aux_sym_parameter_repeat1 = 266,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_PERCENT] = "%",
  [anon_sym_COMMA] = ",",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_COLON_EQ] = ":=",
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
  [sym__single_quote_string] = "_single_quote_string",
  [sym__number] = "_number",
  [sym_comment_ml] = "comment_ml",
  [sym_comment_sl] = "comment_sl",
  [sym_kw_create] = "kw_create",
  [sym_kw_alter] = "kw_alter",
  [sym_kw_package] = "kw_package",
  [sym_kw_function] = "kw_function",
  [sym_kw_procedure] = "kw_procedure",
  [sym_kw_trigger] = "kw_trigger",
  [sym_kw_type] = "kw_type",
  [sym_kw_rowtype] = "kw_rowtype",
  [sym_kw_library] = "kw_library",
  [sym_kw_true] = "kw_true",
  [sym_kw_false] = "kw_false",
  [sym_kw_null] = "kw_null",
  [sym_kw_not] = "kw_not",
  [sym_kw_row] = "kw_row",
  [sym_kw_compile] = "kw_compile",
  [sym_kw_debug] = "kw_debug",
  [sym_kw_specification] = "kw_specification",
  [sym_kw_body] = "kw_body",
  [sym_kw_begin] = "kw_begin",
  [sym_kw_end] = "kw_end",
  [sym_kw_or] = "kw_or",
  [sym_kw_and] = "kw_and",
  [sym_kw_replace] = "kw_replace",
  [sym_kw_editionable] = "kw_editionable",
  [sym_kw_noneditionable] = "kw_noneditionable",
  [sym_kw_metadata] = "kw_metadata",
  [sym_kw_none] = "kw_none",
  [sym_kw_default] = "kw_default",
  [sym_kw_collation] = "kw_collation",
  [sym_kw_using_nls_comp] = "kw_using_nls_comp",
  [sym_kw_authid] = "kw_authid",
  [sym_kw_current_user] = "kw_current_user",
  [sym_kw_definer] = "kw_definer",
  [sym_kw_accessible] = "kw_accessible",
  [sym_kw_by] = "kw_by",
  [sym_kw_reuse] = "kw_reuse",
  [sym_kw_settings] = "kw_settings",
  [sym_kw_byte] = "kw_byte",
  [sym_kw_char] = "kw_char",
  [sym_kw_is] = "kw_is",
  [sym_kw_as] = "kw_as",
  [sym_kw_deterministic] = "kw_deterministic",
  [sym_kw_pipelined] = "kw_pipelined",
  [sym_kw_parallel_enable] = "kw_parallel_enable",
  [sym_kw_result_cache] = "kw_result_cache",
  [sym_kw_exists] = "kw_exists",
  [sym_kw_between] = "kw_between",
  [sym_kw_found] = "kw_found",
  [sym_kw_isopen] = "kw_isopen",
  [sym_kw_notfound] = "kw_notfound",
  [sym_kw_in] = "kw_in",
  [sym_kw_out] = "kw_out",
  [sym_kw_nocopy] = "kw_nocopy",
  [sym_kw_like] = "kw_like",
  [sym_kw_inserting] = "kw_inserting",
  [sym_kw_deleting] = "kw_deleting",
  [sym_kw_updating] = "kw_updating",
  [sym_kw_return] = "kw_return",
  [sym_kw_varchar] = "kw_varchar",
  [sym_kw_varchar2] = "kw_varchar2",
  [sym_kw_nvarchar2] = "kw_nvarchar2",
  [sym_kw_nchar] = "kw_nchar",
  [sym_kw_int] = "kw_int",
  [sym_kw_smallint] = "kw_smallint",
  [sym_kw_real] = "kw_real",
  [sym_kw_binary_float] = "kw_binary_float",
  [sym_kw_binary_double] = "kw_binary_double",
  [sym_kw_simple_float] = "kw_simple_float",
  [sym_kw_simple_double] = "kw_simple_double",
  [sym_kw_binary_integer] = "kw_binary_integer",
  [sym_kw_pls_integer] = "kw_pls_integer",
  [sym_kw_natural] = "kw_natural",
  [sym_kw_naturaln] = "kw_naturaln",
  [sym_kw_positive] = "kw_positive",
  [sym_kw_positiven] = "kw_positiven",
  [sym_kw_signtype] = "kw_signtype",
  [sym_kw_simple_integer] = "kw_simple_integer",
  [sym_kw_integer] = "kw_integer",
  [sym_kw_number] = "kw_number",
  [sym_kw_float] = "kw_float",
  [sym_kw_long] = "kw_long",
  [sym_kw_raw] = "kw_raw",
  [sym_kw_date] = "kw_date",
  [sym_kw_timestamp] = "kw_timestamp",
  [sym_kw_with] = "kw_with",
  [sym_kw_local] = "kw_local",
  [sym_kw_time] = "kw_time",
  [sym_kw_zone] = "kw_zone",
  [sym_kw_interval] = "kw_interval",
  [sym_kw_year] = "kw_year",
  [sym_kw_month] = "kw_month",
  [sym_kw_day] = "kw_day",
  [sym_kw_minute] = "kw_minute",
  [sym_kw_second] = "kw_second",
  [sym_kw_to] = "kw_to",
  [sym_kw_blob] = "kw_blob",
  [sym_kw_clob] = "kw_clob",
  [sym_kw_nclob] = "kw_nclob",
  [sym_kw_bfile] = "kw_bfile",
  [sym_kw_rowid] = "kw_rowid",
  [sym_kw_urowid] = "kw_urowid",
  [sym_kw_boolean] = "kw_boolean",
  [sym_kw_character] = "kw_character",
  [sym_kw_varying] = "kw_varying",
  [sym_kw_numeric] = "kw_numeric",
  [sym_kw_decimal] = "kw_decimal",
  [sym_kw_dec] = "kw_dec",
  [sym_kw_double] = "kw_double",
  [sym_kw_precision] = "kw_precision",
  [sym_kw_sys] = "kw_sys",
  [sym_kw_anydata] = "kw_anydata",
  [sym_kw_anytype] = "kw_anytype",
  [sym_kw_anydataset] = "kw_anydataset",
  [sym_kw_xmltype] = "kw_xmltype",
  [sym_kw_uritype] = "kw_uritype",
  [sym_kw_sdo_geometry] = "kw_sdo_geometry",
  [sym_kw_sdo_topo_geometry] = "kw_sdo_topo_geometry",
  [sym_kw_sdo_georaster] = "kw_sdo_georaster",
  [sym_kw_json_element_t] = "kw_json_element_t",
  [sym_kw_json_array_t] = "kw_json_array_t",
  [sym_kw_json_object_t] = "kw_json_object_t",
  [sym_kw_json_scalar_t] = "kw_json_scalar_t",
  [sym_kw_json_key_list] = "kw_json_key_list",
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
  [sym_compiler_parameter_clause] = "compiler_parameter_clause",
  [sym_editionable_noneditionable] = "editionable_noneditionable",
  [sym_sharing_clause] = "sharing_clause",
  [sym_default_collation_clause] = "default_collation_clause",
  [sym_invoker_rights_clause] = "invoker_rights_clause",
  [sym_accessible_by_clause] = "accessible_by_clause",
  [sym_accessor] = "accessor",
  [sym_unit_kind] = "unit_kind",
  [sym_reuse_settings] = "reuse_settings",
  [sym__schema] = "_schema",
  [sym_byte_char] = "byte_char",
  [sym_is_as] = "is_as",
  [sym_end_obj] = "end_obj",
  [sym__package_item_list] = "_package_item_list",
  [sym_create_obj] = "create_obj",
  [sym_package_function_declaration] = "package_function_declaration",
  [sym_function_properties] = "function_properties",
  [sym__is_null_or_is_not_null] = "_is_null_or_is_not_null",
  [sym_is_null] = "is_null",
  [sym_is_not_null] = "is_not_null",
  [sym_expression] = "expression",
  [sym__expression_elements] = "_expression_elements",
  [sym__expression_boolean] = "_expression_boolean",
  [sym__expression_boolean_elements] = "_expression_boolean_elements",
  [sym_expression_boolean_ref] = "expression_boolean_ref",
  [sym__other_boolean_form] = "_other_boolean_form",
  [sym__other_boolean_form_collection] = "_other_boolean_form_collection",
  [sym__other_boolean_form_expression] = "_other_boolean_form_expression",
  [sym__other_boolean_form_named_cursor] = "_other_boolean_form_named_cursor",
  [sym__other_boolean_form_expression_is] = "_other_boolean_form_expression_is",
  [sym__other_boolean_form_expression_between] = "_other_boolean_form_expression_between",
  [sym__other_boolean_form_expression_in] = "_other_boolean_form_expression_in",
  [sym__other_boolean_form_expression_like] = "_other_boolean_form_expression_like",
  [sym__other_boolean_form_expression_relational_operation] = "_other_boolean_form_expression_relational_operation",
  [sym_conditional_predicate] = "conditional_predicate",
  [sym_return_declaration] = "return_declaration",
  [sym_datatype] = "datatype",
  [sym_character_datatypes] = "character_datatypes",
  [sym__character_datatypes_char] = "_character_datatypes_char",
  [sym__character_datatypes_varchar2] = "_character_datatypes_varchar2",
  [sym__character_datatypes_nchar] = "_character_datatypes_nchar",
  [sym__character_datatypes_nvarchar2] = "_character_datatypes_nvarchar2",
  [sym_number_datatypes] = "number_datatypes",
  [sym__number_datatypes_keyword] = "_number_datatypes_keyword",
  [sym__number_datatypes_number] = "_number_datatypes_number",
  [sym__number_datatypes_float] = "_number_datatypes_float",
  [sym_long_and_raw_datatypes] = "long_and_raw_datatypes",
  [sym__long_and_raw_datatypes_long_raw] = "_long_and_raw_datatypes_long_raw",
  [sym__long_and_raw_datatypes_raw] = "_long_and_raw_datatypes_raw",
  [sym_datetime_datatypes] = "datetime_datatypes",
  [sym__datetime_datatypes_keyword] = "_datetime_datatypes_keyword",
  [sym__datetime_datatypes_date_timestamp] = "_datetime_datatypes_date_timestamp",
  [sym__datetime_datatypes_date_interval_year] = "_datetime_datatypes_date_interval_year",
  [sym__datetime_datatypes_date_interval_day] = "_datetime_datatypes_date_interval_day",
  [sym_large_object_datatypes] = "large_object_datatypes",
  [sym_rowid_datatypes] = "rowid_datatypes",
  [sym_referenced_datatypes] = "referenced_datatypes",
  [sym__referenced_datatypes_type] = "_referenced_datatypes_type",
  [sym__referenced_datatypes_rowtype] = "_referenced_datatypes_rowtype",
  [sym_logical_datatypes] = "logical_datatypes",
  [sym_subtype_datatypes] = "subtype_datatypes",
  [sym__rowid_datatypes_urowid] = "_rowid_datatypes_urowid",
  [sym__ansi_supported_datatypes_character] = "_ansi_supported_datatypes_character",
  [sym__ansi_supported_datatypes_char_nchar] = "_ansi_supported_datatypes_char_nchar",
  [sym__ansi_supported_datatypes_varchar] = "_ansi_supported_datatypes_varchar",
  [sym__ansi_supported_datatypes_national] = "_ansi_supported_datatypes_national",
  [sym__ansi_supported_datatypes_numeric_decimal_dec] = "_ansi_supported_datatypes_numeric_decimal_dec",
  [sym__ansi_supported_datatypes_double_precision] = "_ansi_supported_datatypes_double_precision",
  [sym_supplied_datatypes_any_types] = "supplied_datatypes_any_types",
  [sym_supplied_datatypes_xml_types] = "supplied_datatypes_xml_types",
  [sym_supplied_datatypes_spatial_types] = "supplied_datatypes_spatial_types",
  [sym_object_datatypes] = "object_datatypes",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_parameter_declaration_element] = "parameter_declaration_element",
  [sym_parameter_declaration_element_in] = "parameter_declaration_element_in",
  [sym_parameter_declaration_element_in_out_or_out] = "parameter_declaration_element_in_out_or_out",
  [sym_default_expression] = "default_expression",
  [sym_parameter] = "parameter",
  [sym_parameter_element] = "parameter_element",
  [sym_parameter_element_positional] = "parameter_element_positional",
  [sym_parameter_element_named] = "parameter_element_named",
  [sym_parameter_name] = "parameter_name",
  [sym_parameter_value] = "parameter_value",
  [sym__size] = "_size",
  [sym__size_byte_char] = "_size_byte_char",
  [sym__size_precision_scale] = "_size_precision_scale",
  [sym__precision] = "_precision",
  [sym__scale] = "_scale",
  [sym_relational_operator] = "relational_operator",
  [sym__relational_operator_not_equal] = "_relational_operator_not_equal",
  [sym_identifier] = "identifier",
  [sym__quoted_identifier] = "_quoted_identifier",
  [sym__literal] = "_literal",
  [sym_literal_boolean] = "literal_boolean",
  [sym_literal_number] = "literal_number",
  [sym_literal_string] = "literal_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_create_package_repeat1] = "create_package_repeat1",
  [aux_sym_create_package_repeat2] = "create_package_repeat2",
  [aux_sym_alter_package_repeat1] = "alter_package_repeat1",
  [aux_sym_compile_clause_repeat1] = "compile_clause_repeat1",
  [aux_sym_accessible_by_clause_repeat1] = "accessible_by_clause_repeat1",
  [aux_sym_package_function_declaration_repeat1] = "package_function_declaration_repeat1",
  [aux_sym__other_boolean_form_expression_in_repeat1] = "_other_boolean_form_expression_in_repeat1",
  [aux_sym_parameter_declaration_repeat1] = "parameter_declaration_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
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
  [sym__single_quote_string] = sym__single_quote_string,
  [sym__number] = sym__number,
  [sym_comment_ml] = sym_comment_ml,
  [sym_comment_sl] = sym_comment_sl,
  [sym_kw_create] = sym_kw_create,
  [sym_kw_alter] = sym_kw_alter,
  [sym_kw_package] = sym_kw_package,
  [sym_kw_function] = sym_kw_function,
  [sym_kw_procedure] = sym_kw_procedure,
  [sym_kw_trigger] = sym_kw_trigger,
  [sym_kw_type] = sym_kw_type,
  [sym_kw_rowtype] = sym_kw_rowtype,
  [sym_kw_library] = sym_kw_library,
  [sym_kw_true] = sym_kw_true,
  [sym_kw_false] = sym_kw_false,
  [sym_kw_null] = sym_kw_null,
  [sym_kw_not] = sym_kw_not,
  [sym_kw_row] = sym_kw_row,
  [sym_kw_compile] = sym_kw_compile,
  [sym_kw_debug] = sym_kw_debug,
  [sym_kw_specification] = sym_kw_specification,
  [sym_kw_body] = sym_kw_body,
  [sym_kw_begin] = sym_kw_begin,
  [sym_kw_end] = sym_kw_end,
  [sym_kw_or] = sym_kw_or,
  [sym_kw_and] = sym_kw_and,
  [sym_kw_replace] = sym_kw_replace,
  [sym_kw_editionable] = sym_kw_editionable,
  [sym_kw_noneditionable] = sym_kw_noneditionable,
  [sym_kw_metadata] = sym_kw_metadata,
  [sym_kw_none] = sym_kw_none,
  [sym_kw_default] = sym_kw_default,
  [sym_kw_collation] = sym_kw_collation,
  [sym_kw_using_nls_comp] = sym_kw_using_nls_comp,
  [sym_kw_authid] = sym_kw_authid,
  [sym_kw_current_user] = sym_kw_current_user,
  [sym_kw_definer] = sym_kw_definer,
  [sym_kw_accessible] = sym_kw_accessible,
  [sym_kw_by] = sym_kw_by,
  [sym_kw_reuse] = sym_kw_reuse,
  [sym_kw_settings] = sym_kw_settings,
  [sym_kw_byte] = sym_kw_byte,
  [sym_kw_char] = sym_kw_char,
  [sym_kw_is] = sym_kw_is,
  [sym_kw_as] = sym_kw_as,
  [sym_kw_deterministic] = sym_kw_deterministic,
  [sym_kw_pipelined] = sym_kw_pipelined,
  [sym_kw_parallel_enable] = sym_kw_parallel_enable,
  [sym_kw_result_cache] = sym_kw_result_cache,
  [sym_kw_exists] = sym_kw_exists,
  [sym_kw_between] = sym_kw_between,
  [sym_kw_found] = sym_kw_found,
  [sym_kw_isopen] = sym_kw_isopen,
  [sym_kw_notfound] = sym_kw_notfound,
  [sym_kw_in] = sym_kw_in,
  [sym_kw_out] = sym_kw_out,
  [sym_kw_nocopy] = sym_kw_nocopy,
  [sym_kw_like] = sym_kw_like,
  [sym_kw_inserting] = sym_kw_inserting,
  [sym_kw_deleting] = sym_kw_deleting,
  [sym_kw_updating] = sym_kw_updating,
  [sym_kw_return] = sym_kw_return,
  [sym_kw_varchar] = sym_kw_varchar,
  [sym_kw_varchar2] = sym_kw_varchar2,
  [sym_kw_nvarchar2] = sym_kw_nvarchar2,
  [sym_kw_nchar] = sym_kw_nchar,
  [sym_kw_int] = sym_kw_int,
  [sym_kw_smallint] = sym_kw_smallint,
  [sym_kw_real] = sym_kw_real,
  [sym_kw_binary_float] = sym_kw_binary_float,
  [sym_kw_binary_double] = sym_kw_binary_double,
  [sym_kw_simple_float] = sym_kw_simple_float,
  [sym_kw_simple_double] = sym_kw_simple_double,
  [sym_kw_binary_integer] = sym_kw_binary_integer,
  [sym_kw_pls_integer] = sym_kw_pls_integer,
  [sym_kw_natural] = sym_kw_natural,
  [sym_kw_naturaln] = sym_kw_naturaln,
  [sym_kw_positive] = sym_kw_positive,
  [sym_kw_positiven] = sym_kw_positiven,
  [sym_kw_signtype] = sym_kw_signtype,
  [sym_kw_simple_integer] = sym_kw_simple_integer,
  [sym_kw_integer] = sym_kw_integer,
  [sym_kw_number] = sym_kw_number,
  [sym_kw_float] = sym_kw_float,
  [sym_kw_long] = sym_kw_long,
  [sym_kw_raw] = sym_kw_raw,
  [sym_kw_date] = sym_kw_date,
  [sym_kw_timestamp] = sym_kw_timestamp,
  [sym_kw_with] = sym_kw_with,
  [sym_kw_local] = sym_kw_local,
  [sym_kw_time] = sym_kw_time,
  [sym_kw_zone] = sym_kw_zone,
  [sym_kw_interval] = sym_kw_interval,
  [sym_kw_year] = sym_kw_year,
  [sym_kw_month] = sym_kw_month,
  [sym_kw_day] = sym_kw_day,
  [sym_kw_minute] = sym_kw_minute,
  [sym_kw_second] = sym_kw_second,
  [sym_kw_to] = sym_kw_to,
  [sym_kw_blob] = sym_kw_blob,
  [sym_kw_clob] = sym_kw_clob,
  [sym_kw_nclob] = sym_kw_nclob,
  [sym_kw_bfile] = sym_kw_bfile,
  [sym_kw_rowid] = sym_kw_rowid,
  [sym_kw_urowid] = sym_kw_urowid,
  [sym_kw_boolean] = sym_kw_boolean,
  [sym_kw_character] = sym_kw_character,
  [sym_kw_varying] = sym_kw_varying,
  [sym_kw_numeric] = sym_kw_numeric,
  [sym_kw_decimal] = sym_kw_decimal,
  [sym_kw_dec] = sym_kw_dec,
  [sym_kw_double] = sym_kw_double,
  [sym_kw_precision] = sym_kw_precision,
  [sym_kw_sys] = sym_kw_sys,
  [sym_kw_anydata] = sym_kw_anydata,
  [sym_kw_anytype] = sym_kw_anytype,
  [sym_kw_anydataset] = sym_kw_anydataset,
  [sym_kw_xmltype] = sym_kw_xmltype,
  [sym_kw_uritype] = sym_kw_uritype,
  [sym_kw_sdo_geometry] = sym_kw_sdo_geometry,
  [sym_kw_sdo_topo_geometry] = sym_kw_sdo_topo_geometry,
  [sym_kw_sdo_georaster] = sym_kw_sdo_georaster,
  [sym_kw_json_element_t] = sym_kw_json_element_t,
  [sym_kw_json_array_t] = sym_kw_json_array_t,
  [sym_kw_json_object_t] = sym_kw_json_object_t,
  [sym_kw_json_scalar_t] = sym_kw_json_scalar_t,
  [sym_kw_json_key_list] = sym_kw_json_key_list,
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
  [sym_compiler_parameter_clause] = sym_compiler_parameter_clause,
  [sym_editionable_noneditionable] = sym_editionable_noneditionable,
  [sym_sharing_clause] = sym_sharing_clause,
  [sym_default_collation_clause] = sym_default_collation_clause,
  [sym_invoker_rights_clause] = sym_invoker_rights_clause,
  [sym_accessible_by_clause] = sym_accessible_by_clause,
  [sym_accessor] = sym_accessor,
  [sym_unit_kind] = sym_unit_kind,
  [sym_reuse_settings] = sym_reuse_settings,
  [sym__schema] = sym__schema,
  [sym_byte_char] = sym_byte_char,
  [sym_is_as] = sym_is_as,
  [sym_end_obj] = sym_end_obj,
  [sym__package_item_list] = sym__package_item_list,
  [sym_create_obj] = sym_create_obj,
  [sym_package_function_declaration] = sym_package_function_declaration,
  [sym_function_properties] = sym_function_properties,
  [sym__is_null_or_is_not_null] = sym__is_null_or_is_not_null,
  [sym_is_null] = sym_is_null,
  [sym_is_not_null] = sym_is_not_null,
  [sym_expression] = sym_expression,
  [sym__expression_elements] = sym__expression_elements,
  [sym__expression_boolean] = sym__expression_boolean,
  [sym__expression_boolean_elements] = sym__expression_boolean_elements,
  [sym_expression_boolean_ref] = sym_expression_boolean_ref,
  [sym__other_boolean_form] = sym__other_boolean_form,
  [sym__other_boolean_form_collection] = sym__other_boolean_form_collection,
  [sym__other_boolean_form_expression] = sym__other_boolean_form_expression,
  [sym__other_boolean_form_named_cursor] = sym__other_boolean_form_named_cursor,
  [sym__other_boolean_form_expression_is] = sym__other_boolean_form_expression_is,
  [sym__other_boolean_form_expression_between] = sym__other_boolean_form_expression_between,
  [sym__other_boolean_form_expression_in] = sym__other_boolean_form_expression_in,
  [sym__other_boolean_form_expression_like] = sym__other_boolean_form_expression_like,
  [sym__other_boolean_form_expression_relational_operation] = sym__other_boolean_form_expression_relational_operation,
  [sym_conditional_predicate] = sym_conditional_predicate,
  [sym_return_declaration] = sym_return_declaration,
  [sym_datatype] = sym_datatype,
  [sym_character_datatypes] = sym_character_datatypes,
  [sym__character_datatypes_char] = sym__character_datatypes_char,
  [sym__character_datatypes_varchar2] = sym__character_datatypes_varchar2,
  [sym__character_datatypes_nchar] = sym__character_datatypes_nchar,
  [sym__character_datatypes_nvarchar2] = sym__character_datatypes_nvarchar2,
  [sym_number_datatypes] = sym_number_datatypes,
  [sym__number_datatypes_keyword] = sym__number_datatypes_keyword,
  [sym__number_datatypes_number] = sym__number_datatypes_number,
  [sym__number_datatypes_float] = sym__number_datatypes_float,
  [sym_long_and_raw_datatypes] = sym_long_and_raw_datatypes,
  [sym__long_and_raw_datatypes_long_raw] = sym__long_and_raw_datatypes_long_raw,
  [sym__long_and_raw_datatypes_raw] = sym__long_and_raw_datatypes_raw,
  [sym_datetime_datatypes] = sym_datetime_datatypes,
  [sym__datetime_datatypes_keyword] = sym__datetime_datatypes_keyword,
  [sym__datetime_datatypes_date_timestamp] = sym__datetime_datatypes_date_timestamp,
  [sym__datetime_datatypes_date_interval_year] = sym__datetime_datatypes_date_interval_year,
  [sym__datetime_datatypes_date_interval_day] = sym__datetime_datatypes_date_interval_day,
  [sym_large_object_datatypes] = sym_large_object_datatypes,
  [sym_rowid_datatypes] = sym_rowid_datatypes,
  [sym_referenced_datatypes] = sym_referenced_datatypes,
  [sym__referenced_datatypes_type] = sym__referenced_datatypes_type,
  [sym__referenced_datatypes_rowtype] = sym__referenced_datatypes_rowtype,
  [sym_logical_datatypes] = sym_logical_datatypes,
  [sym_subtype_datatypes] = sym_subtype_datatypes,
  [sym__rowid_datatypes_urowid] = sym__rowid_datatypes_urowid,
  [sym__ansi_supported_datatypes_character] = sym__ansi_supported_datatypes_character,
  [sym__ansi_supported_datatypes_char_nchar] = sym__ansi_supported_datatypes_char_nchar,
  [sym__ansi_supported_datatypes_varchar] = sym__ansi_supported_datatypes_varchar,
  [sym__ansi_supported_datatypes_national] = sym__ansi_supported_datatypes_national,
  [sym__ansi_supported_datatypes_numeric_decimal_dec] = sym__ansi_supported_datatypes_numeric_decimal_dec,
  [sym__ansi_supported_datatypes_double_precision] = sym__ansi_supported_datatypes_double_precision,
  [sym_supplied_datatypes_any_types] = sym_supplied_datatypes_any_types,
  [sym_supplied_datatypes_xml_types] = sym_supplied_datatypes_xml_types,
  [sym_supplied_datatypes_spatial_types] = sym_supplied_datatypes_spatial_types,
  [sym_object_datatypes] = sym_object_datatypes,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_parameter_declaration_element] = sym_parameter_declaration_element,
  [sym_parameter_declaration_element_in] = sym_parameter_declaration_element_in,
  [sym_parameter_declaration_element_in_out_or_out] = sym_parameter_declaration_element_in_out_or_out,
  [sym_default_expression] = sym_default_expression,
  [sym_parameter] = sym_parameter,
  [sym_parameter_element] = sym_parameter_element,
  [sym_parameter_element_positional] = sym_parameter_element_positional,
  [sym_parameter_element_named] = sym_parameter_element_named,
  [sym_parameter_name] = sym_parameter_name,
  [sym_parameter_value] = sym_parameter_value,
  [sym__size] = sym__size,
  [sym__size_byte_char] = sym__size_byte_char,
  [sym__size_precision_scale] = sym__size_precision_scale,
  [sym__precision] = sym__precision,
  [sym__scale] = sym__scale,
  [sym_relational_operator] = sym_relational_operator,
  [sym__relational_operator_not_equal] = sym__relational_operator_not_equal,
  [sym_identifier] = sym_identifier,
  [sym__quoted_identifier] = sym__quoted_identifier,
  [sym__literal] = sym__literal,
  [sym_literal_boolean] = sym_literal_boolean,
  [sym_literal_number] = sym_literal_number,
  [sym_literal_string] = sym_literal_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_create_package_repeat1] = aux_sym_create_package_repeat1,
  [aux_sym_create_package_repeat2] = aux_sym_create_package_repeat2,
  [aux_sym_alter_package_repeat1] = aux_sym_alter_package_repeat1,
  [aux_sym_compile_clause_repeat1] = aux_sym_compile_clause_repeat1,
  [aux_sym_accessible_by_clause_repeat1] = aux_sym_accessible_by_clause_repeat1,
  [aux_sym_package_function_declaration_repeat1] = aux_sym_package_function_declaration_repeat1,
  [aux_sym__other_boolean_form_expression_in_repeat1] = aux_sym__other_boolean_form_expression_in_repeat1,
  [aux_sym_parameter_declaration_repeat1] = aux_sym_parameter_declaration_repeat1,
  [aux_sym_parameter_repeat1] = aux_sym_parameter_repeat1,
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
  [anon_sym_EQ] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
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
  [sym_kw_create] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_alter] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_package] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_function] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_procedure] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_type] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_rowtype] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_library] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_true] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_false] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_null] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_not] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_row] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_compile] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_debug] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_body] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_end] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_or] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_and] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_replace] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_editionable] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_noneditionable] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_none] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_default] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_collation] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_using_nls_comp] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_authid] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_current_user] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_definer] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_accessible] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_by] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_reuse] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_char] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_is] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_as] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_deterministic] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_pipelined] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_parallel_enable] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_result_cache] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_exists] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_between] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_found] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_isopen] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_notfound] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_in] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_out] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_nocopy] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_like] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_inserting] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_deleting] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_updating] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_return] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_varchar] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_varchar2] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_nvarchar2] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_nchar] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_int] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_smallint] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_real] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_binary_float] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_binary_double] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_simple_float] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_simple_double] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_binary_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_pls_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_natural] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_naturaln] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_positive] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_positiven] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_signtype] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_simple_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_number] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_float] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_long] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_raw] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_date] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_with] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_local] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_time] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_zone] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_interval] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_year] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_month] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_day] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_minute] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_second] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_to] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_blob] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_clob] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_nclob] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_bfile] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_rowid] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_urowid] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_character] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_varying] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_double] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_precision] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_sys] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_anydata] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_anytype] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_anydataset] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_xmltype] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_uritype] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_sdo_geometry] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_sdo_topo_geometry] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_sdo_georaster] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_json_element_t] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_json_array_t] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_json_object_t] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_json_scalar_t] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_json_key_list] = {
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
  [sym_compiler_parameter_clause] = {
    .visible = true,
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
  [sym_byte_char] = {
    .visible = true,
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
  [sym__package_item_list] = {
    .visible = false,
    .named = true,
  },
  [sym_create_obj] = {
    .visible = true,
    .named = true,
  },
  [sym_package_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_properties] = {
    .visible = true,
    .named = true,
  },
  [sym__is_null_or_is_not_null] = {
    .visible = false,
    .named = true,
  },
  [sym_is_null] = {
    .visible = true,
    .named = true,
  },
  [sym_is_not_null] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_elements] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_boolean_elements] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_boolean_ref] = {
    .visible = true,
    .named = true,
  },
  [sym__other_boolean_form] = {
    .visible = false,
    .named = true,
  },
  [sym__other_boolean_form_collection] = {
    .visible = false,
    .named = true,
  },
  [sym__other_boolean_form_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__other_boolean_form_named_cursor] = {
    .visible = false,
    .named = true,
  },
  [sym__other_boolean_form_expression_is] = {
    .visible = false,
    .named = true,
  },
  [sym__other_boolean_form_expression_between] = {
    .visible = false,
    .named = true,
  },
  [sym__other_boolean_form_expression_in] = {
    .visible = false,
    .named = true,
  },
  [sym__other_boolean_form_expression_like] = {
    .visible = false,
    .named = true,
  },
  [sym__other_boolean_form_expression_relational_operation] = {
    .visible = false,
    .named = true,
  },
  [sym_conditional_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_return_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_character_datatypes] = {
    .visible = true,
    .named = true,
  },
  [sym__character_datatypes_char] = {
    .visible = false,
    .named = true,
  },
  [sym__character_datatypes_varchar2] = {
    .visible = false,
    .named = true,
  },
  [sym__character_datatypes_nchar] = {
    .visible = false,
    .named = true,
  },
  [sym__character_datatypes_nvarchar2] = {
    .visible = false,
    .named = true,
  },
  [sym_number_datatypes] = {
    .visible = true,
    .named = true,
  },
  [sym__number_datatypes_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym__number_datatypes_number] = {
    .visible = false,
    .named = true,
  },
  [sym__number_datatypes_float] = {
    .visible = false,
    .named = true,
  },
  [sym_long_and_raw_datatypes] = {
    .visible = true,
    .named = true,
  },
  [sym__long_and_raw_datatypes_long_raw] = {
    .visible = false,
    .named = true,
  },
  [sym__long_and_raw_datatypes_raw] = {
    .visible = false,
    .named = true,
  },
  [sym_datetime_datatypes] = {
    .visible = true,
    .named = true,
  },
  [sym__datetime_datatypes_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym__datetime_datatypes_date_timestamp] = {
    .visible = false,
    .named = true,
  },
  [sym__datetime_datatypes_date_interval_year] = {
    .visible = false,
    .named = true,
  },
  [sym__datetime_datatypes_date_interval_day] = {
    .visible = false,
    .named = true,
  },
  [sym_large_object_datatypes] = {
    .visible = true,
    .named = true,
  },
  [sym_rowid_datatypes] = {
    .visible = true,
    .named = true,
  },
  [sym_referenced_datatypes] = {
    .visible = true,
    .named = true,
  },
  [sym__referenced_datatypes_type] = {
    .visible = false,
    .named = true,
  },
  [sym__referenced_datatypes_rowtype] = {
    .visible = false,
    .named = true,
  },
  [sym_logical_datatypes] = {
    .visible = true,
    .named = true,
  },
  [sym_subtype_datatypes] = {
    .visible = true,
    .named = true,
  },
  [sym__rowid_datatypes_urowid] = {
    .visible = false,
    .named = true,
  },
  [sym__ansi_supported_datatypes_character] = {
    .visible = false,
    .named = true,
  },
  [sym__ansi_supported_datatypes_char_nchar] = {
    .visible = false,
    .named = true,
  },
  [sym__ansi_supported_datatypes_varchar] = {
    .visible = false,
    .named = true,
  },
  [sym__ansi_supported_datatypes_national] = {
    .visible = false,
    .named = true,
  },
  [sym__ansi_supported_datatypes_numeric_decimal_dec] = {
    .visible = false,
    .named = true,
  },
  [sym__ansi_supported_datatypes_double_precision] = {
    .visible = false,
    .named = true,
  },
  [sym_supplied_datatypes_any_types] = {
    .visible = true,
    .named = true,
  },
  [sym_supplied_datatypes_xml_types] = {
    .visible = true,
    .named = true,
  },
  [sym_supplied_datatypes_spatial_types] = {
    .visible = true,
    .named = true,
  },
  [sym_object_datatypes] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration_element] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration_element_in] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration_element_in_out_or_out] = {
    .visible = true,
    .named = true,
  },
  [sym_default_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_element] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_element_positional] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_element_named] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_value] = {
    .visible = true,
    .named = true,
  },
  [sym__size] = {
    .visible = false,
    .named = true,
  },
  [sym__size_byte_char] = {
    .visible = false,
    .named = true,
  },
  [sym__size_precision_scale] = {
    .visible = false,
    .named = true,
  },
  [sym__precision] = {
    .visible = false,
    .named = true,
  },
  [sym__scale] = {
    .visible = false,
    .named = true,
  },
  [sym_relational_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__relational_operator_not_equal] = {
    .visible = false,
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
  [aux_sym_package_function_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__other_boolean_form_expression_in_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_compile_parameter_name = 1,
  field_compile_parameter_value = 2,
  field_fnc_name = 3,
  field_name = 4,
  field_obj_name = 5,
  field_ref_element_name = 6,
  field_ref_obj_name = 7,
  field_schema_name = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_compile_parameter_name] = "compile_parameter_name",
  [field_compile_parameter_value] = "compile_parameter_value",
  [field_fnc_name] = "fnc_name",
  [field_name] = "name",
  [field_obj_name] = "obj_name",
  [field_ref_element_name] = "ref_element_name",
  [field_ref_obj_name] = "ref_obj_name",
  [field_schema_name] = "schema_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_obj_name, 2},
  [1] =
    {field_obj_name, 3},
    {field_schema_name, 2, .inherited = true},
  [3] =
    {field_schema_name, 0},
  [4] =
    {field_name, 1},
  [5] =
    {field_compile_parameter_name, 0},
    {field_compile_parameter_value, 2},
  [7] =
    {field_obj_name, 3},
  [8] =
    {field_schema_name, 0, .inherited = true},
  [9] =
    {field_fnc_name, 1},
  [10] =
    {field_obj_name, 4},
    {field_schema_name, 3, .inherited = true},
  [12] =
    {field_schema_name, 1, .inherited = true},
  [13] =
    {field_ref_element_name, 0},
  [14] =
    {field_ref_element_name, 2},
    {field_ref_obj_name, 0},
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
  [14] = 11,
  [15] = 11,
  [16] = 13,
  [17] = 11,
  [18] = 12,
  [19] = 12,
  [20] = 13,
  [21] = 13,
  [22] = 12,
  [23] = 11,
  [24] = 13,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 25,
  [29] = 29,
  [30] = 25,
  [31] = 25,
  [32] = 29,
  [33] = 27,
  [34] = 26,
  [35] = 9,
  [36] = 10,
  [37] = 37,
  [38] = 9,
  [39] = 29,
  [40] = 26,
  [41] = 27,
  [42] = 37,
  [43] = 43,
  [44] = 10,
  [45] = 9,
  [46] = 10,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 47,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 27,
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
  [65] = 26,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 29,
  [73] = 73,
  [74] = 74,
  [75] = 55,
  [76] = 73,
  [77] = 61,
  [78] = 67,
  [79] = 48,
  [80] = 68,
  [81] = 53,
  [82] = 57,
  [83] = 83,
  [84] = 60,
  [85] = 70,
  [86] = 51,
  [87] = 74,
  [88] = 74,
  [89] = 83,
  [90] = 74,
  [91] = 71,
  [92] = 49,
  [93] = 83,
  [94] = 29,
  [95] = 59,
  [96] = 52,
  [97] = 69,
  [98] = 27,
  [99] = 64,
  [100] = 56,
  [101] = 83,
  [102] = 74,
  [103] = 66,
  [104] = 58,
  [105] = 83,
  [106] = 26,
  [107] = 63,
  [108] = 62,
  [109] = 109,
  [110] = 109,
  [111] = 111,
  [112] = 111,
  [113] = 109,
  [114] = 111,
  [115] = 115,
  [116] = 109,
  [117] = 115,
  [118] = 111,
  [119] = 115,
  [120] = 109,
  [121] = 115,
  [122] = 115,
  [123] = 111,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 125,
  [130] = 127,
  [131] = 126,
  [132] = 132,
  [133] = 124,
  [134] = 134,
  [135] = 126,
  [136] = 128,
  [137] = 128,
  [138] = 124,
  [139] = 134,
  [140] = 124,
  [141] = 124,
  [142] = 134,
  [143] = 128,
  [144] = 127,
  [145] = 124,
  [146] = 134,
  [147] = 132,
  [148] = 132,
  [149] = 128,
  [150] = 125,
  [151] = 132,
  [152] = 125,
  [153] = 127,
  [154] = 125,
  [155] = 155,
  [156] = 134,
  [157] = 126,
  [158] = 126,
  [159] = 127,
  [160] = 124,
  [161] = 132,
  [162] = 37,
  [163] = 10,
  [164] = 9,
  [165] = 165,
  [166] = 165,
  [167] = 47,
  [168] = 168,
  [169] = 37,
  [170] = 165,
  [171] = 165,
  [172] = 168,
  [173] = 168,
  [174] = 168,
  [175] = 175,
  [176] = 37,
  [177] = 52,
  [178] = 178,
  [179] = 62,
  [180] = 49,
  [181] = 69,
  [182] = 67,
  [183] = 57,
  [184] = 53,
  [185] = 47,
  [186] = 56,
  [187] = 55,
  [188] = 48,
  [189] = 59,
  [190] = 51,
  [191] = 63,
  [192] = 73,
  [193] = 71,
  [194] = 58,
  [195] = 61,
  [196] = 66,
  [197] = 64,
  [198] = 68,
  [199] = 199,
  [200] = 60,
  [201] = 52,
  [202] = 66,
  [203] = 60,
  [204] = 56,
  [205] = 61,
  [206] = 64,
  [207] = 63,
  [208] = 53,
  [209] = 48,
  [210] = 57,
  [211] = 69,
  [212] = 73,
  [213] = 71,
  [214] = 68,
  [215] = 61,
  [216] = 55,
  [217] = 67,
  [218] = 58,
  [219] = 62,
  [220] = 59,
  [221] = 51,
  [222] = 49,
  [223] = 68,
  [224] = 224,
  [225] = 61,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 68,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 66,
  [253] = 253,
  [254] = 73,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 9,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 10,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 66,
  [286] = 286,
  [287] = 253,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 10,
  [292] = 9,
  [293] = 293,
  [294] = 73,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 9,
  [300] = 300,
  [301] = 301,
  [302] = 10,
  [303] = 9,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 281,
  [309] = 280,
  [310] = 10,
  [311] = 289,
  [312] = 296,
  [313] = 313,
  [314] = 314,
  [315] = 305,
  [316] = 316,
  [317] = 304,
  [318] = 306,
  [319] = 298,
  [320] = 320,
  [321] = 289,
  [322] = 322,
  [323] = 280,
  [324] = 316,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 281,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 297,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 300,
  [342] = 296,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 300,
  [347] = 305,
  [348] = 297,
  [349] = 304,
  [350] = 306,
  [351] = 351,
  [352] = 298,
  [353] = 353,
  [354] = 322,
  [355] = 337,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 9,
  [361] = 10,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 316,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 386,
  [412] = 399,
  [413] = 396,
  [414] = 395,
  [415] = 415,
  [416] = 337,
  [417] = 398,
  [418] = 385,
  [419] = 419,
  [420] = 316,
  [421] = 421,
  [422] = 404,
  [423] = 423,
  [424] = 424,
  [425] = 406,
  [426] = 407,
  [427] = 424,
  [428] = 428,
  [429] = 408,
  [430] = 394,
  [431] = 393,
  [432] = 384,
  [433] = 433,
  [434] = 434,
  [435] = 392,
  [436] = 391,
  [437] = 437,
  [438] = 424,
  [439] = 439,
  [440] = 389,
  [441] = 388,
  [442] = 387,
  [443] = 443,
  [444] = 397,
  [445] = 343,
  [446] = 383,
  [447] = 382,
  [448] = 448,
  [449] = 424,
  [450] = 381,
  [451] = 358,
  [452] = 366,
  [453] = 359,
  [454] = 362,
  [455] = 367,
  [456] = 322,
  [457] = 457,
  [458] = 369,
  [459] = 371,
  [460] = 380,
  [461] = 372,
  [462] = 390,
  [463] = 373,
  [464] = 464,
  [465] = 400,
  [466] = 374,
  [467] = 375,
  [468] = 376,
  [469] = 377,
  [470] = 378,
  [471] = 379,
  [472] = 472,
  [473] = 402,
  [474] = 474,
  [475] = 424,
  [476] = 403,
  [477] = 385,
  [478] = 478,
  [479] = 387,
  [480] = 388,
  [481] = 389,
  [482] = 381,
  [483] = 391,
  [484] = 392,
  [485] = 393,
  [486] = 394,
  [487] = 395,
  [488] = 396,
  [489] = 397,
  [490] = 398,
  [491] = 399,
  [492] = 492,
  [493] = 493,
  [494] = 384,
  [495] = 495,
  [496] = 404,
  [497] = 383,
  [498] = 406,
  [499] = 407,
  [500] = 408,
  [501] = 343,
  [502] = 382,
  [503] = 503,
  [504] = 379,
  [505] = 378,
  [506] = 377,
  [507] = 376,
  [508] = 375,
  [509] = 403,
  [510] = 402,
  [511] = 400,
  [512] = 390,
  [513] = 374,
  [514] = 380,
  [515] = 373,
  [516] = 372,
  [517] = 371,
  [518] = 369,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 367,
  [523] = 366,
  [524] = 362,
  [525] = 359,
  [526] = 358,
  [527] = 527,
  [528] = 528,
  [529] = 503,
  [530] = 519,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 503,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 386,
  [546] = 316,
  [547] = 547,
  [548] = 519,
  [549] = 549,
  [550] = 549,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 503,
  [564] = 564,
  [565] = 544,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 549,
  [582] = 544,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 585,
  [587] = 585,
  [588] = 588,
  [589] = 584,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 585,
  [594] = 594,
  [595] = 595,
  [596] = 595,
  [597] = 597,
  [598] = 598,
  [599] = 595,
  [600] = 588,
  [601] = 598,
  [602] = 592,
  [603] = 598,
  [604] = 585,
  [605] = 597,
  [606] = 588,
  [607] = 592,
  [608] = 584,
  [609] = 597,
  [610] = 584,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 613,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 611,
  [623] = 612,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 624,
  [631] = 627,
  [632] = 629,
  [633] = 633,
  [634] = 613,
  [635] = 635,
  [636] = 636,
  [637] = 617,
  [638] = 618,
  [639] = 639,
  [640] = 621,
  [641] = 628,
  [642] = 628,
  [643] = 621,
  [644] = 626,
  [645] = 645,
  [646] = 635,
  [647] = 633,
  [648] = 633,
  [649] = 624,
  [650] = 627,
  [651] = 629,
  [652] = 636,
  [653] = 618,
  [654] = 611,
  [655] = 625,
  [656] = 626,
  [657] = 625,
  [658] = 633,
  [659] = 612,
  [660] = 625,
  [661] = 635,
  [662] = 636,
  [663] = 617,
  [664] = 612,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 675,
  [681] = 679,
  [682] = 678,
  [683] = 683,
  [684] = 677,
  [685] = 668,
  [686] = 686,
  [687] = 676,
  [688] = 666,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 670,
  [695] = 695,
  [696] = 673,
  [697] = 697,
  [698] = 672,
  [699] = 671,
  [700] = 667,
  [701] = 672,
  [702] = 686,
  [703] = 671,
  [704] = 693,
  [705] = 670,
  [706] = 666,
  [707] = 691,
  [708] = 692,
  [709] = 693,
  [710] = 670,
  [711] = 669,
  [712] = 712,
  [713] = 692,
  [714] = 714,
  [715] = 715,
  [716] = 693,
  [717] = 717,
  [718] = 693,
  [719] = 719,
  [720] = 693,
  [721] = 693,
  [722] = 693,
  [723] = 723,
  [724] = 724,
  [725] = 717,
  [726] = 715,
  [727] = 727,
  [728] = 691,
  [729] = 729,
  [730] = 724,
  [731] = 731,
  [732] = 691,
  [733] = 697,
  [734] = 695,
  [735] = 690,
  [736] = 731,
  [737] = 692,
  [738] = 683,
  [739] = 739,
  [740] = 666,
  [741] = 670,
  [742] = 686,
  [743] = 743,
  [744] = 727,
  [745] = 745,
  [746] = 729,
  [747] = 723,
  [748] = 724,
  [749] = 717,
  [750] = 715,
  [751] = 668,
  [752] = 669,
  [753] = 675,
  [754] = 679,
  [755] = 667,
  [756] = 678,
  [757] = 697,
  [758] = 695,
  [759] = 690,
  [760] = 677,
  [761] = 683,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 727,
  [766] = 729,
  [767] = 723,
  [768] = 715,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 727,
  [773] = 729,
  [774] = 723,
  [775] = 715,
  [776] = 676,
  [777] = 723,
  [778] = 723,
  [779] = 723,
  [780] = 723,
  [781] = 723,
  [782] = 731,
  [783] = 783,
  [784] = 693,
  [785] = 693,
  [786] = 723,
  [787] = 714,
  [788] = 673,
  [789] = 789,
  [790] = 331,
  [791] = 714,
  [792] = 792,
  [793] = 714,
  [794] = 739,
  [795] = 739,
  [796] = 739,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(337);
      if (lookahead == '!') ADVANCE(72);
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == '<') ADVANCE(349);
      if (lookahead == '=') ADVANCE(340);
      if (lookahead == '>') ADVANCE(351);
      if (lookahead == '\\') SKIP(327)
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(496);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(604);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(374);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(709);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(609);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(531);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(385);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(377);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(378);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(485);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(611);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(789);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(383);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(620);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(698);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(568);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(763);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('G' <= lookahead && lookahead <= 'Q') ||
          ('g' <= lookahead && lookahead <= 'q')) ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(969);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(50)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(59)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(59)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(60)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(60)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(61)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(61)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(58)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(58)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(62)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(62)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(57)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(57)
      if (lookahead == '\r') SKIP(39)
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(41)
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(72);
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(349);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(351);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(734);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(560);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(570);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(376);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(614);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(776);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(832);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(969);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(72);
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(349);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(351);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(560);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(570);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(376);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(614);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(776);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(832);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(72);
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(349);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(351);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(560);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(614);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(777);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(72);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == '<') ADVANCE(349);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(351);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(308);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(155);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(248);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(281);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(87);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(192);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(169);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(376);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(926);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(832);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(49)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(969);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(578);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(605);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(423);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(663);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(775);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(920);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(662);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(642);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(822);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(424);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(528);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(528);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(570);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(376);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(748);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(776);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(832);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(55)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(528);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(57)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(917);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(404);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(834);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(58)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(578);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(605);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(423);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(663);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(740);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(775);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(662);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(642);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(822);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(424);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(59)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(578);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(605);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(423);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(663);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(740);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(775);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(920);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(662);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(642);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(822);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(424);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(60)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(578);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(605);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(423);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(663);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(740);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(775);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(662);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(642);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(822);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(424);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(61)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(62)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(964);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(966);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == '\'') ADVANCE(968);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == '\'') ADVANCE(967);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '*') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '/') ADVANCE(970);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == '*') ADVANCE(68);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') SKIP(42)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(252);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(282);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(249);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(70)
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(972);
      END_STATE();
    case 72:
      if (lookahead == '=') ADVANCE(354);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(347);
      END_STATE();
    case 74:
      if (lookahead == '=') ADVANCE(356);
      END_STATE();
    case 75:
      if (lookahead == '=') ADVANCE(355);
      END_STATE();
    case 76:
      if (lookahead == '>') ADVANCE(348);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(309);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(121);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(117);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(236);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(167);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(998);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(319);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1090);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 105:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(279);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(137);
      END_STATE();
    case 106:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(212);
      END_STATE();
    case 107:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(213);
      END_STATE();
    case 108:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(214);
      END_STATE();
    case 109:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(215);
      END_STATE();
    case 110:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1017);
      END_STATE();
    case 111:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1016);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 112:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 113:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 114:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 115:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(256);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      END_STATE();
    case 116:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 117:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 118:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 119:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 120:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 121:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 122:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 123:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(994);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(992);
      END_STATE();
    case 126:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1023);
      END_STATE();
    case 127:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1003);
      END_STATE();
    case 128:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1073);
      END_STATE();
    case 129:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1018);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1025);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 133:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 134:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1011);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1032);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1067);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1092);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(975);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(995);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(980);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(977);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1006);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(996);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1020);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1019);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1065);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(997);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(298);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 171:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(101);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 172:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(258);
      END_STATE();
    case 173:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1083);
      END_STATE();
    case 174:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 175:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 176:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 177:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1063);
      END_STATE();
    case 178:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1070);
      END_STATE();
    case 179:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(185);
      END_STATE();
    case 180:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 181:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(91);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(219);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1074);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 197:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 198:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 199:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 201:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 202:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1064);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 218:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(261);
      END_STATE();
    case 219:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 220:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 221:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1024);
      END_STATE();
    case 222:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1036);
      END_STATE();
    case 223:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1022);
      END_STATE();
    case 224:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(976);
      END_STATE();
    case 225:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1001);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1088);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1026);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1014);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(985);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 248:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 249:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 251:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 252:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 253:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 255:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 256:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 257:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 258:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 259:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 260:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 261:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1002);
      END_STATE();
    case 262:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 263:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 264:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 265:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 266:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(208);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(310);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 267:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(993);
      END_STATE();
    case 268:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1069);
      END_STATE();
    case 269:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1005);
      END_STATE();
    case 270:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1004);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1012);
      END_STATE();
    case 272:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 273:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 274:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 275:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 276:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 277:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 278:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 279:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1010);
      END_STATE();
    case 281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      END_STATE();
    case 282:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(257);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(301);
      END_STATE();
    case 285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(283);
      END_STATE();
    case 286:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 287:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 288:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1000);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1093);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 308:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 309:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 310:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 311:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 312:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 313:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 314:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 315:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 316:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1060);
      END_STATE();
    case 317:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(304);
      END_STATE();
    case 318:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(166);
      END_STATE();
    case 319:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1071);
      END_STATE();
    case 320:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(981);
      END_STATE();
    case 321:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1007);
      END_STATE();
    case 322:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(263);
      END_STATE();
    case 323:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(264);
      END_STATE();
    case 324:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(190);
      END_STATE();
    case 325:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(65);
      END_STATE();
    case 326:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 327:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(326)
      END_STATE();
    case 328:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') SKIP(334)
      END_STATE();
    case 329:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') SKIP(334)
      if (lookahead == '\r') SKIP(328)
      END_STATE();
    case 330:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') SKIP(335)
      END_STATE();
    case 331:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') SKIP(335)
      if (lookahead == '\r') SKIP(330)
      END_STATE();
    case 332:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') SKIP(336)
      END_STATE();
    case 333:
      if (eof) ADVANCE(337);
      if (lookahead == '\n') SKIP(336)
      if (lookahead == '\r') SKIP(332)
      END_STATE();
    case 334:
      if (eof) ADVANCE(337);
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == '\\') SKIP(329)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(769);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(765);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(534);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(781);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(334)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 335:
      if (eof) ADVANCE(337);
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == '\\') SKIP(331)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(769);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(765);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(781);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(405);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(335)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 336:
      if (eof) ADVANCE(337);
      if (lookahead == '"') ADVANCE(957);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ';') ADVANCE(338);
      if (lookahead == '\\') SKIP(333)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(765);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(781);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(336)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(348);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == '>') ADVANCE(353);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '2') ADVANCE(1039);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(416);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(590);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(923);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(462);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(461);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(743);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(872);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(875);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(876);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(877);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(575);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(631);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(592);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(494);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(886);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(918);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(665);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(759);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(921);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(723);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(665);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(794);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(844);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(857);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(530);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(936);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(937);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(936);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(938);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(936);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1091);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(998);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(805);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(806);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(883);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(606);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(459);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(666);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(883);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(606);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(697);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(883);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(606);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(697);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(700);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(826);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(807);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(657);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(668);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(927);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(925);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(853);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(657);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(823);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(693);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(457);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(867);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(809);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(659);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(861);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(660);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(778);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(827);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(715);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(692);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(814);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(871);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(815);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(873);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(839);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(831);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(894);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(837);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(565);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(469);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(493);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(891);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(591);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(949);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(893);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(887);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(918);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(931);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(746);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(931);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(443);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(910);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(905);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(913);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(447);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1075);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1076);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1077);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(652);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(919);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1086);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(425);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(540);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(919);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(841);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(499);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(675);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(549);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(679);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(680);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(681);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(682);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(683);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(684);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(454);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(882);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(474);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1016);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(863);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1086);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(653);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(397);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(653);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1084);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1017);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(535);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(607);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(633);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(607);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(603);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(610);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(761);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(500);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(985);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(761);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(779);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(396);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(533);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(899);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(514);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(395);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(581);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(626);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(768);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(901);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(904);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(608);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(908);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(430);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(994);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(487);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(994);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(942);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(685);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(942);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(992);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1023);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1079);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1003);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1073);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1080);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1018);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(758);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(594);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(394);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(532);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(845);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(758);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(594);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(394);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(845);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(418);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(950);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(928);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(784);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(686);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(751);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(621);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(478);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(618);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(621);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(429);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(422);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(785);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(694);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(754);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(651);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(616);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(745);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(755);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(476);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1008);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1011);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1061);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1032);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(999);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1066);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(982);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(979);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1067);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1078);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(983);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1009);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(973);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1087);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1072);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1092);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(987);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(975);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(995);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(980);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1095);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1094);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1052);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1054);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(977);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1006);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(996);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1020);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1045);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1047);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1019);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(997);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(726);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(731);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(848);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(756);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(824);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(780);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(712);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(929);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(714);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(870);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(811);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(896);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(812);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(813);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(816);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(818);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(821);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(948);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(897);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(749);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(750);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(616);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(745);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(755);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(760);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(426);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(627);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1059);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(988);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1083);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1034);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1035);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1033);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(596);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(365);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(847);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(538);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(764);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(513);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(542);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(625);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(939);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(752);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(802);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(553);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(935);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(554);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(557);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(561);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(562);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1063);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1070);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(619);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(523);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(384);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(757);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(664);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(529);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(825);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(384);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(757);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(399);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(762);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(409);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(411);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(439);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(466);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(580);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1074);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(612);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(795);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(587);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(502);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(587);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(934);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(674);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(480);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(850);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(481);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(878);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(884);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(452);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(727);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(483);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(711);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(862);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(473);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(909);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(940);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(890);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(744);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(728);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(730);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(732);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(733);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(747);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(735);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(852);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(741);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(854);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(770);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(677);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(739);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(771);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(772);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(774);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(442);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(786);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(916);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(564);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(419);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(499);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(882);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(984);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1043);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1064);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1085);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1050);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1068);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(844);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(857);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(759);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(688);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(803);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(851);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(656);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(441);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(656);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(420);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(856);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(885);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(868);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(509);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(512);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(563);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(521);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(522);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(524);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(525);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(526);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(527);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(782);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(547);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(428);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(687);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(639);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(644);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(691);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(783);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(640);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(911);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(441);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(696);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(803);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(787);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(788);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(501);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(546);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(400);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(566);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(636);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(569);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1028);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1015);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(581);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(991);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1024);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1036);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1022);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1081);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(976);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1001);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1088);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(989);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1029);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1027);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1014);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1026);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1014);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(472);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(479);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(930);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(588);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(589);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(482);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(583);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(880);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(584);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(475);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(586);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(427);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(888);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(869);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(864);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(539);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(577);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(671);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(898);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(393);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(551);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(638);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(859);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(902);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(431);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(914);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(912);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(432);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(915);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(433);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(704);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(434);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(398);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(685);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(792);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(435);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(737);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(793);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(699);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(529);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(725);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(372);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(729);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(736);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(716);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(717);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(718);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(719);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(710);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(865);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(667);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(865);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(701);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(706);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(742);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(412);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(932);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(933);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(753);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1062);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1002);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(492);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(628);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(623);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(492);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(532);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(943);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(767);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(545);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(503);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(543);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(511);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(515);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(516);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(517);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(519);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(676);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(643);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(993);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(866);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1013);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1069);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(974);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1040);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1057);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1005);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1056);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(978);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1037);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(357);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1082);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1049);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1004);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1048);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1055);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(628);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(947);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(707);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(836);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(944);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(945);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(946);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(622);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(952);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(924);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(421);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(613);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(795);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(713);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(833);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(520);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(402);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(406);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(456);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(906);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1089);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1021);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1010);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(849);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(649);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(889);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(506);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(900);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(507);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(874);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(766);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(630);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(892);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(541);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(907);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(647);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1041);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(985);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1030);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1058);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1000);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1042);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1093);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1044);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1100);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1046);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1103);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1101);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1102);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1099);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(939);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(601);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(417);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(922);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(641);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(362);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(498);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1071);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(498);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(361);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(846);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(615);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(382);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(508);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(510);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(828);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(829);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(571);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(367);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(629);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(632);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(634);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(635);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(637);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(645);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(953);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(646);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(954);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(955);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(648);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(650);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(723);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(440);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(582);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(866);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(724);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(840);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(860);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(502);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(835);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(667);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(672);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(838);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(853);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(895);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(673);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(444);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(445);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(518);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(403);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1060);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(986);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(617);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(555);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(624);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(618);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(990);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1031);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(981);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1096);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1097);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(359);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(364);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(366);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(797);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(798);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(633);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(799);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(800);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(801);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(956);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(962);
      if (lookahead == '\r') ADVANCE(959);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead != 0) ADVANCE(964);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(962);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead != 0) ADVANCE(964);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(964);
      if (lookahead == '"') ADVANCE(971);
      if (lookahead != 0) ADVANCE(960);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '*') ADVANCE(966);
      if (lookahead != 0) ADVANCE(964);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '-') ADVANCE(963);
      if (lookahead == '/') ADVANCE(961);
      if (lookahead == '\\') ADVANCE(958);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(962);
      if (lookahead != 0) ADVANCE(964);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '-') ADVANCE(960);
      if (lookahead != 0) ADVANCE(964);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead != 0) ADVANCE(964);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '*') ADVANCE(965);
      if (lookahead == '/') ADVANCE(964);
      if (lookahead != 0) ADVANCE(966);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '*') ADVANCE(965);
      if (lookahead != 0) ADVANCE(966);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(65);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(325);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(969);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_comment_ml);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_comment_sl);
      if (lookahead == '"') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(972);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_comment_sl);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(972);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_kw_create);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_kw_alter);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_kw_package);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_kw_function);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_kw_procedure);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_kw_trigger);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_kw_type);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_kw_rowtype);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_kw_library);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_kw_true);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_kw_false);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_kw_null);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_kw_not);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_kw_row);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(480);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(951);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_kw_compile);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_kw_debug);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_kw_specification);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_kw_body);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_kw_begin);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_kw_end);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_kw_or);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_kw_and);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_kw_replace);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_kw_editionable);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_kw_noneditionable);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_kw_metadata);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_kw_none);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_kw_default);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_kw_collation);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_kw_using_nls_comp);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_kw_authid);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_kw_current_user);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_kw_definer);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_kw_accessible);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_kw_by);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_kw_by);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(497);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_kw_reuse);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_kw_settings);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_kw_byte);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_kw_char);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_kw_char);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_kw_is);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_kw_is);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(796);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_kw_as);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_kw_deterministic);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_kw_pipelined);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_kw_parallel_enable);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_kw_result_cache);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_kw_exists);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_kw_between);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_kw_found);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_kw_isopen);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_kw_notfound);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_kw_in);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_kw_in);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(541);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_kw_in);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(541);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1041);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_kw_in);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1041);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_kw_out);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_kw_nocopy);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_kw_like);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_kw_inserting);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_kw_deleting);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_kw_updating);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_kw_return);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_kw_varchar);
      if (lookahead == '2') ADVANCE(1038);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_kw_varchar2);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_kw_nvarchar2);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_kw_nchar);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_kw_int);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_kw_smallint);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_kw_real);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_kw_binary_float);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_kw_binary_double);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_kw_simple_float);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_kw_simple_double);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_kw_binary_integer);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_kw_pls_integer);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_kw_natural);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1051);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_kw_naturaln);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_kw_positive);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1053);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_kw_positiven);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_kw_signtype);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_kw_simple_integer);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_kw_integer);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_kw_number);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_kw_float);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_kw_long);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_kw_raw);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_kw_date);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_kw_timestamp);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_kw_with);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_kw_local);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_kw_time);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_kw_time);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(892);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_kw_zone);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_kw_interval);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_kw_year);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_kw_month);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_kw_day);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_kw_minute);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_kw_second);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_kw_to);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_kw_blob);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_kw_clob);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_kw_nclob);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_kw_bfile);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_kw_rowid);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_kw_urowid);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_kw_boolean);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_kw_character);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_kw_varying);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_kw_numeric);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_kw_decimal);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_kw_dec);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(705);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_kw_double);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_kw_precision);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_kw_sys);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_kw_anydata);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_kw_anydata);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(550);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_kw_anytype);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_kw_anydataset);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_kw_xmltype);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_kw_uritype);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_kw_sdo_geometry);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_kw_sdo_topo_geometry);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_kw_sdo_georaster);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_kw_json_element_t);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_kw_json_array_t);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_kw_json_object_t);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_kw_json_scalar_t);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_kw_json_key_list);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 50},
  [3] = {.lex_state = 59},
  [4] = {.lex_state = 59},
  [5] = {.lex_state = 60},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 61},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 44},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 43},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 44},
  [19] = {.lex_state = 43},
  [20] = {.lex_state = 44},
  [21] = {.lex_state = 44},
  [22] = {.lex_state = 44},
  [23] = {.lex_state = 44},
  [24] = {.lex_state = 44},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 44},
  [31] = {.lex_state = 44},
  [32] = {.lex_state = 44},
  [33] = {.lex_state = 44},
  [34] = {.lex_state = 44},
  [35] = {.lex_state = 46},
  [36] = {.lex_state = 46},
  [37] = {.lex_state = 43},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 45},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 45},
  [42] = {.lex_state = 44},
  [43] = {.lex_state = 45},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 44},
  [46] = {.lex_state = 44},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 44},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 46},
  [55] = {.lex_state = 43},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 43},
  [58] = {.lex_state = 43},
  [59] = {.lex_state = 43},
  [60] = {.lex_state = 43},
  [61] = {.lex_state = 43},
  [62] = {.lex_state = 43},
  [63] = {.lex_state = 43},
  [64] = {.lex_state = 43},
  [65] = {.lex_state = 46},
  [66] = {.lex_state = 43},
  [67] = {.lex_state = 43},
  [68] = {.lex_state = 43},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 43},
  [72] = {.lex_state = 46},
  [73] = {.lex_state = 43},
  [74] = {.lex_state = 46},
  [75] = {.lex_state = 44},
  [76] = {.lex_state = 44},
  [77] = {.lex_state = 44},
  [78] = {.lex_state = 44},
  [79] = {.lex_state = 44},
  [80] = {.lex_state = 44},
  [81] = {.lex_state = 44},
  [82] = {.lex_state = 44},
  [83] = {.lex_state = 46},
  [84] = {.lex_state = 44},
  [85] = {.lex_state = 44},
  [86] = {.lex_state = 44},
  [87] = {.lex_state = 46},
  [88] = {.lex_state = 46},
  [89] = {.lex_state = 46},
  [90] = {.lex_state = 46},
  [91] = {.lex_state = 44},
  [92] = {.lex_state = 44},
  [93] = {.lex_state = 46},
  [94] = {.lex_state = 46},
  [95] = {.lex_state = 44},
  [96] = {.lex_state = 44},
  [97] = {.lex_state = 44},
  [98] = {.lex_state = 46},
  [99] = {.lex_state = 44},
  [100] = {.lex_state = 44},
  [101] = {.lex_state = 46},
  [102] = {.lex_state = 46},
  [103] = {.lex_state = 44},
  [104] = {.lex_state = 44},
  [105] = {.lex_state = 46},
  [106] = {.lex_state = 46},
  [107] = {.lex_state = 44},
  [108] = {.lex_state = 44},
  [109] = {.lex_state = 55},
  [110] = {.lex_state = 55},
  [111] = {.lex_state = 55},
  [112] = {.lex_state = 55},
  [113] = {.lex_state = 55},
  [114] = {.lex_state = 55},
  [115] = {.lex_state = 46},
  [116] = {.lex_state = 55},
  [117] = {.lex_state = 46},
  [118] = {.lex_state = 55},
  [119] = {.lex_state = 46},
  [120] = {.lex_state = 55},
  [121] = {.lex_state = 46},
  [122] = {.lex_state = 46},
  [123] = {.lex_state = 55},
  [124] = {.lex_state = 55},
  [125] = {.lex_state = 55},
  [126] = {.lex_state = 55},
  [127] = {.lex_state = 55},
  [128] = {.lex_state = 55},
  [129] = {.lex_state = 55},
  [130] = {.lex_state = 55},
  [131] = {.lex_state = 55},
  [132] = {.lex_state = 55},
  [133] = {.lex_state = 55},
  [134] = {.lex_state = 55},
  [135] = {.lex_state = 55},
  [136] = {.lex_state = 55},
  [137] = {.lex_state = 55},
  [138] = {.lex_state = 55},
  [139] = {.lex_state = 55},
  [140] = {.lex_state = 55},
  [141] = {.lex_state = 55},
  [142] = {.lex_state = 55},
  [143] = {.lex_state = 55},
  [144] = {.lex_state = 55},
  [145] = {.lex_state = 55},
  [146] = {.lex_state = 55},
  [147] = {.lex_state = 55},
  [148] = {.lex_state = 55},
  [149] = {.lex_state = 55},
  [150] = {.lex_state = 55},
  [151] = {.lex_state = 55},
  [152] = {.lex_state = 55},
  [153] = {.lex_state = 55},
  [154] = {.lex_state = 55},
  [155] = {.lex_state = 55},
  [156] = {.lex_state = 55},
  [157] = {.lex_state = 55},
  [158] = {.lex_state = 55},
  [159] = {.lex_state = 55},
  [160] = {.lex_state = 55},
  [161] = {.lex_state = 55},
  [162] = {.lex_state = 45},
  [163] = {.lex_state = 45},
  [164] = {.lex_state = 45},
  [165] = {.lex_state = 49},
  [166] = {.lex_state = 49},
  [167] = {.lex_state = 45},
  [168] = {.lex_state = 49},
  [169] = {.lex_state = 46},
  [170] = {.lex_state = 49},
  [171] = {.lex_state = 49},
  [172] = {.lex_state = 49},
  [173] = {.lex_state = 49},
  [174] = {.lex_state = 49},
  [175] = {.lex_state = 49},
  [176] = {.lex_state = 46},
  [177] = {.lex_state = 45},
  [178] = {.lex_state = 334},
  [179] = {.lex_state = 45},
  [180] = {.lex_state = 45},
  [181] = {.lex_state = 45},
  [182] = {.lex_state = 45},
  [183] = {.lex_state = 45},
  [184] = {.lex_state = 45},
  [185] = {.lex_state = 46},
  [186] = {.lex_state = 45},
  [187] = {.lex_state = 45},
  [188] = {.lex_state = 45},
  [189] = {.lex_state = 45},
  [190] = {.lex_state = 45},
  [191] = {.lex_state = 45},
  [192] = {.lex_state = 45},
  [193] = {.lex_state = 45},
  [194] = {.lex_state = 45},
  [195] = {.lex_state = 45},
  [196] = {.lex_state = 45},
  [197] = {.lex_state = 45},
  [198] = {.lex_state = 45},
  [199] = {.lex_state = 335},
  [200] = {.lex_state = 45},
  [201] = {.lex_state = 46},
  [202] = {.lex_state = 46},
  [203] = {.lex_state = 46},
  [204] = {.lex_state = 46},
  [205] = {.lex_state = 46},
  [206] = {.lex_state = 46},
  [207] = {.lex_state = 46},
  [208] = {.lex_state = 46},
  [209] = {.lex_state = 46},
  [210] = {.lex_state = 46},
  [211] = {.lex_state = 46},
  [212] = {.lex_state = 46},
  [213] = {.lex_state = 46},
  [214] = {.lex_state = 46},
  [215] = {.lex_state = 46},
  [216] = {.lex_state = 46},
  [217] = {.lex_state = 46},
  [218] = {.lex_state = 46},
  [219] = {.lex_state = 46},
  [220] = {.lex_state = 46},
  [221] = {.lex_state = 46},
  [222] = {.lex_state = 46},
  [223] = {.lex_state = 46},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 46},
  [226] = {.lex_state = 336},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 336},
  [229] = {.lex_state = 46},
  [230] = {.lex_state = 336},
  [231] = {.lex_state = 336},
  [232] = {.lex_state = 336},
  [233] = {.lex_state = 336},
  [234] = {.lex_state = 46},
  [235] = {.lex_state = 58},
  [236] = {.lex_state = 58},
  [237] = {.lex_state = 49},
  [238] = {.lex_state = 46},
  [239] = {.lex_state = 46},
  [240] = {.lex_state = 46},
  [241] = {.lex_state = 58},
  [242] = {.lex_state = 334},
  [243] = {.lex_state = 334},
  [244] = {.lex_state = 334},
  [245] = {.lex_state = 334},
  [246] = {.lex_state = 46},
  [247] = {.lex_state = 46},
  [248] = {.lex_state = 49},
  [249] = {.lex_state = 336},
  [250] = {.lex_state = 46},
  [251] = {.lex_state = 334},
  [252] = {.lex_state = 336},
  [253] = {.lex_state = 336},
  [254] = {.lex_state = 336},
  [255] = {.lex_state = 334},
  [256] = {.lex_state = 334},
  [257] = {.lex_state = 334},
  [258] = {.lex_state = 334},
  [259] = {.lex_state = 46},
  [260] = {.lex_state = 46},
  [261] = {.lex_state = 334},
  [262] = {.lex_state = 46},
  [263] = {.lex_state = 334},
  [264] = {.lex_state = 334},
  [265] = {.lex_state = 334},
  [266] = {.lex_state = 46},
  [267] = {.lex_state = 49},
  [268] = {.lex_state = 55},
  [269] = {.lex_state = 334},
  [270] = {.lex_state = 334},
  [271] = {.lex_state = 46},
  [272] = {.lex_state = 46},
  [273] = {.lex_state = 46},
  [274] = {.lex_state = 334},
  [275] = {.lex_state = 46},
  [276] = {.lex_state = 46},
  [277] = {.lex_state = 49},
  [278] = {.lex_state = 334},
  [279] = {.lex_state = 58},
  [280] = {.lex_state = 51},
  [281] = {.lex_state = 51},
  [282] = {.lex_state = 46},
  [283] = {.lex_state = 43},
  [284] = {.lex_state = 58},
  [285] = {.lex_state = 49},
  [286] = {.lex_state = 49},
  [287] = {.lex_state = 49},
  [288] = {.lex_state = 49},
  [289] = {.lex_state = 52},
  [290] = {.lex_state = 49},
  [291] = {.lex_state = 58},
  [292] = {.lex_state = 58},
  [293] = {.lex_state = 49},
  [294] = {.lex_state = 49},
  [295] = {.lex_state = 58},
  [296] = {.lex_state = 47},
  [297] = {.lex_state = 47},
  [298] = {.lex_state = 47},
  [299] = {.lex_state = 334},
  [300] = {.lex_state = 47},
  [301] = {.lex_state = 49},
  [302] = {.lex_state = 47},
  [303] = {.lex_state = 47},
  [304] = {.lex_state = 47},
  [305] = {.lex_state = 47},
  [306] = {.lex_state = 47},
  [307] = {.lex_state = 58},
  [308] = {.lex_state = 46},
  [309] = {.lex_state = 46},
  [310] = {.lex_state = 334},
  [311] = {.lex_state = 46},
  [312] = {.lex_state = 46},
  [313] = {.lex_state = 334},
  [314] = {.lex_state = 46},
  [315] = {.lex_state = 46},
  [316] = {.lex_state = 52},
  [317] = {.lex_state = 46},
  [318] = {.lex_state = 46},
  [319] = {.lex_state = 46},
  [320] = {.lex_state = 46},
  [321] = {.lex_state = 53},
  [322] = {.lex_state = 56},
  [323] = {.lex_state = 54},
  [324] = {.lex_state = 46},
  [325] = {.lex_state = 48},
  [326] = {.lex_state = 46},
  [327] = {.lex_state = 46},
  [328] = {.lex_state = 54},
  [329] = {.lex_state = 46},
  [330] = {.lex_state = 48},
  [331] = {.lex_state = 334},
  [332] = {.lex_state = 47},
  [333] = {.lex_state = 334},
  [334] = {.lex_state = 46},
  [335] = {.lex_state = 334},
  [336] = {.lex_state = 334},
  [337] = {.lex_state = 52},
  [338] = {.lex_state = 48},
  [339] = {.lex_state = 334},
  [340] = {.lex_state = 47},
  [341] = {.lex_state = 46},
  [342] = {.lex_state = 48},
  [343] = {.lex_state = 47},
  [344] = {.lex_state = 46},
  [345] = {.lex_state = 46},
  [346] = {.lex_state = 48},
  [347] = {.lex_state = 48},
  [348] = {.lex_state = 48},
  [349] = {.lex_state = 48},
  [350] = {.lex_state = 48},
  [351] = {.lex_state = 46},
  [352] = {.lex_state = 48},
  [353] = {.lex_state = 46},
  [354] = {.lex_state = 46},
  [355] = {.lex_state = 46},
  [356] = {.lex_state = 46},
  [357] = {.lex_state = 46},
  [358] = {.lex_state = 47},
  [359] = {.lex_state = 47},
  [360] = {.lex_state = 48},
  [361] = {.lex_state = 48},
  [362] = {.lex_state = 47},
  [363] = {.lex_state = 46},
  [364] = {.lex_state = 46},
  [365] = {.lex_state = 46},
  [366] = {.lex_state = 47},
  [367] = {.lex_state = 47},
  [368] = {.lex_state = 46},
  [369] = {.lex_state = 47},
  [370] = {.lex_state = 46},
  [371] = {.lex_state = 47},
  [372] = {.lex_state = 47},
  [373] = {.lex_state = 47},
  [374] = {.lex_state = 47},
  [375] = {.lex_state = 47},
  [376] = {.lex_state = 47},
  [377] = {.lex_state = 47},
  [378] = {.lex_state = 47},
  [379] = {.lex_state = 47},
  [380] = {.lex_state = 47},
  [381] = {.lex_state = 47},
  [382] = {.lex_state = 47},
  [383] = {.lex_state = 47},
  [384] = {.lex_state = 47},
  [385] = {.lex_state = 47},
  [386] = {.lex_state = 47},
  [387] = {.lex_state = 47},
  [388] = {.lex_state = 47},
  [389] = {.lex_state = 47},
  [390] = {.lex_state = 47},
  [391] = {.lex_state = 47},
  [392] = {.lex_state = 47},
  [393] = {.lex_state = 47},
  [394] = {.lex_state = 47},
  [395] = {.lex_state = 47},
  [396] = {.lex_state = 47},
  [397] = {.lex_state = 47},
  [398] = {.lex_state = 47},
  [399] = {.lex_state = 47},
  [400] = {.lex_state = 47},
  [401] = {.lex_state = 46},
  [402] = {.lex_state = 47},
  [403] = {.lex_state = 47},
  [404] = {.lex_state = 47},
  [405] = {.lex_state = 47},
  [406] = {.lex_state = 47},
  [407] = {.lex_state = 47},
  [408] = {.lex_state = 47},
  [409] = {.lex_state = 46},
  [410] = {.lex_state = 46},
  [411] = {.lex_state = 46},
  [412] = {.lex_state = 46},
  [413] = {.lex_state = 46},
  [414] = {.lex_state = 46},
  [415] = {.lex_state = 46},
  [416] = {.lex_state = 53},
  [417] = {.lex_state = 46},
  [418] = {.lex_state = 46},
  [419] = {.lex_state = 46},
  [420] = {.lex_state = 53},
  [421] = {.lex_state = 48},
  [422] = {.lex_state = 46},
  [423] = {.lex_state = 46},
  [424] = {.lex_state = 62},
  [425] = {.lex_state = 46},
  [426] = {.lex_state = 46},
  [427] = {.lex_state = 62},
  [428] = {.lex_state = 48},
  [429] = {.lex_state = 46},
  [430] = {.lex_state = 46},
  [431] = {.lex_state = 46},
  [432] = {.lex_state = 46},
  [433] = {.lex_state = 48},
  [434] = {.lex_state = 48},
  [435] = {.lex_state = 46},
  [436] = {.lex_state = 46},
  [437] = {.lex_state = 48},
  [438] = {.lex_state = 62},
  [439] = {.lex_state = 48},
  [440] = {.lex_state = 46},
  [441] = {.lex_state = 46},
  [442] = {.lex_state = 46},
  [443] = {.lex_state = 46},
  [444] = {.lex_state = 46},
  [445] = {.lex_state = 46},
  [446] = {.lex_state = 46},
  [447] = {.lex_state = 46},
  [448] = {.lex_state = 46},
  [449] = {.lex_state = 62},
  [450] = {.lex_state = 46},
  [451] = {.lex_state = 46},
  [452] = {.lex_state = 46},
  [453] = {.lex_state = 46},
  [454] = {.lex_state = 46},
  [455] = {.lex_state = 46},
  [456] = {.lex_state = 57},
  [457] = {.lex_state = 48},
  [458] = {.lex_state = 46},
  [459] = {.lex_state = 46},
  [460] = {.lex_state = 46},
  [461] = {.lex_state = 46},
  [462] = {.lex_state = 46},
  [463] = {.lex_state = 46},
  [464] = {.lex_state = 46},
  [465] = {.lex_state = 46},
  [466] = {.lex_state = 46},
  [467] = {.lex_state = 46},
  [468] = {.lex_state = 46},
  [469] = {.lex_state = 46},
  [470] = {.lex_state = 46},
  [471] = {.lex_state = 46},
  [472] = {.lex_state = 48},
  [473] = {.lex_state = 46},
  [474] = {.lex_state = 46},
  [475] = {.lex_state = 62},
  [476] = {.lex_state = 46},
  [477] = {.lex_state = 48},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 48},
  [480] = {.lex_state = 48},
  [481] = {.lex_state = 48},
  [482] = {.lex_state = 48},
  [483] = {.lex_state = 48},
  [484] = {.lex_state = 48},
  [485] = {.lex_state = 48},
  [486] = {.lex_state = 48},
  [487] = {.lex_state = 48},
  [488] = {.lex_state = 48},
  [489] = {.lex_state = 48},
  [490] = {.lex_state = 48},
  [491] = {.lex_state = 48},
  [492] = {.lex_state = 46},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 48},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 48},
  [497] = {.lex_state = 48},
  [498] = {.lex_state = 48},
  [499] = {.lex_state = 48},
  [500] = {.lex_state = 48},
  [501] = {.lex_state = 48},
  [502] = {.lex_state = 48},
  [503] = {.lex_state = 48},
  [504] = {.lex_state = 48},
  [505] = {.lex_state = 48},
  [506] = {.lex_state = 48},
  [507] = {.lex_state = 48},
  [508] = {.lex_state = 48},
  [509] = {.lex_state = 48},
  [510] = {.lex_state = 48},
  [511] = {.lex_state = 48},
  [512] = {.lex_state = 48},
  [513] = {.lex_state = 48},
  [514] = {.lex_state = 48},
  [515] = {.lex_state = 48},
  [516] = {.lex_state = 48},
  [517] = {.lex_state = 48},
  [518] = {.lex_state = 48},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 334},
  [522] = {.lex_state = 48},
  [523] = {.lex_state = 48},
  [524] = {.lex_state = 48},
  [525] = {.lex_state = 48},
  [526] = {.lex_state = 48},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 48},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 48},
  [533] = {.lex_state = 48},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 48},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 48},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 70},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 46},
  [545] = {.lex_state = 48},
  [546] = {.lex_state = 48},
  [547] = {.lex_state = 48},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 48},
  [550] = {.lex_state = 48},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 48},
  [560] = {.lex_state = 46},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 48},
  [563] = {.lex_state = 48},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 46},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 48},
  [569] = {.lex_state = 48},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 48},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 48},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 48},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 48},
  [578] = {.lex_state = 48},
  [579] = {.lex_state = 48},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 48},
  [582] = {.lex_state = 46},
  [583] = {.lex_state = 48},
  [584] = {.lex_state = 70},
  [585] = {.lex_state = 46},
  [586] = {.lex_state = 46},
  [587] = {.lex_state = 46},
  [588] = {.lex_state = 46},
  [589] = {.lex_state = 70},
  [590] = {.lex_state = 48},
  [591] = {.lex_state = 334},
  [592] = {.lex_state = 46},
  [593] = {.lex_state = 46},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 46},
  [596] = {.lex_state = 46},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 46},
  [600] = {.lex_state = 46},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 46},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 46},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 46},
  [607] = {.lex_state = 46},
  [608] = {.lex_state = 70},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 70},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 46},
  [614] = {.lex_state = 48},
  [615] = {.lex_state = 46},
  [616] = {.lex_state = 46},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 46},
  [619] = {.lex_state = 48},
  [620] = {.lex_state = 46},
  [621] = {.lex_state = 46},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 50},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 50},
  [634] = {.lex_state = 46},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 46},
  [639] = {.lex_state = 46},
  [640] = {.lex_state = 46},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 46},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 46},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 50},
  [648] = {.lex_state = 50},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 46},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 50},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 50},
  [658] = {.lex_state = 50},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 50},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 46},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 46},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 46},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 46},
  [672] = {.lex_state = 46},
  [673] = {.lex_state = 46},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 46},
  [678] = {.lex_state = 46},
  [679] = {.lex_state = 46},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 46},
  [682] = {.lex_state = 46},
  [683] = {.lex_state = 46},
  [684] = {.lex_state = 46},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 46},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 46},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 46},
  [696] = {.lex_state = 46},
  [697] = {.lex_state = 46},
  [698] = {.lex_state = 46},
  [699] = {.lex_state = 46},
  [700] = {.lex_state = 46},
  [701] = {.lex_state = 46},
  [702] = {.lex_state = 46},
  [703] = {.lex_state = 46},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 46},
  [712] = {.lex_state = 50},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 46},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 962},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 46},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 46},
  [734] = {.lex_state = 46},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 46},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 46},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 46},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 962},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 46},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 46},
  [755] = {.lex_state = 46},
  [756] = {.lex_state = 46},
  [757] = {.lex_state = 46},
  [758] = {.lex_state = 46},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 46},
  [761] = {.lex_state = 46},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 46},
  [764] = {.lex_state = 59},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 962},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 46},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 70},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 962},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 962},
  [778] = {.lex_state = 962},
  [779] = {.lex_state = 962},
  [780] = {.lex_state = 962},
  [781] = {.lex_state = 962},
  [782] = {.lex_state = 46},
  [783] = {.lex_state = 46},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 962},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 46},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 46},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
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
    [sym__number] = ACTIONS(1),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_create] = ACTIONS(1),
    [sym_kw_alter] = ACTIONS(1),
    [sym_kw_package] = ACTIONS(1),
    [sym_kw_function] = ACTIONS(1),
    [sym_kw_procedure] = ACTIONS(1),
    [sym_kw_trigger] = ACTIONS(1),
    [sym_kw_type] = ACTIONS(1),
    [sym_kw_rowtype] = ACTIONS(1),
    [sym_kw_library] = ACTIONS(1),
    [sym_kw_true] = ACTIONS(1),
    [sym_kw_false] = ACTIONS(1),
    [sym_kw_null] = ACTIONS(1),
    [sym_kw_not] = ACTIONS(1),
    [sym_kw_row] = ACTIONS(1),
    [sym_kw_compile] = ACTIONS(1),
    [sym_kw_debug] = ACTIONS(1),
    [sym_kw_specification] = ACTIONS(1),
    [sym_kw_body] = ACTIONS(1),
    [sym_kw_begin] = ACTIONS(1),
    [sym_kw_end] = ACTIONS(1),
    [sym_kw_or] = ACTIONS(1),
    [sym_kw_and] = ACTIONS(1),
    [sym_kw_replace] = ACTIONS(1),
    [sym_kw_editionable] = ACTIONS(1),
    [sym_kw_metadata] = ACTIONS(1),
    [sym_kw_none] = ACTIONS(1),
    [sym_kw_default] = ACTIONS(1),
    [sym_kw_collation] = ACTIONS(1),
    [sym_kw_using_nls_comp] = ACTIONS(1),
    [sym_kw_authid] = ACTIONS(1),
    [sym_kw_current_user] = ACTIONS(1),
    [sym_kw_definer] = ACTIONS(1),
    [sym_kw_accessible] = ACTIONS(1),
    [sym_kw_by] = ACTIONS(1),
    [sym_kw_reuse] = ACTIONS(1),
    [sym_kw_settings] = ACTIONS(1),
    [sym_kw_byte] = ACTIONS(1),
    [sym_kw_char] = ACTIONS(1),
    [sym_kw_is] = ACTIONS(1),
    [sym_kw_as] = ACTIONS(1),
    [sym_kw_deterministic] = ACTIONS(1),
    [sym_kw_pipelined] = ACTIONS(1),
    [sym_kw_parallel_enable] = ACTIONS(1),
    [sym_kw_result_cache] = ACTIONS(1),
    [sym_kw_exists] = ACTIONS(1),
    [sym_kw_between] = ACTIONS(1),
    [sym_kw_found] = ACTIONS(1),
    [sym_kw_isopen] = ACTIONS(1),
    [sym_kw_in] = ACTIONS(1),
    [sym_kw_out] = ACTIONS(1),
    [sym_kw_nocopy] = ACTIONS(1),
    [sym_kw_like] = ACTIONS(1),
    [sym_kw_inserting] = ACTIONS(1),
    [sym_kw_deleting] = ACTIONS(1),
    [sym_kw_updating] = ACTIONS(1),
    [sym_kw_return] = ACTIONS(1),
    [sym_kw_varchar] = ACTIONS(1),
    [sym_kw_varchar2] = ACTIONS(1),
    [sym_kw_nvarchar2] = ACTIONS(1),
    [sym_kw_nchar] = ACTIONS(1),
    [sym_kw_int] = ACTIONS(1),
    [sym_kw_smallint] = ACTIONS(1),
    [sym_kw_real] = ACTIONS(1),
    [sym_kw_binary_float] = ACTIONS(1),
    [sym_kw_binary_double] = ACTIONS(1),
    [sym_kw_simple_float] = ACTIONS(1),
    [sym_kw_simple_double] = ACTIONS(1),
    [sym_kw_binary_integer] = ACTIONS(1),
    [sym_kw_pls_integer] = ACTIONS(1),
    [sym_kw_natural] = ACTIONS(1),
    [sym_kw_naturaln] = ACTIONS(1),
    [sym_kw_positive] = ACTIONS(1),
    [sym_kw_positiven] = ACTIONS(1),
    [sym_kw_signtype] = ACTIONS(1),
    [sym_kw_simple_integer] = ACTIONS(1),
    [sym_kw_integer] = ACTIONS(1),
    [sym_kw_number] = ACTIONS(1),
    [sym_kw_float] = ACTIONS(1),
    [sym_kw_long] = ACTIONS(1),
    [sym_kw_raw] = ACTIONS(1),
    [sym_kw_date] = ACTIONS(1),
    [sym_kw_timestamp] = ACTIONS(1),
    [sym_kw_with] = ACTIONS(1),
    [sym_kw_local] = ACTIONS(1),
    [sym_kw_time] = ACTIONS(1),
    [sym_kw_zone] = ACTIONS(1),
    [sym_kw_interval] = ACTIONS(1),
    [sym_kw_year] = ACTIONS(1),
    [sym_kw_month] = ACTIONS(1),
    [sym_kw_day] = ACTIONS(1),
    [sym_kw_minute] = ACTIONS(1),
    [sym_kw_second] = ACTIONS(1),
    [sym_kw_to] = ACTIONS(1),
    [sym_kw_blob] = ACTIONS(1),
    [sym_kw_clob] = ACTIONS(1),
    [sym_kw_nclob] = ACTIONS(1),
    [sym_kw_bfile] = ACTIONS(1),
    [sym_kw_rowid] = ACTIONS(1),
    [sym_kw_urowid] = ACTIONS(1),
    [sym_kw_boolean] = ACTIONS(1),
    [sym_kw_character] = ACTIONS(1),
    [sym_kw_varying] = ACTIONS(1),
    [sym_kw_numeric] = ACTIONS(1),
    [sym_kw_decimal] = ACTIONS(1),
    [sym_kw_dec] = ACTIONS(1),
    [sym_kw_double] = ACTIONS(1),
    [sym_kw_precision] = ACTIONS(1),
    [sym_kw_sys] = ACTIONS(1),
    [sym_kw_anydata] = ACTIONS(1),
    [sym_kw_anytype] = ACTIONS(1),
    [sym_kw_anydataset] = ACTIONS(1),
    [sym_kw_xmltype] = ACTIONS(1),
    [sym_kw_uritype] = ACTIONS(1),
    [sym_kw_sdo_geometry] = ACTIONS(1),
    [sym_kw_sdo_topo_geometry] = ACTIONS(1),
    [sym_kw_sdo_georaster] = ACTIONS(1),
    [sym_kw_json_element_t] = ACTIONS(1),
    [sym_kw_json_array_t] = ACTIONS(1),
    [sym_kw_json_object_t] = ACTIONS(1),
    [sym_kw_json_scalar_t] = ACTIONS(1),
    [sym_kw_json_key_list] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(743),
    [sym__element] = STATE(227),
    [sym_sql_statement] = STATE(227),
    [sym__ddl_statement] = STATE(520),
    [sym__create_statement] = STATE(520),
    [sym_create_package] = STATE(520),
    [sym__alter_statement] = STATE(520),
    [sym_alter_package] = STATE(520),
    [sym_alter_procedure] = STATE(520),
    [sym_alter_function] = STATE(520),
    [sym_alter_library] = STATE(520),
    [sym_create_obj] = STATE(521),
    [aux_sym_source_file_repeat1] = STATE(227),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment_ml] = ACTIONS(7),
    [sym_comment_sl] = ACTIONS(7),
    [sym_kw_create] = ACTIONS(9),
    [sym_kw_alter] = ACTIONS(11),
  },
  [2] = {
    [sym_datatype] = STATE(332),
    [sym_character_datatypes] = STATE(374),
    [sym__character_datatypes_char] = STATE(375),
    [sym__character_datatypes_varchar2] = STATE(375),
    [sym__character_datatypes_nchar] = STATE(375),
    [sym__character_datatypes_nvarchar2] = STATE(375),
    [sym_number_datatypes] = STATE(374),
    [sym__number_datatypes_keyword] = STATE(376),
    [sym__number_datatypes_number] = STATE(376),
    [sym__number_datatypes_float] = STATE(376),
    [sym_long_and_raw_datatypes] = STATE(374),
    [sym__long_and_raw_datatypes_long_raw] = STATE(377),
    [sym__long_and_raw_datatypes_raw] = STATE(377),
    [sym_datetime_datatypes] = STATE(374),
    [sym__datetime_datatypes_keyword] = STATE(378),
    [sym__datetime_datatypes_date_timestamp] = STATE(378),
    [sym__datetime_datatypes_date_interval_year] = STATE(378),
    [sym__datetime_datatypes_date_interval_day] = STATE(378),
    [sym_large_object_datatypes] = STATE(374),
    [sym_rowid_datatypes] = STATE(374),
    [sym_referenced_datatypes] = STATE(374),
    [sym__referenced_datatypes_type] = STATE(379),
    [sym__referenced_datatypes_rowtype] = STATE(379),
    [sym_logical_datatypes] = STATE(374),
    [sym_subtype_datatypes] = STATE(374),
    [sym__rowid_datatypes_urowid] = STATE(367),
    [sym__ansi_supported_datatypes_character] = STATE(375),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(375),
    [sym__ansi_supported_datatypes_varchar] = STATE(375),
    [sym__ansi_supported_datatypes_national] = STATE(375),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(376),
    [sym__ansi_supported_datatypes_double_precision] = STATE(376),
    [sym_supplied_datatypes_any_types] = STATE(374),
    [sym_supplied_datatypes_xml_types] = STATE(374),
    [sym_supplied_datatypes_spatial_types] = STATE(374),
    [sym_object_datatypes] = STATE(374),
    [sym_parameter_declaration_element_in] = STATE(532),
    [sym_parameter_declaration_element_in_out_or_out] = STATE(532),
    [sym_identifier] = STATE(305),
    [sym__quoted_identifier] = STATE(302),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(17),
    [sym_kw_in] = ACTIONS(19),
    [sym_kw_out] = ACTIONS(21),
    [sym_kw_varchar] = ACTIONS(23),
    [sym_kw_varchar2] = ACTIONS(25),
    [sym_kw_nvarchar2] = ACTIONS(27),
    [sym_kw_nchar] = ACTIONS(29),
    [sym_kw_int] = ACTIONS(31),
    [sym_kw_smallint] = ACTIONS(33),
    [sym_kw_real] = ACTIONS(33),
    [sym_kw_binary_float] = ACTIONS(33),
    [sym_kw_binary_double] = ACTIONS(33),
    [sym_kw_simple_float] = ACTIONS(33),
    [sym_kw_simple_double] = ACTIONS(33),
    [sym_kw_binary_integer] = ACTIONS(33),
    [sym_kw_pls_integer] = ACTIONS(33),
    [sym_kw_natural] = ACTIONS(31),
    [sym_kw_naturaln] = ACTIONS(33),
    [sym_kw_positive] = ACTIONS(31),
    [sym_kw_positiven] = ACTIONS(33),
    [sym_kw_signtype] = ACTIONS(33),
    [sym_kw_simple_integer] = ACTIONS(33),
    [sym_kw_integer] = ACTIONS(33),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(43),
    [sym_kw_timestamp] = ACTIONS(45),
    [sym_kw_interval] = ACTIONS(47),
    [sym_kw_blob] = ACTIONS(49),
    [sym_kw_clob] = ACTIONS(49),
    [sym_kw_nclob] = ACTIONS(49),
    [sym_kw_bfile] = ACTIONS(49),
    [sym_kw_rowid] = ACTIONS(51),
    [sym_kw_urowid] = ACTIONS(53),
    [sym_kw_boolean] = ACTIONS(55),
    [sym_kw_character] = ACTIONS(57),
    [sym_kw_numeric] = ACTIONS(59),
    [sym_kw_decimal] = ACTIONS(59),
    [sym_kw_dec] = ACTIONS(61),
    [sym_kw_double] = ACTIONS(63),
    [sym_kw_sys] = ACTIONS(65),
    [sym_kw_xmltype] = ACTIONS(67),
    [sym_kw_uritype] = ACTIONS(67),
    [sym_kw_sdo_geometry] = ACTIONS(69),
    [sym_kw_sdo_topo_geometry] = ACTIONS(69),
    [sym_kw_sdo_georaster] = ACTIONS(69),
    [sym_kw_json_element_t] = ACTIONS(71),
    [sym_kw_json_array_t] = ACTIONS(71),
    [sym_kw_json_object_t] = ACTIONS(71),
    [sym_kw_json_scalar_t] = ACTIONS(71),
    [sym_kw_json_key_list] = ACTIONS(71),
  },
  [3] = {
    [sym_datatype] = STATE(559),
    [sym_character_datatypes] = STATE(513),
    [sym__character_datatypes_char] = STATE(508),
    [sym__character_datatypes_varchar2] = STATE(508),
    [sym__character_datatypes_nchar] = STATE(508),
    [sym__character_datatypes_nvarchar2] = STATE(508),
    [sym_number_datatypes] = STATE(513),
    [sym__number_datatypes_keyword] = STATE(507),
    [sym__number_datatypes_number] = STATE(507),
    [sym__number_datatypes_float] = STATE(507),
    [sym_long_and_raw_datatypes] = STATE(513),
    [sym__long_and_raw_datatypes_long_raw] = STATE(506),
    [sym__long_and_raw_datatypes_raw] = STATE(506),
    [sym_datetime_datatypes] = STATE(513),
    [sym__datetime_datatypes_keyword] = STATE(505),
    [sym__datetime_datatypes_date_timestamp] = STATE(505),
    [sym__datetime_datatypes_date_interval_year] = STATE(505),
    [sym__datetime_datatypes_date_interval_day] = STATE(505),
    [sym_large_object_datatypes] = STATE(513),
    [sym_rowid_datatypes] = STATE(513),
    [sym_referenced_datatypes] = STATE(513),
    [sym__referenced_datatypes_type] = STATE(504),
    [sym__referenced_datatypes_rowtype] = STATE(504),
    [sym_logical_datatypes] = STATE(513),
    [sym_subtype_datatypes] = STATE(513),
    [sym__rowid_datatypes_urowid] = STATE(522),
    [sym__ansi_supported_datatypes_character] = STATE(508),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(508),
    [sym__ansi_supported_datatypes_varchar] = STATE(508),
    [sym__ansi_supported_datatypes_national] = STATE(508),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(507),
    [sym__ansi_supported_datatypes_double_precision] = STATE(507),
    [sym_supplied_datatypes_any_types] = STATE(513),
    [sym_supplied_datatypes_xml_types] = STATE(513),
    [sym_supplied_datatypes_spatial_types] = STATE(513),
    [sym_object_datatypes] = STATE(513),
    [sym_identifier] = STATE(347),
    [sym__quoted_identifier] = STATE(361),
    [sym__unquoted_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(77),
    [sym_kw_nocopy] = ACTIONS(79),
    [sym_kw_varchar] = ACTIONS(81),
    [sym_kw_varchar2] = ACTIONS(83),
    [sym_kw_nvarchar2] = ACTIONS(85),
    [sym_kw_nchar] = ACTIONS(87),
    [sym_kw_int] = ACTIONS(89),
    [sym_kw_smallint] = ACTIONS(91),
    [sym_kw_real] = ACTIONS(91),
    [sym_kw_binary_float] = ACTIONS(91),
    [sym_kw_binary_double] = ACTIONS(91),
    [sym_kw_simple_float] = ACTIONS(91),
    [sym_kw_simple_double] = ACTIONS(91),
    [sym_kw_binary_integer] = ACTIONS(91),
    [sym_kw_pls_integer] = ACTIONS(91),
    [sym_kw_natural] = ACTIONS(89),
    [sym_kw_naturaln] = ACTIONS(91),
    [sym_kw_positive] = ACTIONS(89),
    [sym_kw_positiven] = ACTIONS(91),
    [sym_kw_signtype] = ACTIONS(91),
    [sym_kw_simple_integer] = ACTIONS(91),
    [sym_kw_integer] = ACTIONS(91),
    [sym_kw_number] = ACTIONS(93),
    [sym_kw_float] = ACTIONS(95),
    [sym_kw_long] = ACTIONS(97),
    [sym_kw_raw] = ACTIONS(99),
    [sym_kw_date] = ACTIONS(101),
    [sym_kw_timestamp] = ACTIONS(103),
    [sym_kw_interval] = ACTIONS(105),
    [sym_kw_blob] = ACTIONS(107),
    [sym_kw_clob] = ACTIONS(107),
    [sym_kw_nclob] = ACTIONS(107),
    [sym_kw_bfile] = ACTIONS(107),
    [sym_kw_rowid] = ACTIONS(109),
    [sym_kw_urowid] = ACTIONS(111),
    [sym_kw_boolean] = ACTIONS(113),
    [sym_kw_character] = ACTIONS(115),
    [sym_kw_numeric] = ACTIONS(117),
    [sym_kw_decimal] = ACTIONS(117),
    [sym_kw_dec] = ACTIONS(119),
    [sym_kw_double] = ACTIONS(121),
    [sym_kw_sys] = ACTIONS(123),
    [sym_kw_xmltype] = ACTIONS(125),
    [sym_kw_uritype] = ACTIONS(125),
    [sym_kw_sdo_geometry] = ACTIONS(127),
    [sym_kw_sdo_topo_geometry] = ACTIONS(127),
    [sym_kw_sdo_georaster] = ACTIONS(127),
    [sym_kw_json_element_t] = ACTIONS(129),
    [sym_kw_json_array_t] = ACTIONS(129),
    [sym_kw_json_object_t] = ACTIONS(129),
    [sym_kw_json_scalar_t] = ACTIONS(129),
    [sym_kw_json_key_list] = ACTIONS(129),
  },
  [4] = {
    [sym_datatype] = STATE(578),
    [sym_character_datatypes] = STATE(513),
    [sym__character_datatypes_char] = STATE(508),
    [sym__character_datatypes_varchar2] = STATE(508),
    [sym__character_datatypes_nchar] = STATE(508),
    [sym__character_datatypes_nvarchar2] = STATE(508),
    [sym_number_datatypes] = STATE(513),
    [sym__number_datatypes_keyword] = STATE(507),
    [sym__number_datatypes_number] = STATE(507),
    [sym__number_datatypes_float] = STATE(507),
    [sym_long_and_raw_datatypes] = STATE(513),
    [sym__long_and_raw_datatypes_long_raw] = STATE(506),
    [sym__long_and_raw_datatypes_raw] = STATE(506),
    [sym_datetime_datatypes] = STATE(513),
    [sym__datetime_datatypes_keyword] = STATE(505),
    [sym__datetime_datatypes_date_timestamp] = STATE(505),
    [sym__datetime_datatypes_date_interval_year] = STATE(505),
    [sym__datetime_datatypes_date_interval_day] = STATE(505),
    [sym_large_object_datatypes] = STATE(513),
    [sym_rowid_datatypes] = STATE(513),
    [sym_referenced_datatypes] = STATE(513),
    [sym__referenced_datatypes_type] = STATE(504),
    [sym__referenced_datatypes_rowtype] = STATE(504),
    [sym_logical_datatypes] = STATE(513),
    [sym_subtype_datatypes] = STATE(513),
    [sym__rowid_datatypes_urowid] = STATE(522),
    [sym__ansi_supported_datatypes_character] = STATE(508),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(508),
    [sym__ansi_supported_datatypes_varchar] = STATE(508),
    [sym__ansi_supported_datatypes_national] = STATE(508),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(507),
    [sym__ansi_supported_datatypes_double_precision] = STATE(507),
    [sym_supplied_datatypes_any_types] = STATE(513),
    [sym_supplied_datatypes_xml_types] = STATE(513),
    [sym_supplied_datatypes_spatial_types] = STATE(513),
    [sym_object_datatypes] = STATE(513),
    [sym_identifier] = STATE(347),
    [sym__quoted_identifier] = STATE(361),
    [sym__unquoted_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(77),
    [sym_kw_nocopy] = ACTIONS(131),
    [sym_kw_varchar] = ACTIONS(81),
    [sym_kw_varchar2] = ACTIONS(83),
    [sym_kw_nvarchar2] = ACTIONS(85),
    [sym_kw_nchar] = ACTIONS(87),
    [sym_kw_int] = ACTIONS(89),
    [sym_kw_smallint] = ACTIONS(91),
    [sym_kw_real] = ACTIONS(91),
    [sym_kw_binary_float] = ACTIONS(91),
    [sym_kw_binary_double] = ACTIONS(91),
    [sym_kw_simple_float] = ACTIONS(91),
    [sym_kw_simple_double] = ACTIONS(91),
    [sym_kw_binary_integer] = ACTIONS(91),
    [sym_kw_pls_integer] = ACTIONS(91),
    [sym_kw_natural] = ACTIONS(89),
    [sym_kw_naturaln] = ACTIONS(91),
    [sym_kw_positive] = ACTIONS(89),
    [sym_kw_positiven] = ACTIONS(91),
    [sym_kw_signtype] = ACTIONS(91),
    [sym_kw_simple_integer] = ACTIONS(91),
    [sym_kw_integer] = ACTIONS(91),
    [sym_kw_number] = ACTIONS(93),
    [sym_kw_float] = ACTIONS(95),
    [sym_kw_long] = ACTIONS(97),
    [sym_kw_raw] = ACTIONS(99),
    [sym_kw_date] = ACTIONS(101),
    [sym_kw_timestamp] = ACTIONS(103),
    [sym_kw_interval] = ACTIONS(105),
    [sym_kw_blob] = ACTIONS(107),
    [sym_kw_clob] = ACTIONS(107),
    [sym_kw_nclob] = ACTIONS(107),
    [sym_kw_bfile] = ACTIONS(107),
    [sym_kw_rowid] = ACTIONS(109),
    [sym_kw_urowid] = ACTIONS(111),
    [sym_kw_boolean] = ACTIONS(113),
    [sym_kw_character] = ACTIONS(115),
    [sym_kw_numeric] = ACTIONS(117),
    [sym_kw_decimal] = ACTIONS(117),
    [sym_kw_dec] = ACTIONS(119),
    [sym_kw_double] = ACTIONS(121),
    [sym_kw_sys] = ACTIONS(123),
    [sym_kw_xmltype] = ACTIONS(125),
    [sym_kw_uritype] = ACTIONS(125),
    [sym_kw_sdo_geometry] = ACTIONS(127),
    [sym_kw_sdo_topo_geometry] = ACTIONS(127),
    [sym_kw_sdo_georaster] = ACTIONS(127),
    [sym_kw_json_element_t] = ACTIONS(129),
    [sym_kw_json_array_t] = ACTIONS(129),
    [sym_kw_json_object_t] = ACTIONS(129),
    [sym_kw_json_scalar_t] = ACTIONS(129),
    [sym_kw_json_key_list] = ACTIONS(129),
  },
  [5] = {
    [sym_datatype] = STATE(340),
    [sym_character_datatypes] = STATE(374),
    [sym__character_datatypes_char] = STATE(375),
    [sym__character_datatypes_varchar2] = STATE(375),
    [sym__character_datatypes_nchar] = STATE(375),
    [sym__character_datatypes_nvarchar2] = STATE(375),
    [sym_number_datatypes] = STATE(374),
    [sym__number_datatypes_keyword] = STATE(376),
    [sym__number_datatypes_number] = STATE(376),
    [sym__number_datatypes_float] = STATE(376),
    [sym_long_and_raw_datatypes] = STATE(374),
    [sym__long_and_raw_datatypes_long_raw] = STATE(377),
    [sym__long_and_raw_datatypes_raw] = STATE(377),
    [sym_datetime_datatypes] = STATE(374),
    [sym__datetime_datatypes_keyword] = STATE(378),
    [sym__datetime_datatypes_date_timestamp] = STATE(378),
    [sym__datetime_datatypes_date_interval_year] = STATE(378),
    [sym__datetime_datatypes_date_interval_day] = STATE(378),
    [sym_large_object_datatypes] = STATE(374),
    [sym_rowid_datatypes] = STATE(374),
    [sym_referenced_datatypes] = STATE(374),
    [sym__referenced_datatypes_type] = STATE(379),
    [sym__referenced_datatypes_rowtype] = STATE(379),
    [sym_logical_datatypes] = STATE(374),
    [sym_subtype_datatypes] = STATE(374),
    [sym__rowid_datatypes_urowid] = STATE(367),
    [sym__ansi_supported_datatypes_character] = STATE(375),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(375),
    [sym__ansi_supported_datatypes_varchar] = STATE(375),
    [sym__ansi_supported_datatypes_national] = STATE(375),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(376),
    [sym__ansi_supported_datatypes_double_precision] = STATE(376),
    [sym_supplied_datatypes_any_types] = STATE(374),
    [sym_supplied_datatypes_xml_types] = STATE(374),
    [sym_supplied_datatypes_spatial_types] = STATE(374),
    [sym_object_datatypes] = STATE(374),
    [sym_identifier] = STATE(305),
    [sym__quoted_identifier] = STATE(302),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(17),
    [sym_kw_out] = ACTIONS(133),
    [sym_kw_varchar] = ACTIONS(23),
    [sym_kw_varchar2] = ACTIONS(25),
    [sym_kw_nvarchar2] = ACTIONS(27),
    [sym_kw_nchar] = ACTIONS(29),
    [sym_kw_int] = ACTIONS(31),
    [sym_kw_smallint] = ACTIONS(33),
    [sym_kw_real] = ACTIONS(33),
    [sym_kw_binary_float] = ACTIONS(33),
    [sym_kw_binary_double] = ACTIONS(33),
    [sym_kw_simple_float] = ACTIONS(33),
    [sym_kw_simple_double] = ACTIONS(33),
    [sym_kw_binary_integer] = ACTIONS(33),
    [sym_kw_pls_integer] = ACTIONS(33),
    [sym_kw_natural] = ACTIONS(31),
    [sym_kw_naturaln] = ACTIONS(33),
    [sym_kw_positive] = ACTIONS(31),
    [sym_kw_positiven] = ACTIONS(33),
    [sym_kw_signtype] = ACTIONS(33),
    [sym_kw_simple_integer] = ACTIONS(33),
    [sym_kw_integer] = ACTIONS(33),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(43),
    [sym_kw_timestamp] = ACTIONS(45),
    [sym_kw_interval] = ACTIONS(47),
    [sym_kw_blob] = ACTIONS(49),
    [sym_kw_clob] = ACTIONS(49),
    [sym_kw_nclob] = ACTIONS(49),
    [sym_kw_bfile] = ACTIONS(49),
    [sym_kw_rowid] = ACTIONS(51),
    [sym_kw_urowid] = ACTIONS(53),
    [sym_kw_boolean] = ACTIONS(55),
    [sym_kw_character] = ACTIONS(57),
    [sym_kw_numeric] = ACTIONS(59),
    [sym_kw_decimal] = ACTIONS(59),
    [sym_kw_dec] = ACTIONS(61),
    [sym_kw_double] = ACTIONS(63),
    [sym_kw_sys] = ACTIONS(65),
    [sym_kw_xmltype] = ACTIONS(67),
    [sym_kw_uritype] = ACTIONS(67),
    [sym_kw_sdo_geometry] = ACTIONS(69),
    [sym_kw_sdo_topo_geometry] = ACTIONS(69),
    [sym_kw_sdo_georaster] = ACTIONS(69),
    [sym_kw_json_element_t] = ACTIONS(71),
    [sym_kw_json_array_t] = ACTIONS(71),
    [sym_kw_json_object_t] = ACTIONS(71),
    [sym_kw_json_scalar_t] = ACTIONS(71),
    [sym_kw_json_key_list] = ACTIONS(71),
  },
  [6] = {
    [sym_datatype] = STATE(464),
    [sym_character_datatypes] = STATE(466),
    [sym__character_datatypes_char] = STATE(467),
    [sym__character_datatypes_varchar2] = STATE(467),
    [sym__character_datatypes_nchar] = STATE(467),
    [sym__character_datatypes_nvarchar2] = STATE(467),
    [sym_number_datatypes] = STATE(466),
    [sym__number_datatypes_keyword] = STATE(468),
    [sym__number_datatypes_number] = STATE(468),
    [sym__number_datatypes_float] = STATE(468),
    [sym_long_and_raw_datatypes] = STATE(466),
    [sym__long_and_raw_datatypes_long_raw] = STATE(469),
    [sym__long_and_raw_datatypes_raw] = STATE(469),
    [sym_datetime_datatypes] = STATE(466),
    [sym__datetime_datatypes_keyword] = STATE(470),
    [sym__datetime_datatypes_date_timestamp] = STATE(470),
    [sym__datetime_datatypes_date_interval_year] = STATE(470),
    [sym__datetime_datatypes_date_interval_day] = STATE(470),
    [sym_large_object_datatypes] = STATE(466),
    [sym_rowid_datatypes] = STATE(466),
    [sym_referenced_datatypes] = STATE(466),
    [sym__referenced_datatypes_type] = STATE(471),
    [sym__referenced_datatypes_rowtype] = STATE(471),
    [sym_logical_datatypes] = STATE(466),
    [sym_subtype_datatypes] = STATE(466),
    [sym__rowid_datatypes_urowid] = STATE(455),
    [sym__ansi_supported_datatypes_character] = STATE(467),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(467),
    [sym__ansi_supported_datatypes_varchar] = STATE(467),
    [sym__ansi_supported_datatypes_national] = STATE(467),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(468),
    [sym__ansi_supported_datatypes_double_precision] = STATE(468),
    [sym_supplied_datatypes_any_types] = STATE(466),
    [sym_supplied_datatypes_xml_types] = STATE(466),
    [sym_supplied_datatypes_spatial_types] = STATE(466),
    [sym_object_datatypes] = STATE(466),
    [sym_identifier] = STATE(315),
    [sym__quoted_identifier] = STATE(36),
    [sym__unquoted_identifier] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(139),
    [sym_kw_varchar] = ACTIONS(141),
    [sym_kw_varchar2] = ACTIONS(143),
    [sym_kw_nvarchar2] = ACTIONS(145),
    [sym_kw_nchar] = ACTIONS(147),
    [sym_kw_int] = ACTIONS(149),
    [sym_kw_smallint] = ACTIONS(151),
    [sym_kw_real] = ACTIONS(151),
    [sym_kw_binary_float] = ACTIONS(151),
    [sym_kw_binary_double] = ACTIONS(151),
    [sym_kw_simple_float] = ACTIONS(151),
    [sym_kw_simple_double] = ACTIONS(151),
    [sym_kw_binary_integer] = ACTIONS(151),
    [sym_kw_pls_integer] = ACTIONS(151),
    [sym_kw_natural] = ACTIONS(149),
    [sym_kw_naturaln] = ACTIONS(151),
    [sym_kw_positive] = ACTIONS(149),
    [sym_kw_positiven] = ACTIONS(151),
    [sym_kw_signtype] = ACTIONS(151),
    [sym_kw_simple_integer] = ACTIONS(151),
    [sym_kw_integer] = ACTIONS(151),
    [sym_kw_number] = ACTIONS(153),
    [sym_kw_float] = ACTIONS(155),
    [sym_kw_long] = ACTIONS(157),
    [sym_kw_raw] = ACTIONS(159),
    [sym_kw_date] = ACTIONS(161),
    [sym_kw_timestamp] = ACTIONS(163),
    [sym_kw_interval] = ACTIONS(165),
    [sym_kw_blob] = ACTIONS(167),
    [sym_kw_clob] = ACTIONS(167),
    [sym_kw_nclob] = ACTIONS(167),
    [sym_kw_bfile] = ACTIONS(167),
    [sym_kw_rowid] = ACTIONS(169),
    [sym_kw_urowid] = ACTIONS(171),
    [sym_kw_boolean] = ACTIONS(173),
    [sym_kw_character] = ACTIONS(175),
    [sym_kw_numeric] = ACTIONS(177),
    [sym_kw_decimal] = ACTIONS(177),
    [sym_kw_dec] = ACTIONS(179),
    [sym_kw_double] = ACTIONS(181),
    [sym_kw_sys] = ACTIONS(183),
    [sym_kw_xmltype] = ACTIONS(185),
    [sym_kw_uritype] = ACTIONS(185),
    [sym_kw_sdo_geometry] = ACTIONS(187),
    [sym_kw_sdo_topo_geometry] = ACTIONS(187),
    [sym_kw_sdo_georaster] = ACTIONS(187),
    [sym_kw_json_element_t] = ACTIONS(189),
    [sym_kw_json_array_t] = ACTIONS(189),
    [sym_kw_json_object_t] = ACTIONS(189),
    [sym_kw_json_scalar_t] = ACTIONS(189),
    [sym_kw_json_key_list] = ACTIONS(189),
  },
  [7] = {
    [sym_datatype] = STATE(583),
    [sym_character_datatypes] = STATE(513),
    [sym__character_datatypes_char] = STATE(508),
    [sym__character_datatypes_varchar2] = STATE(508),
    [sym__character_datatypes_nchar] = STATE(508),
    [sym__character_datatypes_nvarchar2] = STATE(508),
    [sym_number_datatypes] = STATE(513),
    [sym__number_datatypes_keyword] = STATE(507),
    [sym__number_datatypes_number] = STATE(507),
    [sym__number_datatypes_float] = STATE(507),
    [sym_long_and_raw_datatypes] = STATE(513),
    [sym__long_and_raw_datatypes_long_raw] = STATE(506),
    [sym__long_and_raw_datatypes_raw] = STATE(506),
    [sym_datetime_datatypes] = STATE(513),
    [sym__datetime_datatypes_keyword] = STATE(505),
    [sym__datetime_datatypes_date_timestamp] = STATE(505),
    [sym__datetime_datatypes_date_interval_year] = STATE(505),
    [sym__datetime_datatypes_date_interval_day] = STATE(505),
    [sym_large_object_datatypes] = STATE(513),
    [sym_rowid_datatypes] = STATE(513),
    [sym_referenced_datatypes] = STATE(513),
    [sym__referenced_datatypes_type] = STATE(504),
    [sym__referenced_datatypes_rowtype] = STATE(504),
    [sym_logical_datatypes] = STATE(513),
    [sym_subtype_datatypes] = STATE(513),
    [sym__rowid_datatypes_urowid] = STATE(522),
    [sym__ansi_supported_datatypes_character] = STATE(508),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(508),
    [sym__ansi_supported_datatypes_varchar] = STATE(508),
    [sym__ansi_supported_datatypes_national] = STATE(508),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(507),
    [sym__ansi_supported_datatypes_double_precision] = STATE(507),
    [sym_supplied_datatypes_any_types] = STATE(513),
    [sym_supplied_datatypes_xml_types] = STATE(513),
    [sym_supplied_datatypes_spatial_types] = STATE(513),
    [sym_object_datatypes] = STATE(513),
    [sym_identifier] = STATE(347),
    [sym__quoted_identifier] = STATE(361),
    [sym__unquoted_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(77),
    [sym_kw_varchar] = ACTIONS(81),
    [sym_kw_varchar2] = ACTIONS(83),
    [sym_kw_nvarchar2] = ACTIONS(85),
    [sym_kw_nchar] = ACTIONS(87),
    [sym_kw_int] = ACTIONS(89),
    [sym_kw_smallint] = ACTIONS(91),
    [sym_kw_real] = ACTIONS(91),
    [sym_kw_binary_float] = ACTIONS(91),
    [sym_kw_binary_double] = ACTIONS(91),
    [sym_kw_simple_float] = ACTIONS(91),
    [sym_kw_simple_double] = ACTIONS(91),
    [sym_kw_binary_integer] = ACTIONS(91),
    [sym_kw_pls_integer] = ACTIONS(91),
    [sym_kw_natural] = ACTIONS(89),
    [sym_kw_naturaln] = ACTIONS(91),
    [sym_kw_positive] = ACTIONS(89),
    [sym_kw_positiven] = ACTIONS(91),
    [sym_kw_signtype] = ACTIONS(91),
    [sym_kw_simple_integer] = ACTIONS(91),
    [sym_kw_integer] = ACTIONS(91),
    [sym_kw_number] = ACTIONS(93),
    [sym_kw_float] = ACTIONS(95),
    [sym_kw_long] = ACTIONS(97),
    [sym_kw_raw] = ACTIONS(99),
    [sym_kw_date] = ACTIONS(101),
    [sym_kw_timestamp] = ACTIONS(103),
    [sym_kw_interval] = ACTIONS(105),
    [sym_kw_blob] = ACTIONS(107),
    [sym_kw_clob] = ACTIONS(107),
    [sym_kw_nclob] = ACTIONS(107),
    [sym_kw_bfile] = ACTIONS(107),
    [sym_kw_rowid] = ACTIONS(109),
    [sym_kw_urowid] = ACTIONS(111),
    [sym_kw_boolean] = ACTIONS(113),
    [sym_kw_character] = ACTIONS(115),
    [sym_kw_numeric] = ACTIONS(117),
    [sym_kw_decimal] = ACTIONS(117),
    [sym_kw_dec] = ACTIONS(119),
    [sym_kw_double] = ACTIONS(121),
    [sym_kw_sys] = ACTIONS(123),
    [sym_kw_xmltype] = ACTIONS(125),
    [sym_kw_uritype] = ACTIONS(125),
    [sym_kw_sdo_geometry] = ACTIONS(127),
    [sym_kw_sdo_topo_geometry] = ACTIONS(127),
    [sym_kw_sdo_georaster] = ACTIONS(127),
    [sym_kw_json_element_t] = ACTIONS(129),
    [sym_kw_json_array_t] = ACTIONS(129),
    [sym_kw_json_object_t] = ACTIONS(129),
    [sym_kw_json_scalar_t] = ACTIONS(129),
    [sym_kw_json_key_list] = ACTIONS(129),
  },
  [8] = {
    [sym_datatype] = STATE(578),
    [sym_character_datatypes] = STATE(513),
    [sym__character_datatypes_char] = STATE(508),
    [sym__character_datatypes_varchar2] = STATE(508),
    [sym__character_datatypes_nchar] = STATE(508),
    [sym__character_datatypes_nvarchar2] = STATE(508),
    [sym_number_datatypes] = STATE(513),
    [sym__number_datatypes_keyword] = STATE(507),
    [sym__number_datatypes_number] = STATE(507),
    [sym__number_datatypes_float] = STATE(507),
    [sym_long_and_raw_datatypes] = STATE(513),
    [sym__long_and_raw_datatypes_long_raw] = STATE(506),
    [sym__long_and_raw_datatypes_raw] = STATE(506),
    [sym_datetime_datatypes] = STATE(513),
    [sym__datetime_datatypes_keyword] = STATE(505),
    [sym__datetime_datatypes_date_timestamp] = STATE(505),
    [sym__datetime_datatypes_date_interval_year] = STATE(505),
    [sym__datetime_datatypes_date_interval_day] = STATE(505),
    [sym_large_object_datatypes] = STATE(513),
    [sym_rowid_datatypes] = STATE(513),
    [sym_referenced_datatypes] = STATE(513),
    [sym__referenced_datatypes_type] = STATE(504),
    [sym__referenced_datatypes_rowtype] = STATE(504),
    [sym_logical_datatypes] = STATE(513),
    [sym_subtype_datatypes] = STATE(513),
    [sym__rowid_datatypes_urowid] = STATE(522),
    [sym__ansi_supported_datatypes_character] = STATE(508),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(508),
    [sym__ansi_supported_datatypes_varchar] = STATE(508),
    [sym__ansi_supported_datatypes_national] = STATE(508),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(507),
    [sym__ansi_supported_datatypes_double_precision] = STATE(507),
    [sym_supplied_datatypes_any_types] = STATE(513),
    [sym_supplied_datatypes_xml_types] = STATE(513),
    [sym_supplied_datatypes_spatial_types] = STATE(513),
    [sym_object_datatypes] = STATE(513),
    [sym_identifier] = STATE(347),
    [sym__quoted_identifier] = STATE(361),
    [sym__unquoted_identifier] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(77),
    [sym_kw_varchar] = ACTIONS(81),
    [sym_kw_varchar2] = ACTIONS(83),
    [sym_kw_nvarchar2] = ACTIONS(85),
    [sym_kw_nchar] = ACTIONS(87),
    [sym_kw_int] = ACTIONS(89),
    [sym_kw_smallint] = ACTIONS(91),
    [sym_kw_real] = ACTIONS(91),
    [sym_kw_binary_float] = ACTIONS(91),
    [sym_kw_binary_double] = ACTIONS(91),
    [sym_kw_simple_float] = ACTIONS(91),
    [sym_kw_simple_double] = ACTIONS(91),
    [sym_kw_binary_integer] = ACTIONS(91),
    [sym_kw_pls_integer] = ACTIONS(91),
    [sym_kw_natural] = ACTIONS(89),
    [sym_kw_naturaln] = ACTIONS(91),
    [sym_kw_positive] = ACTIONS(89),
    [sym_kw_positiven] = ACTIONS(91),
    [sym_kw_signtype] = ACTIONS(91),
    [sym_kw_simple_integer] = ACTIONS(91),
    [sym_kw_integer] = ACTIONS(91),
    [sym_kw_number] = ACTIONS(93),
    [sym_kw_float] = ACTIONS(95),
    [sym_kw_long] = ACTIONS(97),
    [sym_kw_raw] = ACTIONS(99),
    [sym_kw_date] = ACTIONS(101),
    [sym_kw_timestamp] = ACTIONS(103),
    [sym_kw_interval] = ACTIONS(105),
    [sym_kw_blob] = ACTIONS(107),
    [sym_kw_clob] = ACTIONS(107),
    [sym_kw_nclob] = ACTIONS(107),
    [sym_kw_bfile] = ACTIONS(107),
    [sym_kw_rowid] = ACTIONS(109),
    [sym_kw_urowid] = ACTIONS(111),
    [sym_kw_boolean] = ACTIONS(113),
    [sym_kw_character] = ACTIONS(115),
    [sym_kw_numeric] = ACTIONS(117),
    [sym_kw_decimal] = ACTIONS(117),
    [sym_kw_dec] = ACTIONS(119),
    [sym_kw_double] = ACTIONS(121),
    [sym_kw_sys] = ACTIONS(123),
    [sym_kw_xmltype] = ACTIONS(125),
    [sym_kw_uritype] = ACTIONS(125),
    [sym_kw_sdo_geometry] = ACTIONS(127),
    [sym_kw_sdo_topo_geometry] = ACTIONS(127),
    [sym_kw_sdo_georaster] = ACTIONS(127),
    [sym_kw_json_element_t] = ACTIONS(129),
    [sym_kw_json_array_t] = ACTIONS(129),
    [sym_kw_json_object_t] = ACTIONS(129),
    [sym_kw_json_scalar_t] = ACTIONS(129),
    [sym_kw_json_key_list] = ACTIONS(129),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(191), 8,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_in,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(193), 47,
      anon_sym_DQUOTE,
      sym_kw_out,
      sym_kw_varchar2,
      sym_kw_nvarchar2,
      sym_kw_nchar,
      sym_kw_smallint,
      sym_kw_real,
      sym_kw_binary_float,
      sym_kw_binary_double,
      sym_kw_simple_float,
      sym_kw_simple_double,
      sym_kw_binary_integer,
      sym_kw_pls_integer,
      sym_kw_naturaln,
      sym_kw_positiven,
      sym_kw_signtype,
      sym_kw_simple_integer,
      sym_kw_integer,
      sym_kw_number,
      sym_kw_float,
      sym_kw_long,
      sym_kw_raw,
      sym_kw_date,
      sym_kw_timestamp,
      sym_kw_interval,
      sym_kw_blob,
      sym_kw_clob,
      sym_kw_nclob,
      sym_kw_bfile,
      sym_kw_rowid,
      sym_kw_urowid,
      sym_kw_boolean,
      sym_kw_character,
      sym_kw_numeric,
      sym_kw_decimal,
      sym_kw_double,
      sym_kw_sys,
      sym_kw_xmltype,
      sym_kw_uritype,
      sym_kw_sdo_geometry,
      sym_kw_sdo_topo_geometry,
      sym_kw_sdo_georaster,
      sym_kw_json_element_t,
      sym_kw_json_array_t,
      sym_kw_json_object_t,
      sym_kw_json_scalar_t,
      sym_kw_json_key_list,
  [64] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(195), 8,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_in,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(197), 47,
      anon_sym_DQUOTE,
      sym_kw_out,
      sym_kw_varchar2,
      sym_kw_nvarchar2,
      sym_kw_nchar,
      sym_kw_smallint,
      sym_kw_real,
      sym_kw_binary_float,
      sym_kw_binary_double,
      sym_kw_simple_float,
      sym_kw_simple_double,
      sym_kw_binary_integer,
      sym_kw_pls_integer,
      sym_kw_naturaln,
      sym_kw_positiven,
      sym_kw_signtype,
      sym_kw_simple_integer,
      sym_kw_integer,
      sym_kw_number,
      sym_kw_float,
      sym_kw_long,
      sym_kw_raw,
      sym_kw_date,
      sym_kw_timestamp,
      sym_kw_interval,
      sym_kw_blob,
      sym_kw_clob,
      sym_kw_nclob,
      sym_kw_bfile,
      sym_kw_rowid,
      sym_kw_urowid,
      sym_kw_boolean,
      sym_kw_character,
      sym_kw_numeric,
      sym_kw_decimal,
      sym_kw_double,
      sym_kw_sys,
      sym_kw_xmltype,
      sym_kw_uritype,
      sym_kw_sdo_geometry,
      sym_kw_sdo_topo_geometry,
      sym_kw_sdo_georaster,
      sym_kw_json_element_t,
      sym_kw_json_array_t,
      sym_kw_json_object_t,
      sym_kw_json_scalar_t,
      sym_kw_json_key_list,
  [128] = 15,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym__unquoted_identifier,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_kw_not,
    ACTIONS(221), 1,
      sym_kw_updating,
    STATE(12), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(28), 1,
      sym_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(218), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(204), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(212), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(61), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(199), 13,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [201] = 15,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      sym__unquoted_identifier,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      sym_kw_not,
    ACTIONS(246), 1,
      sym_kw_updating,
    STATE(12), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(28), 1,
      sym_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(243), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(229), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(237), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(61), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(224), 13,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [274] = 15,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym__unquoted_identifier,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym_kw_not,
    ACTIONS(271), 1,
      sym_kw_updating,
    STATE(12), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(28), 1,
      sym_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(268), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(254), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(262), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(61), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(249), 13,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [347] = 15,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      sym__unquoted_identifier,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(284), 1,
      sym_kw_not,
    ACTIONS(289), 1,
      sym_kw_updating,
    STATE(18), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(31), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(204), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(199), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [419] = 15,
    ACTIONS(276), 1,
      sym__unquoted_identifier,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(284), 1,
      sym_kw_not,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      sym_kw_updating,
    STATE(18), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(31), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(297), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(204), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(294), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(199), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [491] = 15,
    ACTIONS(265), 1,
      sym_kw_not,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym__unquoted_identifier,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      sym_kw_updating,
    STATE(19), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(25), 1,
      sym_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(311), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(254), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(309), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(61), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(249), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [563] = 15,
    ACTIONS(215), 1,
      sym_kw_not,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym__unquoted_identifier,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      sym_kw_updating,
    STATE(19), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(25), 1,
      sym_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(311), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(204), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(309), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(61), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(199), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [635] = 15,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      sym__unquoted_identifier,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      sym_kw_not,
    ACTIONS(333), 1,
      sym_kw_updating,
    STATE(18), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(31), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(330), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(229), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(324), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(224), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [707] = 15,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      sym__unquoted_identifier,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      sym_kw_not,
    ACTIONS(246), 1,
      sym_kw_updating,
    STATE(19), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(25), 1,
      sym_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(243), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(229), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(237), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(61), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(224), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [779] = 15,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym__unquoted_identifier,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      sym_kw_not,
    ACTIONS(354), 1,
      sym_kw_updating,
    STATE(18), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(31), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(351), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(254), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(345), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(249), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [851] = 15,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(339), 1,
      sym__unquoted_identifier,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      sym_kw_not,
    STATE(18), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(31), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(254), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(249), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [923] = 15,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      sym__unquoted_identifier,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      sym_kw_not,
    ACTIONS(333), 1,
      sym_kw_updating,
    STATE(22), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(30), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(330), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(229), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(324), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(224), 11,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [994] = 15,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym_kw_not,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(30), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(204), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(199), 11,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1065] = 15,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(348), 1,
      sym_kw_not,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(30), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(254), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
    ACTIONS(249), 11,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1136] = 14,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      sym__unquoted_identifier,
    ACTIONS(373), 1,
      sym_kw_not,
    ACTIONS(376), 1,
      sym_kw_is,
    ACTIONS(379), 1,
      sym_kw_between,
    ACTIONS(382), 1,
      sym_kw_in,
    ACTIONS(385), 1,
      sym_kw_like,
    STATE(143), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(368), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(361), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(48), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(364), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1203] = 13,
    ACTIONS(396), 1,
      sym__unquoted_identifier,
    ACTIONS(398), 1,
      sym_kw_not,
    ACTIONS(401), 1,
      sym_kw_is,
    ACTIONS(404), 1,
      sym_kw_between,
    ACTIONS(407), 1,
      sym_kw_in,
    ACTIONS(410), 1,
      sym_kw_like,
    STATE(143), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(393), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(388), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(48), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(391), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1268] = 13,
    ACTIONS(421), 1,
      sym__unquoted_identifier,
    ACTIONS(423), 1,
      sym_kw_not,
    ACTIONS(426), 1,
      sym_kw_is,
    ACTIONS(429), 1,
      sym_kw_between,
    ACTIONS(432), 1,
      sym_kw_in,
    ACTIONS(435), 1,
      sym_kw_like,
    STATE(143), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(418), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(413), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(48), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(416), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1333] = 14,
    ACTIONS(371), 1,
      sym__unquoted_identifier,
    ACTIONS(373), 1,
      sym_kw_not,
    ACTIONS(376), 1,
      sym_kw_is,
    ACTIONS(379), 1,
      sym_kw_between,
    ACTIONS(382), 1,
      sym_kw_in,
    ACTIONS(385), 1,
      sym_kw_like,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(368), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(361), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(48), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(364), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1400] = 13,
    ACTIONS(449), 1,
      sym__unquoted_identifier,
    ACTIONS(451), 1,
      sym_kw_not,
    ACTIONS(454), 1,
      sym_kw_is,
    ACTIONS(457), 1,
      sym_kw_between,
    ACTIONS(460), 1,
      sym_kw_in,
    ACTIONS(463), 1,
      sym_kw_like,
    STATE(143), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(441), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(48), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(444), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1465] = 14,
    ACTIONS(371), 1,
      sym__unquoted_identifier,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(468), 1,
      sym_kw_not,
    ACTIONS(471), 1,
      sym_kw_is,
    ACTIONS(474), 1,
      sym_kw_between,
    ACTIONS(477), 1,
      sym_kw_in,
    ACTIONS(480), 1,
      sym_kw_like,
    STATE(136), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(368), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(361), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(79), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(364), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1531] = 14,
    ACTIONS(371), 1,
      sym__unquoted_identifier,
    ACTIONS(468), 1,
      sym_kw_not,
    ACTIONS(471), 1,
      sym_kw_is,
    ACTIONS(474), 1,
      sym_kw_between,
    ACTIONS(477), 1,
      sym_kw_in,
    ACTIONS(480), 1,
      sym_kw_like,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(368), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(361), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(79), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(364), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1597] = 13,
    ACTIONS(449), 1,
      sym__unquoted_identifier,
    ACTIONS(486), 1,
      sym_kw_not,
    ACTIONS(489), 1,
      sym_kw_is,
    ACTIONS(492), 1,
      sym_kw_between,
    ACTIONS(495), 1,
      sym_kw_in,
    ACTIONS(498), 1,
      sym_kw_like,
    STATE(136), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(441), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(79), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(444), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1661] = 13,
    ACTIONS(421), 1,
      sym__unquoted_identifier,
    ACTIONS(501), 1,
      sym_kw_not,
    ACTIONS(504), 1,
      sym_kw_is,
    ACTIONS(507), 1,
      sym_kw_between,
    ACTIONS(510), 1,
      sym_kw_in,
    ACTIONS(513), 1,
      sym_kw_like,
    STATE(136), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(418), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(413), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(79), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(416), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1725] = 13,
    ACTIONS(396), 1,
      sym__unquoted_identifier,
    ACTIONS(516), 1,
      sym_kw_not,
    ACTIONS(519), 1,
      sym_kw_is,
    ACTIONS(522), 1,
      sym_kw_between,
    ACTIONS(525), 1,
      sym_kw_in,
    ACTIONS(528), 1,
      sym_kw_like,
    STATE(136), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(393), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(388), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(79), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(391), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1789] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(191), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 30,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_metadata,
      sym_kw_none,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
      sym_kw_return,
  [1830] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(195), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 30,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_SQUOTE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_metadata,
      sym_kw_none,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
      sym_kw_return,
  [1871] = 7,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      anon_sym_DOT,
    ACTIONS(538), 1,
      anon_sym_PERCENT,
    STATE(55), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(540), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(531), 21,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1917] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(191), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(193), 24,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1954] = 13,
    ACTIONS(449), 1,
      sym__unquoted_identifier,
    ACTIONS(542), 1,
      sym_kw_not,
    ACTIONS(545), 1,
      sym_kw_is,
    ACTIONS(548), 1,
      sym_kw_between,
    ACTIONS(551), 1,
      sym_kw_in,
    ACTIONS(554), 1,
      sym_kw_like,
    STATE(128), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(444), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(441), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(188), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [2011] = 13,
    ACTIONS(396), 1,
      sym__unquoted_identifier,
    ACTIONS(557), 1,
      sym_kw_not,
    ACTIONS(560), 1,
      sym_kw_is,
    ACTIONS(563), 1,
      sym_kw_between,
    ACTIONS(566), 1,
      sym_kw_in,
    ACTIONS(569), 1,
      sym_kw_like,
    STATE(128), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(393), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(388), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(188), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [2068] = 13,
    ACTIONS(421), 1,
      sym__unquoted_identifier,
    ACTIONS(572), 1,
      sym_kw_not,
    ACTIONS(575), 1,
      sym_kw_is,
    ACTIONS(578), 1,
      sym_kw_between,
    ACTIONS(581), 1,
      sym_kw_in,
    ACTIONS(584), 1,
      sym_kw_like,
    STATE(128), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(418), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(416), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(413), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(188), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [2125] = 7,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(590), 1,
      anon_sym_DOT,
    ACTIONS(592), 1,
      anon_sym_PERCENT,
    STATE(75), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(540), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(531), 20,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2170] = 13,
    ACTIONS(600), 1,
      sym__unquoted_identifier,
    ACTIONS(602), 1,
      sym_kw_not,
    ACTIONS(604), 1,
      sym_kw_is,
    ACTIONS(606), 1,
      sym_kw_between,
    ACTIONS(608), 1,
      sym_kw_in,
    ACTIONS(610), 1,
      sym_kw_like,
    STATE(128), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(596), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(188), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [2227] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(195), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(197), 24,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2264] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(191), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(193), 23,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2300] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(195), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(197), 23,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2336] = 5,
    ACTIONS(614), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(617), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(612), 21,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2376] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(621), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(619), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2411] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(625), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(623), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2446] = 5,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(617), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(612), 20,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2485] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(632), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(630), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2520] = 4,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(639), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(634), 21,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2557] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(643), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(641), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2592] = 12,
    ACTIONS(645), 1,
      sym_kw_not,
    ACTIONS(648), 1,
      sym_kw_is,
    ACTIONS(651), 1,
      sym_kw_between,
    ACTIONS(654), 1,
      sym_kw_in,
    ACTIONS(657), 1,
      sym_kw_like,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(416), 2,
      anon_sym_RPAREN,
      sym_kw_and,
    ACTIONS(418), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(413), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [2645] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(662), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(660), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2680] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(666), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(664), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2715] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(670), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(668), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2750] = 5,
    ACTIONS(680), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(677), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(672), 11,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
    ACTIONS(675), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2789] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(639), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(634), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2824] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(684), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(682), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2859] = 4,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(691), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(686), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2896] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(695), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(693), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2931] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(699), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(697), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2966] = 5,
    ACTIONS(709), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(706), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(704), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
    ACTIONS(701), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [3005] = 12,
    ACTIONS(711), 1,
      sym_kw_not,
    ACTIONS(714), 1,
      sym_kw_is,
    ACTIONS(717), 1,
      sym_kw_between,
    ACTIONS(720), 1,
      sym_kw_in,
    ACTIONS(723), 1,
      sym_kw_like,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(391), 2,
      anon_sym_RPAREN,
      sym_kw_and,
    ACTIONS(393), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(388), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [3058] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(728), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(726), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3093] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(732), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(730), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3128] = 6,
    ACTIONS(670), 1,
      sym__unquoted_identifier,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(740), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(668), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
    ACTIONS(734), 11,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [3169] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(745), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(743), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3204] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(229), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(224), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3239] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(749), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(747), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3274] = 12,
    ACTIONS(751), 1,
      sym_kw_not,
    ACTIONS(754), 1,
      sym_kw_is,
    ACTIONS(757), 1,
      sym_kw_between,
    ACTIONS(760), 1,
      sym_kw_in,
    ACTIONS(763), 1,
      sym_kw_like,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(444), 2,
      anon_sym_RPAREN,
      sym_kw_and,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(441), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [3327] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(768), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(766), 22,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3362] = 12,
    ACTIONS(770), 1,
      sym_kw_not,
    ACTIONS(772), 1,
      sym_kw_and,
    ACTIONS(774), 1,
      sym_kw_is,
    ACTIONS(776), 1,
      sym_kw_between,
    ACTIONS(778), 1,
      sym_kw_in,
    ACTIONS(780), 1,
      sym_kw_like,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [3414] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(662), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(660), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3448] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(768), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(766), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3482] = 4,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(691), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(686), 20,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3518] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(732), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(730), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3552] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(621), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(619), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3586] = 6,
    ACTIONS(670), 1,
      sym__unquoted_identifier,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(740), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(668), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
    ACTIONS(734), 11,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [3626] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(643), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(641), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3660] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(670), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(668), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3694] = 12,
    ACTIONS(770), 1,
      sym_kw_not,
    ACTIONS(774), 1,
      sym_kw_is,
    ACTIONS(776), 1,
      sym_kw_between,
    ACTIONS(778), 1,
      sym_kw_in,
    ACTIONS(780), 1,
      sym_kw_like,
    ACTIONS(788), 1,
      sym_kw_and,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [3746] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(684), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(682), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3780] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(229), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(224), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3814] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(632), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(630), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3848] = 12,
    ACTIONS(770), 1,
      sym_kw_not,
    ACTIONS(774), 1,
      sym_kw_is,
    ACTIONS(776), 1,
      sym_kw_between,
    ACTIONS(778), 1,
      sym_kw_in,
    ACTIONS(780), 1,
      sym_kw_like,
    ACTIONS(790), 1,
      sym_kw_and,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [3900] = 12,
    ACTIONS(770), 1,
      sym_kw_not,
    ACTIONS(774), 1,
      sym_kw_is,
    ACTIONS(776), 1,
      sym_kw_between,
    ACTIONS(778), 1,
      sym_kw_in,
    ACTIONS(780), 1,
      sym_kw_like,
    ACTIONS(792), 1,
      sym_kw_and,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [3952] = 12,
    ACTIONS(770), 1,
      sym_kw_not,
    ACTIONS(774), 1,
      sym_kw_is,
    ACTIONS(776), 1,
      sym_kw_between,
    ACTIONS(778), 1,
      sym_kw_in,
    ACTIONS(780), 1,
      sym_kw_like,
    ACTIONS(794), 1,
      sym_kw_and,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [4004] = 12,
    ACTIONS(770), 1,
      sym_kw_not,
    ACTIONS(774), 1,
      sym_kw_is,
    ACTIONS(776), 1,
      sym_kw_between,
    ACTIONS(778), 1,
      sym_kw_in,
    ACTIONS(780), 1,
      sym_kw_like,
    ACTIONS(796), 1,
      sym_kw_and,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [4056] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(749), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(747), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [4090] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(625), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(623), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [4124] = 12,
    ACTIONS(770), 1,
      sym_kw_not,
    ACTIONS(774), 1,
      sym_kw_is,
    ACTIONS(776), 1,
      sym_kw_between,
    ACTIONS(778), 1,
      sym_kw_in,
    ACTIONS(780), 1,
      sym_kw_like,
    ACTIONS(798), 1,
      sym_kw_and,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [4176] = 12,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(545), 1,
      sym_kw_is,
    ACTIONS(554), 1,
      sym_kw_like,
    ACTIONS(800), 1,
      sym_kw_not,
    ACTIONS(803), 1,
      sym_kw_between,
    ACTIONS(806), 1,
      sym_kw_in,
    STATE(137), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(446), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(441), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(188), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [4228] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(639), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(634), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [4262] = 4,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(639), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(634), 20,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [4298] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(745), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(743), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [4332] = 12,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    ACTIONS(575), 1,
      sym_kw_is,
    ACTIONS(584), 1,
      sym_kw_like,
    ACTIONS(812), 1,
      sym_kw_not,
    ACTIONS(815), 1,
      sym_kw_between,
    ACTIONS(818), 1,
      sym_kw_in,
    STATE(137), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(418), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(413), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(188), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [4384] = 5,
    ACTIONS(709), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(706), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(704), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
    ACTIONS(701), 12,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [4422] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(666), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(664), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [4456] = 12,
    ACTIONS(770), 1,
      sym_kw_not,
    ACTIONS(774), 1,
      sym_kw_is,
    ACTIONS(776), 1,
      sym_kw_between,
    ACTIONS(778), 1,
      sym_kw_in,
    ACTIONS(780), 1,
      sym_kw_like,
    ACTIONS(821), 1,
      sym_kw_and,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [4508] = 12,
    ACTIONS(770), 1,
      sym_kw_not,
    ACTIONS(774), 1,
      sym_kw_is,
    ACTIONS(776), 1,
      sym_kw_between,
    ACTIONS(778), 1,
      sym_kw_in,
    ACTIONS(780), 1,
      sym_kw_like,
    ACTIONS(823), 1,
      sym_kw_and,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [4560] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(728), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(726), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [4594] = 5,
    ACTIONS(680), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(677), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(675), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
    ACTIONS(672), 11,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [4632] = 12,
    ACTIONS(770), 1,
      sym_kw_not,
    ACTIONS(774), 1,
      sym_kw_is,
    ACTIONS(776), 1,
      sym_kw_between,
    ACTIONS(778), 1,
      sym_kw_in,
    ACTIONS(780), 1,
      sym_kw_like,
    ACTIONS(825), 1,
      sym_kw_and,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [4684] = 12,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(560), 1,
      sym_kw_is,
    ACTIONS(569), 1,
      sym_kw_like,
    ACTIONS(827), 1,
      sym_kw_not,
    ACTIONS(830), 1,
      sym_kw_between,
    ACTIONS(833), 1,
      sym_kw_in,
    STATE(137), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(393), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(388), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(188), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [4736] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(699), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(697), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [4770] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(695), 4,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym_kw_in,
    ACTIONS(693), 21,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [4804] = 13,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(836), 1,
      sym_kw_not,
    STATE(21), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(31), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [4857] = 13,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym__unquoted_identifier,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      sym_kw_updating,
    ACTIONS(838), 1,
      sym_kw_not,
    STATE(13), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(28), 1,
      sym_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(311), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(309), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(61), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [4910] = 13,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(836), 1,
      sym_kw_not,
    STATE(23), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(30), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [4963] = 13,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym__unquoted_identifier,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      sym_kw_updating,
    ACTIONS(838), 1,
      sym_kw_not,
    STATE(11), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(28), 1,
      sym_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(311), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(309), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(61), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5016] = 13,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(836), 1,
      sym_kw_not,
    STATE(20), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(31), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5069] = 13,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(836), 1,
      sym_kw_not,
    STATE(15), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(31), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5122] = 11,
    ACTIONS(840), 1,
      sym_kw_not,
    ACTIONS(842), 1,
      sym_kw_is,
    ACTIONS(844), 1,
      sym_kw_between,
    ACTIONS(846), 1,
      sym_kw_in,
    ACTIONS(848), 1,
      sym_kw_like,
    STATE(143), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(48), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [5171] = 13,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym__unquoted_identifier,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      sym_kw_updating,
    ACTIONS(838), 1,
      sym_kw_not,
    STATE(16), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(25), 1,
      sym_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(311), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(309), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(61), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5224] = 11,
    ACTIONS(604), 1,
      sym_kw_is,
    ACTIONS(610), 1,
      sym_kw_like,
    ACTIONS(850), 1,
      sym_kw_not,
    ACTIONS(852), 1,
      sym_kw_between,
    ACTIONS(854), 1,
      sym_kw_in,
    STATE(137), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(188), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [5273] = 13,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym__unquoted_identifier,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      sym_kw_updating,
    ACTIONS(838), 1,
      sym_kw_not,
    STATE(17), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(25), 1,
      sym_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(311), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(309), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(61), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5326] = 11,
    ACTIONS(770), 1,
      sym_kw_not,
    ACTIONS(774), 1,
      sym_kw_is,
    ACTIONS(776), 1,
      sym_kw_between,
    ACTIONS(778), 1,
      sym_kw_in,
    ACTIONS(780), 1,
      sym_kw_like,
    STATE(149), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(209), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [5375] = 13,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(836), 1,
      sym_kw_not,
    STATE(24), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(30), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5428] = 11,
    ACTIONS(856), 1,
      sym_kw_not,
    ACTIONS(858), 1,
      sym_kw_is,
    ACTIONS(860), 1,
      sym_kw_between,
    ACTIONS(862), 1,
      sym_kw_in,
    ACTIONS(864), 1,
      sym_kw_like,
    STATE(136), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(79), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [5477] = 11,
    ACTIONS(602), 1,
      sym_kw_not,
    ACTIONS(604), 1,
      sym_kw_is,
    ACTIONS(606), 1,
      sym_kw_between,
    ACTIONS(608), 1,
      sym_kw_in,
    ACTIONS(610), 1,
      sym_kw_like,
    STATE(128), 1,
      sym_relational_operator,
    STATE(268), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(594), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(188), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [5526] = 13,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(836), 1,
      sym_kw_not,
    STATE(14), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(31), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5579] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(866), 1,
      anon_sym_LPAREN,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(119), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(223), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5629] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(880), 1,
      sym_kw_not,
    ACTIONS(884), 1,
      sym_kw_updating,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(98), 1,
      sym_expression,
    STATE(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(882), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(878), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(195), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5679] = 12,
    ACTIONS(884), 1,
      sym_kw_updating,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym__unquoted_identifier,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
    ACTIONS(892), 1,
      sym_kw_not,
    STATE(40), 1,
      sym_expression,
    STATE(162), 1,
      sym_identifier,
    STATE(163), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(882), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(878), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(195), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5729] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(105), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(215), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5779] = 12,
    ACTIONS(884), 1,
      sym_kw_updating,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym__unquoted_identifier,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
    ACTIONS(892), 1,
      sym_kw_not,
    STATE(39), 1,
      sym_expression,
    STATE(162), 1,
      sym_identifier,
    STATE(163), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(882), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(878), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(195), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5829] = 12,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym__unquoted_identifier,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      sym_kw_updating,
    ACTIONS(838), 1,
      sym_kw_not,
    STATE(27), 1,
      sym_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(311), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(309), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(61), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5879] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(101), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(215), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5929] = 12,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym__unquoted_identifier,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      sym_kw_updating,
    ACTIONS(838), 1,
      sym_kw_not,
    STATE(26), 1,
      sym_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(311), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(309), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(61), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [5979] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(87), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(215), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6029] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(866), 1,
      anon_sym_LPAREN,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(119), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(214), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6079] = 13,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(866), 1,
      anon_sym_LPAREN,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(880), 1,
      sym_kw_not,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(119), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(225), 2,
      sym__expression_elements,
      sym__expression_boolean,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(206), 8,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6131] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(880), 1,
      sym_kw_not,
    ACTIONS(884), 1,
      sym_kw_updating,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(106), 1,
      sym_expression,
    STATE(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(882), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(878), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(195), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6181] = 12,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(836), 1,
      sym_kw_not,
    STATE(32), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6231] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(880), 1,
      sym_kw_not,
    ACTIONS(884), 1,
      sym_kw_updating,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(94), 1,
      sym_expression,
    STATE(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(882), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(878), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(195), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6281] = 12,
    ACTIONS(305), 1,
      sym__unquoted_identifier,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      sym_kw_updating,
    ACTIONS(838), 1,
      sym_kw_not,
    ACTIONS(866), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    STATE(115), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(311), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(309), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(68), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6331] = 13,
    ACTIONS(866), 1,
      anon_sym_LPAREN,
    ACTIONS(880), 1,
      sym_kw_not,
    ACTIONS(884), 1,
      sym_kw_updating,
    ACTIONS(888), 1,
      sym__unquoted_identifier,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_expression,
    STATE(162), 1,
      sym_identifier,
    STATE(163), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(882), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(225), 2,
      sym__expression_elements,
      sym__expression_boolean,
    ACTIONS(878), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(197), 8,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6383] = 12,
    ACTIONS(866), 1,
      anon_sym_LPAREN,
    ACTIONS(884), 1,
      sym_kw_updating,
    ACTIONS(888), 1,
      sym__unquoted_identifier,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
    ACTIONS(892), 1,
      sym_kw_not,
    STATE(122), 1,
      sym_expression,
    STATE(162), 1,
      sym_identifier,
    STATE(163), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(882), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(878), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(198), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6433] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(866), 1,
      anon_sym_LPAREN,
    ACTIONS(880), 1,
      sym_kw_not,
    ACTIONS(884), 1,
      sym_kw_updating,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(117), 1,
      sym_expression,
    STATE(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(882), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(878), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(229), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6483] = 13,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(866), 1,
      anon_sym_LPAREN,
    ACTIONS(880), 1,
      sym_kw_not,
    ACTIONS(884), 1,
      sym_kw_updating,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(117), 1,
      sym_expression,
    STATE(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(882), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(225), 2,
      sym__expression_elements,
      sym__expression_boolean,
    ACTIONS(878), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(197), 8,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6535] = 12,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym__unquoted_identifier,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      sym_kw_updating,
    ACTIONS(838), 1,
      sym_kw_not,
    STATE(29), 1,
      sym_expression,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(311), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(309), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(61), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6585] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(83), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(215), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6635] = 12,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(836), 1,
      sym_kw_not,
    ACTIONS(866), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    STATE(121), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(80), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6685] = 13,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(866), 1,
      anon_sym_LPAREN,
    ACTIONS(880), 1,
      sym_kw_not,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    STATE(121), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(225), 2,
      sym__expression_elements,
      sym__expression_boolean,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(99), 8,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6737] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(74), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(215), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6787] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(102), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(215), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6837] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(896), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(72), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(205), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6887] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(896), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(54), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(205), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6937] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(88), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(215), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [6987] = 12,
    ACTIONS(884), 1,
      sym_kw_updating,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym__unquoted_identifier,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
    ACTIONS(892), 1,
      sym_kw_not,
    STATE(41), 1,
      sym_expression,
    STATE(162), 1,
      sym_identifier,
    STATE(163), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(882), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(878), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(195), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [7037] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(89), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(215), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [7087] = 12,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(836), 1,
      sym_kw_not,
    STATE(33), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [7137] = 12,
    ACTIONS(884), 1,
      sym_kw_updating,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    ACTIONS(888), 1,
      sym__unquoted_identifier,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
    ACTIONS(892), 1,
      sym_kw_not,
    STATE(43), 1,
      sym_expression,
    STATE(162), 1,
      sym_identifier,
    STATE(163), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(882), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(878), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(195), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [7187] = 13,
    ACTIONS(305), 1,
      sym__unquoted_identifier,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      sym_kw_updating,
    ACTIONS(866), 1,
      anon_sym_LPAREN,
    ACTIONS(880), 1,
      sym_kw_not,
    STATE(37), 1,
      sym_identifier,
    STATE(44), 1,
      sym__quoted_identifier,
    STATE(115), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(311), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(225), 2,
      sym__expression_elements,
      sym__expression_boolean,
    ACTIONS(309), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(64), 8,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [7239] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(896), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(65), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(205), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [7289] = 12,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym_kw_updating,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(836), 1,
      sym_kw_not,
    STATE(34), 1,
      sym_expression,
    STATE(42), 1,
      sym_identifier,
    STATE(46), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(282), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(77), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [7339] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(93), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(215), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [7389] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(866), 1,
      anon_sym_LPAREN,
    ACTIONS(880), 1,
      sym_kw_not,
    ACTIONS(884), 1,
      sym_kw_updating,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(117), 1,
      sym_expression,
    STATE(176), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(882), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(878), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(198), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [7439] = 12,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(870), 1,
      sym_kw_not,
    ACTIONS(874), 1,
      sym_kw_updating,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(90), 1,
      sym_expression,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    ACTIONS(868), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(215), 10,
      sym__expression_elements,
      sym__expression_boolean,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_literal_boolean,
  [7489] = 7,
    ACTIONS(898), 1,
      anon_sym_LPAREN,
    ACTIONS(900), 1,
      anon_sym_DOT,
    ACTIONS(902), 1,
      anon_sym_PERCENT,
    STATE(187), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(540), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(531), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7528] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(195), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(197), 18,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7558] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(191), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(193), 18,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7588] = 14,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    ACTIONS(906), 1,
      sym__unquoted_identifier,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(910), 1,
      sym__single_quote_string,
    ACTIONS(912), 1,
      sym__number,
    STATE(248), 1,
      sym_identifier,
    STATE(277), 1,
      sym__quoted_identifier,
    STATE(288), 1,
      sym_parameter_value,
    STATE(712), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(175), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(290), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(914), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(286), 4,
      sym__literal,
      sym_literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [7639] = 14,
    ACTIONS(906), 1,
      sym__unquoted_identifier,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(910), 1,
      sym__single_quote_string,
    ACTIONS(912), 1,
      sym__number,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym_identifier,
    STATE(277), 1,
      sym__quoted_identifier,
    STATE(288), 1,
      sym_parameter_value,
    STATE(712), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(175), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(290), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(914), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(286), 4,
      sym__literal,
      sym_literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [7690] = 5,
    ACTIONS(898), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(617), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(612), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7723] = 14,
    ACTIONS(906), 1,
      sym__unquoted_identifier,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(910), 1,
      sym__single_quote_string,
    ACTIONS(912), 1,
      sym__number,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym_identifier,
    STATE(277), 1,
      sym__quoted_identifier,
    STATE(288), 1,
      sym_parameter_value,
    STATE(712), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(165), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(290), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(914), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(286), 4,
      sym__literal,
      sym_literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [7774] = 7,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
    ACTIONS(922), 1,
      anon_sym_DOT,
    ACTIONS(924), 1,
      anon_sym_PERCENT,
    STATE(216), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(540), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7811] = 14,
    ACTIONS(906), 1,
      sym__unquoted_identifier,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(910), 1,
      sym__single_quote_string,
    ACTIONS(912), 1,
      sym__number,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym_identifier,
    STATE(277), 1,
      sym__quoted_identifier,
    STATE(288), 1,
      sym_parameter_value,
    STATE(712), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(175), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(290), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(914), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(286), 4,
      sym__literal,
      sym_literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [7862] = 14,
    ACTIONS(906), 1,
      sym__unquoted_identifier,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(910), 1,
      sym__single_quote_string,
    ACTIONS(912), 1,
      sym__number,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym_identifier,
    STATE(277), 1,
      sym__quoted_identifier,
    STATE(288), 1,
      sym_parameter_value,
    STATE(712), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(175), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(290), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(914), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(286), 4,
      sym__literal,
      sym_literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [7913] = 14,
    ACTIONS(906), 1,
      sym__unquoted_identifier,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(910), 1,
      sym__single_quote_string,
    ACTIONS(912), 1,
      sym__number,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym_identifier,
    STATE(277), 1,
      sym__quoted_identifier,
    STATE(288), 1,
      sym_parameter_value,
    STATE(712), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(170), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(290), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(914), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(286), 4,
      sym__literal,
      sym_literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [7964] = 14,
    ACTIONS(906), 1,
      sym__unquoted_identifier,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(910), 1,
      sym__single_quote_string,
    ACTIONS(912), 1,
      sym__number,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym_identifier,
    STATE(277), 1,
      sym__quoted_identifier,
    STATE(288), 1,
      sym_parameter_value,
    STATE(712), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(171), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(290), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(914), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(286), 4,
      sym__literal,
      sym_literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [8015] = 14,
    ACTIONS(906), 1,
      sym__unquoted_identifier,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(910), 1,
      sym__single_quote_string,
    ACTIONS(912), 1,
      sym__number,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym_identifier,
    STATE(277), 1,
      sym__quoted_identifier,
    STATE(288), 1,
      sym_parameter_value,
    STATE(712), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(166), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(290), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(914), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(286), 4,
      sym__literal,
      sym_literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [8066] = 14,
    ACTIONS(936), 1,
      anon_sym_RPAREN,
    ACTIONS(938), 1,
      sym__unquoted_identifier,
    ACTIONS(941), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      sym__single_quote_string,
    ACTIONS(947), 1,
      sym__number,
    STATE(248), 1,
      sym_identifier,
    STATE(277), 1,
      sym__quoted_identifier,
    STATE(288), 1,
      sym_parameter_value,
    STATE(712), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(175), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(290), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(950), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(286), 4,
      sym__literal,
      sym_literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [8117] = 7,
    ACTIONS(898), 1,
      anon_sym_LPAREN,
    ACTIONS(902), 1,
      anon_sym_PERCENT,
    ACTIONS(953), 1,
      anon_sym_DOT,
    STATE(187), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(540), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(531), 13,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8153] = 4,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(639), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(634), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8183] = 10,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(961), 1,
      sym_kw_debug,
    ACTIONS(963), 1,
      sym_kw_reuse,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(339), 1,
      sym_reuse_settings,
    STATE(764), 1,
      sym_identifier,
    STATE(231), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(959), 3,
      sym_kw_package,
      sym_kw_specification,
      sym_kw_body,
    ACTIONS(957), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [8225] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(695), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(693), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8252] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(625), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(623), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8279] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(745), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(743), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8306] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(732), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(730), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8333] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(670), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(668), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8360] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(643), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(641), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8387] = 5,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(617), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(612), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8418] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(666), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(664), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8445] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(662), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(660), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8472] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(621), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(619), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8499] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(639), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(634), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8526] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(632), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(630), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8553] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(699), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(697), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8580] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(768), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(766), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8607] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(749), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(747), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8634] = 5,
    ACTIONS(680), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(677), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(675), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(672), 12,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8665] = 4,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(691), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(686), 14,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8694] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(728), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(726), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8721] = 5,
    ACTIONS(709), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(704), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(706), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(701), 13,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8752] = 6,
    ACTIONS(670), 1,
      sym__unquoted_identifier,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(668), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(740), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(734), 12,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8785] = 9,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(963), 1,
      sym_kw_reuse,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(336), 1,
      sym_reuse_settings,
    STATE(764), 1,
      sym_identifier,
    STATE(230), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(973), 3,
      sym_kw_package,
      sym_kw_specification,
      sym_kw_body,
    ACTIONS(971), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [8824] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(684), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(682), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8851] = 4,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(639), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(634), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8879] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(728), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(726), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8904] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(684), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(682), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8929] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(666), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(664), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8954] = 4,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(691), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(686), 13,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [8981] = 4,
    ACTIONS(704), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(706), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(701), 13,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9008] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(699), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(697), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9033] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(643), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(641), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9058] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(621), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(619), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9083] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(670), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(668), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9108] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(745), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(743), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9133] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(768), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(766), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9158] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(749), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(747), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9183] = 5,
    ACTIONS(668), 1,
      sym_kw_and,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(740), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(734), 12,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9212] = 4,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(691), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(686), 13,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9239] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(662), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(660), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9264] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(732), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(730), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9289] = 4,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(675), 2,
      anon_sym_RPAREN,
      sym_kw_and,
    ACTIONS(677), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(672), 12,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9316] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(695), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(693), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9341] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(639), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(634), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9366] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(632), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9391] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9416] = 5,
    ACTIONS(668), 1,
      sym_kw_and,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(740), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(734), 12,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9445] = 7,
    ACTIONS(987), 1,
      ts_builtin_sym_end,
    ACTIONS(992), 1,
      sym_kw_create,
    ACTIONS(995), 1,
      sym_kw_alter,
    STATE(521), 1,
      sym_create_obj,
    ACTIONS(989), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(224), 3,
      sym__element,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
    STATE(520), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [9477] = 4,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(691), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(686), 12,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9503] = 8,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(963), 1,
      sym_kw_reuse,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(333), 1,
      sym_reuse_settings,
    STATE(764), 1,
      sym_identifier,
    STATE(228), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(1000), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9537] = 7,
    ACTIONS(9), 1,
      sym_kw_create,
    ACTIONS(11), 1,
      sym_kw_alter,
    ACTIONS(1002), 1,
      ts_builtin_sym_end,
    STATE(521), 1,
      sym_create_obj,
    ACTIONS(1004), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(224), 3,
      sym__element,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
    STATE(520), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [9569] = 8,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(963), 1,
      sym_kw_reuse,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(313), 1,
      sym_reuse_settings,
    STATE(764), 1,
      sym_identifier,
    STATE(233), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(1006), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9603] = 4,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(740), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(734), 12,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [9629] = 8,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(963), 1,
      sym_kw_reuse,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(333), 1,
      sym_reuse_settings,
    STATE(764), 1,
      sym_identifier,
    STATE(233), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(1000), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9663] = 8,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(963), 1,
      sym_kw_reuse,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(336), 1,
      sym_reuse_settings,
    STATE(764), 1,
      sym_identifier,
    STATE(233), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(971), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9697] = 8,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(963), 1,
      sym_kw_reuse,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(336), 1,
      sym_reuse_settings,
    STATE(764), 1,
      sym_identifier,
    STATE(230), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(971), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9731] = 6,
    ACTIONS(1012), 1,
      sym__unquoted_identifier,
    ACTIONS(1015), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(764), 1,
      sym_identifier,
    STATE(233), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(1010), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
      sym_kw_reuse,
  [9760] = 10,
    ACTIONS(1018), 1,
      anon_sym_DOT,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(250), 1,
      sym_sharing_clause,
    STATE(576), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1020), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(276), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [9797] = 10,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    ACTIONS(1032), 1,
      sym__unquoted_identifier,
    ACTIONS(1034), 1,
      anon_sym_DQUOTE,
    STATE(284), 1,
      sym_identifier,
    STATE(291), 1,
      sym__quoted_identifier,
    STATE(428), 1,
      sym_unit_kind,
    STATE(547), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(236), 2,
      sym_accessor,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(1036), 5,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [9834] = 10,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
    ACTIONS(1040), 1,
      sym__unquoted_identifier,
    ACTIONS(1043), 1,
      anon_sym_DQUOTE,
    STATE(284), 1,
      sym_identifier,
    STATE(291), 1,
      sym__quoted_identifier,
    STATE(428), 1,
      sym_unit_kind,
    STATE(547), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(236), 2,
      sym_accessor,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(1046), 5,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [9871] = 9,
    ACTIONS(906), 1,
      sym__unquoted_identifier,
    ACTIONS(908), 1,
      anon_sym_DQUOTE,
    ACTIONS(910), 1,
      sym__single_quote_string,
    ACTIONS(912), 1,
      sym__number,
    STATE(277), 1,
      sym__quoted_identifier,
    STATE(293), 1,
      sym_parameter_value,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(914), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(286), 5,
      sym_identifier,
      sym__literal,
      sym_literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [9906] = 10,
    ACTIONS(1018), 1,
      anon_sym_DOT,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(275), 1,
      sym_sharing_clause,
    STATE(567), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1020), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(246), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [9943] = 9,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(260), 1,
      sym_sharing_clause,
    STATE(574), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1020), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(266), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [9977] = 9,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(247), 1,
      sym_sharing_clause,
    STATE(556), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1020), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(262), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10011] = 9,
    ACTIONS(1032), 1,
      sym__unquoted_identifier,
    ACTIONS(1034), 1,
      anon_sym_DQUOTE,
    STATE(284), 1,
      sym_identifier,
    STATE(291), 1,
      sym__quoted_identifier,
    STATE(428), 1,
      sym_unit_kind,
    STATE(547), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(235), 2,
      sym_accessor,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(1036), 5,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [10045] = 5,
    ACTIONS(1018), 1,
      anon_sym_DOT,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(269), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1049), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10069] = 5,
    ACTIONS(1018), 1,
      anon_sym_DOT,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(256), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1055), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10093] = 5,
    ACTIONS(1018), 1,
      anon_sym_DOT,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(263), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1057), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10117] = 5,
    ACTIONS(1018), 1,
      anon_sym_DOT,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(278), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1059), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10141] = 7,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(555), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(282), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10168] = 7,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(542), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(273), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10195] = 4,
    ACTIONS(1063), 1,
      anon_sym_EQ_GT,
    ACTIONS(1065), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1061), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__number,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [10216] = 2,
    ACTIONS(1069), 1,
      sym__unquoted_identifier,
    ACTIONS(1067), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
      sym_kw_reuse,
  [10233] = 7,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(570), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(271), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10260] = 4,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(270), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1071), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10281] = 2,
    ACTIONS(728), 1,
      sym__unquoted_identifier,
    ACTIONS(726), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
      sym_kw_reuse,
  [10298] = 2,
    ACTIONS(1075), 1,
      sym__unquoted_identifier,
    ACTIONS(1073), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
      sym_kw_reuse,
  [10315] = 2,
    ACTIONS(768), 1,
      sym__unquoted_identifier,
    ACTIONS(766), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
      sym_kw_reuse,
  [10332] = 4,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(270), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1077), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10353] = 4,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(270), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1079), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10374] = 4,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(270), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1081), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10395] = 4,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(251), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1083), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10416] = 7,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(538), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(282), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10443] = 7,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(566), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(272), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10470] = 4,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(270), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1085), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10491] = 7,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(540), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(282), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10518] = 4,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(270), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1087), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10539] = 4,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(255), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1089), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10560] = 4,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(261), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1091), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10581] = 7,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(564), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(282), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10608] = 3,
    ACTIONS(191), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(193), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__number,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [10627] = 3,
    ACTIONS(1095), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1093), 9,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [10646] = 4,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(270), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1097), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10667] = 4,
    ACTIONS(1101), 1,
      sym_kw_compile,
    ACTIONS(1104), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(270), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1099), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10688] = 7,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(561), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(282), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10715] = 7,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(552), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(282), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10742] = 7,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(493), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(282), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10769] = 4,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(257), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1107), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10790] = 7,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(555), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(259), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10817] = 7,
    ACTIONS(1022), 1,
      sym_kw_default,
    ACTIONS(1024), 1,
      sym_kw_authid,
    ACTIONS(1026), 1,
      sym_kw_accessible,
    STATE(570), 1,
      sym_is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1028), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(282), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10844] = 3,
    ACTIONS(195), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(197), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__number,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [10863] = 4,
    ACTIONS(1051), 1,
      sym_kw_compile,
    ACTIONS(1053), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(270), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1109), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10884] = 4,
    ACTIONS(1018), 1,
      anon_sym_DOT,
    ACTIONS(1113), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1111), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [10904] = 6,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    ACTIONS(1119), 1,
      sym__unquoted_identifier,
    ACTIONS(1121), 1,
      sym_kw_varying,
    STATE(385), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1117), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10928] = 6,
    ACTIONS(1121), 1,
      sym_kw_varying,
    ACTIONS(1123), 1,
      anon_sym_LPAREN,
    ACTIONS(1127), 1,
      sym__unquoted_identifier,
    STATE(381), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1125), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10952] = 6,
    ACTIONS(1129), 1,
      sym_kw_default,
    ACTIONS(1132), 1,
      sym_kw_authid,
    ACTIONS(1135), 1,
      sym_kw_accessible,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1138), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(282), 4,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_create_package_repeat1,
  [10976] = 5,
    ACTIONS(1140), 1,
      sym__single_quote_string,
    ACTIONS(1142), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1144), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(249), 4,
      sym__literal,
      sym_literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [10998] = 4,
    ACTIONS(1018), 1,
      anon_sym_DOT,
    ACTIONS(1148), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1146), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [11018] = 3,
    ACTIONS(728), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(726), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__number,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [11036] = 3,
    ACTIONS(1065), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1061), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__number,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [11054] = 3,
    ACTIONS(1075), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1073), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__number,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [11072] = 3,
    ACTIONS(1152), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1150), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__number,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [11090] = 6,
    ACTIONS(1154), 1,
      anon_sym_LPAREN,
    ACTIONS(1158), 1,
      sym__unquoted_identifier,
    ACTIONS(1160), 1,
      sym_kw_with,
    STATE(337), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1156), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11114] = 4,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1162), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__number,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [11134] = 3,
    ACTIONS(195), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(197), 8,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [11152] = 3,
    ACTIONS(191), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(193), 8,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [11170] = 3,
    ACTIONS(1170), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1168), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__number,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [11188] = 3,
    ACTIONS(768), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(766), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__number,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [11206] = 3,
    ACTIONS(1174), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1172), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [11223] = 5,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    ACTIONS(1178), 1,
      sym__unquoted_identifier,
    STATE(387), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1176), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11244] = 5,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    ACTIONS(1182), 1,
      sym__unquoted_identifier,
    STATE(358), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1180), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11265] = 5,
    ACTIONS(1184), 1,
      anon_sym_LPAREN,
    ACTIONS(1188), 1,
      sym__unquoted_identifier,
    STATE(386), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1186), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11286] = 1,
    ACTIONS(193), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11299] = 5,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    ACTIONS(1192), 1,
      sym__unquoted_identifier,
    STATE(390), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1190), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11320] = 3,
    ACTIONS(1196), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1194), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__number,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [11337] = 3,
    ACTIONS(195), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(197), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11354] = 3,
    ACTIONS(191), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(193), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11371] = 5,
    ACTIONS(1184), 1,
      anon_sym_LPAREN,
    ACTIONS(1200), 1,
      sym__unquoted_identifier,
    STATE(393), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1198), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11392] = 5,
    ACTIONS(1204), 1,
      anon_sym_DOT,
    ACTIONS(1206), 1,
      anon_sym_PERCENT,
    ACTIONS(1208), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1202), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11413] = 5,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    ACTIONS(1212), 1,
      sym__unquoted_identifier,
    STATE(391), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1210), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11434] = 3,
    ACTIONS(1216), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1214), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [11451] = 5,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    ACTIONS(1220), 1,
      sym_kw_varying,
    STATE(450), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1125), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11472] = 5,
    ACTIONS(1220), 1,
      sym_kw_varying,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    STATE(418), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1117), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11493] = 1,
    ACTIONS(197), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11506] = 5,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    ACTIONS(1224), 1,
      sym_kw_with,
    STATE(355), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1156), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11527] = 4,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    STATE(442), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1176), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11545] = 1,
    ACTIONS(1226), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11557] = 4,
    ACTIONS(1228), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(320), 2,
      sym_function_properties,
      aux_sym_package_function_declaration_repeat1,
    ACTIONS(1230), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11575] = 4,
    ACTIONS(1232), 1,
      anon_sym_DOT,
    ACTIONS(1234), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1202), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11593] = 3,
    ACTIONS(1238), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1236), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
      sym_kw_with,
  [11609] = 4,
    ACTIONS(1240), 1,
      anon_sym_LPAREN,
    STATE(431), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1198), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11627] = 4,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    STATE(436), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1210), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11645] = 4,
    ACTIONS(1240), 1,
      anon_sym_LPAREN,
    STATE(411), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1186), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11663] = 4,
    ACTIONS(1242), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(320), 2,
      sym_function_properties,
      aux_sym_package_function_declaration_repeat1,
    ACTIONS(1244), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11681] = 6,
    ACTIONS(1158), 1,
      sym__unquoted_identifier,
    ACTIONS(1247), 1,
      anon_sym_LPAREN,
    ACTIONS(1249), 1,
      sym_kw_with,
    STATE(416), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1156), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [11703] = 4,
    ACTIONS(1253), 1,
      sym__unquoted_identifier,
    ACTIONS(1255), 1,
      sym_kw_raw,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1251), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11721] = 6,
    ACTIONS(1119), 1,
      sym__unquoted_identifier,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    ACTIONS(1259), 1,
      sym_kw_varying,
    STATE(477), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1117), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [11743] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1236), 7,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_with,
      sym_kw_to,
  [11757] = 7,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    ACTIONS(1263), 1,
      sym__unquoted_identifier,
    ACTIONS(1265), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_identifier,
    STATE(10), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(338), 2,
      sym_parameter_declaration_element,
      aux_sym_parameter_declaration_repeat1,
  [11781] = 4,
    ACTIONS(1267), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(320), 2,
      sym_function_properties,
      aux_sym_package_function_declaration_repeat1,
    ACTIONS(1230), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11799] = 4,
    ACTIONS(1228), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(326), 2,
      sym_function_properties,
      aux_sym_package_function_declaration_repeat1,
    ACTIONS(1230), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11817] = 6,
    ACTIONS(1127), 1,
      sym__unquoted_identifier,
    ACTIONS(1259), 1,
      sym_kw_varying,
    ACTIONS(1269), 1,
      anon_sym_LPAREN,
    STATE(482), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1125), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [11839] = 4,
    ACTIONS(1271), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(314), 2,
      sym_function_properties,
      aux_sym_package_function_declaration_repeat1,
    ACTIONS(1230), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11857] = 7,
    ACTIONS(1263), 1,
      sym__unquoted_identifier,
    ACTIONS(1265), 1,
      anon_sym_DQUOTE,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_identifier,
    STATE(10), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(325), 2,
      sym_parameter_declaration_element,
      aux_sym_parameter_declaration_repeat1,
  [11881] = 1,
    ACTIONS(1275), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11893] = 5,
    ACTIONS(1281), 1,
      sym__unquoted_identifier,
    STATE(562), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1279), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
    ACTIONS(1277), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [11913] = 1,
    ACTIONS(1006), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11925] = 4,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    STATE(451), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1180), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11943] = 1,
    ACTIONS(1283), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11955] = 1,
    ACTIONS(1000), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11967] = 4,
    ACTIONS(1287), 1,
      sym__unquoted_identifier,
    ACTIONS(1289), 1,
      sym_kw_with,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1285), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11985] = 7,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
    ACTIONS(1293), 1,
      sym__unquoted_identifier,
    ACTIONS(1296), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_identifier,
    STATE(10), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(338), 2,
      sym_parameter_declaration_element,
      aux_sym_parameter_declaration_repeat1,
  [12009] = 1,
    ACTIONS(971), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [12021] = 5,
    ACTIONS(1301), 1,
      sym__unquoted_identifier,
    STATE(539), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1279), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
    ACTIONS(1299), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [12041] = 4,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    STATE(462), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1190), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12059] = 4,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    STATE(479), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1176), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12076] = 3,
    ACTIONS(1305), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1303), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12091] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(580), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [12110] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(553), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [12129] = 4,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    STATE(512), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1190), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12146] = 4,
    ACTIONS(1311), 1,
      anon_sym_DOT,
    ACTIONS(1313), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1202), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12163] = 4,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    STATE(526), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1180), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12180] = 4,
    ACTIONS(1315), 1,
      anon_sym_LPAREN,
    STATE(485), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1198), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12197] = 4,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    STATE(483), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1210), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12214] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(554), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [12233] = 4,
    ACTIONS(1315), 1,
      anon_sym_LPAREN,
    STATE(545), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1186), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12250] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(557), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [12269] = 3,
    ACTIONS(1317), 1,
      sym_kw_raw,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1251), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12284] = 3,
    ACTIONS(1319), 1,
      sym_kw_with,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1285), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12299] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(528), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [12318] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(527), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [12337] = 3,
    ACTIONS(1323), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1321), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12352] = 3,
    ACTIONS(1327), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1325), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12367] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(193), 6,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12380] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(197), 6,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12393] = 3,
    ACTIONS(1331), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1329), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12408] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(531), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [12427] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(534), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [12446] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(572), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [12465] = 3,
    ACTIONS(1335), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1333), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12480] = 3,
    ACTIONS(1339), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1337), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12495] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(536), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [12514] = 3,
    ACTIONS(1343), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1341), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12529] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(537), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [12548] = 3,
    ACTIONS(1347), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1345), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12563] = 3,
    ACTIONS(1351), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1349), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12578] = 3,
    ACTIONS(1355), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1353), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12593] = 3,
    ACTIONS(1359), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1357), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12608] = 3,
    ACTIONS(1363), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1361), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12623] = 3,
    ACTIONS(1367), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1365), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12638] = 3,
    ACTIONS(1371), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1369), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12653] = 3,
    ACTIONS(1375), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1373), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12668] = 3,
    ACTIONS(1379), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1377), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12683] = 3,
    ACTIONS(1383), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1381), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12698] = 3,
    ACTIONS(1387), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1385), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12713] = 3,
    ACTIONS(1391), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1389), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12728] = 3,
    ACTIONS(1395), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1393), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12743] = 3,
    ACTIONS(1399), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1397), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12758] = 3,
    ACTIONS(1403), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1401), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12773] = 3,
    ACTIONS(1407), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1405), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12788] = 3,
    ACTIONS(1411), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1409), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12803] = 3,
    ACTIONS(1415), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1413), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12818] = 3,
    ACTIONS(1419), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1417), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12833] = 3,
    ACTIONS(1182), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1180), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12848] = 3,
    ACTIONS(1423), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1421), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12863] = 3,
    ACTIONS(1427), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1425), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12878] = 3,
    ACTIONS(1431), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1429), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12893] = 3,
    ACTIONS(1435), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1433), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12908] = 3,
    ACTIONS(1439), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1437), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12923] = 3,
    ACTIONS(1443), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1441), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12938] = 3,
    ACTIONS(1447), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1445), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12953] = 3,
    ACTIONS(1451), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1449), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12968] = 3,
    ACTIONS(1455), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1453), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12983] = 3,
    ACTIONS(1459), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1457), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12998] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(558), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [13017] = 3,
    ACTIONS(1463), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1461), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [13032] = 3,
    ACTIONS(1467), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1465), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [13047] = 3,
    ACTIONS(1471), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1469), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [13062] = 3,
    ACTIONS(1238), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1236), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [13077] = 3,
    ACTIONS(1475), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1473), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [13092] = 3,
    ACTIONS(1479), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1477), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [13107] = 3,
    ACTIONS(1483), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1481), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [13122] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(478), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [13141] = 5,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(1309), 1,
      sym_kw_end,
    STATE(551), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [13160] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1405), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13172] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1453), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13184] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1441), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13196] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1437), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13208] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1485), 5,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [13220] = 4,
    ACTIONS(1287), 1,
      sym__unquoted_identifier,
    ACTIONS(1487), 1,
      sym_kw_with,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1285), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [13236] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1449), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13248] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1401), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13260] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1489), 5,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [13272] = 3,
    ACTIONS(1238), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1236), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_with,
  [13286] = 6,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1491), 1,
      anon_sym_SEMI,
    ACTIONS(1493), 1,
      sym__unquoted_identifier,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(745), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13306] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1469), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13318] = 4,
    ACTIONS(1495), 1,
      sym_kw_function,
    ACTIONS(1498), 1,
      sym_kw_end,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(423), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [13334] = 6,
    ACTIONS(357), 1,
      sym__unquoted_identifier,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(1500), 1,
      sym_kw_exists,
    STATE(46), 1,
      sym__quoted_identifier,
    STATE(50), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13354] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1473), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13366] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1477), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13378] = 6,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1502), 1,
      sym_kw_exists,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(185), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13398] = 6,
    ACTIONS(1034), 1,
      anon_sym_DQUOTE,
    ACTIONS(1504), 1,
      sym__unquoted_identifier,
    STATE(279), 1,
      sym_identifier,
    STATE(291), 1,
      sym__quoted_identifier,
    STATE(533), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13418] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1481), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13430] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1433), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13442] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1429), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13454] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1397), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13466] = 6,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1493), 1,
      sym__unquoted_identifier,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(238), 1,
      sym_identifier,
    STATE(575), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13486] = 6,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1493), 1,
      sym__unquoted_identifier,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(234), 1,
      sym_identifier,
    STATE(579), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13506] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1425), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13518] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1421), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13530] = 6,
    ACTIONS(1506), 1,
      sym__unquoted_identifier,
    ACTIONS(1508), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      sym_identifier,
    STATE(310), 1,
      sym__quoted_identifier,
    STATE(577), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13550] = 6,
    ACTIONS(888), 1,
      sym__unquoted_identifier,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
    ACTIONS(1510), 1,
      sym_kw_exists,
    STATE(163), 1,
      sym__quoted_identifier,
    STATE(167), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13570] = 6,
    ACTIONS(1506), 1,
      sym__unquoted_identifier,
    ACTIONS(1508), 1,
      anon_sym_DQUOTE,
    STATE(244), 1,
      sym_identifier,
    STATE(310), 1,
      sym__quoted_identifier,
    STATE(573), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13590] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1417), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13602] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1413), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13614] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1409), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13626] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1512), 5,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [13638] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1445), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13650] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1303), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13662] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1393), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13674] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1389), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13686] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1514), 5,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [13698] = 6,
    ACTIONS(305), 1,
      sym__unquoted_identifier,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(1516), 1,
      sym_kw_exists,
    STATE(44), 1,
      sym__quoted_identifier,
    STATE(47), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13718] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1385), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13730] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1321), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13742] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1333), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13754] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1325), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13766] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1329), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13778] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1337), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13790] = 4,
    ACTIONS(1253), 1,
      sym__unquoted_identifier,
    ACTIONS(1518), 1,
      sym_kw_raw,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1251), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [13806] = 6,
    ACTIONS(1506), 1,
      sym__unquoted_identifier,
    ACTIONS(1508), 1,
      anon_sym_DQUOTE,
    STATE(245), 1,
      sym_identifier,
    STATE(310), 1,
      sym__quoted_identifier,
    STATE(571), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13826] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1341), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13838] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1345), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13850] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1381), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13862] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1349), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13874] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1180), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13886] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1353), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13898] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1520), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13910] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1457), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13922] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1357), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13934] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1361), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13946] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1365), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13958] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1369), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13970] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1373), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13982] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1377), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13994] = 6,
    ACTIONS(1506), 1,
      sym__unquoted_identifier,
    ACTIONS(1508), 1,
      anon_sym_DQUOTE,
    STATE(242), 1,
      sym_identifier,
    STATE(310), 1,
      sym__quoted_identifier,
    STATE(568), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14014] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1461), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [14026] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1522), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [14038] = 6,
    ACTIONS(135), 1,
      sym__unquoted_identifier,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1510), 1,
      sym_kw_exists,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(167), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14058] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1465), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [14070] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1401), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14081] = 1,
    ACTIONS(1524), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14090] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1409), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14101] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1413), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14112] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1417), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14123] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1385), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14134] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1421), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14145] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1425), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14156] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1429), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14167] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1433), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14178] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1437), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14189] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1441), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14200] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1445), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14211] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1449), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14222] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1453), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14233] = 5,
    ACTIONS(1526), 1,
      sym_kw_package,
    ACTIONS(1528), 1,
      sym_kw_function,
    ACTIONS(1530), 1,
      sym_kw_procedure,
    ACTIONS(1532), 1,
      sym_kw_library,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14250] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(365), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [14263] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1397), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14274] = 1,
    ACTIONS(1534), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14283] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1469), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14294] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1393), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14305] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1473), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14316] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1477), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14327] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1481), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14338] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1303), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14349] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1389), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14360] = 5,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1493), 1,
      sym__unquoted_identifier,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(772), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14377] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1377), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14388] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1373), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14399] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1369), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14410] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1365), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14421] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1361), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14432] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1465), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14443] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1461), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14454] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1457), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14465] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1180), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14476] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1357), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14487] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1381), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14498] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1353), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14509] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1349), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14520] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1345), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14531] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1341), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14542] = 5,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    ACTIONS(1536), 1,
      sym_kw_char,
    ACTIONS(1538), 1,
      sym_kw_character,
    STATE(502), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14559] = 2,
    ACTIONS(1542), 1,
      anon_sym_SEMI,
    ACTIONS(1540), 5,
      ts_builtin_sym_end,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14570] = 4,
    ACTIONS(1544), 1,
      sym_kw_package,
    STATE(789), 1,
      sym_editionable_noneditionable,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1546), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [14585] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1337), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14596] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1333), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14607] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1329), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14618] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1325), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14629] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1321), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14640] = 1,
    ACTIONS(1548), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14649] = 1,
    ACTIONS(1550), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14658] = 5,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1493), 1,
      sym__unquoted_identifier,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(765), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14675] = 5,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    ACTIONS(1552), 1,
      sym_kw_char,
    ACTIONS(1554), 1,
      sym_kw_character,
    STATE(447), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14692] = 1,
    ACTIONS(1556), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14701] = 3,
    ACTIONS(1560), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1558), 3,
      anon_sym_RPAREN,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14714] = 5,
    ACTIONS(1034), 1,
      anon_sym_DQUOTE,
    ACTIONS(1504), 1,
      sym__unquoted_identifier,
    STATE(291), 1,
      sym__quoted_identifier,
    STATE(307), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14731] = 1,
    ACTIONS(1562), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14740] = 5,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1493), 1,
      sym__unquoted_identifier,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(727), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14757] = 1,
    ACTIONS(1562), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14766] = 1,
    ACTIONS(1564), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14775] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(353), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [14788] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1566), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14799] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(351), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [14812] = 3,
    ACTIONS(1570), 1,
      sym_kw_or,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1568), 3,
      sym_kw_package,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [14825] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(345), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [14838] = 1,
    ACTIONS(1572), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14847] = 4,
    ACTIONS(1574), 1,
      anon_sym_RPAREN,
    STATE(776), 1,
      sym_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1576), 2,
      sym_kw_byte,
      sym_kw_char,
  [14862] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1405), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14873] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1236), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14884] = 5,
    ACTIONS(1034), 1,
      anon_sym_DQUOTE,
    ACTIONS(1504), 1,
      sym__unquoted_identifier,
    STATE(291), 1,
      sym__quoted_identifier,
    STATE(295), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14901] = 5,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    ACTIONS(1578), 1,
      sym_kw_char,
    ACTIONS(1580), 1,
      sym_kw_character,
    STATE(382), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14918] = 5,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1493), 1,
      sym__unquoted_identifier,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(759), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14935] = 5,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1493), 1,
      sym__unquoted_identifier,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(690), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14952] = 1,
    ACTIONS(1582), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14961] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(356), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [14974] = 1,
    ACTIONS(1584), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14983] = 1,
    ACTIONS(1584), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14992] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(357), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [15005] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(344), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [15018] = 1,
    ACTIONS(1586), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [15027] = 1,
    ACTIONS(1588), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [15036] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1590), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [15047] = 5,
    ACTIONS(1592), 1,
      anon_sym_LPAREN,
    ACTIONS(1594), 1,
      sym_kw_return,
    STATE(329), 1,
      sym_return_declaration,
    STATE(620), 1,
      sym_parameter_declaration,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15064] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(363), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [15077] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1299), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [15088] = 5,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1493), 1,
      sym__unquoted_identifier,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(744), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15105] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(364), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [15118] = 4,
    ACTIONS(1596), 1,
      anon_sym_RPAREN,
    STATE(687), 1,
      sym_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1576), 2,
      sym_kw_byte,
      sym_kw_char,
  [15133] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(368), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [15146] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(370), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [15159] = 5,
    ACTIONS(1506), 1,
      sym__unquoted_identifier,
    ACTIONS(1508), 1,
      anon_sym_DQUOTE,
    STATE(265), 1,
      sym_identifier,
    STATE(310), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15176] = 5,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1493), 1,
      sym__unquoted_identifier,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(560), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15193] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(409), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [15206] = 5,
    ACTIONS(1506), 1,
      sym__unquoted_identifier,
    ACTIONS(1508), 1,
      anon_sym_DQUOTE,
    STATE(274), 1,
      sym_identifier,
    STATE(310), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15223] = 1,
    ACTIONS(1598), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [15232] = 5,
    ACTIONS(1506), 1,
      sym__unquoted_identifier,
    ACTIONS(1508), 1,
      anon_sym_DQUOTE,
    STATE(258), 1,
      sym_identifier,
    STATE(310), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15249] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(410), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [15262] = 5,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1493), 1,
      sym__unquoted_identifier,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(240), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15279] = 3,
    ACTIONS(1307), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(401), 3,
      sym__package_item_list,
      sym_package_function_declaration,
      aux_sym_create_package_repeat2,
  [15292] = 5,
    ACTIONS(1506), 1,
      sym__unquoted_identifier,
    ACTIONS(1508), 1,
      anon_sym_DQUOTE,
    STATE(264), 1,
      sym_identifier,
    STATE(310), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15309] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1600), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [15320] = 5,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1493), 1,
      sym__unquoted_identifier,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(239), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15337] = 1,
    ACTIONS(1602), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [15346] = 5,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(1493), 1,
      sym__unquoted_identifier,
    STATE(36), 1,
      sym__quoted_identifier,
    STATE(735), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15363] = 4,
    ACTIONS(1604), 1,
      anon_sym_RPAREN,
    STATE(676), 1,
      sym_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1576), 2,
      sym_kw_byte,
      sym_kw_char,
  [15378] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1606), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [15389] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1608), 3,
      sym_kw_found,
      sym_kw_isopen,
      sym_kw_notfound,
  [15399] = 4,
    ACTIONS(1610), 1,
      sym_kw_between,
    ACTIONS(1612), 1,
      sym_kw_in,
    ACTIONS(1614), 1,
      sym_kw_like,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15413] = 4,
    ACTIONS(1616), 1,
      sym_kw_between,
    ACTIONS(1618), 1,
      sym_kw_in,
    ACTIONS(1620), 1,
      sym_kw_like,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15427] = 4,
    ACTIONS(1622), 1,
      sym_kw_between,
    ACTIONS(1624), 1,
      sym_kw_in,
    ACTIONS(1626), 1,
      sym_kw_like,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15441] = 4,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    ACTIONS(1628), 1,
      sym_kw_to,
    STATE(758), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15455] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1630), 3,
      sym_kw_found,
      sym_kw_isopen,
      sym_kw_notfound,
  [15465] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1632), 3,
      anon_sym_RPAREN,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [15475] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1634), 3,
      sym_kw_package,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [15485] = 4,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    ACTIONS(1636), 1,
      sym_kw_to,
    STATE(757), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15499] = 4,
    ACTIONS(1638), 1,
      sym_kw_between,
    ACTIONS(1640), 1,
      sym_kw_in,
    ACTIONS(1642), 1,
      sym_kw_like,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15513] = 1,
    ACTIONS(1644), 5,
      ts_builtin_sym_end,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [15521] = 3,
    ACTIONS(1646), 1,
      sym_kw_anydata,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1648), 2,
      sym_kw_anytype,
      sym_kw_anydataset,
  [15533] = 3,
    ACTIONS(1650), 1,
      sym_kw_anydata,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1652), 2,
      sym_kw_anytype,
      sym_kw_anydataset,
  [15545] = 4,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    ACTIONS(1654), 1,
      sym_kw_varying,
    STATE(392), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15559] = 4,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    ACTIONS(1656), 1,
      sym_kw_varying,
    STATE(396), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15573] = 3,
    ACTIONS(1658), 1,
      sym_kw_anydata,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1660), 2,
      sym_kw_anytype,
      sym_kw_anydataset,
  [15585] = 4,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    ACTIONS(1662), 1,
      sym_kw_to,
    STATE(695), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15599] = 4,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    ACTIONS(1664), 1,
      sym_kw_varying,
    STATE(488), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15613] = 4,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    ACTIONS(1666), 1,
      sym_kw_to,
    STATE(697), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15627] = 4,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    ACTIONS(1668), 1,
      sym_kw_varying,
    STATE(413), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15641] = 4,
    ACTIONS(1642), 1,
      sym_kw_like,
    ACTIONS(1670), 1,
      sym_kw_between,
    ACTIONS(1672), 1,
      sym_kw_in,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15655] = 4,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    ACTIONS(1674), 1,
      sym_kw_varying,
    STATE(435), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15669] = 4,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    ACTIONS(1676), 1,
      sym_kw_to,
    STATE(734), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15683] = 4,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    ACTIONS(1678), 1,
      sym_kw_to,
    STATE(733), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15697] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1680), 3,
      sym_kw_found,
      sym_kw_isopen,
      sym_kw_notfound,
  [15707] = 4,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    ACTIONS(1682), 1,
      sym_kw_varying,
    STATE(484), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15721] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1684), 3,
      sym_kw_found,
      sym_kw_isopen,
      sym_kw_notfound,
  [15731] = 3,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    STATE(414), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15742] = 3,
    ACTIONS(1686), 1,
      sym_kw_null,
    ACTIONS(1688), 1,
      sym_kw_not,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15753] = 3,
    ACTIONS(1690), 1,
      sym_kw_year,
    ACTIONS(1692), 1,
      sym_kw_day,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15764] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1694), 2,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [15773] = 3,
    ACTIONS(1696), 1,
      sym_kw_year,
    ACTIONS(1698), 1,
      sym_kw_day,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15784] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1700), 2,
      sym_kw_current_user,
      sym_kw_definer,
  [15793] = 3,
    ACTIONS(1702), 1,
      sym__number,
    STATE(685), 1,
      sym__scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15804] = 3,
    ACTIONS(1704), 1,
      sym_kw_local,
    ACTIONS(1706), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15815] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1708), 2,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [15824] = 3,
    ACTIONS(1594), 1,
      sym_kw_return,
    STATE(327), 1,
      sym_return_declaration,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15835] = 3,
    ACTIONS(1710), 1,
      sym_kw_local,
    ACTIONS(1712), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15846] = 3,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    STATE(395), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15857] = 3,
    ACTIONS(1714), 1,
      sym_kw_null,
    ACTIONS(1716), 1,
      sym_kw_not,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15868] = 3,
    ACTIONS(1123), 1,
      anon_sym_LPAREN,
    STATE(383), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15879] = 3,
    ACTIONS(1718), 1,
      sym__single_quote_string,
    STATE(221), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15890] = 3,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    STATE(397), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15901] = 3,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    STATE(384), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15912] = 3,
    ACTIONS(1720), 1,
      sym__number,
    STATE(662), 1,
      sym__precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15923] = 3,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    STATE(389), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15934] = 3,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    STATE(446), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15945] = 3,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    STATE(432), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15956] = 3,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    STATE(440), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15967] = 3,
    ACTIONS(1718), 1,
      sym__single_quote_string,
    STATE(222), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15978] = 3,
    ACTIONS(1722), 1,
      sym_kw_year,
    ACTIONS(1724), 1,
      sym_kw_day,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15989] = 3,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    STATE(406), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16000] = 3,
    ACTIONS(1726), 1,
      anon_sym_RPAREN,
    ACTIONS(1728), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16011] = 3,
    ACTIONS(1730), 1,
      sym__number,
    STATE(751), 1,
      sym__scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16022] = 3,
    ACTIONS(1732), 1,
      sym_kw_local,
    ACTIONS(1734), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16033] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1736), 2,
      sym_kw_function,
      sym_kw_end,
  [16042] = 3,
    ACTIONS(1738), 1,
      sym_kw_local,
    ACTIONS(1740), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16053] = 3,
    ACTIONS(1742), 1,
      sym__number,
    STATE(636), 1,
      sym__precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16064] = 3,
    ACTIONS(1744), 1,
      sym__number,
    STATE(652), 1,
      sym__precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16075] = 3,
    ACTIONS(1746), 1,
      sym_kw_local,
    ACTIONS(1748), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16086] = 3,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    STATE(444), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16097] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1750), 2,
      sym_kw_function,
      sym_kw_end,
  [16106] = 3,
    ACTIONS(1222), 1,
      anon_sym_LPAREN,
    STATE(425), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16117] = 3,
    ACTIONS(1752), 1,
      sym__single_quote_string,
    STATE(49), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16128] = 3,
    ACTIONS(1754), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16139] = 3,
    ACTIONS(1269), 1,
      anon_sym_LPAREN,
    STATE(497), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16150] = 3,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    STATE(494), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16161] = 3,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    STATE(481), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16172] = 3,
    ACTIONS(1756), 1,
      anon_sym_RPAREN,
    ACTIONS(1758), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16183] = 3,
    ACTIONS(1760), 1,
      sym_kw_local,
    ACTIONS(1762), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16194] = 3,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    STATE(487), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16205] = 3,
    ACTIONS(1764), 1,
      sym__single_quote_string,
    STATE(86), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16216] = 3,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    STATE(489), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16227] = 3,
    ACTIONS(1754), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16238] = 3,
    ACTIONS(1764), 1,
      sym__single_quote_string,
    STATE(92), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16249] = 3,
    ACTIONS(1766), 1,
      sym_kw_null,
    ACTIONS(1768), 1,
      sym_kw_not,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16260] = 3,
    ACTIONS(1752), 1,
      sym__single_quote_string,
    STATE(51), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16271] = 3,
    ACTIONS(1257), 1,
      anon_sym_LPAREN,
    STATE(498), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16282] = 3,
    ACTIONS(1770), 1,
      anon_sym_RPAREN,
    ACTIONS(1772), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16293] = 3,
    ACTIONS(1774), 1,
      sym__number,
    STATE(668), 1,
      sym__scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16304] = 3,
    ACTIONS(1776), 1,
      sym_kw_null,
    ACTIONS(1778), 1,
      sym_kw_not,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16315] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1780), 2,
      sym_kw_function,
      sym_kw_end,
  [16324] = 2,
    ACTIONS(1782), 1,
      sym_kw_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16332] = 2,
    ACTIONS(1734), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16340] = 2,
    ACTIONS(1784), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16348] = 2,
    ACTIONS(1786), 1,
      sym_kw_rowtype,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16356] = 2,
    ACTIONS(1788), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16364] = 2,
    ACTIONS(1790), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16372] = 2,
    ACTIONS(1792), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16380] = 2,
    ACTIONS(1794), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16388] = 2,
    ACTIONS(1796), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16396] = 2,
    ACTIONS(1798), 1,
      sym_kw_type,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16404] = 2,
    ACTIONS(1800), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16412] = 2,
    ACTIONS(1802), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16420] = 2,
    ACTIONS(1804), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16428] = 2,
    ACTIONS(1806), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16436] = 2,
    ACTIONS(1808), 1,
      sym_kw_type,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16444] = 2,
    ACTIONS(1810), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16452] = 2,
    ACTIONS(1812), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16460] = 2,
    ACTIONS(1814), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16468] = 2,
    ACTIONS(1816), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16476] = 2,
    ACTIONS(1818), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16484] = 2,
    ACTIONS(1820), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16492] = 2,
    ACTIONS(1822), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16500] = 2,
    ACTIONS(1824), 1,
      sym_kw_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16508] = 2,
    ACTIONS(1826), 1,
      sym_kw_return,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16516] = 2,
    ACTIONS(1828), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16524] = 2,
    ACTIONS(1830), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16532] = 2,
    ACTIONS(1832), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16540] = 2,
    ACTIONS(1834), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16548] = 2,
    ACTIONS(1836), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16556] = 2,
    ACTIONS(1838), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16564] = 2,
    ACTIONS(1840), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16572] = 2,
    ACTIONS(1842), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16580] = 2,
    ACTIONS(1844), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16588] = 2,
    ACTIONS(1846), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16596] = 2,
    ACTIONS(1762), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16604] = 2,
    ACTIONS(1848), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16612] = 2,
    ACTIONS(1850), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16620] = 2,
    ACTIONS(1852), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16628] = 2,
    ACTIONS(1854), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16636] = 2,
    ACTIONS(1856), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16644] = 2,
    ACTIONS(1858), 1,
      sym_kw_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16652] = 2,
    ACTIONS(1860), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16660] = 2,
    ACTIONS(1862), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16668] = 2,
    ACTIONS(1864), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16676] = 2,
    ACTIONS(1866), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16684] = 2,
    ACTIONS(1868), 1,
      sym_kw_rowtype,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16692] = 2,
    ACTIONS(1870), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16700] = 2,
    ACTIONS(1872), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16708] = 2,
    ACTIONS(1874), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16716] = 2,
    ACTIONS(1876), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16724] = 2,
    ACTIONS(1878), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16732] = 2,
    ACTIONS(1880), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16740] = 2,
    ACTIONS(1882), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16748] = 2,
    ACTIONS(1884), 1,
      sym_kw_return,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16756] = 2,
    ACTIONS(1886), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16764] = 2,
    ACTIONS(1888), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16772] = 2,
    ACTIONS(1890), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16780] = 2,
    ACTIONS(1892), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1894), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16788] = 2,
    ACTIONS(1896), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16796] = 2,
    ACTIONS(1898), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16804] = 2,
    ACTIONS(1900), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16812] = 2,
    ACTIONS(1902), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16820] = 2,
    ACTIONS(1904), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16828] = 2,
    ACTIONS(1906), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16836] = 2,
    ACTIONS(1908), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16844] = 2,
    ACTIONS(1910), 1,
      sym_kw_precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16852] = 2,
    ACTIONS(1912), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16860] = 2,
    ACTIONS(1914), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16868] = 2,
    ACTIONS(1916), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16876] = 2,
    ACTIONS(1918), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16884] = 2,
    ACTIONS(1920), 1,
      sym_kw_precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16892] = 2,
    ACTIONS(1922), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16900] = 2,
    ACTIONS(1924), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16908] = 2,
    ACTIONS(1926), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16916] = 2,
    ACTIONS(1928), 1,
      sym_kw_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16924] = 2,
    ACTIONS(1930), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16932] = 2,
    ACTIONS(1932), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16940] = 2,
    ACTIONS(1934), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16948] = 2,
    ACTIONS(1936), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16956] = 2,
    ACTIONS(1938), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16964] = 2,
    ACTIONS(1940), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16972] = 2,
    ACTIONS(1942), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1894), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16980] = 2,
    ACTIONS(1944), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16988] = 2,
    ACTIONS(1946), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16996] = 2,
    ACTIONS(1948), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17004] = 2,
    ACTIONS(1950), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17012] = 2,
    ACTIONS(1952), 1,
      sym_kw_rowtype,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17020] = 2,
    ACTIONS(1954), 1,
      sym_kw_type,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17028] = 2,
    ACTIONS(1956), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17036] = 2,
    ACTIONS(1706), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17044] = 2,
    ACTIONS(1958), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17052] = 2,
    ACTIONS(1960), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17060] = 2,
    ACTIONS(1962), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17068] = 2,
    ACTIONS(1964), 1,
      anon_sym_PERCENT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17076] = 2,
    ACTIONS(1966), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17084] = 2,
    ACTIONS(1968), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17092] = 2,
    ACTIONS(1970), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17100] = 2,
    ACTIONS(1972), 1,
      sym_kw_using_nls_comp,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17108] = 2,
    ACTIONS(1974), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17116] = 2,
    ACTIONS(1976), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17124] = 2,
    ACTIONS(1978), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17132] = 2,
    ACTIONS(1980), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1894), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17140] = 2,
    ACTIONS(1982), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17148] = 2,
    ACTIONS(1984), 1,
      sym_kw_settings,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17156] = 2,
    ACTIONS(1986), 1,
      sym_kw_function,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17164] = 2,
    ACTIONS(1988), 1,
      sym_kw_by,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17172] = 2,
    ACTIONS(1990), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17180] = 2,
    ACTIONS(1992), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17188] = 2,
    ACTIONS(1994), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1894), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17196] = 2,
    ACTIONS(1996), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17204] = 2,
    ACTIONS(1998), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17212] = 2,
    ACTIONS(2000), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1894), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17220] = 2,
    ACTIONS(2002), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1894), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17228] = 2,
    ACTIONS(2004), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1894), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17236] = 2,
    ACTIONS(2006), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1894), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17244] = 2,
    ACTIONS(2008), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1894), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17252] = 2,
    ACTIONS(2010), 1,
      sym_kw_precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17260] = 2,
    ACTIONS(2012), 1,
      sym_kw_collation,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17268] = 2,
    ACTIONS(2014), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17276] = 2,
    ACTIONS(2016), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17284] = 2,
    ACTIONS(2018), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1894), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17292] = 2,
    ACTIONS(2020), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17300] = 2,
    ACTIONS(2022), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17308] = 2,
    ACTIONS(2024), 1,
      sym_kw_package,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17316] = 2,
    ACTIONS(1275), 1,
      sym_kw_package,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17324] = 2,
    ACTIONS(2026), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17332] = 2,
    ACTIONS(2028), 1,
      sym_kw_replace,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17340] = 2,
    ACTIONS(2030), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17348] = 2,
    ACTIONS(2032), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17356] = 2,
    ACTIONS(2034), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [17364] = 2,
    ACTIONS(2036), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 64,
  [SMALL_STATE(11)] = 128,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 274,
  [SMALL_STATE(14)] = 347,
  [SMALL_STATE(15)] = 419,
  [SMALL_STATE(16)] = 491,
  [SMALL_STATE(17)] = 563,
  [SMALL_STATE(18)] = 635,
  [SMALL_STATE(19)] = 707,
  [SMALL_STATE(20)] = 779,
  [SMALL_STATE(21)] = 851,
  [SMALL_STATE(22)] = 923,
  [SMALL_STATE(23)] = 994,
  [SMALL_STATE(24)] = 1065,
  [SMALL_STATE(25)] = 1136,
  [SMALL_STATE(26)] = 1203,
  [SMALL_STATE(27)] = 1268,
  [SMALL_STATE(28)] = 1333,
  [SMALL_STATE(29)] = 1400,
  [SMALL_STATE(30)] = 1465,
  [SMALL_STATE(31)] = 1531,
  [SMALL_STATE(32)] = 1597,
  [SMALL_STATE(33)] = 1661,
  [SMALL_STATE(34)] = 1725,
  [SMALL_STATE(35)] = 1789,
  [SMALL_STATE(36)] = 1830,
  [SMALL_STATE(37)] = 1871,
  [SMALL_STATE(38)] = 1917,
  [SMALL_STATE(39)] = 1954,
  [SMALL_STATE(40)] = 2011,
  [SMALL_STATE(41)] = 2068,
  [SMALL_STATE(42)] = 2125,
  [SMALL_STATE(43)] = 2170,
  [SMALL_STATE(44)] = 2227,
  [SMALL_STATE(45)] = 2264,
  [SMALL_STATE(46)] = 2300,
  [SMALL_STATE(47)] = 2336,
  [SMALL_STATE(48)] = 2376,
  [SMALL_STATE(49)] = 2411,
  [SMALL_STATE(50)] = 2446,
  [SMALL_STATE(51)] = 2485,
  [SMALL_STATE(52)] = 2520,
  [SMALL_STATE(53)] = 2557,
  [SMALL_STATE(54)] = 2592,
  [SMALL_STATE(55)] = 2645,
  [SMALL_STATE(56)] = 2680,
  [SMALL_STATE(57)] = 2715,
  [SMALL_STATE(58)] = 2750,
  [SMALL_STATE(59)] = 2789,
  [SMALL_STATE(60)] = 2824,
  [SMALL_STATE(61)] = 2859,
  [SMALL_STATE(62)] = 2896,
  [SMALL_STATE(63)] = 2931,
  [SMALL_STATE(64)] = 2966,
  [SMALL_STATE(65)] = 3005,
  [SMALL_STATE(66)] = 3058,
  [SMALL_STATE(67)] = 3093,
  [SMALL_STATE(68)] = 3128,
  [SMALL_STATE(69)] = 3169,
  [SMALL_STATE(70)] = 3204,
  [SMALL_STATE(71)] = 3239,
  [SMALL_STATE(72)] = 3274,
  [SMALL_STATE(73)] = 3327,
  [SMALL_STATE(74)] = 3362,
  [SMALL_STATE(75)] = 3414,
  [SMALL_STATE(76)] = 3448,
  [SMALL_STATE(77)] = 3482,
  [SMALL_STATE(78)] = 3518,
  [SMALL_STATE(79)] = 3552,
  [SMALL_STATE(80)] = 3586,
  [SMALL_STATE(81)] = 3626,
  [SMALL_STATE(82)] = 3660,
  [SMALL_STATE(83)] = 3694,
  [SMALL_STATE(84)] = 3746,
  [SMALL_STATE(85)] = 3780,
  [SMALL_STATE(86)] = 3814,
  [SMALL_STATE(87)] = 3848,
  [SMALL_STATE(88)] = 3900,
  [SMALL_STATE(89)] = 3952,
  [SMALL_STATE(90)] = 4004,
  [SMALL_STATE(91)] = 4056,
  [SMALL_STATE(92)] = 4090,
  [SMALL_STATE(93)] = 4124,
  [SMALL_STATE(94)] = 4176,
  [SMALL_STATE(95)] = 4228,
  [SMALL_STATE(96)] = 4262,
  [SMALL_STATE(97)] = 4298,
  [SMALL_STATE(98)] = 4332,
  [SMALL_STATE(99)] = 4384,
  [SMALL_STATE(100)] = 4422,
  [SMALL_STATE(101)] = 4456,
  [SMALL_STATE(102)] = 4508,
  [SMALL_STATE(103)] = 4560,
  [SMALL_STATE(104)] = 4594,
  [SMALL_STATE(105)] = 4632,
  [SMALL_STATE(106)] = 4684,
  [SMALL_STATE(107)] = 4736,
  [SMALL_STATE(108)] = 4770,
  [SMALL_STATE(109)] = 4804,
  [SMALL_STATE(110)] = 4857,
  [SMALL_STATE(111)] = 4910,
  [SMALL_STATE(112)] = 4963,
  [SMALL_STATE(113)] = 5016,
  [SMALL_STATE(114)] = 5069,
  [SMALL_STATE(115)] = 5122,
  [SMALL_STATE(116)] = 5171,
  [SMALL_STATE(117)] = 5224,
  [SMALL_STATE(118)] = 5273,
  [SMALL_STATE(119)] = 5326,
  [SMALL_STATE(120)] = 5375,
  [SMALL_STATE(121)] = 5428,
  [SMALL_STATE(122)] = 5477,
  [SMALL_STATE(123)] = 5526,
  [SMALL_STATE(124)] = 5579,
  [SMALL_STATE(125)] = 5629,
  [SMALL_STATE(126)] = 5679,
  [SMALL_STATE(127)] = 5729,
  [SMALL_STATE(128)] = 5779,
  [SMALL_STATE(129)] = 5829,
  [SMALL_STATE(130)] = 5879,
  [SMALL_STATE(131)] = 5929,
  [SMALL_STATE(132)] = 5979,
  [SMALL_STATE(133)] = 6029,
  [SMALL_STATE(134)] = 6079,
  [SMALL_STATE(135)] = 6131,
  [SMALL_STATE(136)] = 6181,
  [SMALL_STATE(137)] = 6231,
  [SMALL_STATE(138)] = 6281,
  [SMALL_STATE(139)] = 6331,
  [SMALL_STATE(140)] = 6383,
  [SMALL_STATE(141)] = 6433,
  [SMALL_STATE(142)] = 6483,
  [SMALL_STATE(143)] = 6535,
  [SMALL_STATE(144)] = 6585,
  [SMALL_STATE(145)] = 6635,
  [SMALL_STATE(146)] = 6685,
  [SMALL_STATE(147)] = 6737,
  [SMALL_STATE(148)] = 6787,
  [SMALL_STATE(149)] = 6837,
  [SMALL_STATE(150)] = 6887,
  [SMALL_STATE(151)] = 6937,
  [SMALL_STATE(152)] = 6987,
  [SMALL_STATE(153)] = 7037,
  [SMALL_STATE(154)] = 7087,
  [SMALL_STATE(155)] = 7137,
  [SMALL_STATE(156)] = 7187,
  [SMALL_STATE(157)] = 7239,
  [SMALL_STATE(158)] = 7289,
  [SMALL_STATE(159)] = 7339,
  [SMALL_STATE(160)] = 7389,
  [SMALL_STATE(161)] = 7439,
  [SMALL_STATE(162)] = 7489,
  [SMALL_STATE(163)] = 7528,
  [SMALL_STATE(164)] = 7558,
  [SMALL_STATE(165)] = 7588,
  [SMALL_STATE(166)] = 7639,
  [SMALL_STATE(167)] = 7690,
  [SMALL_STATE(168)] = 7723,
  [SMALL_STATE(169)] = 7774,
  [SMALL_STATE(170)] = 7811,
  [SMALL_STATE(171)] = 7862,
  [SMALL_STATE(172)] = 7913,
  [SMALL_STATE(173)] = 7964,
  [SMALL_STATE(174)] = 8015,
  [SMALL_STATE(175)] = 8066,
  [SMALL_STATE(176)] = 8117,
  [SMALL_STATE(177)] = 8153,
  [SMALL_STATE(178)] = 8183,
  [SMALL_STATE(179)] = 8225,
  [SMALL_STATE(180)] = 8252,
  [SMALL_STATE(181)] = 8279,
  [SMALL_STATE(182)] = 8306,
  [SMALL_STATE(183)] = 8333,
  [SMALL_STATE(184)] = 8360,
  [SMALL_STATE(185)] = 8387,
  [SMALL_STATE(186)] = 8418,
  [SMALL_STATE(187)] = 8445,
  [SMALL_STATE(188)] = 8472,
  [SMALL_STATE(189)] = 8499,
  [SMALL_STATE(190)] = 8526,
  [SMALL_STATE(191)] = 8553,
  [SMALL_STATE(192)] = 8580,
  [SMALL_STATE(193)] = 8607,
  [SMALL_STATE(194)] = 8634,
  [SMALL_STATE(195)] = 8665,
  [SMALL_STATE(196)] = 8694,
  [SMALL_STATE(197)] = 8721,
  [SMALL_STATE(198)] = 8752,
  [SMALL_STATE(199)] = 8785,
  [SMALL_STATE(200)] = 8824,
  [SMALL_STATE(201)] = 8851,
  [SMALL_STATE(202)] = 8879,
  [SMALL_STATE(203)] = 8904,
  [SMALL_STATE(204)] = 8929,
  [SMALL_STATE(205)] = 8954,
  [SMALL_STATE(206)] = 8981,
  [SMALL_STATE(207)] = 9008,
  [SMALL_STATE(208)] = 9033,
  [SMALL_STATE(209)] = 9058,
  [SMALL_STATE(210)] = 9083,
  [SMALL_STATE(211)] = 9108,
  [SMALL_STATE(212)] = 9133,
  [SMALL_STATE(213)] = 9158,
  [SMALL_STATE(214)] = 9183,
  [SMALL_STATE(215)] = 9212,
  [SMALL_STATE(216)] = 9239,
  [SMALL_STATE(217)] = 9264,
  [SMALL_STATE(218)] = 9289,
  [SMALL_STATE(219)] = 9316,
  [SMALL_STATE(220)] = 9341,
  [SMALL_STATE(221)] = 9366,
  [SMALL_STATE(222)] = 9391,
  [SMALL_STATE(223)] = 9416,
  [SMALL_STATE(224)] = 9445,
  [SMALL_STATE(225)] = 9477,
  [SMALL_STATE(226)] = 9503,
  [SMALL_STATE(227)] = 9537,
  [SMALL_STATE(228)] = 9569,
  [SMALL_STATE(229)] = 9603,
  [SMALL_STATE(230)] = 9629,
  [SMALL_STATE(231)] = 9663,
  [SMALL_STATE(232)] = 9697,
  [SMALL_STATE(233)] = 9731,
  [SMALL_STATE(234)] = 9760,
  [SMALL_STATE(235)] = 9797,
  [SMALL_STATE(236)] = 9834,
  [SMALL_STATE(237)] = 9871,
  [SMALL_STATE(238)] = 9906,
  [SMALL_STATE(239)] = 9943,
  [SMALL_STATE(240)] = 9977,
  [SMALL_STATE(241)] = 10011,
  [SMALL_STATE(242)] = 10045,
  [SMALL_STATE(243)] = 10069,
  [SMALL_STATE(244)] = 10093,
  [SMALL_STATE(245)] = 10117,
  [SMALL_STATE(246)] = 10141,
  [SMALL_STATE(247)] = 10168,
  [SMALL_STATE(248)] = 10195,
  [SMALL_STATE(249)] = 10216,
  [SMALL_STATE(250)] = 10233,
  [SMALL_STATE(251)] = 10260,
  [SMALL_STATE(252)] = 10281,
  [SMALL_STATE(253)] = 10298,
  [SMALL_STATE(254)] = 10315,
  [SMALL_STATE(255)] = 10332,
  [SMALL_STATE(256)] = 10353,
  [SMALL_STATE(257)] = 10374,
  [SMALL_STATE(258)] = 10395,
  [SMALL_STATE(259)] = 10416,
  [SMALL_STATE(260)] = 10443,
  [SMALL_STATE(261)] = 10470,
  [SMALL_STATE(262)] = 10491,
  [SMALL_STATE(263)] = 10518,
  [SMALL_STATE(264)] = 10539,
  [SMALL_STATE(265)] = 10560,
  [SMALL_STATE(266)] = 10581,
  [SMALL_STATE(267)] = 10608,
  [SMALL_STATE(268)] = 10627,
  [SMALL_STATE(269)] = 10646,
  [SMALL_STATE(270)] = 10667,
  [SMALL_STATE(271)] = 10688,
  [SMALL_STATE(272)] = 10715,
  [SMALL_STATE(273)] = 10742,
  [SMALL_STATE(274)] = 10769,
  [SMALL_STATE(275)] = 10790,
  [SMALL_STATE(276)] = 10817,
  [SMALL_STATE(277)] = 10844,
  [SMALL_STATE(278)] = 10863,
  [SMALL_STATE(279)] = 10884,
  [SMALL_STATE(280)] = 10904,
  [SMALL_STATE(281)] = 10928,
  [SMALL_STATE(282)] = 10952,
  [SMALL_STATE(283)] = 10976,
  [SMALL_STATE(284)] = 10998,
  [SMALL_STATE(285)] = 11018,
  [SMALL_STATE(286)] = 11036,
  [SMALL_STATE(287)] = 11054,
  [SMALL_STATE(288)] = 11072,
  [SMALL_STATE(289)] = 11090,
  [SMALL_STATE(290)] = 11114,
  [SMALL_STATE(291)] = 11134,
  [SMALL_STATE(292)] = 11152,
  [SMALL_STATE(293)] = 11170,
  [SMALL_STATE(294)] = 11188,
  [SMALL_STATE(295)] = 11206,
  [SMALL_STATE(296)] = 11223,
  [SMALL_STATE(297)] = 11244,
  [SMALL_STATE(298)] = 11265,
  [SMALL_STATE(299)] = 11286,
  [SMALL_STATE(300)] = 11299,
  [SMALL_STATE(301)] = 11320,
  [SMALL_STATE(302)] = 11337,
  [SMALL_STATE(303)] = 11354,
  [SMALL_STATE(304)] = 11371,
  [SMALL_STATE(305)] = 11392,
  [SMALL_STATE(306)] = 11413,
  [SMALL_STATE(307)] = 11434,
  [SMALL_STATE(308)] = 11451,
  [SMALL_STATE(309)] = 11472,
  [SMALL_STATE(310)] = 11493,
  [SMALL_STATE(311)] = 11506,
  [SMALL_STATE(312)] = 11527,
  [SMALL_STATE(313)] = 11545,
  [SMALL_STATE(314)] = 11557,
  [SMALL_STATE(315)] = 11575,
  [SMALL_STATE(316)] = 11593,
  [SMALL_STATE(317)] = 11609,
  [SMALL_STATE(318)] = 11627,
  [SMALL_STATE(319)] = 11645,
  [SMALL_STATE(320)] = 11663,
  [SMALL_STATE(321)] = 11681,
  [SMALL_STATE(322)] = 11703,
  [SMALL_STATE(323)] = 11721,
  [SMALL_STATE(324)] = 11743,
  [SMALL_STATE(325)] = 11757,
  [SMALL_STATE(326)] = 11781,
  [SMALL_STATE(327)] = 11799,
  [SMALL_STATE(328)] = 11817,
  [SMALL_STATE(329)] = 11839,
  [SMALL_STATE(330)] = 11857,
  [SMALL_STATE(331)] = 11881,
  [SMALL_STATE(332)] = 11893,
  [SMALL_STATE(333)] = 11913,
  [SMALL_STATE(334)] = 11925,
  [SMALL_STATE(335)] = 11943,
  [SMALL_STATE(336)] = 11955,
  [SMALL_STATE(337)] = 11967,
  [SMALL_STATE(338)] = 11985,
  [SMALL_STATE(339)] = 12009,
  [SMALL_STATE(340)] = 12021,
  [SMALL_STATE(341)] = 12041,
  [SMALL_STATE(342)] = 12059,
  [SMALL_STATE(343)] = 12076,
  [SMALL_STATE(344)] = 12091,
  [SMALL_STATE(345)] = 12110,
  [SMALL_STATE(346)] = 12129,
  [SMALL_STATE(347)] = 12146,
  [SMALL_STATE(348)] = 12163,
  [SMALL_STATE(349)] = 12180,
  [SMALL_STATE(350)] = 12197,
  [SMALL_STATE(351)] = 12214,
  [SMALL_STATE(352)] = 12233,
  [SMALL_STATE(353)] = 12250,
  [SMALL_STATE(354)] = 12269,
  [SMALL_STATE(355)] = 12284,
  [SMALL_STATE(356)] = 12299,
  [SMALL_STATE(357)] = 12318,
  [SMALL_STATE(358)] = 12337,
  [SMALL_STATE(359)] = 12352,
  [SMALL_STATE(360)] = 12367,
  [SMALL_STATE(361)] = 12380,
  [SMALL_STATE(362)] = 12393,
  [SMALL_STATE(363)] = 12408,
  [SMALL_STATE(364)] = 12427,
  [SMALL_STATE(365)] = 12446,
  [SMALL_STATE(366)] = 12465,
  [SMALL_STATE(367)] = 12480,
  [SMALL_STATE(368)] = 12495,
  [SMALL_STATE(369)] = 12514,
  [SMALL_STATE(370)] = 12529,
  [SMALL_STATE(371)] = 12548,
  [SMALL_STATE(372)] = 12563,
  [SMALL_STATE(373)] = 12578,
  [SMALL_STATE(374)] = 12593,
  [SMALL_STATE(375)] = 12608,
  [SMALL_STATE(376)] = 12623,
  [SMALL_STATE(377)] = 12638,
  [SMALL_STATE(378)] = 12653,
  [SMALL_STATE(379)] = 12668,
  [SMALL_STATE(380)] = 12683,
  [SMALL_STATE(381)] = 12698,
  [SMALL_STATE(382)] = 12713,
  [SMALL_STATE(383)] = 12728,
  [SMALL_STATE(384)] = 12743,
  [SMALL_STATE(385)] = 12758,
  [SMALL_STATE(386)] = 12773,
  [SMALL_STATE(387)] = 12788,
  [SMALL_STATE(388)] = 12803,
  [SMALL_STATE(389)] = 12818,
  [SMALL_STATE(390)] = 12833,
  [SMALL_STATE(391)] = 12848,
  [SMALL_STATE(392)] = 12863,
  [SMALL_STATE(393)] = 12878,
  [SMALL_STATE(394)] = 12893,
  [SMALL_STATE(395)] = 12908,
  [SMALL_STATE(396)] = 12923,
  [SMALL_STATE(397)] = 12938,
  [SMALL_STATE(398)] = 12953,
  [SMALL_STATE(399)] = 12968,
  [SMALL_STATE(400)] = 12983,
  [SMALL_STATE(401)] = 12998,
  [SMALL_STATE(402)] = 13017,
  [SMALL_STATE(403)] = 13032,
  [SMALL_STATE(404)] = 13047,
  [SMALL_STATE(405)] = 13062,
  [SMALL_STATE(406)] = 13077,
  [SMALL_STATE(407)] = 13092,
  [SMALL_STATE(408)] = 13107,
  [SMALL_STATE(409)] = 13122,
  [SMALL_STATE(410)] = 13141,
  [SMALL_STATE(411)] = 13160,
  [SMALL_STATE(412)] = 13172,
  [SMALL_STATE(413)] = 13184,
  [SMALL_STATE(414)] = 13196,
  [SMALL_STATE(415)] = 13208,
  [SMALL_STATE(416)] = 13220,
  [SMALL_STATE(417)] = 13236,
  [SMALL_STATE(418)] = 13248,
  [SMALL_STATE(419)] = 13260,
  [SMALL_STATE(420)] = 13272,
  [SMALL_STATE(421)] = 13286,
  [SMALL_STATE(422)] = 13306,
  [SMALL_STATE(423)] = 13318,
  [SMALL_STATE(424)] = 13334,
  [SMALL_STATE(425)] = 13354,
  [SMALL_STATE(426)] = 13366,
  [SMALL_STATE(427)] = 13378,
  [SMALL_STATE(428)] = 13398,
  [SMALL_STATE(429)] = 13418,
  [SMALL_STATE(430)] = 13430,
  [SMALL_STATE(431)] = 13442,
  [SMALL_STATE(432)] = 13454,
  [SMALL_STATE(433)] = 13466,
  [SMALL_STATE(434)] = 13486,
  [SMALL_STATE(435)] = 13506,
  [SMALL_STATE(436)] = 13518,
  [SMALL_STATE(437)] = 13530,
  [SMALL_STATE(438)] = 13550,
  [SMALL_STATE(439)] = 13570,
  [SMALL_STATE(440)] = 13590,
  [SMALL_STATE(441)] = 13602,
  [SMALL_STATE(442)] = 13614,
  [SMALL_STATE(443)] = 13626,
  [SMALL_STATE(444)] = 13638,
  [SMALL_STATE(445)] = 13650,
  [SMALL_STATE(446)] = 13662,
  [SMALL_STATE(447)] = 13674,
  [SMALL_STATE(448)] = 13686,
  [SMALL_STATE(449)] = 13698,
  [SMALL_STATE(450)] = 13718,
  [SMALL_STATE(451)] = 13730,
  [SMALL_STATE(452)] = 13742,
  [SMALL_STATE(453)] = 13754,
  [SMALL_STATE(454)] = 13766,
  [SMALL_STATE(455)] = 13778,
  [SMALL_STATE(456)] = 13790,
  [SMALL_STATE(457)] = 13806,
  [SMALL_STATE(458)] = 13826,
  [SMALL_STATE(459)] = 13838,
  [SMALL_STATE(460)] = 13850,
  [SMALL_STATE(461)] = 13862,
  [SMALL_STATE(462)] = 13874,
  [SMALL_STATE(463)] = 13886,
  [SMALL_STATE(464)] = 13898,
  [SMALL_STATE(465)] = 13910,
  [SMALL_STATE(466)] = 13922,
  [SMALL_STATE(467)] = 13934,
  [SMALL_STATE(468)] = 13946,
  [SMALL_STATE(469)] = 13958,
  [SMALL_STATE(470)] = 13970,
  [SMALL_STATE(471)] = 13982,
  [SMALL_STATE(472)] = 13994,
  [SMALL_STATE(473)] = 14014,
  [SMALL_STATE(474)] = 14026,
  [SMALL_STATE(475)] = 14038,
  [SMALL_STATE(476)] = 14058,
  [SMALL_STATE(477)] = 14070,
  [SMALL_STATE(478)] = 14081,
  [SMALL_STATE(479)] = 14090,
  [SMALL_STATE(480)] = 14101,
  [SMALL_STATE(481)] = 14112,
  [SMALL_STATE(482)] = 14123,
  [SMALL_STATE(483)] = 14134,
  [SMALL_STATE(484)] = 14145,
  [SMALL_STATE(485)] = 14156,
  [SMALL_STATE(486)] = 14167,
  [SMALL_STATE(487)] = 14178,
  [SMALL_STATE(488)] = 14189,
  [SMALL_STATE(489)] = 14200,
  [SMALL_STATE(490)] = 14211,
  [SMALL_STATE(491)] = 14222,
  [SMALL_STATE(492)] = 14233,
  [SMALL_STATE(493)] = 14250,
  [SMALL_STATE(494)] = 14263,
  [SMALL_STATE(495)] = 14274,
  [SMALL_STATE(496)] = 14283,
  [SMALL_STATE(497)] = 14294,
  [SMALL_STATE(498)] = 14305,
  [SMALL_STATE(499)] = 14316,
  [SMALL_STATE(500)] = 14327,
  [SMALL_STATE(501)] = 14338,
  [SMALL_STATE(502)] = 14349,
  [SMALL_STATE(503)] = 14360,
  [SMALL_STATE(504)] = 14377,
  [SMALL_STATE(505)] = 14388,
  [SMALL_STATE(506)] = 14399,
  [SMALL_STATE(507)] = 14410,
  [SMALL_STATE(508)] = 14421,
  [SMALL_STATE(509)] = 14432,
  [SMALL_STATE(510)] = 14443,
  [SMALL_STATE(511)] = 14454,
  [SMALL_STATE(512)] = 14465,
  [SMALL_STATE(513)] = 14476,
  [SMALL_STATE(514)] = 14487,
  [SMALL_STATE(515)] = 14498,
  [SMALL_STATE(516)] = 14509,
  [SMALL_STATE(517)] = 14520,
  [SMALL_STATE(518)] = 14531,
  [SMALL_STATE(519)] = 14542,
  [SMALL_STATE(520)] = 14559,
  [SMALL_STATE(521)] = 14570,
  [SMALL_STATE(522)] = 14585,
  [SMALL_STATE(523)] = 14596,
  [SMALL_STATE(524)] = 14607,
  [SMALL_STATE(525)] = 14618,
  [SMALL_STATE(526)] = 14629,
  [SMALL_STATE(527)] = 14640,
  [SMALL_STATE(528)] = 14649,
  [SMALL_STATE(529)] = 14658,
  [SMALL_STATE(530)] = 14675,
  [SMALL_STATE(531)] = 14692,
  [SMALL_STATE(532)] = 14701,
  [SMALL_STATE(533)] = 14714,
  [SMALL_STATE(534)] = 14731,
  [SMALL_STATE(535)] = 14740,
  [SMALL_STATE(536)] = 14757,
  [SMALL_STATE(537)] = 14766,
  [SMALL_STATE(538)] = 14775,
  [SMALL_STATE(539)] = 14788,
  [SMALL_STATE(540)] = 14799,
  [SMALL_STATE(541)] = 14812,
  [SMALL_STATE(542)] = 14825,
  [SMALL_STATE(543)] = 14838,
  [SMALL_STATE(544)] = 14847,
  [SMALL_STATE(545)] = 14862,
  [SMALL_STATE(546)] = 14873,
  [SMALL_STATE(547)] = 14884,
  [SMALL_STATE(548)] = 14901,
  [SMALL_STATE(549)] = 14918,
  [SMALL_STATE(550)] = 14935,
  [SMALL_STATE(551)] = 14952,
  [SMALL_STATE(552)] = 14961,
  [SMALL_STATE(553)] = 14974,
  [SMALL_STATE(554)] = 14983,
  [SMALL_STATE(555)] = 14992,
  [SMALL_STATE(556)] = 15005,
  [SMALL_STATE(557)] = 15018,
  [SMALL_STATE(558)] = 15027,
  [SMALL_STATE(559)] = 15036,
  [SMALL_STATE(560)] = 15047,
  [SMALL_STATE(561)] = 15064,
  [SMALL_STATE(562)] = 15077,
  [SMALL_STATE(563)] = 15088,
  [SMALL_STATE(564)] = 15105,
  [SMALL_STATE(565)] = 15118,
  [SMALL_STATE(566)] = 15133,
  [SMALL_STATE(567)] = 15146,
  [SMALL_STATE(568)] = 15159,
  [SMALL_STATE(569)] = 15176,
  [SMALL_STATE(570)] = 15193,
  [SMALL_STATE(571)] = 15206,
  [SMALL_STATE(572)] = 15223,
  [SMALL_STATE(573)] = 15232,
  [SMALL_STATE(574)] = 15249,
  [SMALL_STATE(575)] = 15262,
  [SMALL_STATE(576)] = 15279,
  [SMALL_STATE(577)] = 15292,
  [SMALL_STATE(578)] = 15309,
  [SMALL_STATE(579)] = 15320,
  [SMALL_STATE(580)] = 15337,
  [SMALL_STATE(581)] = 15346,
  [SMALL_STATE(582)] = 15363,
  [SMALL_STATE(583)] = 15378,
  [SMALL_STATE(584)] = 15389,
  [SMALL_STATE(585)] = 15399,
  [SMALL_STATE(586)] = 15413,
  [SMALL_STATE(587)] = 15427,
  [SMALL_STATE(588)] = 15441,
  [SMALL_STATE(589)] = 15455,
  [SMALL_STATE(590)] = 15465,
  [SMALL_STATE(591)] = 15475,
  [SMALL_STATE(592)] = 15485,
  [SMALL_STATE(593)] = 15499,
  [SMALL_STATE(594)] = 15513,
  [SMALL_STATE(595)] = 15521,
  [SMALL_STATE(596)] = 15533,
  [SMALL_STATE(597)] = 15545,
  [SMALL_STATE(598)] = 15559,
  [SMALL_STATE(599)] = 15573,
  [SMALL_STATE(600)] = 15585,
  [SMALL_STATE(601)] = 15599,
  [SMALL_STATE(602)] = 15613,
  [SMALL_STATE(603)] = 15627,
  [SMALL_STATE(604)] = 15641,
  [SMALL_STATE(605)] = 15655,
  [SMALL_STATE(606)] = 15669,
  [SMALL_STATE(607)] = 15683,
  [SMALL_STATE(608)] = 15697,
  [SMALL_STATE(609)] = 15707,
  [SMALL_STATE(610)] = 15721,
  [SMALL_STATE(611)] = 15731,
  [SMALL_STATE(612)] = 15742,
  [SMALL_STATE(613)] = 15753,
  [SMALL_STATE(614)] = 15764,
  [SMALL_STATE(615)] = 15773,
  [SMALL_STATE(616)] = 15784,
  [SMALL_STATE(617)] = 15793,
  [SMALL_STATE(618)] = 15804,
  [SMALL_STATE(619)] = 15815,
  [SMALL_STATE(620)] = 15824,
  [SMALL_STATE(621)] = 15835,
  [SMALL_STATE(622)] = 15846,
  [SMALL_STATE(623)] = 15857,
  [SMALL_STATE(624)] = 15868,
  [SMALL_STATE(625)] = 15879,
  [SMALL_STATE(626)] = 15890,
  [SMALL_STATE(627)] = 15901,
  [SMALL_STATE(628)] = 15912,
  [SMALL_STATE(629)] = 15923,
  [SMALL_STATE(630)] = 15934,
  [SMALL_STATE(631)] = 15945,
  [SMALL_STATE(632)] = 15956,
  [SMALL_STATE(633)] = 15967,
  [SMALL_STATE(634)] = 15978,
  [SMALL_STATE(635)] = 15989,
  [SMALL_STATE(636)] = 16000,
  [SMALL_STATE(637)] = 16011,
  [SMALL_STATE(638)] = 16022,
  [SMALL_STATE(639)] = 16033,
  [SMALL_STATE(640)] = 16042,
  [SMALL_STATE(641)] = 16053,
  [SMALL_STATE(642)] = 16064,
  [SMALL_STATE(643)] = 16075,
  [SMALL_STATE(644)] = 16086,
  [SMALL_STATE(645)] = 16097,
  [SMALL_STATE(646)] = 16106,
  [SMALL_STATE(647)] = 16117,
  [SMALL_STATE(648)] = 16128,
  [SMALL_STATE(649)] = 16139,
  [SMALL_STATE(650)] = 16150,
  [SMALL_STATE(651)] = 16161,
  [SMALL_STATE(652)] = 16172,
  [SMALL_STATE(653)] = 16183,
  [SMALL_STATE(654)] = 16194,
  [SMALL_STATE(655)] = 16205,
  [SMALL_STATE(656)] = 16216,
  [SMALL_STATE(657)] = 16227,
  [SMALL_STATE(658)] = 16238,
  [SMALL_STATE(659)] = 16249,
  [SMALL_STATE(660)] = 16260,
  [SMALL_STATE(661)] = 16271,
  [SMALL_STATE(662)] = 16282,
  [SMALL_STATE(663)] = 16293,
  [SMALL_STATE(664)] = 16304,
  [SMALL_STATE(665)] = 16315,
  [SMALL_STATE(666)] = 16324,
  [SMALL_STATE(667)] = 16332,
  [SMALL_STATE(668)] = 16340,
  [SMALL_STATE(669)] = 16348,
  [SMALL_STATE(670)] = 16356,
  [SMALL_STATE(671)] = 16364,
  [SMALL_STATE(672)] = 16372,
  [SMALL_STATE(673)] = 16380,
  [SMALL_STATE(674)] = 16388,
  [SMALL_STATE(675)] = 16396,
  [SMALL_STATE(676)] = 16404,
  [SMALL_STATE(677)] = 16412,
  [SMALL_STATE(678)] = 16420,
  [SMALL_STATE(679)] = 16428,
  [SMALL_STATE(680)] = 16436,
  [SMALL_STATE(681)] = 16444,
  [SMALL_STATE(682)] = 16452,
  [SMALL_STATE(683)] = 16460,
  [SMALL_STATE(684)] = 16468,
  [SMALL_STATE(685)] = 16476,
  [SMALL_STATE(686)] = 16484,
  [SMALL_STATE(687)] = 16492,
  [SMALL_STATE(688)] = 16500,
  [SMALL_STATE(689)] = 16508,
  [SMALL_STATE(690)] = 16516,
  [SMALL_STATE(691)] = 16524,
  [SMALL_STATE(692)] = 16532,
  [SMALL_STATE(693)] = 16540,
  [SMALL_STATE(694)] = 16548,
  [SMALL_STATE(695)] = 16556,
  [SMALL_STATE(696)] = 16564,
  [SMALL_STATE(697)] = 16572,
  [SMALL_STATE(698)] = 16580,
  [SMALL_STATE(699)] = 16588,
  [SMALL_STATE(700)] = 16596,
  [SMALL_STATE(701)] = 16604,
  [SMALL_STATE(702)] = 16612,
  [SMALL_STATE(703)] = 16620,
  [SMALL_STATE(704)] = 16628,
  [SMALL_STATE(705)] = 16636,
  [SMALL_STATE(706)] = 16644,
  [SMALL_STATE(707)] = 16652,
  [SMALL_STATE(708)] = 16660,
  [SMALL_STATE(709)] = 16668,
  [SMALL_STATE(710)] = 16676,
  [SMALL_STATE(711)] = 16684,
  [SMALL_STATE(712)] = 16692,
  [SMALL_STATE(713)] = 16700,
  [SMALL_STATE(714)] = 16708,
  [SMALL_STATE(715)] = 16716,
  [SMALL_STATE(716)] = 16724,
  [SMALL_STATE(717)] = 16732,
  [SMALL_STATE(718)] = 16740,
  [SMALL_STATE(719)] = 16748,
  [SMALL_STATE(720)] = 16756,
  [SMALL_STATE(721)] = 16764,
  [SMALL_STATE(722)] = 16772,
  [SMALL_STATE(723)] = 16780,
  [SMALL_STATE(724)] = 16788,
  [SMALL_STATE(725)] = 16796,
  [SMALL_STATE(726)] = 16804,
  [SMALL_STATE(727)] = 16812,
  [SMALL_STATE(728)] = 16820,
  [SMALL_STATE(729)] = 16828,
  [SMALL_STATE(730)] = 16836,
  [SMALL_STATE(731)] = 16844,
  [SMALL_STATE(732)] = 16852,
  [SMALL_STATE(733)] = 16860,
  [SMALL_STATE(734)] = 16868,
  [SMALL_STATE(735)] = 16876,
  [SMALL_STATE(736)] = 16884,
  [SMALL_STATE(737)] = 16892,
  [SMALL_STATE(738)] = 16900,
  [SMALL_STATE(739)] = 16908,
  [SMALL_STATE(740)] = 16916,
  [SMALL_STATE(741)] = 16924,
  [SMALL_STATE(742)] = 16932,
  [SMALL_STATE(743)] = 16940,
  [SMALL_STATE(744)] = 16948,
  [SMALL_STATE(745)] = 16956,
  [SMALL_STATE(746)] = 16964,
  [SMALL_STATE(747)] = 16972,
  [SMALL_STATE(748)] = 16980,
  [SMALL_STATE(749)] = 16988,
  [SMALL_STATE(750)] = 16996,
  [SMALL_STATE(751)] = 17004,
  [SMALL_STATE(752)] = 17012,
  [SMALL_STATE(753)] = 17020,
  [SMALL_STATE(754)] = 17028,
  [SMALL_STATE(755)] = 17036,
  [SMALL_STATE(756)] = 17044,
  [SMALL_STATE(757)] = 17052,
  [SMALL_STATE(758)] = 17060,
  [SMALL_STATE(759)] = 17068,
  [SMALL_STATE(760)] = 17076,
  [SMALL_STATE(761)] = 17084,
  [SMALL_STATE(762)] = 17092,
  [SMALL_STATE(763)] = 17100,
  [SMALL_STATE(764)] = 17108,
  [SMALL_STATE(765)] = 17116,
  [SMALL_STATE(766)] = 17124,
  [SMALL_STATE(767)] = 17132,
  [SMALL_STATE(768)] = 17140,
  [SMALL_STATE(769)] = 17148,
  [SMALL_STATE(770)] = 17156,
  [SMALL_STATE(771)] = 17164,
  [SMALL_STATE(772)] = 17172,
  [SMALL_STATE(773)] = 17180,
  [SMALL_STATE(774)] = 17188,
  [SMALL_STATE(775)] = 17196,
  [SMALL_STATE(776)] = 17204,
  [SMALL_STATE(777)] = 17212,
  [SMALL_STATE(778)] = 17220,
  [SMALL_STATE(779)] = 17228,
  [SMALL_STATE(780)] = 17236,
  [SMALL_STATE(781)] = 17244,
  [SMALL_STATE(782)] = 17252,
  [SMALL_STATE(783)] = 17260,
  [SMALL_STATE(784)] = 17268,
  [SMALL_STATE(785)] = 17276,
  [SMALL_STATE(786)] = 17284,
  [SMALL_STATE(787)] = 17292,
  [SMALL_STATE(788)] = 17300,
  [SMALL_STATE(789)] = 17308,
  [SMALL_STATE(790)] = 17316,
  [SMALL_STATE(791)] = 17324,
  [SMALL_STATE(792)] = 17332,
  [SMALL_STATE(793)] = 17340,
  [SMALL_STATE(794)] = 17348,
  [SMALL_STATE(795)] = 17356,
  [SMALL_STATE(796)] = 17364,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(138),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_in, 2),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(44),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(781),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(66),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(156),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(59),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(52),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(138),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(44),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(781),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(66),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(156),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(59),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(52),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(138),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_in, 3),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(44),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(781),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(66),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(156),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(59),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(52),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(46),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(779),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(146),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(145),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(103),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(95),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(96),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(145),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(46),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(779),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(103),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(146),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(95),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(96),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(145),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(46),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(779),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(103),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(146),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(95),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(96),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(268),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(268),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(585),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(664),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(151),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(112),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(660),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(268),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(268),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 4),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(585),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(664),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(151),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(112),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(660),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(268),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(268),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 5),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(585),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(664),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(151),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(112),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(660),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT_REPEAT(70),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(268),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(268),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(585),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(664),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(151),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(112),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(660),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(586),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(612),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(147),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(114),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(655),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT_REPEAT(85),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(586),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(612),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(147),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(114),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(655),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(586),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(612),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(147),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(114),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(655),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(586),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(612),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(147),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(114),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(655),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 1, .production_id = 11),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 1, .production_id = 11), SHIFT(168),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_boolean_ref, 1, .production_id = 11),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(593),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(659),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(132),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(123),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(657),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(593),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(659),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(132),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(123),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(657),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(593),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(659),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(132),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(123),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(657),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 1, .production_id = 11), SHIFT(172),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_expression, 2),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_expression, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 3, .production_id = 12),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 3, .production_id = 12), SHIFT(168),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_boolean_ref, 3, .production_id = 12),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression, 2),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_like, 3),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_like, 3),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 3, .production_id = 12), SHIFT(172),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_like, 2),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_like, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_predicate, 1),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_conditional_predicate, 1), SHIFT(796),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_predicate, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(587),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(623),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(161),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(118),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(625),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 2, .production_id = 11),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_boolean_ref, 2, .production_id = 11),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_null, 2),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_null, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 2), REDUCE(sym_expression, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression, 2), REDUCE(sym_expression, 3),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 4, .production_id = 12),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_boolean_ref, 4, .production_id = 12),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1), SHIFT(57),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_not_null, 3),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_not_null, 3),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_boolean, 1), REDUCE(sym__expression_boolean, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_boolean, 2),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression_boolean, 1), REDUCE(sym__expression_boolean, 2),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_boolean, 2),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(587),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(623),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(161),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(118),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(625),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_boolean, 1),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_boolean, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_named_cursor, 3),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_named_cursor, 3),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1), REDUCE(sym_expression, 2),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 2), SHIFT(58),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression, 1), REDUCE(sym_expression, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_collection, 6),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_collection, 6),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_predicate, 6),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_predicate, 6),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(587),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(623),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(161),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(118),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(625),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1), SHIFT(82),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 2), SHIFT(104),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(604),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(148),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(111),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_conditional_predicate, 1), SHIFT(795),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(604),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(148),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(111),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(604),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(148),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(111),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [938] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(277),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(780),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(294),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(287),
  [950] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(285),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1), SHIFT(183),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 2), SHIFT(194),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 2),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1), SHIFT(210),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 2), SHIFT(218),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [989] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [992] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(541),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(492),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compile_clause_repeat1, 2),
  [1012] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compile_clause_repeat1, 2), SHIFT_REPEAT(36),
  [1015] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compile_clause_repeat1, 2), SHIFT_REPEAT(723),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2),
  [1040] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(291),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(747),
  [1046] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(619),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 3, .production_id = 1),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 3, .production_id = 1),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 3, .production_id = 1),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 3, .production_id = 1),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 1),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_name, 1),
  [1065] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_value, 1),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compiler_parameter_clause, 3, .production_id = 5),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compiler_parameter_clause, 3, .production_id = 5),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 5, .production_id = 2),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_number, 1),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_number, 1),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 5, .production_id = 2),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 1),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 5, .production_id = 2),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 2),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 5, .production_id = 2),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 1),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 2),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 2),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relational_operator, 1),
  [1095] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relational_operator, 1),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 1),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(178),
  [1104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(331),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 2),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 1),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 2),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 2),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nchar, 1),
  [1119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_nchar, 1),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_char, 1),
  [1127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_char, 1),
  [1129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(783),
  [1132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(616),
  [1135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(771),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1),
  [1148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 1),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element_positional, 1),
  [1152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_element_positional, 1),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 1),
  [1158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_timestamp, 1),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element, 1),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_element, 1),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element_named, 3),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_element_named, 3),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 2, .production_id = 7),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 2, .production_id = 7),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_float, 1),
  [1178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_datatypes_float, 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 5),
  [1182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_interval_day, 5),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_number, 1),
  [1188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_datatypes_number, 1),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 4),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_interval_day, 4),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element, 2),
  [1196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_element, 2),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 1),
  [1200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 1),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_datatypes, 1),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtype_datatypes, 1),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rowid_datatypes_urowid, 1),
  [1212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rowid_datatypes_urowid, 1),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 3, .production_id = 10),
  [1216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 3, .production_id = 10),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 5),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size, 3),
  [1238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__size, 3),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_function_declaration_repeat1, 2),
  [1244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_function_declaration_repeat1, 2), SHIFT_REPEAT(474),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 1),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 1),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_editionable_noneditionable, 1),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_element_in, 1),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_declaration_element_in, 1),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reuse_settings, 2),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 2),
  [1287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_timestamp, 2),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [1293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(10),
  [1296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(767),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_element_in, 2),
  [1301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_declaration_element_in, 2),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_year, 4),
  [1305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_interval_year, 4),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 6),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_interval_day, 6),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 6),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_timestamp, 6),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_precision_scale, 5),
  [1331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__size_precision_scale, 5),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_large_object_datatypes, 1),
  [1335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_large_object_datatypes, 1),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rowid_datatypes, 1),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rowid_datatypes, 1),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_datatypes, 1),
  [1343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_datatypes, 1),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supplied_datatypes_xml_types, 1),
  [1347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supplied_datatypes_xml_types, 1),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supplied_datatypes_spatial_types, 1),
  [1351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supplied_datatypes_spatial_types, 1),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_datatypes, 1),
  [1355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_datatypes, 1),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [1359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_datatypes, 1),
  [1363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character_datatypes, 1),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_datatypes, 1),
  [1367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_datatypes, 1),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_and_raw_datatypes, 1),
  [1371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_long_and_raw_datatypes, 1),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime_datatypes, 1),
  [1375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime_datatypes, 1),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referenced_datatypes, 1),
  [1379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_referenced_datatypes, 1),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_datatypes_type, 5),
  [1383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_datatypes_type, 5),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_char, 2),
  [1387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_char, 2),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_varchar, 2),
  [1391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_varchar, 2),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_varchar2, 2),
  [1395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_varchar2, 2),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nvarchar2, 2),
  [1399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_nvarchar2, 2),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nchar, 2),
  [1403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_nchar, 2),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_number, 2),
  [1407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_datatypes_number, 2),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_float, 2),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_datatypes_float, 2),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 2),
  [1415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 2),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_raw, 2),
  [1419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_and_raw_datatypes_raw, 2),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rowid_datatypes_urowid, 2),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rowid_datatypes_urowid, 2),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_character, 2),
  [1427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_character, 2),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 2),
  [1431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 2),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_double_precision, 2),
  [1435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_double_precision, 2),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_char_nchar, 3),
  [1439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_char_nchar, 3),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_national, 3),
  [1443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_national, 3),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_character, 3),
  [1447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_character, 3),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supplied_datatypes_any_types, 3),
  [1451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supplied_datatypes_any_types, 3),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_datatypes_rowtype, 3),
  [1455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_datatypes_rowtype, 3),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_year, 5),
  [1459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_interval_year, 5),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 5),
  [1463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_timestamp, 5),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_byte_char, 4),
  [1467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__size_byte_char, 4),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_byte_char, 3),
  [1471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__size_byte_char, 3),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_national, 4),
  [1475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_national, 4),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_precision_scale, 3),
  [1479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__size_precision_scale, 3),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 4),
  [1483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_timestamp, 4),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_collation_clause, 3),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invoker_rights_clause, 2),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat2, 2), SHIFT_REPEAT(569),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_package_repeat2, 2),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sharing_clause, 1),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessible_by_clause, 5),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_declaration, 2),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_properties, 1),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 1),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 3),
  [1536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 6),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 2),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 1),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_element, 2),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 2),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 6),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_element_in, 3),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_obj, 1),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 2),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 2),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 9),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 6),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 6, .production_id = 1),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_element_in_out_or_out, 2),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 9),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_element_in_out_or_out, 3),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 9),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_element_in_out_or_out, 4),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_element, 3),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_obj, 3),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 2),
  [1646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__schema, 2, .production_id = 3),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_kind, 1),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_function_declaration, 4, .production_id = 8),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_function_declaration, 5, .production_id = 8),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_function_declaration, 6, .production_id = 8),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_char, 1),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1894] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1934] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_as, 1),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
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
