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
#define STATE_COUNT 431
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 295
#define ALIAS_COUNT 0
#define TOKEN_COUNT 165
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 26

enum {
  anon_sym_SEMI = 1,
  anon_sym_SLASH = 2,
  anon_sym_EQ = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_DOT = 7,
  anon_sym_AT = 8,
  anon_sym_PERCENT = 9,
  anon_sym_SQUOTE = 10,
  anon_sym_COLON_EQ = 11,
  anon_sym_EQ_GT = 12,
  anon_sym_PLUS = 13,
  anon_sym_DASH = 14,
  anon_sym_LT_GT = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_TILDE_EQ = 17,
  anon_sym_CARET_EQ = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_LT = 21,
  anon_sym_GT = 22,
  anon_sym_PIPE_PIPE = 23,
  anon_sym_STAR_STAR = 24,
  anon_sym_STAR = 25,
  anon_sym_COLON = 26,
  sym__unquoted_identifier = 27,
  anon_sym_DQUOTE = 28,
  aux_sym__quoted_identifier_token1 = 29,
  sym__single_quote_string = 30,
  sym__number = 31,
  sym__float = 32,
  sym_comment_ml = 33,
  sym_comment_sl = 34,
  sym_kw_create = 35,
  sym_kw_alter = 36,
  sym_kw_package = 37,
  sym_kw_function = 38,
  sym_kw_procedure = 39,
  sym_kw_trigger = 40,
  sym_kw_type = 41,
  sym_kw_datatype_type = 42,
  sym_kw_datatype_rowtype = 43,
  sym_kw_library = 44,
  sym_kw_true = 45,
  sym_kw_false = 46,
  sym_kw_null = 47,
  sym_kw_not = 48,
  sym_kw_row = 49,
  sym_kw_count = 50,
  sym_kw_first = 51,
  sym_kw_last = 52,
  sym_kw_limit = 53,
  sym_kw_rowcount = 54,
  sym_kw_bulk_rowcount = 55,
  sym_kw_compile = 56,
  sym_kw_debug = 57,
  sym_kw_specification = 58,
  sym_kw_body = 59,
  sym_kw_declare = 60,
  sym_kw_begin = 61,
  sym_kw_end = 62,
  sym_kw_or = 63,
  sym_kw_and = 64,
  sym_kw_replace = 65,
  sym_kw_editionable = 66,
  sym_kw_noneditionable = 67,
  sym_kw_metadata = 68,
  sym_kw_none = 69,
  sym_kw_default = 70,
  sym_kw_collation = 71,
  sym_kw_using_nls_comp = 72,
  sym_kw_authid = 73,
  sym_kw_current_user = 74,
  sym_kw_definer = 75,
  sym_kw_accessible = 76,
  sym_kw_by = 77,
  sym_kw_reuse = 78,
  sym_kw_settings = 79,
  sym_kw_byte = 80,
  sym_kw_char = 81,
  sym_kw_is = 82,
  sym_kw_as = 83,
  sym_kw_deterministic = 84,
  sym_kw_pipelined = 85,
  sym_kw_parallel_enable = 86,
  sym_kw_result_cache = 87,
  sym_kw_exists = 88,
  sym_kw_between = 89,
  sym_kw_found = 90,
  sym_kw_isopen = 91,
  sym_kw_in = 92,
  sym_kw_out = 93,
  sym_kw_nocopy = 94,
  sym_kw_like = 95,
  sym_kw_inserting = 96,
  sym_kw_deleting = 97,
  sym_kw_updating = 98,
  sym_kw_return = 99,
  sym_kw_varchar = 100,
  sym_kw_varchar2 = 101,
  sym_kw_nvarchar2 = 102,
  sym_kw_nchar = 103,
  sym_kw_int = 104,
  sym_kw_smallint = 105,
  sym_kw_real = 106,
  sym_kw_binary_float = 107,
  sym_kw_binary_double = 108,
  sym_kw_simple_float = 109,
  sym_kw_simple_double = 110,
  sym_kw_binary_integer = 111,
  sym_kw_pls_integer = 112,
  sym_kw_natural = 113,
  sym_kw_naturaln = 114,
  sym_kw_positive = 115,
  sym_kw_positiven = 116,
  sym_kw_signtype = 117,
  sym_kw_simple_integer = 118,
  sym_kw_integer = 119,
  sym_kw_number = 120,
  sym_kw_float = 121,
  sym_kw_long = 122,
  sym_kw_raw = 123,
  sym_kw_date = 124,
  sym_kw_timestamp = 125,
  sym_kw_with = 126,
  sym_kw_local = 127,
  sym_kw_time = 128,
  sym_kw_zone = 129,
  sym_kw_interval = 130,
  sym_kw_year = 131,
  sym_kw_month = 132,
  sym_kw_day = 133,
  sym_kw_minute = 134,
  sym_kw_second = 135,
  sym_kw_to = 136,
  sym_kw_blob = 137,
  sym_kw_clob = 138,
  sym_kw_nclob = 139,
  sym_kw_bfile = 140,
  sym_kw_rowid = 141,
  sym_kw_urowid = 142,
  sym_kw_boolean = 143,
  sym_kw_character = 144,
  sym_kw_varying = 145,
  sym_kw_numeric = 146,
  sym_kw_decimal = 147,
  sym_kw_dec = 148,
  sym_kw_double = 149,
  sym_kw_precision = 150,
  sym_kw_sys = 151,
  sym_kw_anydata = 152,
  sym_kw_anytype = 153,
  sym_kw_anydataset = 154,
  sym_kw_xmltype = 155,
  sym_kw_uritype = 156,
  sym_kw_sdo_geometry = 157,
  sym_kw_sdo_topo_geometry = 158,
  sym_kw_sdo_georaster = 159,
  sym_kw_json_element_t = 160,
  sym_kw_json_array_t = 161,
  sym_kw_json_object_t = 162,
  sym_kw_json_scalar_t = 163,
  sym_kw_json_key_list = 164,
  sym_source_file = 165,
  sym__element = 166,
  sym_sql_statement = 167,
  sym__ddl_statement = 168,
  sym__create_statement = 169,
  sym_create_package = 170,
  sym_package_properties = 171,
  sym__package_property_element = 172,
  sym__alter_statement = 173,
  sym_alter_package = 174,
  sym_alter_procedure = 175,
  sym_alter_function = 176,
  sym_alter_library = 177,
  sym_compile_clause = 178,
  sym_compiler_parameter_clause = 179,
  sym_editionable_noneditionable = 180,
  sym_sharing_clause = 181,
  sym_default_collation_clause = 182,
  sym_invoker_rights_clause = 183,
  sym_accessible_by_clause = 184,
  sym_accessor = 185,
  sym__unit_kind = 186,
  sym_reuse_settings = 187,
  sym__schema = 188,
  sym__remote = 189,
  sym__referenced_element = 190,
  sym__referenced_element_parent = 191,
  sym__referenced_element_name = 192,
  sym_byte_char = 193,
  sym__is_as = 194,
  sym_end_obj = 195,
  sym__package_item_list = 196,
  sym_create_obj = 197,
  sym_procedure_declaration = 198,
  sym_procedure_properties = 199,
  sym__procedure_property_element = 200,
  sym_function_declaration = 201,
  sym_function_properties = 202,
  sym__function_property_element = 203,
  sym__is_null_or_is_not_null = 204,
  sym_is_null = 205,
  sym_is_not_null = 206,
  sym_expression = 207,
  sym__expression_element = 208,
  sym__expression_base_elements = 209,
  sym__expression_base_operator_not_boolean = 210,
  sym__expression_base_boolean = 211,
  sym__expression_base_boolean_elements = 212,
  sym__expression_base_boolean_repeat = 213,
  sym__expression_base_boolean_operator = 214,
  sym__expression_base_boolean_between = 215,
  sym_conditional_predicate = 216,
  sym_return_declaration = 217,
  sym_datatype = 218,
  sym__character_datatypes = 219,
  sym__character_datatypes_char = 220,
  sym__character_datatypes_varchar2 = 221,
  sym__character_datatypes_nchar = 222,
  sym__character_datatypes_nvarchar2 = 223,
  sym__number_datatypes = 224,
  sym__number_datatypes_keyword = 225,
  sym__number_datatypes_number = 226,
  sym__number_datatypes_float = 227,
  sym__long_and_raw_datatypes = 228,
  sym__long_and_raw_datatypes_long_raw = 229,
  sym__long_and_raw_datatypes_raw = 230,
  sym__datetime_datatypes = 231,
  sym__datetime_datatypes_keyword = 232,
  sym__datetime_datatypes_date_timestamp = 233,
  sym__datetime_datatypes_date_interval_year = 234,
  sym__datetime_datatypes_date_interval_day = 235,
  sym__large_object_datatypes = 236,
  sym__rowid_datatypes = 237,
  sym__referenced_datatypes = 238,
  sym__referenced_datatypes_type = 239,
  sym__referenced_datatypes_rowtype = 240,
  sym__logical_datatypes = 241,
  sym__subtype_datatypes = 242,
  sym__rowid_datatypes_urowid = 243,
  sym__ansi_supported_datatypes_character = 244,
  sym__ansi_supported_datatypes_char_nchar = 245,
  sym__ansi_supported_datatypes_varchar = 246,
  sym__ansi_supported_datatypes_national = 247,
  sym__ansi_supported_datatypes_numeric_decimal_dec = 248,
  sym__ansi_supported_datatypes_double_precision = 249,
  sym__supplied_datatypes_any_types = 250,
  sym__supplied_datatypes_xml_types = 251,
  sym__supplied_datatypes_spatial_types = 252,
  sym__object_datatypes = 253,
  sym_prc_fnc_call = 254,
  sym_parameter_declaration = 255,
  sym_parameter_declaration_element = 256,
  sym__parameter_declaration_element_in = 257,
  sym__parameter_declaration_element_in_out_or_out = 258,
  sym_default_expression = 259,
  sym_parameter = 260,
  sym_parameter_element = 261,
  sym_parameter_element_positional = 262,
  sym_parameter_element_named = 263,
  sym_parameter_name = 264,
  sym_parameter_value = 265,
  sym__size = 266,
  sym__size_byte_char = 267,
  sym__size_precision_scale = 268,
  sym__precision = 269,
  sym__scale = 270,
  sym__sign_pos_neg = 271,
  sym_expression_operator_boolean = 272,
  sym_expression_operator_not_boolean = 273,
  sym_placeholder = 274,
  sym_indicator_variable = 275,
  sym_host_variable = 276,
  sym_identifier = 277,
  sym__quoted_identifier = 278,
  sym__literal = 279,
  sym__literal_boolean = 280,
  sym_literal_number = 281,
  sym_literal_string = 282,
  aux_sym_source_file_repeat1 = 283,
  aux_sym_create_package_repeat1 = 284,
  aux_sym_package_properties_repeat1 = 285,
  aux_sym_alter_package_repeat1 = 286,
  aux_sym_compile_clause_repeat1 = 287,
  aux_sym_accessible_by_clause_repeat1 = 288,
  aux_sym_procedure_properties_repeat1 = 289,
  aux_sym_function_properties_repeat1 = 290,
  aux_sym__expression_base_operator_not_boolean_repeat1 = 291,
  aux_sym__expression_base_boolean_repeat1 = 292,
  aux_sym_parameter_declaration_repeat1 = 293,
  aux_sym_parameter_repeat1 = 294,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_AT] = "@",
  [anon_sym_PERCENT] = "%",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym_COLON] = ":",
  [sym__unquoted_identifier] = "_unquoted_identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_identifier_token1] = "_quoted_identifier_token1",
  [sym__single_quote_string] = "_single_quote_string",
  [sym__number] = "_number",
  [sym__float] = "_float",
  [sym_comment_ml] = "comment_ml",
  [sym_comment_sl] = "comment_sl",
  [sym_kw_create] = "kw_create",
  [sym_kw_alter] = "kw_alter",
  [sym_kw_package] = "kw_package",
  [sym_kw_function] = "kw_function",
  [sym_kw_procedure] = "kw_procedure",
  [sym_kw_trigger] = "kw_trigger",
  [sym_kw_type] = "kw_type",
  [sym_kw_datatype_type] = "kw_datatype_type",
  [sym_kw_datatype_rowtype] = "kw_datatype_rowtype",
  [sym_kw_library] = "kw_library",
  [sym_kw_true] = "kw_true",
  [sym_kw_false] = "kw_false",
  [sym_kw_null] = "kw_null",
  [sym_kw_not] = "kw_not",
  [sym_kw_row] = "kw_row",
  [sym_kw_count] = "kw_count",
  [sym_kw_first] = "kw_first",
  [sym_kw_last] = "kw_last",
  [sym_kw_limit] = "kw_limit",
  [sym_kw_rowcount] = "kw_rowcount",
  [sym_kw_bulk_rowcount] = "kw_bulk_rowcount",
  [sym_kw_compile] = "kw_compile",
  [sym_kw_debug] = "kw_debug",
  [sym_kw_specification] = "kw_specification",
  [sym_kw_body] = "kw_body",
  [sym_kw_declare] = "kw_declare",
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
  [sym_package_properties] = "package_properties",
  [sym__package_property_element] = "_package_property_element",
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
  [sym__unit_kind] = "_unit_kind",
  [sym_reuse_settings] = "reuse_settings",
  [sym__schema] = "_schema",
  [sym__remote] = "_remote",
  [sym__referenced_element] = "_referenced_element",
  [sym__referenced_element_parent] = "_referenced_element_parent",
  [sym__referenced_element_name] = "_referenced_element_name",
  [sym_byte_char] = "byte_char",
  [sym__is_as] = "_is_as",
  [sym_end_obj] = "end_obj",
  [sym__package_item_list] = "_package_item_list",
  [sym_create_obj] = "create_obj",
  [sym_procedure_declaration] = "procedure_declaration",
  [sym_procedure_properties] = "procedure_properties",
  [sym__procedure_property_element] = "_procedure_property_element",
  [sym_function_declaration] = "function_declaration",
  [sym_function_properties] = "function_properties",
  [sym__function_property_element] = "_function_property_element",
  [sym__is_null_or_is_not_null] = "_is_null_or_is_not_null",
  [sym_is_null] = "is_null",
  [sym_is_not_null] = "is_not_null",
  [sym_expression] = "expression",
  [sym__expression_element] = "_expression_element",
  [sym__expression_base_elements] = "_expression_base_elements",
  [sym__expression_base_operator_not_boolean] = "_expression_base_operator_not_boolean",
  [sym__expression_base_boolean] = "_expression_base_boolean",
  [sym__expression_base_boolean_elements] = "_expression_base_boolean_elements",
  [sym__expression_base_boolean_repeat] = "_expression_base_boolean_repeat",
  [sym__expression_base_boolean_operator] = "_expression_base_boolean_operator",
  [sym__expression_base_boolean_between] = "_expression_base_boolean_between",
  [sym_conditional_predicate] = "conditional_predicate",
  [sym_return_declaration] = "return_declaration",
  [sym_datatype] = "datatype",
  [sym__character_datatypes] = "_character_datatypes",
  [sym__character_datatypes_char] = "_character_datatypes_char",
  [sym__character_datatypes_varchar2] = "_character_datatypes_varchar2",
  [sym__character_datatypes_nchar] = "_character_datatypes_nchar",
  [sym__character_datatypes_nvarchar2] = "_character_datatypes_nvarchar2",
  [sym__number_datatypes] = "_number_datatypes",
  [sym__number_datatypes_keyword] = "_number_datatypes_keyword",
  [sym__number_datatypes_number] = "_number_datatypes_number",
  [sym__number_datatypes_float] = "_number_datatypes_float",
  [sym__long_and_raw_datatypes] = "_long_and_raw_datatypes",
  [sym__long_and_raw_datatypes_long_raw] = "_long_and_raw_datatypes_long_raw",
  [sym__long_and_raw_datatypes_raw] = "_long_and_raw_datatypes_raw",
  [sym__datetime_datatypes] = "_datetime_datatypes",
  [sym__datetime_datatypes_keyword] = "_datetime_datatypes_keyword",
  [sym__datetime_datatypes_date_timestamp] = "_datetime_datatypes_date_timestamp",
  [sym__datetime_datatypes_date_interval_year] = "_datetime_datatypes_date_interval_year",
  [sym__datetime_datatypes_date_interval_day] = "_datetime_datatypes_date_interval_day",
  [sym__large_object_datatypes] = "_large_object_datatypes",
  [sym__rowid_datatypes] = "_rowid_datatypes",
  [sym__referenced_datatypes] = "_referenced_datatypes",
  [sym__referenced_datatypes_type] = "_referenced_datatypes_type",
  [sym__referenced_datatypes_rowtype] = "_referenced_datatypes_rowtype",
  [sym__logical_datatypes] = "_logical_datatypes",
  [sym__subtype_datatypes] = "_subtype_datatypes",
  [sym__rowid_datatypes_urowid] = "_rowid_datatypes_urowid",
  [sym__ansi_supported_datatypes_character] = "_ansi_supported_datatypes_character",
  [sym__ansi_supported_datatypes_char_nchar] = "_ansi_supported_datatypes_char_nchar",
  [sym__ansi_supported_datatypes_varchar] = "_ansi_supported_datatypes_varchar",
  [sym__ansi_supported_datatypes_national] = "_ansi_supported_datatypes_national",
  [sym__ansi_supported_datatypes_numeric_decimal_dec] = "_ansi_supported_datatypes_numeric_decimal_dec",
  [sym__ansi_supported_datatypes_double_precision] = "_ansi_supported_datatypes_double_precision",
  [sym__supplied_datatypes_any_types] = "_supplied_datatypes_any_types",
  [sym__supplied_datatypes_xml_types] = "_supplied_datatypes_xml_types",
  [sym__supplied_datatypes_spatial_types] = "_supplied_datatypes_spatial_types",
  [sym__object_datatypes] = "_object_datatypes",
  [sym_prc_fnc_call] = "prc_fnc_call",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_parameter_declaration_element] = "parameter_declaration_element",
  [sym__parameter_declaration_element_in] = "_parameter_declaration_element_in",
  [sym__parameter_declaration_element_in_out_or_out] = "_parameter_declaration_element_in_out_or_out",
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
  [sym__sign_pos_neg] = "_sign_pos_neg",
  [sym_expression_operator_boolean] = "expression_operator_boolean",
  [sym_expression_operator_not_boolean] = "expression_operator_not_boolean",
  [sym_placeholder] = "placeholder",
  [sym_indicator_variable] = "indicator_variable",
  [sym_host_variable] = "host_variable",
  [sym_identifier] = "identifier",
  [sym__quoted_identifier] = "_quoted_identifier",
  [sym__literal] = "_literal",
  [sym__literal_boolean] = "_literal_boolean",
  [sym_literal_number] = "literal_number",
  [sym_literal_string] = "literal_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_create_package_repeat1] = "create_package_repeat1",
  [aux_sym_package_properties_repeat1] = "package_properties_repeat1",
  [aux_sym_alter_package_repeat1] = "alter_package_repeat1",
  [aux_sym_compile_clause_repeat1] = "compile_clause_repeat1",
  [aux_sym_accessible_by_clause_repeat1] = "accessible_by_clause_repeat1",
  [aux_sym_procedure_properties_repeat1] = "procedure_properties_repeat1",
  [aux_sym_function_properties_repeat1] = "function_properties_repeat1",
  [aux_sym__expression_base_operator_not_boolean_repeat1] = "_expression_base_operator_not_boolean_repeat1",
  [aux_sym__expression_base_boolean_repeat1] = "_expression_base_boolean_repeat1",
  [aux_sym_parameter_declaration_repeat1] = "parameter_declaration_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__unquoted_identifier] = sym__unquoted_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_identifier_token1] = aux_sym__quoted_identifier_token1,
  [sym__single_quote_string] = sym__single_quote_string,
  [sym__number] = sym__number,
  [sym__float] = sym__float,
  [sym_comment_ml] = sym_comment_ml,
  [sym_comment_sl] = sym_comment_sl,
  [sym_kw_create] = sym_kw_create,
  [sym_kw_alter] = sym_kw_alter,
  [sym_kw_package] = sym_kw_package,
  [sym_kw_function] = sym_kw_function,
  [sym_kw_procedure] = sym_kw_procedure,
  [sym_kw_trigger] = sym_kw_trigger,
  [sym_kw_type] = sym_kw_type,
  [sym_kw_datatype_type] = sym_kw_datatype_type,
  [sym_kw_datatype_rowtype] = sym_kw_datatype_rowtype,
  [sym_kw_library] = sym_kw_library,
  [sym_kw_true] = sym_kw_true,
  [sym_kw_false] = sym_kw_false,
  [sym_kw_null] = sym_kw_null,
  [sym_kw_not] = sym_kw_not,
  [sym_kw_row] = sym_kw_row,
  [sym_kw_count] = sym_kw_count,
  [sym_kw_first] = sym_kw_first,
  [sym_kw_last] = sym_kw_last,
  [sym_kw_limit] = sym_kw_limit,
  [sym_kw_rowcount] = sym_kw_rowcount,
  [sym_kw_bulk_rowcount] = sym_kw_bulk_rowcount,
  [sym_kw_compile] = sym_kw_compile,
  [sym_kw_debug] = sym_kw_debug,
  [sym_kw_specification] = sym_kw_specification,
  [sym_kw_body] = sym_kw_body,
  [sym_kw_declare] = sym_kw_declare,
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
  [sym_package_properties] = sym_package_properties,
  [sym__package_property_element] = sym__package_property_element,
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
  [sym__unit_kind] = sym__unit_kind,
  [sym_reuse_settings] = sym_reuse_settings,
  [sym__schema] = sym__schema,
  [sym__remote] = sym__remote,
  [sym__referenced_element] = sym__referenced_element,
  [sym__referenced_element_parent] = sym__referenced_element_parent,
  [sym__referenced_element_name] = sym__referenced_element_name,
  [sym_byte_char] = sym_byte_char,
  [sym__is_as] = sym__is_as,
  [sym_end_obj] = sym_end_obj,
  [sym__package_item_list] = sym__package_item_list,
  [sym_create_obj] = sym_create_obj,
  [sym_procedure_declaration] = sym_procedure_declaration,
  [sym_procedure_properties] = sym_procedure_properties,
  [sym__procedure_property_element] = sym__procedure_property_element,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_properties] = sym_function_properties,
  [sym__function_property_element] = sym__function_property_element,
  [sym__is_null_or_is_not_null] = sym__is_null_or_is_not_null,
  [sym_is_null] = sym_is_null,
  [sym_is_not_null] = sym_is_not_null,
  [sym_expression] = sym_expression,
  [sym__expression_element] = sym__expression_element,
  [sym__expression_base_elements] = sym__expression_base_elements,
  [sym__expression_base_operator_not_boolean] = sym__expression_base_operator_not_boolean,
  [sym__expression_base_boolean] = sym__expression_base_boolean,
  [sym__expression_base_boolean_elements] = sym__expression_base_boolean_elements,
  [sym__expression_base_boolean_repeat] = sym__expression_base_boolean_repeat,
  [sym__expression_base_boolean_operator] = sym__expression_base_boolean_operator,
  [sym__expression_base_boolean_between] = sym__expression_base_boolean_between,
  [sym_conditional_predicate] = sym_conditional_predicate,
  [sym_return_declaration] = sym_return_declaration,
  [sym_datatype] = sym_datatype,
  [sym__character_datatypes] = sym__character_datatypes,
  [sym__character_datatypes_char] = sym__character_datatypes_char,
  [sym__character_datatypes_varchar2] = sym__character_datatypes_varchar2,
  [sym__character_datatypes_nchar] = sym__character_datatypes_nchar,
  [sym__character_datatypes_nvarchar2] = sym__character_datatypes_nvarchar2,
  [sym__number_datatypes] = sym__number_datatypes,
  [sym__number_datatypes_keyword] = sym__number_datatypes_keyword,
  [sym__number_datatypes_number] = sym__number_datatypes_number,
  [sym__number_datatypes_float] = sym__number_datatypes_float,
  [sym__long_and_raw_datatypes] = sym__long_and_raw_datatypes,
  [sym__long_and_raw_datatypes_long_raw] = sym__long_and_raw_datatypes_long_raw,
  [sym__long_and_raw_datatypes_raw] = sym__long_and_raw_datatypes_raw,
  [sym__datetime_datatypes] = sym__datetime_datatypes,
  [sym__datetime_datatypes_keyword] = sym__datetime_datatypes_keyword,
  [sym__datetime_datatypes_date_timestamp] = sym__datetime_datatypes_date_timestamp,
  [sym__datetime_datatypes_date_interval_year] = sym__datetime_datatypes_date_interval_year,
  [sym__datetime_datatypes_date_interval_day] = sym__datetime_datatypes_date_interval_day,
  [sym__large_object_datatypes] = sym__large_object_datatypes,
  [sym__rowid_datatypes] = sym__rowid_datatypes,
  [sym__referenced_datatypes] = sym__referenced_datatypes,
  [sym__referenced_datatypes_type] = sym__referenced_datatypes_type,
  [sym__referenced_datatypes_rowtype] = sym__referenced_datatypes_rowtype,
  [sym__logical_datatypes] = sym__logical_datatypes,
  [sym__subtype_datatypes] = sym__subtype_datatypes,
  [sym__rowid_datatypes_urowid] = sym__rowid_datatypes_urowid,
  [sym__ansi_supported_datatypes_character] = sym__ansi_supported_datatypes_character,
  [sym__ansi_supported_datatypes_char_nchar] = sym__ansi_supported_datatypes_char_nchar,
  [sym__ansi_supported_datatypes_varchar] = sym__ansi_supported_datatypes_varchar,
  [sym__ansi_supported_datatypes_national] = sym__ansi_supported_datatypes_national,
  [sym__ansi_supported_datatypes_numeric_decimal_dec] = sym__ansi_supported_datatypes_numeric_decimal_dec,
  [sym__ansi_supported_datatypes_double_precision] = sym__ansi_supported_datatypes_double_precision,
  [sym__supplied_datatypes_any_types] = sym__supplied_datatypes_any_types,
  [sym__supplied_datatypes_xml_types] = sym__supplied_datatypes_xml_types,
  [sym__supplied_datatypes_spatial_types] = sym__supplied_datatypes_spatial_types,
  [sym__object_datatypes] = sym__object_datatypes,
  [sym_prc_fnc_call] = sym_prc_fnc_call,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_parameter_declaration_element] = sym_parameter_declaration_element,
  [sym__parameter_declaration_element_in] = sym__parameter_declaration_element_in,
  [sym__parameter_declaration_element_in_out_or_out] = sym__parameter_declaration_element_in_out_or_out,
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
  [sym__sign_pos_neg] = sym__sign_pos_neg,
  [sym_expression_operator_boolean] = sym_expression_operator_boolean,
  [sym_expression_operator_not_boolean] = sym_expression_operator_not_boolean,
  [sym_placeholder] = sym_placeholder,
  [sym_indicator_variable] = sym_indicator_variable,
  [sym_host_variable] = sym_host_variable,
  [sym_identifier] = sym_identifier,
  [sym__quoted_identifier] = sym__quoted_identifier,
  [sym__literal] = sym__literal,
  [sym__literal_boolean] = sym__literal_boolean,
  [sym_literal_number] = sym_literal_number,
  [sym_literal_string] = sym_literal_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_create_package_repeat1] = aux_sym_create_package_repeat1,
  [aux_sym_package_properties_repeat1] = aux_sym_package_properties_repeat1,
  [aux_sym_alter_package_repeat1] = aux_sym_alter_package_repeat1,
  [aux_sym_compile_clause_repeat1] = aux_sym_compile_clause_repeat1,
  [aux_sym_accessible_by_clause_repeat1] = aux_sym_accessible_by_clause_repeat1,
  [aux_sym_procedure_properties_repeat1] = aux_sym_procedure_properties_repeat1,
  [aux_sym_function_properties_repeat1] = aux_sym_function_properties_repeat1,
  [aux_sym__expression_base_operator_not_boolean_repeat1] = aux_sym__expression_base_operator_not_boolean_repeat1,
  [aux_sym__expression_base_boolean_repeat1] = aux_sym__expression_base_boolean_repeat1,
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
  [anon_sym_SLASH] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym__float] = {
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
  [sym_kw_datatype_type] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_datatype_rowtype] = {
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
  [sym_kw_count] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_first] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_last] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_rowcount] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_bulk_rowcount] = {
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
  [sym_kw_declare] = {
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
  [sym_package_properties] = {
    .visible = true,
    .named = true,
  },
  [sym__package_property_element] = {
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
  [sym__unit_kind] = {
    .visible = false,
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
  [sym__remote] = {
    .visible = false,
    .named = true,
  },
  [sym__referenced_element] = {
    .visible = false,
    .named = true,
  },
  [sym__referenced_element_parent] = {
    .visible = false,
    .named = true,
  },
  [sym__referenced_element_name] = {
    .visible = false,
    .named = true,
  },
  [sym_byte_char] = {
    .visible = true,
    .named = true,
  },
  [sym__is_as] = {
    .visible = false,
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
  [sym_procedure_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_properties] = {
    .visible = true,
    .named = true,
  },
  [sym__procedure_property_element] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_properties] = {
    .visible = true,
    .named = true,
  },
  [sym__function_property_element] = {
    .visible = false,
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
  [sym__expression_element] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_base_elements] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_base_operator_not_boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_base_boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_base_boolean_elements] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_base_boolean_repeat] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_base_boolean_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_base_boolean_between] = {
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
  [sym__character_datatypes] = {
    .visible = false,
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
  [sym__number_datatypes] = {
    .visible = false,
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
  [sym__long_and_raw_datatypes] = {
    .visible = false,
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
  [sym__datetime_datatypes] = {
    .visible = false,
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
  [sym__large_object_datatypes] = {
    .visible = false,
    .named = true,
  },
  [sym__rowid_datatypes] = {
    .visible = false,
    .named = true,
  },
  [sym__referenced_datatypes] = {
    .visible = false,
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
  [sym__logical_datatypes] = {
    .visible = false,
    .named = true,
  },
  [sym__subtype_datatypes] = {
    .visible = false,
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
  [sym__supplied_datatypes_any_types] = {
    .visible = false,
    .named = true,
  },
  [sym__supplied_datatypes_xml_types] = {
    .visible = false,
    .named = true,
  },
  [sym__supplied_datatypes_spatial_types] = {
    .visible = false,
    .named = true,
  },
  [sym__object_datatypes] = {
    .visible = false,
    .named = true,
  },
  [sym_prc_fnc_call] = {
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
  [sym__parameter_declaration_element_in] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter_declaration_element_in_out_or_out] = {
    .visible = false,
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
  [sym__sign_pos_neg] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_operator_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_operator_not_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_indicator_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_host_variable] = {
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
  [sym__literal_boolean] = {
    .visible = false,
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
  [aux_sym_package_properties_repeat1] = {
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
  [aux_sym_procedure_properties_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_properties_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_base_operator_not_boolean_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_base_boolean_repeat1] = {
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
  field_prc_name = 6,
  field_ref_name = 7,
  field_ref_name_parent = 8,
  field_remote_name = 9,
  field_schema_name = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_compile_parameter_name] = "compile_parameter_name",
  [field_compile_parameter_value] = "compile_parameter_value",
  [field_fnc_name] = "fnc_name",
  [field_name] = "name",
  [field_obj_name] = "obj_name",
  [field_prc_name] = "prc_name",
  [field_ref_name] = "ref_name",
  [field_ref_name_parent] = "ref_name_parent",
  [field_remote_name] = "remote_name",
  [field_schema_name] = "schema_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 4},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 4},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 2},
  [17] = {.index = 31, .length = 1},
  [18] = {.index = 32, .length = 2},
  [19] = {.index = 34, .length = 4},
  [20] = {.index = 38, .length = 3},
  [21] = {.index = 41, .length = 1},
  [22] = {.index = 42, .length = 2},
  [23] = {.index = 44, .length = 8},
  [24] = {.index = 52, .length = 8},
  [25] = {.index = 60, .length = 8},
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
    {field_ref_name, 0, .inherited = true},
    {field_ref_name_parent, 0, .inherited = true},
    {field_remote_name, 0, .inherited = true},
    {field_schema_name, 0, .inherited = true},
  [11] =
    {field_ref_name, 0, .inherited = true},
    {field_ref_name_parent, 0, .inherited = true},
  [13] =
    {field_ref_name, 0, .inherited = true},
  [14] =
    {field_ref_name, 0},
  [15] =
    {field_prc_name, 1},
  [16] =
    {field_obj_name, 3},
  [17] =
    {field_ref_name, 1, .inherited = true},
    {field_ref_name_parent, 1, .inherited = true},
    {field_remote_name, 1, .inherited = true},
    {field_schema_name, 1, .inherited = true},
  [21] =
    {field_ref_name, 1, .inherited = true},
    {field_ref_name_parent, 1, .inherited = true},
    {field_schema_name, 0, .inherited = true},
  [24] =
    {field_ref_name, 1, .inherited = true},
    {field_schema_name, 0, .inherited = true},
  [26] =
    {field_ref_name, 0, .inherited = true},
    {field_ref_name_parent, 0, .inherited = true},
    {field_remote_name, 1, .inherited = true},
  [29] =
    {field_ref_name, 0, .inherited = true},
    {field_remote_name, 1, .inherited = true},
  [31] =
    {field_fnc_name, 1},
  [32] =
    {field_obj_name, 4},
    {field_schema_name, 3, .inherited = true},
  [34] =
    {field_ref_name, 1, .inherited = true},
    {field_ref_name_parent, 1, .inherited = true},
    {field_remote_name, 2, .inherited = true},
    {field_schema_name, 0, .inherited = true},
  [38] =
    {field_ref_name, 1, .inherited = true},
    {field_remote_name, 2, .inherited = true},
    {field_schema_name, 0, .inherited = true},
  [41] =
    {field_remote_name, 1},
  [42] =
    {field_ref_name, 2},
    {field_ref_name_parent, 0},
  [44] =
    {field_ref_name, 0, .inherited = true},
    {field_ref_name, 1, .inherited = true},
    {field_ref_name_parent, 0, .inherited = true},
    {field_ref_name_parent, 1, .inherited = true},
    {field_remote_name, 0, .inherited = true},
    {field_remote_name, 1, .inherited = true},
    {field_schema_name, 0, .inherited = true},
    {field_schema_name, 1, .inherited = true},
  [52] =
    {field_ref_name, 1, .inherited = true},
    {field_ref_name, 2, .inherited = true},
    {field_ref_name_parent, 1, .inherited = true},
    {field_ref_name_parent, 2, .inherited = true},
    {field_remote_name, 1, .inherited = true},
    {field_remote_name, 2, .inherited = true},
    {field_schema_name, 1, .inherited = true},
    {field_schema_name, 2, .inherited = true},
  [60] =
    {field_ref_name, 1, .inherited = true},
    {field_ref_name, 3, .inherited = true},
    {field_ref_name_parent, 1, .inherited = true},
    {field_ref_name_parent, 3, .inherited = true},
    {field_remote_name, 1, .inherited = true},
    {field_remote_name, 3, .inherited = true},
    {field_schema_name, 1, .inherited = true},
    {field_schema_name, 3, .inherited = true},
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
  [11] = 10,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
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
  [51] = 29,
  [52] = 38,
  [53] = 37,
  [54] = 39,
  [55] = 40,
  [56] = 33,
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
  [75] = 23,
  [76] = 28,
  [77] = 27,
  [78] = 25,
  [79] = 79,
  [80] = 24,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 9,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 26,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 10,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 23,
  [106] = 24,
  [107] = 25,
  [108] = 28,
  [109] = 109,
  [110] = 110,
  [111] = 27,
  [112] = 26,
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
  [134] = 43,
  [135] = 44,
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
  [189] = 10,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 9,
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
  [211] = 210,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 210,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 221,
  [228] = 228,
  [229] = 229,
  [230] = 208,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 218,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 229,
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
  [252] = 252,
  [253] = 253,
  [254] = 254,
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
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 275,
  [280] = 276,
  [281] = 278,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 275,
  [301] = 301,
  [302] = 302,
  [303] = 276,
  [304] = 304,
  [305] = 278,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
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
  [401] = 204,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 390,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 390,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 390,
  [422] = 397,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 397,
  [430] = 397,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(328);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(965);
      if (lookahead == '%') ADVANCE(339);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(334);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '+') ADVANCE(343);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == ';') ADVANCE(329);
      if (lookahead == '<') ADVANCE(351);
      if (lookahead == '=') ADVANCE(332);
      if (lookahead == '>') ADVANCE(352);
      if (lookahead == '@') ADVANCE(338);
      if (lookahead == '\\') SKIP(315)
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '~') ADVANCE(45);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(449);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(497);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(602);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(376);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(707);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(858);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(382);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(531);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(803);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(377);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(378);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(608);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(789);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(385);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(615);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(697);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(565);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(760);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('G' <= lookahead && lookahead <= 'Q') ||
          ('g' <= lookahead && lookahead <= 'q')) ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(334);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '+') ADVANCE(343);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == ':') ADVANCE(357);
      if (lookahead == ';') ADVANCE(329);
      if (lookahead == '<') ADVANCE(351);
      if (lookahead == '=') ADVANCE(332);
      if (lookahead == '>') ADVANCE(352);
      if (lookahead == '@') ADVANCE(338);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '~') ADVANCE(45);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(131);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(161);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(297);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(136);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(54);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(60);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(149);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(965);
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(334);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '+') ADVANCE(343);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '@') ADVANCE(338);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(577);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(603);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(425);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(661);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(708);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(858);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(774);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(388);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(928);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(660);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(487);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(804);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(433);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(965);
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(334);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '+') ADVANCE(343);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == '@') ADVANCE(338);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(925);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(402);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(834);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(965);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == '+') ADVANCE(343);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(569);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(384);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(746);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(775);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(831);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(965);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '+') ADVANCE(343);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(569);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(384);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(746);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(934);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(831);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(965);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '+') ADVANCE(343);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(384);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(934);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(831);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(965);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '=') ADVANCE(331);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(577);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(603);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(425);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(661);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(738);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(858);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(774);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(660);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(487);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(804);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(433);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(965);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(329);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(965);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(577);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(603);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(425);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(661);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(738);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(858);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(774);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(388);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(928);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(660);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(487);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(804);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(433);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(965);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(577);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(603);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(425);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(661);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(738);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(858);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(774);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(388);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(660);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(487);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(804);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(433);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(972);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(974);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(334);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(329);
      if (lookahead == '@') ADVANCE(338);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(129);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(69);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(60);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '\'') ADVANCE(976);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(975);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(979);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(981);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(346);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(341);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(348);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(347);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(342);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(299);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(219);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(146);
      END_STATE();
    case 52:
      if (lookahead == '|') ADVANCE(353);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1015);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1104);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(265);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(110);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(195);
      END_STATE();
    case 81:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(196);
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(198);
      END_STATE();
    case 83:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(199);
      END_STATE();
    case 84:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1034);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1033);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 87:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 88:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(238);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1011);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1011);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1009);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1020);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1086);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1035);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(311);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1028);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1045);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1016);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1080);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(989);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(982);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1106);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1003);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(984);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1012);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(986);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1023);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1013);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1037);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1036);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(990);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1078);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1014);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1024);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(287);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 151:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(75);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 152:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(74);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 153:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1096);
      END_STATE();
    case 154:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 155:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(266);
      END_STATE();
    case 156:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 157:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1076);
      END_STATE();
    case 158:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1083);
      END_STATE();
    case 159:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(166);
      END_STATE();
    case 160:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 161:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(187);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1087);
      END_STATE();
    case 164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 184:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(58);
      END_STATE();
    case 185:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(110);
      END_STATE();
    case 186:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1077);
      END_STATE();
    case 187:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 188:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 189:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 190:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 191:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 192:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 193:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 194:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 195:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 196:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 203:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(244);
      END_STATE();
    case 204:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 205:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 206:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 207:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1049);
      END_STATE();
    case 208:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1039);
      END_STATE();
    case 209:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(985);
      END_STATE();
    case 210:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1018);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1102);
      END_STATE();
    case 212:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 213:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 214:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 215:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 216:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 217:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 218:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 219:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 220:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 221:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 222:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 223:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 224:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 225:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 230:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1087);
      END_STATE();
    case 231:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 232:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 233:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 234:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 235:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 236:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 237:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 238:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 239:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 240:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 241:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 242:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 243:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 244:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1019);
      END_STATE();
    case 245:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 246:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 247:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 248:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 249:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(298);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(300);
      END_STATE();
    case 250:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      END_STATE();
    case 251:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1082);
      END_STATE();
    case 252:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(983);
      END_STATE();
    case 253:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1022);
      END_STATE();
    case 254:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1021);
      END_STATE();
    case 255:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      END_STATE();
    case 256:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1029);
      END_STATE();
    case 257:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 258:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 259:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 260:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 261:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 262:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 263:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 264:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 266:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1027);
      END_STATE();
    case 267:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1031);
      END_STATE();
    case 268:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      END_STATE();
    case 269:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(298);
      END_STATE();
    case 270:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 272:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      END_STATE();
    case 273:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      END_STATE();
    case 274:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 276:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1017);
      END_STATE();
    case 277:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1107);
      END_STATE();
    case 278:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 279:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(305);
      END_STATE();
    case 280:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(158);
      END_STATE();
    case 281:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(48);
      END_STATE();
    case 282:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 283:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 284:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(157);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 287:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 297:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 298:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 299:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 300:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 301:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 302:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 303:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1073);
      END_STATE();
    case 304:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(293);
      END_STATE();
    case 305:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(147);
      END_STATE();
    case 306:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(243);
      END_STATE();
    case 307:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1084);
      END_STATE();
    case 308:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(991);
      END_STATE();
    case 309:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 310:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(169);
      END_STATE();
    case 311:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(978);
      END_STATE();
    case 313:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 314:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 315:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(314)
      END_STATE();
    case 316:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(324)
      END_STATE();
    case 317:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(324)
      if (lookahead == '\r') SKIP(316)
      END_STATE();
    case 318:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(325)
      END_STATE();
    case 319:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(325)
      if (lookahead == '\r') SKIP(318)
      END_STATE();
    case 320:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(326)
      END_STATE();
    case 321:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(326)
      if (lookahead == '\r') SKIP(320)
      END_STATE();
    case 322:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(327)
      END_STATE();
    case 323:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') SKIP(327)
      if (lookahead == '\r') SKIP(322)
      END_STATE();
    case 324:
      if (eof) ADVANCE(328);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(334);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '+') ADVANCE(343);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == ';') ADVANCE(329);
      if (lookahead == '<') ADVANCE(351);
      if (lookahead == '=') ADVANCE(331);
      if (lookahead == '>') ADVANCE(352);
      if (lookahead == '@') ADVANCE(338);
      if (lookahead == '\\') SKIP(317)
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '~') ADVANCE(45);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(130);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(234);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(324)
      END_STATE();
    case 325:
      if (eof) ADVANCE(328);
      if (lookahead == '"') ADVANCE(965);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(329);
      if (lookahead == '\\') SKIP(319)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(767);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(764);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(533);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(780);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(403);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(541);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(325)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 326:
      if (eof) ADVANCE(328);
      if (lookahead == '"') ADVANCE(965);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(329);
      if (lookahead == '\\') SKIP(321)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(767);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(764);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(780);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(403);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(541);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(326)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 327:
      if (eof) ADVANCE(328);
      if (lookahead == '"') ADVANCE(965);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ';') ADVANCE(329);
      if (lookahead == '\\') SKIP(323)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(764);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(780);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(327)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(342);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(978);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(981);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == '>') ADVANCE(345);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(350);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(354);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(341);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '2') ADVANCE(1052);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(416);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(490);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(931);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(464);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(830);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(693);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(741);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(880);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(884);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(885);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(886);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(574);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(590);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(495);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(893);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(926);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(793);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(845);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(861);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(530);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(946);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(947);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(946);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(949);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1105);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1015);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(850);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(440);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(662);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(839);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(757);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(929);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(719);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(662);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(805);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(891);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(664);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(391);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(891);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(461);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(695);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(391);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(891);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(604);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(695);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(391);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(806);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(824);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(666);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(935);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(933);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(855);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(807);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(691);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(822);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(656);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(864);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(657);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(873);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(659);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(826);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(714);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(690);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(814);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(840);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(879);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(881);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(903);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(836);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(563);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(437);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(494);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(898);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(458);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(837);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(959);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(901);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(894);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(926);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(938);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(743);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(919);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(913);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(921);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(447);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(844);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1088);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1089);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1090);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(649);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(927);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1100);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(426);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(927);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(842);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(500);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(627);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(673);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(546);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(829);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(677);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(678);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(679);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(680);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(681);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(682);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(455);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(890);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(476);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1033);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(866);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1097);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1034);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1099);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(651);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(398);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(651);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(605);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(628);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(605);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(601);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(622);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(758);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(995);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(758);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(607);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(778);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(532);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(908);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(516);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(397);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(579);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(766);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(909);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(409);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(912);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(606);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(917);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(783);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(430);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1011);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(488);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(952);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(683);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(952);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1009);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1040);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1092);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1020);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1086);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1093);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1035);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(756);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(469);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(395);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(562);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(846);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(756);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(395);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(846);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(418);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(960);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(939);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(784);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(684);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(749);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(617);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(479);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(634);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(617);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(429);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(424);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(785);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(692);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(752);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(648);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(612);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(744);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(753);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(653);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1025);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1028);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1074);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1045);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1016);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1079);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(992);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(988);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1080);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1091);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(993);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1026);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(982);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1101);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1085);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1106);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1003);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1007);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(984);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1012);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1109);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1108);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1065);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1067);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(986);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1023);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1013);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1037);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1058);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1060);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1036);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1014);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(465);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(728);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(823);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(711);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(811);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(812);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(813);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(816);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(818);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(821);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(706);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(958);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(906);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(734);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(860);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(747);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(911);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(612);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(744);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(753);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(761);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(620);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1072);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1004);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1096);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1047);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1048);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1046);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(594);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(367);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(848);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(538);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(762);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(515);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(543);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(621);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(950);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(750);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(801);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(548);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(945);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(549);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(554);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(557);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(558);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1076);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1083);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(614);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(524);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(389);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(755);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(663);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(529);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(825);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(389);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(755);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(399);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(759);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(410);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(411);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(578);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(700);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1087);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(609);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(795);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(585);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(503);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(585);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(944);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(670);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(481);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(482);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(887);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(450);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(892);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(723);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(484);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(475);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(710);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(865);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(916);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(951);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(742);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(724);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(874);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(726);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(899);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(727);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(729);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(745);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(852);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(739);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(769);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(856);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(701);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(675);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(770);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(857);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(771);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(736);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(772);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(443);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(786);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(924);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(561);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(365);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(420);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(890);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(650);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(994);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1056);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1077);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1063);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1081);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(845);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(861);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(757);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(854);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(686);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(802);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(732);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(654);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(442);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(654);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(422);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(859);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(506);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(895);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(875);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(510);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(575);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(513);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(522);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(523);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(525);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(526);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(527);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(528);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(535);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(781);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(545);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(428);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(685);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(635);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(643);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(412);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(782);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(641);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(918);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(442);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(802);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(694);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(787);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(788);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(502);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(567);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(400);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(401);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(564);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(632);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(568);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1042);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1032);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1042);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(579);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1008);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1041);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1049);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1039);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1094);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(985);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1018);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1102);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1005);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(473);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(480);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(937);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(359);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(586);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(587);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(483);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(581);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(582);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(888);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(583);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(584);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(427);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(871);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(505);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(896);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(876);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(877);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(882);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(867);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(537);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(576);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(669);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(907);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(547);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(396);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(637);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(863);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(910);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(431);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(922);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(920);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(432);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(923);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(434);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(702);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(435);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(361);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(404);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(792);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(733);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(683);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(794);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(948);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(696);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(529);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(722);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(478);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(374);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(731);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(715);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(709);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(868);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(665);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(465);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(940);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(699);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(704);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(740);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(413);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(414);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(941);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(942);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(943);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(751);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1075);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1019);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(493);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(623);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(618);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(493);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(562);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(953);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(542);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(768);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(504);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(512);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(517);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(518);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(520);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(674);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(639);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(869);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(623);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(456);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1030);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1082);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(983);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1053);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1070);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1022);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1069);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(987);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1050);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1095);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1062);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1021);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1112);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1061);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1068);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(957);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(472);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(835);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(954);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(955);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(956);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(616);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(763);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(932);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(712);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(610);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(795);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(832);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(514);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(853);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(915);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(373);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1103);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1038);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1027);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(851);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(870);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(646);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(897);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(872);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(507);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(508);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(902);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(883);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(765);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(364);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(900);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(629);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(555);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(559);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(914);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(644);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1054);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(995);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1043);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(999);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(997);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(998);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1071);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1000);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1017);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1001);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1055);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1107);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1057);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1114);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1059);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1002);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1117);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1115);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1116);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1113);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(598);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(599);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(417);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(930);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(636);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(499);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1084);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(499);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(362);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(847);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(380);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(611);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(390);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(624);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(511);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(827);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(828);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(570);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(369);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(626);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(630);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(553);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(631);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(633);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(961);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(640);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(962);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(642);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(963);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(645);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(572);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(647);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(719);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(441);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(580);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(869);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(720);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(841);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(862);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(503);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(833);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(665);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(671);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(855);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(904);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(672);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(838);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(735);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(737);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(445);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(446);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(519);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(406);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1073);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(996);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(474);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(613);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(550);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(619);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1006);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1044);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(991);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1110);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1111);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(360);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(366);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(368);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(797);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(798);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(799);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(800);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(964);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(970);
      if (lookahead == '\r') ADVANCE(967);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead != 0) ADVANCE(972);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(970);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead != 0) ADVANCE(972);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(972);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead != 0) ADVANCE(968);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '*') ADVANCE(974);
      if (lookahead != 0) ADVANCE(972);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '-') ADVANCE(971);
      if (lookahead == '/') ADVANCE(969);
      if (lookahead == '\\') ADVANCE(966);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(970);
      if (lookahead != 0) ADVANCE(972);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '-') ADVANCE(968);
      if (lookahead != 0) ADVANCE(972);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead != 0) ADVANCE(972);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead == '/') ADVANCE(972);
      if (lookahead != 0) ADVANCE(974);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '*') ADVANCE(973);
      if (lookahead != 0) ADVANCE(974);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(36);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(313);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(977);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(978);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_comment_ml);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_comment_sl);
      if (lookahead == '"') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(981);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_comment_sl);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(981);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_kw_create);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_kw_alter);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_kw_package);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_kw_function);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_kw_procedure);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_kw_trigger);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_kw_type);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_kw_datatype_type);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_kw_datatype_rowtype);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_kw_library);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_kw_true);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_kw_false);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_kw_null);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_kw_not);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_kw_row);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(777);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_kw_count);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_kw_first);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_kw_last);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_kw_limit);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_kw_rowcount);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_kw_bulk_rowcount);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_kw_compile);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_kw_debug);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_kw_specification);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_kw_body);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_kw_declare);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_kw_begin);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_kw_end);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_kw_or);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_kw_and);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_kw_replace);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_kw_editionable);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_kw_noneditionable);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_kw_metadata);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_kw_none);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_kw_default);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_kw_collation);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_kw_using_nls_comp);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_kw_authid);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_kw_current_user);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_kw_definer);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_kw_accessible);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_kw_by);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_kw_by);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(498);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_kw_reuse);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_kw_settings);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_kw_byte);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_kw_char);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_kw_char);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_kw_is);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_kw_is);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(796);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_kw_as);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_kw_deterministic);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_kw_pipelined);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_kw_parallel_enable);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_kw_result_cache);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_kw_exists);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_kw_between);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_kw_found);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_kw_isopen);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_kw_in);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1054);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_kw_out);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_kw_nocopy);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_kw_like);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_kw_inserting);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_kw_deleting);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_kw_updating);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_kw_return);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_kw_varchar);
      if (lookahead == '2') ADVANCE(1051);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_kw_varchar2);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_kw_nvarchar2);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_kw_nchar);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_kw_int);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_kw_smallint);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_kw_real);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_kw_binary_float);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_kw_binary_double);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_kw_simple_float);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_kw_simple_double);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_kw_binary_integer);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_kw_pls_integer);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_kw_natural);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1064);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_kw_naturaln);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_kw_positive);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1066);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_kw_positiven);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_kw_signtype);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_kw_simple_integer);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_kw_integer);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_kw_number);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_kw_float);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_kw_long);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_kw_raw);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_kw_date);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_kw_timestamp);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_kw_with);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_kw_local);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_kw_time);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_kw_time);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(900);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_kw_zone);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_kw_interval);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_kw_year);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_kw_month);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_kw_day);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_kw_minute);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_kw_second);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_kw_to);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_kw_blob);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_kw_clob);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_kw_nclob);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_kw_bfile);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_kw_rowid);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_kw_urowid);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_kw_boolean);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_kw_character);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_kw_varying);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_kw_numeric);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_kw_decimal);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_kw_dec);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_kw_dec);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_kw_double);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_kw_precision);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_kw_sys);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_kw_anydata);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_kw_anydata);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(551);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_kw_anytype);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_kw_anydataset);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_kw_xmltype);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_kw_uritype);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_kw_sdo_geometry);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_kw_sdo_topo_geometry);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_kw_sdo_georaster);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_kw_json_element_t);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_kw_json_array_t);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_kw_json_object_t);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_kw_json_scalar_t);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_kw_json_key_list);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 324},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 324},
  [24] = {.lex_state = 324},
  [25] = {.lex_state = 324},
  [26] = {.lex_state = 324},
  [27] = {.lex_state = 324},
  [28] = {.lex_state = 324},
  [29] = {.lex_state = 324},
  [30] = {.lex_state = 324},
  [31] = {.lex_state = 324},
  [32] = {.lex_state = 324},
  [33] = {.lex_state = 324},
  [34] = {.lex_state = 324},
  [35] = {.lex_state = 324},
  [36] = {.lex_state = 324},
  [37] = {.lex_state = 324},
  [38] = {.lex_state = 324},
  [39] = {.lex_state = 324},
  [40] = {.lex_state = 324},
  [41] = {.lex_state = 324},
  [42] = {.lex_state = 324},
  [43] = {.lex_state = 324},
  [44] = {.lex_state = 324},
  [45] = {.lex_state = 324},
  [46] = {.lex_state = 324},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 325},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 326},
  [58] = {.lex_state = 324},
  [59] = {.lex_state = 25},
  [60] = {.lex_state = 25},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 25},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 327},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 327},
  [67] = {.lex_state = 327},
  [68] = {.lex_state = 327},
  [69] = {.lex_state = 327},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 28},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 327},
  [75] = {.lex_state = 24},
  [76] = {.lex_state = 24},
  [77] = {.lex_state = 24},
  [78] = {.lex_state = 24},
  [79] = {.lex_state = 35},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 23},
  [85] = {.lex_state = 35},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 25},
  [91] = {.lex_state = 28},
  [92] = {.lex_state = 28},
  [93] = {.lex_state = 35},
  [94] = {.lex_state = 35},
  [95] = {.lex_state = 24},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 35},
  [98] = {.lex_state = 35},
  [99] = {.lex_state = 25},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 324},
  [102] = {.lex_state = 35},
  [103] = {.lex_state = 35},
  [104] = {.lex_state = 324},
  [105] = {.lex_state = 25},
  [106] = {.lex_state = 25},
  [107] = {.lex_state = 25},
  [108] = {.lex_state = 25},
  [109] = {.lex_state = 324},
  [110] = {.lex_state = 324},
  [111] = {.lex_state = 25},
  [112] = {.lex_state = 25},
  [113] = {.lex_state = 324},
  [114] = {.lex_state = 35},
  [115] = {.lex_state = 324},
  [116] = {.lex_state = 324},
  [117] = {.lex_state = 324},
  [118] = {.lex_state = 324},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 35},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 324},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 324},
  [126] = {.lex_state = 324},
  [127] = {.lex_state = 324},
  [128] = {.lex_state = 324},
  [129] = {.lex_state = 324},
  [130] = {.lex_state = 324},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 324},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 327},
  [135] = {.lex_state = 327},
  [136] = {.lex_state = 327},
  [137] = {.lex_state = 35},
  [138] = {.lex_state = 35},
  [139] = {.lex_state = 35},
  [140] = {.lex_state = 35},
  [141] = {.lex_state = 35},
  [142] = {.lex_state = 35},
  [143] = {.lex_state = 35},
  [144] = {.lex_state = 35},
  [145] = {.lex_state = 35},
  [146] = {.lex_state = 35},
  [147] = {.lex_state = 35},
  [148] = {.lex_state = 25},
  [149] = {.lex_state = 35},
  [150] = {.lex_state = 35},
  [151] = {.lex_state = 35},
  [152] = {.lex_state = 35},
  [153] = {.lex_state = 35},
  [154] = {.lex_state = 35},
  [155] = {.lex_state = 35},
  [156] = {.lex_state = 35},
  [157] = {.lex_state = 35},
  [158] = {.lex_state = 35},
  [159] = {.lex_state = 35},
  [160] = {.lex_state = 23},
  [161] = {.lex_state = 23},
  [162] = {.lex_state = 35},
  [163] = {.lex_state = 35},
  [164] = {.lex_state = 35},
  [165] = {.lex_state = 35},
  [166] = {.lex_state = 35},
  [167] = {.lex_state = 35},
  [168] = {.lex_state = 35},
  [169] = {.lex_state = 35},
  [170] = {.lex_state = 35},
  [171] = {.lex_state = 25},
  [172] = {.lex_state = 35},
  [173] = {.lex_state = 35},
  [174] = {.lex_state = 35},
  [175] = {.lex_state = 35},
  [176] = {.lex_state = 23},
  [177] = {.lex_state = 23},
  [178] = {.lex_state = 23},
  [179] = {.lex_state = 30},
  [180] = {.lex_state = 23},
  [181] = {.lex_state = 23},
  [182] = {.lex_state = 23},
  [183] = {.lex_state = 23},
  [184] = {.lex_state = 23},
  [185] = {.lex_state = 25},
  [186] = {.lex_state = 25},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 23},
  [189] = {.lex_state = 324},
  [190] = {.lex_state = 23},
  [191] = {.lex_state = 28},
  [192] = {.lex_state = 23},
  [193] = {.lex_state = 324},
  [194] = {.lex_state = 23},
  [195] = {.lex_state = 23},
  [196] = {.lex_state = 23},
  [197] = {.lex_state = 23},
  [198] = {.lex_state = 23},
  [199] = {.lex_state = 324},
  [200] = {.lex_state = 324},
  [201] = {.lex_state = 324},
  [202] = {.lex_state = 23},
  [203] = {.lex_state = 324},
  [204] = {.lex_state = 324},
  [205] = {.lex_state = 23},
  [206] = {.lex_state = 324},
  [207] = {.lex_state = 23},
  [208] = {.lex_state = 23},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 30},
  [211] = {.lex_state = 30},
  [212] = {.lex_state = 30},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 23},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 23},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 23},
  [219] = {.lex_state = 23},
  [220] = {.lex_state = 30},
  [221] = {.lex_state = 23},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 30},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 30},
  [227] = {.lex_state = 23},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 23},
  [230] = {.lex_state = 23},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 23},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 23},
  [239] = {.lex_state = 23},
  [240] = {.lex_state = 30},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 30},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 30},
  [247] = {.lex_state = 30},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 30},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 30},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 35},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 35},
  [261] = {.lex_state = 23},
  [262] = {.lex_state = 30},
  [263] = {.lex_state = 23},
  [264] = {.lex_state = 23},
  [265] = {.lex_state = 23},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 23},
  [270] = {.lex_state = 23},
  [271] = {.lex_state = 23},
  [272] = {.lex_state = 23},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 324},
  [275] = {.lex_state = 30},
  [276] = {.lex_state = 30},
  [277] = {.lex_state = 23},
  [278] = {.lex_state = 30},
  [279] = {.lex_state = 30},
  [280] = {.lex_state = 30},
  [281] = {.lex_state = 30},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 30},
  [285] = {.lex_state = 30},
  [286] = {.lex_state = 30},
  [287] = {.lex_state = 30},
  [288] = {.lex_state = 30},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 30},
  [295] = {.lex_state = 23},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 23},
  [298] = {.lex_state = 23},
  [299] = {.lex_state = 23},
  [300] = {.lex_state = 30},
  [301] = {.lex_state = 324},
  [302] = {.lex_state = 30},
  [303] = {.lex_state = 30},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 30},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 23},
  [308] = {.lex_state = 23},
  [309] = {.lex_state = 30},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 30},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 30},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 30},
  [318] = {.lex_state = 23},
  [319] = {.lex_state = 23},
  [320] = {.lex_state = 23},
  [321] = {.lex_state = 23},
  [322] = {.lex_state = 23},
  [323] = {.lex_state = 23},
  [324] = {.lex_state = 23},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 23},
  [327] = {.lex_state = 23},
  [328] = {.lex_state = 324},
  [329] = {.lex_state = 23},
  [330] = {.lex_state = 23},
  [331] = {.lex_state = 23},
  [332] = {.lex_state = 23},
  [333] = {.lex_state = 29},
  [334] = {.lex_state = 23},
  [335] = {.lex_state = 23},
  [336] = {.lex_state = 23},
  [337] = {.lex_state = 23},
  [338] = {.lex_state = 23},
  [339] = {.lex_state = 23},
  [340] = {.lex_state = 23},
  [341] = {.lex_state = 23},
  [342] = {.lex_state = 23},
  [343] = {.lex_state = 24},
  [344] = {.lex_state = 23},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 30},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 23},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 24},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 23},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 23},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 30},
  [370] = {.lex_state = 23},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 23},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 23},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 23},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 23},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 23},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 29},
  [392] = {.lex_state = 23},
  [393] = {.lex_state = 23},
  [394] = {.lex_state = 23},
  [395] = {.lex_state = 23},
  [396] = {.lex_state = 23},
  [397] = {.lex_state = 970},
  [398] = {.lex_state = 23},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 23},
  [405] = {.lex_state = 324},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 23},
  [408] = {.lex_state = 23},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 23},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 24},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 23},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 970},
  [423] = {.lex_state = 24},
  [424] = {.lex_state = 23},
  [425] = {.lex_state = 23},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 970},
  [430] = {.lex_state = 970},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__unquoted_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym__float] = ACTIONS(1),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_create] = ACTIONS(1),
    [sym_kw_alter] = ACTIONS(1),
    [sym_kw_package] = ACTIONS(1),
    [sym_kw_function] = ACTIONS(1),
    [sym_kw_procedure] = ACTIONS(1),
    [sym_kw_trigger] = ACTIONS(1),
    [sym_kw_type] = ACTIONS(1),
    [sym_kw_datatype_type] = ACTIONS(1),
    [sym_kw_library] = ACTIONS(1),
    [sym_kw_true] = ACTIONS(1),
    [sym_kw_false] = ACTIONS(1),
    [sym_kw_null] = ACTIONS(1),
    [sym_kw_not] = ACTIONS(1),
    [sym_kw_row] = ACTIONS(1),
    [sym_kw_count] = ACTIONS(1),
    [sym_kw_first] = ACTIONS(1),
    [sym_kw_last] = ACTIONS(1),
    [sym_kw_limit] = ACTIONS(1),
    [sym_kw_rowcount] = ACTIONS(1),
    [sym_kw_bulk_rowcount] = ACTIONS(1),
    [sym_kw_compile] = ACTIONS(1),
    [sym_kw_debug] = ACTIONS(1),
    [sym_kw_specification] = ACTIONS(1),
    [sym_kw_body] = ACTIONS(1),
    [sym_kw_declare] = ACTIONS(1),
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
    [sym_source_file] = STATE(427),
    [sym__element] = STATE(65),
    [sym_sql_statement] = STATE(65),
    [sym__ddl_statement] = STATE(273),
    [sym__create_statement] = STATE(273),
    [sym_create_package] = STATE(273),
    [sym__alter_statement] = STATE(273),
    [sym_alter_package] = STATE(273),
    [sym_alter_procedure] = STATE(273),
    [sym_alter_function] = STATE(273),
    [sym_alter_library] = STATE(273),
    [sym_create_obj] = STATE(274),
    [aux_sym_source_file_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment_ml] = ACTIONS(7),
    [sym_comment_sl] = ACTIONS(7),
    [sym_kw_create] = ACTIONS(9),
    [sym_kw_alter] = ACTIONS(11),
  },
  [2] = {
    [sym__schema] = STATE(223),
    [sym__referenced_element] = STATE(353),
    [sym__referenced_element_parent] = STATE(76),
    [sym__referenced_element_name] = STATE(77),
    [sym_datatype] = STATE(260),
    [sym__character_datatypes] = STATE(167),
    [sym__character_datatypes_char] = STATE(167),
    [sym__character_datatypes_varchar2] = STATE(167),
    [sym__character_datatypes_nchar] = STATE(167),
    [sym__character_datatypes_nvarchar2] = STATE(167),
    [sym__number_datatypes] = STATE(167),
    [sym__number_datatypes_keyword] = STATE(167),
    [sym__number_datatypes_number] = STATE(167),
    [sym__number_datatypes_float] = STATE(167),
    [sym__long_and_raw_datatypes] = STATE(167),
    [sym__long_and_raw_datatypes_long_raw] = STATE(167),
    [sym__long_and_raw_datatypes_raw] = STATE(167),
    [sym__datetime_datatypes] = STATE(167),
    [sym__datetime_datatypes_keyword] = STATE(167),
    [sym__datetime_datatypes_date_timestamp] = STATE(167),
    [sym__datetime_datatypes_date_interval_year] = STATE(167),
    [sym__datetime_datatypes_date_interval_day] = STATE(167),
    [sym__large_object_datatypes] = STATE(167),
    [sym__rowid_datatypes] = STATE(167),
    [sym__referenced_datatypes] = STATE(172),
    [sym__referenced_datatypes_type] = STATE(165),
    [sym__referenced_datatypes_rowtype] = STATE(163),
    [sym__logical_datatypes] = STATE(167),
    [sym__subtype_datatypes] = STATE(167),
    [sym__rowid_datatypes_urowid] = STATE(167),
    [sym__ansi_supported_datatypes_character] = STATE(167),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(167),
    [sym__ansi_supported_datatypes_varchar] = STATE(167),
    [sym__ansi_supported_datatypes_national] = STATE(167),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(167),
    [sym__ansi_supported_datatypes_double_precision] = STATE(167),
    [sym__supplied_datatypes_any_types] = STATE(167),
    [sym__supplied_datatypes_xml_types] = STATE(167),
    [sym__supplied_datatypes_spatial_types] = STATE(167),
    [sym__object_datatypes] = STATE(167),
    [sym__parameter_declaration_element_in] = STATE(366),
    [sym__parameter_declaration_element_in_out_or_out] = STATE(366),
    [sym_identifier] = STATE(79),
    [sym__quoted_identifier] = STATE(12),
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
    [sym_kw_date] = ACTIONS(33),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(33),
    [sym_kw_clob] = ACTIONS(33),
    [sym_kw_nclob] = ACTIONS(33),
    [sym_kw_bfile] = ACTIONS(33),
    [sym_kw_rowid] = ACTIONS(33),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(33),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(33),
    [sym_kw_uritype] = ACTIONS(33),
    [sym_kw_sdo_geometry] = ACTIONS(33),
    [sym_kw_sdo_topo_geometry] = ACTIONS(33),
    [sym_kw_sdo_georaster] = ACTIONS(33),
    [sym_kw_json_element_t] = ACTIONS(33),
    [sym_kw_json_array_t] = ACTIONS(33),
    [sym_kw_json_object_t] = ACTIONS(33),
    [sym_kw_json_scalar_t] = ACTIONS(33),
    [sym_kw_json_key_list] = ACTIONS(33),
  },
  [3] = {
    [sym__schema] = STATE(223),
    [sym__referenced_element] = STATE(353),
    [sym__referenced_element_parent] = STATE(76),
    [sym__referenced_element_name] = STATE(77),
    [sym_datatype] = STATE(349),
    [sym__character_datatypes] = STATE(167),
    [sym__character_datatypes_char] = STATE(167),
    [sym__character_datatypes_varchar2] = STATE(167),
    [sym__character_datatypes_nchar] = STATE(167),
    [sym__character_datatypes_nvarchar2] = STATE(167),
    [sym__number_datatypes] = STATE(167),
    [sym__number_datatypes_keyword] = STATE(167),
    [sym__number_datatypes_number] = STATE(167),
    [sym__number_datatypes_float] = STATE(167),
    [sym__long_and_raw_datatypes] = STATE(167),
    [sym__long_and_raw_datatypes_long_raw] = STATE(167),
    [sym__long_and_raw_datatypes_raw] = STATE(167),
    [sym__datetime_datatypes] = STATE(167),
    [sym__datetime_datatypes_keyword] = STATE(167),
    [sym__datetime_datatypes_date_timestamp] = STATE(167),
    [sym__datetime_datatypes_date_interval_year] = STATE(167),
    [sym__datetime_datatypes_date_interval_day] = STATE(167),
    [sym__large_object_datatypes] = STATE(167),
    [sym__rowid_datatypes] = STATE(167),
    [sym__referenced_datatypes] = STATE(172),
    [sym__referenced_datatypes_type] = STATE(165),
    [sym__referenced_datatypes_rowtype] = STATE(163),
    [sym__logical_datatypes] = STATE(167),
    [sym__subtype_datatypes] = STATE(167),
    [sym__rowid_datatypes_urowid] = STATE(167),
    [sym__ansi_supported_datatypes_character] = STATE(167),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(167),
    [sym__ansi_supported_datatypes_varchar] = STATE(167),
    [sym__ansi_supported_datatypes_national] = STATE(167),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(167),
    [sym__ansi_supported_datatypes_double_precision] = STATE(167),
    [sym__supplied_datatypes_any_types] = STATE(167),
    [sym__supplied_datatypes_xml_types] = STATE(167),
    [sym__supplied_datatypes_spatial_types] = STATE(167),
    [sym__object_datatypes] = STATE(167),
    [sym_identifier] = STATE(79),
    [sym__quoted_identifier] = STATE(12),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(17),
    [sym_kw_nocopy] = ACTIONS(59),
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
    [sym_kw_date] = ACTIONS(33),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(33),
    [sym_kw_clob] = ACTIONS(33),
    [sym_kw_nclob] = ACTIONS(33),
    [sym_kw_bfile] = ACTIONS(33),
    [sym_kw_rowid] = ACTIONS(33),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(33),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(33),
    [sym_kw_uritype] = ACTIONS(33),
    [sym_kw_sdo_geometry] = ACTIONS(33),
    [sym_kw_sdo_topo_geometry] = ACTIONS(33),
    [sym_kw_sdo_georaster] = ACTIONS(33),
    [sym_kw_json_element_t] = ACTIONS(33),
    [sym_kw_json_array_t] = ACTIONS(33),
    [sym_kw_json_object_t] = ACTIONS(33),
    [sym_kw_json_scalar_t] = ACTIONS(33),
    [sym_kw_json_key_list] = ACTIONS(33),
  },
  [4] = {
    [sym__schema] = STATE(223),
    [sym__referenced_element] = STATE(353),
    [sym__referenced_element_parent] = STATE(76),
    [sym__referenced_element_name] = STATE(77),
    [sym_datatype] = STATE(363),
    [sym__character_datatypes] = STATE(167),
    [sym__character_datatypes_char] = STATE(167),
    [sym__character_datatypes_varchar2] = STATE(167),
    [sym__character_datatypes_nchar] = STATE(167),
    [sym__character_datatypes_nvarchar2] = STATE(167),
    [sym__number_datatypes] = STATE(167),
    [sym__number_datatypes_keyword] = STATE(167),
    [sym__number_datatypes_number] = STATE(167),
    [sym__number_datatypes_float] = STATE(167),
    [sym__long_and_raw_datatypes] = STATE(167),
    [sym__long_and_raw_datatypes_long_raw] = STATE(167),
    [sym__long_and_raw_datatypes_raw] = STATE(167),
    [sym__datetime_datatypes] = STATE(167),
    [sym__datetime_datatypes_keyword] = STATE(167),
    [sym__datetime_datatypes_date_timestamp] = STATE(167),
    [sym__datetime_datatypes_date_interval_year] = STATE(167),
    [sym__datetime_datatypes_date_interval_day] = STATE(167),
    [sym__large_object_datatypes] = STATE(167),
    [sym__rowid_datatypes] = STATE(167),
    [sym__referenced_datatypes] = STATE(172),
    [sym__referenced_datatypes_type] = STATE(165),
    [sym__referenced_datatypes_rowtype] = STATE(163),
    [sym__logical_datatypes] = STATE(167),
    [sym__subtype_datatypes] = STATE(167),
    [sym__rowid_datatypes_urowid] = STATE(167),
    [sym__ansi_supported_datatypes_character] = STATE(167),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(167),
    [sym__ansi_supported_datatypes_varchar] = STATE(167),
    [sym__ansi_supported_datatypes_national] = STATE(167),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(167),
    [sym__ansi_supported_datatypes_double_precision] = STATE(167),
    [sym__supplied_datatypes_any_types] = STATE(167),
    [sym__supplied_datatypes_xml_types] = STATE(167),
    [sym__supplied_datatypes_spatial_types] = STATE(167),
    [sym__object_datatypes] = STATE(167),
    [sym_identifier] = STATE(79),
    [sym__quoted_identifier] = STATE(12),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(17),
    [sym_kw_nocopy] = ACTIONS(61),
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
    [sym_kw_date] = ACTIONS(33),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(33),
    [sym_kw_clob] = ACTIONS(33),
    [sym_kw_nclob] = ACTIONS(33),
    [sym_kw_bfile] = ACTIONS(33),
    [sym_kw_rowid] = ACTIONS(33),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(33),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(33),
    [sym_kw_uritype] = ACTIONS(33),
    [sym_kw_sdo_geometry] = ACTIONS(33),
    [sym_kw_sdo_topo_geometry] = ACTIONS(33),
    [sym_kw_sdo_georaster] = ACTIONS(33),
    [sym_kw_json_element_t] = ACTIONS(33),
    [sym_kw_json_array_t] = ACTIONS(33),
    [sym_kw_json_object_t] = ACTIONS(33),
    [sym_kw_json_scalar_t] = ACTIONS(33),
    [sym_kw_json_key_list] = ACTIONS(33),
  },
  [5] = {
    [sym__schema] = STATE(223),
    [sym__referenced_element] = STATE(353),
    [sym__referenced_element_parent] = STATE(76),
    [sym__referenced_element_name] = STATE(77),
    [sym_datatype] = STATE(258),
    [sym__character_datatypes] = STATE(167),
    [sym__character_datatypes_char] = STATE(167),
    [sym__character_datatypes_varchar2] = STATE(167),
    [sym__character_datatypes_nchar] = STATE(167),
    [sym__character_datatypes_nvarchar2] = STATE(167),
    [sym__number_datatypes] = STATE(167),
    [sym__number_datatypes_keyword] = STATE(167),
    [sym__number_datatypes_number] = STATE(167),
    [sym__number_datatypes_float] = STATE(167),
    [sym__long_and_raw_datatypes] = STATE(167),
    [sym__long_and_raw_datatypes_long_raw] = STATE(167),
    [sym__long_and_raw_datatypes_raw] = STATE(167),
    [sym__datetime_datatypes] = STATE(167),
    [sym__datetime_datatypes_keyword] = STATE(167),
    [sym__datetime_datatypes_date_timestamp] = STATE(167),
    [sym__datetime_datatypes_date_interval_year] = STATE(167),
    [sym__datetime_datatypes_date_interval_day] = STATE(167),
    [sym__large_object_datatypes] = STATE(167),
    [sym__rowid_datatypes] = STATE(167),
    [sym__referenced_datatypes] = STATE(172),
    [sym__referenced_datatypes_type] = STATE(165),
    [sym__referenced_datatypes_rowtype] = STATE(163),
    [sym__logical_datatypes] = STATE(167),
    [sym__subtype_datatypes] = STATE(167),
    [sym__rowid_datatypes_urowid] = STATE(167),
    [sym__ansi_supported_datatypes_character] = STATE(167),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(167),
    [sym__ansi_supported_datatypes_varchar] = STATE(167),
    [sym__ansi_supported_datatypes_national] = STATE(167),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(167),
    [sym__ansi_supported_datatypes_double_precision] = STATE(167),
    [sym__supplied_datatypes_any_types] = STATE(167),
    [sym__supplied_datatypes_xml_types] = STATE(167),
    [sym__supplied_datatypes_spatial_types] = STATE(167),
    [sym__object_datatypes] = STATE(167),
    [sym_identifier] = STATE(79),
    [sym__quoted_identifier] = STATE(12),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(17),
    [sym_kw_out] = ACTIONS(63),
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
    [sym_kw_date] = ACTIONS(33),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(33),
    [sym_kw_clob] = ACTIONS(33),
    [sym_kw_nclob] = ACTIONS(33),
    [sym_kw_bfile] = ACTIONS(33),
    [sym_kw_rowid] = ACTIONS(33),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(33),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(33),
    [sym_kw_uritype] = ACTIONS(33),
    [sym_kw_sdo_geometry] = ACTIONS(33),
    [sym_kw_sdo_topo_geometry] = ACTIONS(33),
    [sym_kw_sdo_georaster] = ACTIONS(33),
    [sym_kw_json_element_t] = ACTIONS(33),
    [sym_kw_json_array_t] = ACTIONS(33),
    [sym_kw_json_object_t] = ACTIONS(33),
    [sym_kw_json_scalar_t] = ACTIONS(33),
    [sym_kw_json_key_list] = ACTIONS(33),
  },
  [6] = {
    [sym__schema] = STATE(223),
    [sym__referenced_element] = STATE(353),
    [sym__referenced_element_parent] = STATE(76),
    [sym__referenced_element_name] = STATE(77),
    [sym_datatype] = STATE(261),
    [sym__character_datatypes] = STATE(167),
    [sym__character_datatypes_char] = STATE(167),
    [sym__character_datatypes_varchar2] = STATE(167),
    [sym__character_datatypes_nchar] = STATE(167),
    [sym__character_datatypes_nvarchar2] = STATE(167),
    [sym__number_datatypes] = STATE(167),
    [sym__number_datatypes_keyword] = STATE(167),
    [sym__number_datatypes_number] = STATE(167),
    [sym__number_datatypes_float] = STATE(167),
    [sym__long_and_raw_datatypes] = STATE(167),
    [sym__long_and_raw_datatypes_long_raw] = STATE(167),
    [sym__long_and_raw_datatypes_raw] = STATE(167),
    [sym__datetime_datatypes] = STATE(167),
    [sym__datetime_datatypes_keyword] = STATE(167),
    [sym__datetime_datatypes_date_timestamp] = STATE(167),
    [sym__datetime_datatypes_date_interval_year] = STATE(167),
    [sym__datetime_datatypes_date_interval_day] = STATE(167),
    [sym__large_object_datatypes] = STATE(167),
    [sym__rowid_datatypes] = STATE(167),
    [sym__referenced_datatypes] = STATE(172),
    [sym__referenced_datatypes_type] = STATE(165),
    [sym__referenced_datatypes_rowtype] = STATE(163),
    [sym__logical_datatypes] = STATE(167),
    [sym__subtype_datatypes] = STATE(167),
    [sym__rowid_datatypes_urowid] = STATE(167),
    [sym__ansi_supported_datatypes_character] = STATE(167),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(167),
    [sym__ansi_supported_datatypes_varchar] = STATE(167),
    [sym__ansi_supported_datatypes_national] = STATE(167),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(167),
    [sym__ansi_supported_datatypes_double_precision] = STATE(167),
    [sym__supplied_datatypes_any_types] = STATE(167),
    [sym__supplied_datatypes_xml_types] = STATE(167),
    [sym__supplied_datatypes_spatial_types] = STATE(167),
    [sym__object_datatypes] = STATE(167),
    [sym_identifier] = STATE(79),
    [sym__quoted_identifier] = STATE(12),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(17),
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
    [sym_kw_date] = ACTIONS(33),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(33),
    [sym_kw_clob] = ACTIONS(33),
    [sym_kw_nclob] = ACTIONS(33),
    [sym_kw_bfile] = ACTIONS(33),
    [sym_kw_rowid] = ACTIONS(33),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(33),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(33),
    [sym_kw_uritype] = ACTIONS(33),
    [sym_kw_sdo_geometry] = ACTIONS(33),
    [sym_kw_sdo_topo_geometry] = ACTIONS(33),
    [sym_kw_sdo_georaster] = ACTIONS(33),
    [sym_kw_json_element_t] = ACTIONS(33),
    [sym_kw_json_array_t] = ACTIONS(33),
    [sym_kw_json_object_t] = ACTIONS(33),
    [sym_kw_json_scalar_t] = ACTIONS(33),
    [sym_kw_json_key_list] = ACTIONS(33),
  },
  [7] = {
    [sym__schema] = STATE(223),
    [sym__referenced_element] = STATE(353),
    [sym__referenced_element_parent] = STATE(76),
    [sym__referenced_element_name] = STATE(77),
    [sym_datatype] = STATE(363),
    [sym__character_datatypes] = STATE(167),
    [sym__character_datatypes_char] = STATE(167),
    [sym__character_datatypes_varchar2] = STATE(167),
    [sym__character_datatypes_nchar] = STATE(167),
    [sym__character_datatypes_nvarchar2] = STATE(167),
    [sym__number_datatypes] = STATE(167),
    [sym__number_datatypes_keyword] = STATE(167),
    [sym__number_datatypes_number] = STATE(167),
    [sym__number_datatypes_float] = STATE(167),
    [sym__long_and_raw_datatypes] = STATE(167),
    [sym__long_and_raw_datatypes_long_raw] = STATE(167),
    [sym__long_and_raw_datatypes_raw] = STATE(167),
    [sym__datetime_datatypes] = STATE(167),
    [sym__datetime_datatypes_keyword] = STATE(167),
    [sym__datetime_datatypes_date_timestamp] = STATE(167),
    [sym__datetime_datatypes_date_interval_year] = STATE(167),
    [sym__datetime_datatypes_date_interval_day] = STATE(167),
    [sym__large_object_datatypes] = STATE(167),
    [sym__rowid_datatypes] = STATE(167),
    [sym__referenced_datatypes] = STATE(172),
    [sym__referenced_datatypes_type] = STATE(165),
    [sym__referenced_datatypes_rowtype] = STATE(163),
    [sym__logical_datatypes] = STATE(167),
    [sym__subtype_datatypes] = STATE(167),
    [sym__rowid_datatypes_urowid] = STATE(167),
    [sym__ansi_supported_datatypes_character] = STATE(167),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(167),
    [sym__ansi_supported_datatypes_varchar] = STATE(167),
    [sym__ansi_supported_datatypes_national] = STATE(167),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(167),
    [sym__ansi_supported_datatypes_double_precision] = STATE(167),
    [sym__supplied_datatypes_any_types] = STATE(167),
    [sym__supplied_datatypes_xml_types] = STATE(167),
    [sym__supplied_datatypes_spatial_types] = STATE(167),
    [sym__object_datatypes] = STATE(167),
    [sym_identifier] = STATE(79),
    [sym__quoted_identifier] = STATE(12),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(17),
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
    [sym_kw_date] = ACTIONS(33),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(33),
    [sym_kw_clob] = ACTIONS(33),
    [sym_kw_nclob] = ACTIONS(33),
    [sym_kw_bfile] = ACTIONS(33),
    [sym_kw_rowid] = ACTIONS(33),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(33),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(33),
    [sym_kw_uritype] = ACTIONS(33),
    [sym_kw_sdo_geometry] = ACTIONS(33),
    [sym_kw_sdo_topo_geometry] = ACTIONS(33),
    [sym_kw_sdo_georaster] = ACTIONS(33),
    [sym_kw_json_element_t] = ACTIONS(33),
    [sym_kw_json_array_t] = ACTIONS(33),
    [sym_kw_json_object_t] = ACTIONS(33),
    [sym_kw_json_scalar_t] = ACTIONS(33),
    [sym_kw_json_key_list] = ACTIONS(33),
  },
  [8] = {
    [sym__schema] = STATE(223),
    [sym__referenced_element] = STATE(353),
    [sym__referenced_element_parent] = STATE(76),
    [sym__referenced_element_name] = STATE(77),
    [sym_datatype] = STATE(361),
    [sym__character_datatypes] = STATE(167),
    [sym__character_datatypes_char] = STATE(167),
    [sym__character_datatypes_varchar2] = STATE(167),
    [sym__character_datatypes_nchar] = STATE(167),
    [sym__character_datatypes_nvarchar2] = STATE(167),
    [sym__number_datatypes] = STATE(167),
    [sym__number_datatypes_keyword] = STATE(167),
    [sym__number_datatypes_number] = STATE(167),
    [sym__number_datatypes_float] = STATE(167),
    [sym__long_and_raw_datatypes] = STATE(167),
    [sym__long_and_raw_datatypes_long_raw] = STATE(167),
    [sym__long_and_raw_datatypes_raw] = STATE(167),
    [sym__datetime_datatypes] = STATE(167),
    [sym__datetime_datatypes_keyword] = STATE(167),
    [sym__datetime_datatypes_date_timestamp] = STATE(167),
    [sym__datetime_datatypes_date_interval_year] = STATE(167),
    [sym__datetime_datatypes_date_interval_day] = STATE(167),
    [sym__large_object_datatypes] = STATE(167),
    [sym__rowid_datatypes] = STATE(167),
    [sym__referenced_datatypes] = STATE(172),
    [sym__referenced_datatypes_type] = STATE(165),
    [sym__referenced_datatypes_rowtype] = STATE(163),
    [sym__logical_datatypes] = STATE(167),
    [sym__subtype_datatypes] = STATE(167),
    [sym__rowid_datatypes_urowid] = STATE(167),
    [sym__ansi_supported_datatypes_character] = STATE(167),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(167),
    [sym__ansi_supported_datatypes_varchar] = STATE(167),
    [sym__ansi_supported_datatypes_national] = STATE(167),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(167),
    [sym__ansi_supported_datatypes_double_precision] = STATE(167),
    [sym__supplied_datatypes_any_types] = STATE(167),
    [sym__supplied_datatypes_xml_types] = STATE(167),
    [sym__supplied_datatypes_spatial_types] = STATE(167),
    [sym__object_datatypes] = STATE(167),
    [sym_identifier] = STATE(79),
    [sym__quoted_identifier] = STATE(12),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(17),
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
    [sym_kw_date] = ACTIONS(33),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(33),
    [sym_kw_clob] = ACTIONS(33),
    [sym_kw_nclob] = ACTIONS(33),
    [sym_kw_bfile] = ACTIONS(33),
    [sym_kw_rowid] = ACTIONS(33),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(33),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(33),
    [sym_kw_uritype] = ACTIONS(33),
    [sym_kw_sdo_geometry] = ACTIONS(33),
    [sym_kw_sdo_topo_geometry] = ACTIONS(33),
    [sym_kw_sdo_georaster] = ACTIONS(33),
    [sym_kw_json_element_t] = ACTIONS(33),
    [sym_kw_json_array_t] = ACTIONS(33),
    [sym_kw_json_object_t] = ACTIONS(33),
    [sym_kw_json_scalar_t] = ACTIONS(33),
    [sym_kw_json_key_list] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(65), 8,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_in,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(67), 47,
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
    ACTIONS(69), 8,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_in,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(71), 47,
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
  [128] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(69), 7,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_COLON,
    ACTIONS(71), 36,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_or,
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
      sym_kw_like,
      sym_kw_return,
  [180] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(65), 7,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_COLON,
    ACTIONS(67), 36,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_SQUOTE,
      anon_sym_COLON_EQ,
      anon_sym_EQ_GT,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_or,
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
      sym_kw_like,
      sym_kw_return,
  [232] = 28,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    ACTIONS(89), 1,
      sym_kw_not,
    ACTIONS(93), 1,
      sym_kw_updating,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(27), 1,
      sym__referenced_element_name,
    STATE(28), 1,
      sym__referenced_element_parent,
    STATE(30), 1,
      sym_host_variable,
    STATE(31), 1,
      sym__referenced_element,
    STATE(210), 1,
      sym__schema,
    STATE(333), 1,
      sym__sign_pos_neg,
    STATE(373), 1,
      sym__expression_element,
    STATE(374), 1,
      sym__expression_base_operator_not_boolean,
    STATE(376), 1,
      sym__expression_base_boolean,
    STATE(380), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(91), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(218), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(87), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(18), 7,
      sym__expression_base_elements,
      sym_prc_fnc_call,
      sym_placeholder,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [328] = 28,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    ACTIONS(89), 1,
      sym_kw_not,
    ACTIONS(93), 1,
      sym_kw_updating,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(27), 1,
      sym__referenced_element_name,
    STATE(28), 1,
      sym__referenced_element_parent,
    STATE(30), 1,
      sym_host_variable,
    STATE(31), 1,
      sym__referenced_element,
    STATE(210), 1,
      sym__schema,
    STATE(333), 1,
      sym__sign_pos_neg,
    STATE(371), 1,
      sym_expression,
    STATE(373), 1,
      sym__expression_element,
    STATE(374), 1,
      sym__expression_base_operator_not_boolean,
    STATE(376), 1,
      sym__expression_base_boolean,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(91), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(218), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(87), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(18), 7,
      sym__expression_base_elements,
      sym_prc_fnc_call,
      sym_placeholder,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [424] = 24,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    ACTIONS(93), 1,
      sym_kw_updating,
    ACTIONS(97), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(27), 1,
      sym__referenced_element_name,
    STATE(28), 1,
      sym__referenced_element_parent,
    STATE(30), 1,
      sym_host_variable,
    STATE(31), 1,
      sym__referenced_element,
    STATE(210), 1,
      sym__schema,
    STATE(270), 1,
      sym__expression_base_boolean,
    STATE(333), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(91), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(234), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(95), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(58), 7,
      sym__expression_base_elements,
      sym_prc_fnc_call,
      sym_placeholder,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [508] = 22,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    ACTIONS(93), 1,
      sym_kw_updating,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(27), 1,
      sym__referenced_element_name,
    STATE(28), 1,
      sym__referenced_element_parent,
    STATE(30), 1,
      sym_host_variable,
    STATE(31), 1,
      sym__referenced_element,
    STATE(210), 1,
      sym__schema,
    STATE(333), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(91), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(229), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(95), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(58), 7,
      sym__expression_base_elements,
      sym_prc_fnc_call,
      sym_placeholder,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [586] = 22,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    ACTIONS(93), 1,
      sym_kw_updating,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(27), 1,
      sym__referenced_element_name,
    STATE(28), 1,
      sym__referenced_element_parent,
    STATE(30), 1,
      sym_host_variable,
    STATE(31), 1,
      sym__referenced_element,
    STATE(210), 1,
      sym__schema,
    STATE(333), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(91), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(238), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(95), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(58), 7,
      sym__expression_base_elements,
      sym_prc_fnc_call,
      sym_placeholder,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [664] = 14,
    ACTIONS(109), 1,
      sym_kw_is,
    ACTIONS(111), 1,
      sym_kw_between,
    STATE(20), 1,
      sym_expression_operator_not_boolean,
    STATE(21), 1,
      sym_expression_operator_boolean,
    STATE(121), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    STATE(271), 1,
      sym__expression_base_boolean_between,
    STATE(321), 1,
      sym__expression_base_boolean_operator,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(103), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(105), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    STATE(320), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(101), 8,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_kw_like,
  [723] = 19,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(27), 1,
      sym__referenced_element_name,
    STATE(28), 1,
      sym__referenced_element_parent,
    STATE(30), 1,
      sym_host_variable,
    STATE(31), 1,
      sym__referenced_element,
    STATE(210), 1,
      sym__schema,
    STATE(333), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(113), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(298), 7,
      sym__expression_base_elements,
      sym_prc_fnc_call,
      sym_placeholder,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [790] = 19,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(30), 1,
      sym_host_variable,
    STATE(31), 1,
      sym__referenced_element,
    STATE(76), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym__referenced_element_name,
    STATE(95), 1,
      sym_identifier,
    STATE(223), 1,
      sym__schema,
    STATE(333), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(115), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(187), 7,
      sym__expression_base_elements,
      sym_prc_fnc_call,
      sym_placeholder,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [857] = 19,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(27), 1,
      sym__referenced_element_name,
    STATE(28), 1,
      sym__referenced_element_parent,
    STATE(30), 1,
      sym_host_variable,
    STATE(31), 1,
      sym__referenced_element,
    STATE(210), 1,
      sym__schema,
    STATE(333), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(117), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(307), 7,
      sym__expression_base_elements,
      sym_prc_fnc_call,
      sym_placeholder,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [924] = 19,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(27), 1,
      sym__referenced_element_name,
    STATE(28), 1,
      sym__referenced_element_parent,
    STATE(30), 1,
      sym_host_variable,
    STATE(31), 1,
      sym__referenced_element,
    STATE(210), 1,
      sym__schema,
    STATE(333), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(119), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(392), 7,
      sym__expression_base_elements,
      sym_prc_fnc_call,
      sym_placeholder,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [991] = 4,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(121), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(123), 19,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1027] = 5,
    ACTIONS(131), 1,
      anon_sym_AT,
    STATE(37), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(127), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(129), 18,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1065] = 5,
    ACTIONS(131), 1,
      anon_sym_AT,
    STATE(38), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(133), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(135), 18,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1103] = 4,
    ACTIONS(137), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(121), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(123), 19,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1139] = 5,
    ACTIONS(131), 1,
      anon_sym_AT,
    STATE(40), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(139), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(141), 18,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1177] = 5,
    ACTIONS(131), 1,
      anon_sym_AT,
    STATE(39), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(143), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(145), 18,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1215] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(147), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(149), 19,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1248] = 5,
    ACTIONS(155), 1,
      anon_sym_COLON,
    STATE(42), 1,
      sym_indicator_variable,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(151), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(153), 17,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1285] = 5,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(157), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(159), 17,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1322] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(163), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(165), 18,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_COLON,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1354] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(167), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(169), 18,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1386] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(173), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(171), 18,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1418] = 4,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(177), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(179), 17,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1452] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(183), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(181), 18,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1484] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(185), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(187), 18,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1516] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(189), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(191), 18,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1548] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(193), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(195), 18,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1580] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(197), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(199), 18,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1612] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(201), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(203), 17,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1643] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(205), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(207), 17,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1674] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(209), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(211), 17,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1705] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(213), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(215), 17,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1736] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(217), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(219), 17,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1767] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(221), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(223), 17,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [1798] = 15,
    ACTIONS(225), 1,
      sym__unquoted_identifier,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym__single_quote_string,
    ACTIONS(234), 1,
      sym__number,
    ACTIONS(237), 1,
      sym__float,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(47), 1,
      aux_sym_parameter_repeat1,
    STATE(343), 1,
      sym_identifier,
    STATE(357), 1,
      sym_parameter_value,
    STATE(382), 1,
      sym_parameter_element,
    STATE(414), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(355), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(240), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(358), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1851] = 15,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(47), 1,
      aux_sym_parameter_repeat1,
    STATE(343), 1,
      sym_identifier,
    STATE(357), 1,
      sym_parameter_value,
    STATE(375), 1,
      sym_parameter_element,
    STATE(414), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(355), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(243), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(358), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1904] = 15,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(48), 1,
      aux_sym_parameter_repeat1,
    STATE(343), 1,
      sym_identifier,
    STATE(354), 1,
      sym_parameter_element,
    STATE(357), 1,
      sym_parameter_value,
    STATE(414), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(355), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(243), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(358), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1957] = 10,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      sym_kw_debug,
    ACTIONS(251), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(203), 1,
      sym_reuse_settings,
    STATE(391), 1,
      sym_identifier,
    STATE(64), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(247), 3,
      sym_kw_package,
      sym_kw_specification,
      sym_kw_body,
    ACTIONS(245), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [1999] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(147), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      sym__unquoted_identifier,
    ACTIONS(149), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
  [2027] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(189), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      sym__unquoted_identifier,
    ACTIONS(191), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
  [2054] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(185), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      sym__unquoted_identifier,
    ACTIONS(187), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
  [2081] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(193), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      sym__unquoted_identifier,
    ACTIONS(195), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
  [2108] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(197), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      sym__unquoted_identifier,
    ACTIONS(199), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
  [2135] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(167), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      sym__unquoted_identifier,
    ACTIONS(169), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
  [2162] = 9,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(201), 1,
      sym_reuse_settings,
    STATE(391), 1,
      sym_identifier,
    STATE(68), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(255), 3,
      sym_kw_package,
      sym_kw_specification,
      sym_kw_body,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [2201] = 9,
    ACTIONS(109), 1,
      sym_kw_is,
    ACTIONS(111), 1,
      sym_kw_between,
    STATE(21), 1,
      sym_expression_operator_boolean,
    STATE(271), 1,
      sym__expression_base_boolean_between,
    STATE(321), 1,
      sym__expression_base_boolean_operator,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(320), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(101), 8,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_kw_like,
  [2240] = 13,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 1,
      sym__unquoted_identifier,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym__quoted_identifier,
    STATE(108), 1,
      sym__referenced_element_parent,
    STATE(111), 1,
      sym__referenced_element_name,
    STATE(112), 1,
      sym_identifier,
    STATE(171), 1,
      sym__referenced_element,
    STATE(179), 1,
      sym__unit_kind,
    STATE(211), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(59), 2,
      sym_accessor,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(265), 5,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [2286] = 13,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(270), 1,
      sym__unquoted_identifier,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym__quoted_identifier,
    STATE(108), 1,
      sym__referenced_element_parent,
    STATE(111), 1,
      sym__referenced_element_name,
    STATE(112), 1,
      sym_identifier,
    STATE(171), 1,
      sym__referenced_element,
    STATE(179), 1,
      sym__unit_kind,
    STATE(211), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(59), 2,
      sym_accessor,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(274), 5,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [2332] = 11,
    ACTIONS(276), 1,
      anon_sym_DOT,
    ACTIONS(280), 1,
      sym_kw_default,
    ACTIONS(282), 1,
      sym_kw_authid,
    ACTIONS(284), 1,
      sym_kw_accessible,
    STATE(87), 1,
      sym_sharing_clause,
    STATE(224), 1,
      sym__is_as,
    STATE(342), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(278), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(286), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(133), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [2373] = 12,
    ACTIONS(270), 1,
      sym__unquoted_identifier,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym__quoted_identifier,
    STATE(108), 1,
      sym__referenced_element_parent,
    STATE(111), 1,
      sym__referenced_element_name,
    STATE(112), 1,
      sym_identifier,
    STATE(171), 1,
      sym__referenced_element,
    STATE(179), 1,
      sym__unit_kind,
    STATE(211), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(60), 2,
      sym_accessor,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(274), 5,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [2416] = 11,
    ACTIONS(276), 1,
      anon_sym_DOT,
    ACTIONS(280), 1,
      sym_kw_default,
    ACTIONS(282), 1,
      sym_kw_authid,
    ACTIONS(284), 1,
      sym_kw_accessible,
    STATE(83), 1,
      sym_sharing_clause,
    STATE(213), 1,
      sym__is_as,
    STATE(332), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(278), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(288), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(133), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [2457] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(201), 1,
      sym_reuse_settings,
    STATE(391), 1,
      sym_identifier,
    STATE(74), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [2491] = 7,
    ACTIONS(9), 1,
      sym_kw_create,
    ACTIONS(11), 1,
      sym_kw_alter,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    STATE(274), 1,
      sym_create_obj,
    ACTIONS(292), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(72), 3,
      sym__element,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
    STATE(273), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [2523] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(200), 1,
      sym_reuse_settings,
    STATE(391), 1,
      sym_identifier,
    STATE(74), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(294), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [2557] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(206), 1,
      sym_reuse_settings,
    STATE(391), 1,
      sym_identifier,
    STATE(66), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(296), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [2591] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(206), 1,
      sym_reuse_settings,
    STATE(391), 1,
      sym_identifier,
    STATE(74), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(296), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [2625] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(201), 1,
      sym_reuse_settings,
    STATE(391), 1,
      sym_identifier,
    STATE(68), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [2659] = 10,
    ACTIONS(280), 1,
      sym_kw_default,
    ACTIONS(282), 1,
      sym_kw_authid,
    ACTIONS(284), 1,
      sym_kw_accessible,
    STATE(84), 1,
      sym_sharing_clause,
    STATE(225), 1,
      sym__is_as,
    STATE(344), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(278), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(298), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(133), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [2697] = 10,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(379), 1,
      sym_parameter_value,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(243), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(358), 5,
      sym_identifier,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2735] = 7,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 1,
      sym_kw_create,
    ACTIONS(308), 1,
      sym_kw_alter,
    STATE(274), 1,
      sym_create_obj,
    ACTIONS(302), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(72), 3,
      sym__element,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
    STATE(273), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [2767] = 10,
    ACTIONS(280), 1,
      sym_kw_default,
    ACTIONS(282), 1,
      sym_kw_authid,
    ACTIONS(284), 1,
      sym_kw_accessible,
    STATE(81), 1,
      sym_sharing_clause,
    STATE(217), 1,
      sym__is_as,
    STATE(340), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(278), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(311), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(133), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [2805] = 6,
    ACTIONS(315), 1,
      sym__unquoted_identifier,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(391), 1,
      sym_identifier,
    STATE(74), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(313), 10,
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
  [2834] = 4,
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(121), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(123), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
  [2858] = 5,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(54), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(143), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(145), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
  [2884] = 5,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(55), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(139), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(141), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
  [2910] = 5,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(52), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(133), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(135), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
  [2936] = 4,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(123), 3,
      anon_sym_AT,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
    ACTIONS(325), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [2960] = 5,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(53), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(127), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(129), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
  [2986] = 8,
    ACTIONS(280), 1,
      sym_kw_default,
    ACTIONS(282), 1,
      sym_kw_authid,
    ACTIONS(284), 1,
      sym_kw_accessible,
    STATE(237), 1,
      sym__is_as,
    STATE(336), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(329), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(133), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [3017] = 5,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      sym_kw_with,
    STATE(114), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(331), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [3042] = 8,
    ACTIONS(280), 1,
      sym_kw_default,
    ACTIONS(282), 1,
      sym_kw_authid,
    ACTIONS(284), 1,
      sym_kw_accessible,
    STATE(222), 1,
      sym__is_as,
    STATE(339), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(337), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(133), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [3073] = 8,
    ACTIONS(280), 1,
      sym_kw_default,
    ACTIONS(282), 1,
      sym_kw_authid,
    ACTIONS(284), 1,
      sym_kw_accessible,
    STATE(235), 1,
      sym__is_as,
    STATE(334), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(339), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(133), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [3104] = 5,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      sym_kw_varying,
    STATE(143), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(341), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [3129] = 9,
    ACTIONS(280), 1,
      sym_kw_default,
    ACTIONS(282), 1,
      sym_kw_authid,
    ACTIONS(284), 1,
      sym_kw_accessible,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_parameter_declaration,
    STATE(411), 1,
      sym_procedure_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(161), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [3162] = 8,
    ACTIONS(280), 1,
      sym_kw_default,
    ACTIONS(282), 1,
      sym_kw_authid,
    ACTIONS(284), 1,
      sym_kw_accessible,
    STATE(209), 1,
      sym__is_as,
    STATE(335), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(349), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(133), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [3193] = 5,
    ACTIONS(343), 1,
      sym_kw_varying,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(351), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [3218] = 4,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(355), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [3240] = 3,
    ACTIONS(65), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(67), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [3260] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(359), 3,
      anon_sym_DASH,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(357), 8,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [3280] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(363), 3,
      anon_sym_DASH,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(361), 8,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [3300] = 4,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(365), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [3322] = 4,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(369), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [3344] = 4,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(121), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(123), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
  [3366] = 4,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(371), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [3388] = 4,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(373), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [3410] = 4,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(375), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [3432] = 3,
    ACTIONS(69), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(71), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [3452] = 4,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(377), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [3474] = 5,
    ACTIONS(276), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(113), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(379), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [3498] = 4,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(385), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [3520] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(387), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_with,
      sym_kw_to,
  [3538] = 5,
    ACTIONS(276), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(122), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(389), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [3562] = 4,
    ACTIONS(121), 1,
      sym__unquoted_identifier,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(123), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [3584] = 5,
    ACTIONS(127), 1,
      sym__unquoted_identifier,
    ACTIONS(393), 1,
      anon_sym_AT,
    STATE(53), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(129), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [3608] = 5,
    ACTIONS(133), 1,
      sym__unquoted_identifier,
    ACTIONS(393), 1,
      anon_sym_AT,
    STATE(52), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(135), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [3632] = 5,
    ACTIONS(143), 1,
      sym__unquoted_identifier,
    ACTIONS(393), 1,
      anon_sym_AT,
    STATE(54), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(145), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [3656] = 5,
    ACTIONS(276), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(117), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(395), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [3680] = 5,
    ACTIONS(276), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(115), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(397), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [3704] = 5,
    ACTIONS(139), 1,
      sym__unquoted_identifier,
    ACTIONS(393), 1,
      anon_sym_AT,
    STATE(55), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(141), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [3728] = 4,
    ACTIONS(121), 1,
      sym__unquoted_identifier,
    ACTIONS(399), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(123), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [3750] = 4,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(130), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(401), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [3771] = 3,
    ACTIONS(405), 1,
      sym_kw_with,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(403), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [3790] = 4,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(130), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(407), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [3811] = 4,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(126), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(409), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [3832] = 4,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(130), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(411), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [3853] = 4,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(128), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(413), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [3874] = 6,
    ACTIONS(415), 1,
      sym_kw_default,
    ACTIONS(418), 1,
      sym_kw_authid,
    ACTIONS(421), 1,
      sym_kw_accessible,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(424), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(119), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [3899] = 3,
    ACTIONS(428), 1,
      sym_kw_raw,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(426), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [3918] = 6,
    STATE(20), 1,
      sym_expression_operator_not_boolean,
    STATE(123), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(430), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(99), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(105), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
  [3943] = 4,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(130), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(432), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [3964] = 6,
    STATE(20), 1,
      sym_expression_operator_not_boolean,
    STATE(123), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(437), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(434), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(439), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
  [3989] = 6,
    ACTIONS(442), 1,
      sym__single_quote_string,
    ACTIONS(444), 1,
      sym__number,
    ACTIONS(446), 1,
      sym__float,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(448), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(136), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [4014] = 4,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(129), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(450), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [4035] = 4,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(130), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(452), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [4056] = 4,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(132), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(454), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [4077] = 4,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(130), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(456), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [4098] = 4,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(130), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(458), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [4119] = 4,
    ACTIONS(462), 1,
      sym_kw_compile,
    ACTIONS(465), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(130), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(460), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [4140] = 7,
    ACTIONS(280), 1,
      sym_kw_default,
    ACTIONS(282), 1,
      sym_kw_authid,
    ACTIONS(284), 1,
      sym_kw_accessible,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(403), 1,
      sym_procedure_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(161), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [4167] = 4,
    ACTIONS(381), 1,
      sym_kw_compile,
    ACTIONS(383), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(130), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(470), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [4188] = 6,
    ACTIONS(280), 1,
      sym_kw_default,
    ACTIONS(282), 1,
      sym_kw_authid,
    ACTIONS(284), 1,
      sym_kw_accessible,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(472), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(119), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [4213] = 2,
    ACTIONS(209), 1,
      sym__unquoted_identifier,
    ACTIONS(211), 11,
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
  [4230] = 2,
    ACTIONS(213), 1,
      sym__unquoted_identifier,
    ACTIONS(215), 11,
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
  [4247] = 2,
    ACTIONS(476), 1,
      sym__unquoted_identifier,
    ACTIONS(474), 11,
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
  [4264] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(478), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4280] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(480), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4296] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(482), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4312] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(484), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4328] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(486), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4344] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(488), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4360] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(490), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4376] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(492), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4392] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(494), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4408] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(496), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4424] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(498), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4440] = 4,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(500), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [4460] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(506), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4476] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(508), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4492] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(510), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4508] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(512), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4524] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(514), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4540] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(516), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4556] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(518), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4572] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(520), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4588] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(522), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4604] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(524), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4620] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(526), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4636] = 6,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(530), 1,
      sym_kw_default,
    ACTIONS(533), 1,
      sym_kw_authid,
    ACTIONS(536), 1,
      sym_kw_accessible,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(160), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [4660] = 6,
    ACTIONS(280), 1,
      sym_kw_default,
    ACTIONS(282), 1,
      sym_kw_authid,
    ACTIONS(284), 1,
      sym_kw_accessible,
    ACTIONS(539), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(160), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [4684] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(541), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4700] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(543), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4716] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(545), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4732] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(543), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4748] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(547), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4764] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(549), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4780] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(373), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4796] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(551), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4812] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(553), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4828] = 4,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(555), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [4848] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(561), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4864] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(563), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4880] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(565), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4896] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(567), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [4912] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(255), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [4935] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(267), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [4958] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(266), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [4981] = 9,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__unquoted_identifier,
    STATE(90), 1,
      sym__quoted_identifier,
    STATE(108), 1,
      sym__referenced_element_parent,
    STATE(111), 1,
      sym__referenced_element_name,
    STATE(112), 1,
      sym_identifier,
    STATE(148), 1,
      sym__referenced_element,
    STATE(211), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [5010] = 5,
    ACTIONS(577), 1,
      anon_sym_SEMI,
    STATE(413), 1,
      sym_function_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(205), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(579), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [5031] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(253), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5054] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(245), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5077] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(257), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5100] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(248), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5123] = 3,
    ACTIONS(583), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(581), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [5140] = 3,
    ACTIONS(587), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(585), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [5157] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(589), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(591), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
  [5174] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(259), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5197] = 1,
    ACTIONS(71), 10,
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
  [5210] = 5,
    ACTIONS(593), 1,
      anon_sym_SEMI,
    STATE(415), 1,
      sym_function_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(205), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(579), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [5231] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(595), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(597), 6,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [5248] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(254), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5271] = 1,
    ACTIONS(67), 10,
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
  [5284] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(256), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5307] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(250), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5330] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(252), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5353] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(268), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5376] = 6,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(573), 1,
      sym_kw_end,
    STATE(244), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5399] = 1,
    ACTIONS(599), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [5411] = 1,
    ACTIONS(601), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [5423] = 1,
    ACTIONS(296), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [5435] = 5,
    ACTIONS(603), 1,
      sym_kw_function,
    ACTIONS(606), 1,
      sym_kw_procedure,
    ACTIONS(609), 1,
      sym_kw_end,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(202), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5455] = 1,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [5467] = 1,
    ACTIONS(611), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [5479] = 4,
    ACTIONS(613), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(207), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(615), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [5497] = 1,
    ACTIONS(294), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [5509] = 4,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(207), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(619), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [5527] = 5,
    STATE(216), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(318), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(622), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(624), 2,
      sym_kw_or,
      sym_kw_and,
  [5546] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(194), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5563] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(23), 1,
      sym_identifier,
    STATE(24), 1,
      sym__referenced_element_name,
    STATE(25), 1,
      sym__referenced_element_parent,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [5586] = 7,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__unquoted_identifier,
    STATE(90), 1,
      sym__quoted_identifier,
    STATE(105), 1,
      sym_identifier,
    STATE(106), 1,
      sym__referenced_element_name,
    STATE(107), 1,
      sym__referenced_element_parent,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [5609] = 7,
    ACTIONS(628), 1,
      sym__unquoted_identifier,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_identifier,
    STATE(9), 1,
      sym__quoted_identifier,
    STATE(226), 1,
      aux_sym_parameter_declaration_repeat1,
    STATE(362), 1,
      sym_parameter_declaration_element,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [5632] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(184), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5649] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(632), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [5662] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(197), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5679] = 5,
    STATE(216), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(318), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(634), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(636), 2,
      sym_kw_or,
      sym_kw_and,
  [5698] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(188), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5715] = 5,
    STATE(208), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(318), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(624), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(639), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5734] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(641), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [5747] = 7,
    ACTIONS(643), 1,
      sym__unquoted_identifier,
    ACTIONS(646), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_identifier,
    STATE(9), 1,
      sym__quoted_identifier,
    STATE(220), 1,
      aux_sym_parameter_declaration_repeat1,
    STATE(420), 1,
      sym_parameter_declaration_element,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [5770] = 5,
    STATE(216), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(318), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(624), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(649), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5789] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(177), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5806] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(75), 1,
      sym_identifier,
    STATE(78), 1,
      sym__referenced_element_parent,
    STATE(80), 1,
      sym__referenced_element_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [5829] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(176), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5846] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(192), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5863] = 7,
    ACTIONS(628), 1,
      sym__unquoted_identifier,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_identifier,
    STATE(9), 1,
      sym__quoted_identifier,
    STATE(220), 1,
      aux_sym_parameter_declaration_repeat1,
    STATE(365), 1,
      sym_parameter_declaration_element,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [5886] = 4,
    STATE(216), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(318), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(649), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [5903] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(178), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5920] = 5,
    STATE(221), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(318), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(624), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(651), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5939] = 4,
    STATE(216), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(318), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(622), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [5956] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(198), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5973] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(183), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [5990] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(195), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [6007] = 4,
    STATE(230), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(318), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(639), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [6024] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(196), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [6041] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(182), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [6058] = 4,
    ACTIONS(569), 1,
      sym_kw_function,
    ACTIONS(571), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(181), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [6075] = 4,
    STATE(227), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(318), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(651), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [6092] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(653), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [6105] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(61), 1,
      sym_identifier,
    STATE(302), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6125] = 2,
    ACTIONS(657), 1,
      anon_sym_SLASH,
    ACTIONS(655), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6137] = 2,
    ACTIONS(661), 1,
      anon_sym_SLASH,
    ACTIONS(659), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6149] = 6,
    ACTIONS(663), 1,
      sym__unquoted_identifier,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_identifier,
    STATE(193), 1,
      sym__quoted_identifier,
    STATE(286), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6169] = 2,
    ACTIONS(669), 1,
      anon_sym_SLASH,
    ACTIONS(667), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6181] = 2,
    ACTIONS(673), 1,
      anon_sym_SLASH,
    ACTIONS(671), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6193] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(406), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6213] = 6,
    ACTIONS(663), 1,
      sym__unquoted_identifier,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_identifier,
    STATE(193), 1,
      sym__quoted_identifier,
    STATE(284), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6233] = 2,
    ACTIONS(679), 1,
      anon_sym_SLASH,
    ACTIONS(677), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6245] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(288), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6265] = 2,
    ACTIONS(683), 1,
      anon_sym_SLASH,
    ACTIONS(681), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6277] = 6,
    ACTIONS(663), 1,
      sym__unquoted_identifier,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      sym_identifier,
    STATE(193), 1,
      sym__quoted_identifier,
    STATE(287), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6297] = 2,
    ACTIONS(685), 1,
      anon_sym_SLASH,
    ACTIONS(681), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6309] = 2,
    ACTIONS(687), 1,
      anon_sym_SLASH,
    ACTIONS(671), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6321] = 2,
    ACTIONS(691), 1,
      anon_sym_SLASH,
    ACTIONS(689), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6333] = 2,
    ACTIONS(695), 1,
      anon_sym_SLASH,
    ACTIONS(693), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6345] = 2,
    ACTIONS(699), 1,
      anon_sym_SLASH,
    ACTIONS(697), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6357] = 2,
    ACTIONS(703), 1,
      anon_sym_SLASH,
    ACTIONS(701), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6369] = 4,
    STATE(368), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(705), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(707), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
  [6385] = 2,
    ACTIONS(711), 1,
      anon_sym_SLASH,
    ACTIONS(709), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6397] = 4,
    STATE(350), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(707), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
    ACTIONS(713), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6413] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(715), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [6425] = 6,
    ACTIONS(663), 1,
      sym__unquoted_identifier,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_identifier,
    STATE(193), 1,
      sym__quoted_identifier,
    STATE(285), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6445] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(717), 5,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_return,
  [6457] = 3,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(721), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [6471] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(723), 5,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_return,
  [6483] = 2,
    ACTIONS(727), 1,
      anon_sym_SLASH,
    ACTIONS(725), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6495] = 2,
    ACTIONS(731), 1,
      anon_sym_SLASH,
    ACTIONS(729), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6507] = 2,
    ACTIONS(735), 1,
      anon_sym_SLASH,
    ACTIONS(733), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6519] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(737), 5,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [6531] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(739), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [6542] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(741), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [6553] = 5,
    ACTIONS(743), 1,
      sym_kw_package,
    ACTIONS(745), 1,
      sym_kw_function,
    ACTIONS(747), 1,
      sym_kw_procedure,
    ACTIONS(749), 1,
      sym_kw_library,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6570] = 2,
    ACTIONS(753), 1,
      anon_sym_SEMI,
    ACTIONS(751), 5,
      ts_builtin_sym_end,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6581] = 4,
    ACTIONS(755), 1,
      sym_kw_package,
    STATE(400), 1,
      sym_editionable_noneditionable,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(757), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [6596] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(29), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6613] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(29), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6630] = 4,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      sym_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(761), 2,
      sym_kw_byte,
      sym_kw_char,
  [6645] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(33), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6662] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(51), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6679] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(51), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6696] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(56), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6713] = 5,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(763), 1,
      sym_kw_char,
    ACTIONS(765), 1,
      sym_kw_character,
    STATE(145), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6730] = 1,
    ACTIONS(697), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6739] = 5,
    ACTIONS(663), 1,
      sym__unquoted_identifier,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      sym_identifier,
    STATE(193), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6756] = 5,
    ACTIONS(663), 1,
      sym__unquoted_identifier,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_identifier,
    STATE(193), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6773] = 5,
    ACTIONS(663), 1,
      sym__unquoted_identifier,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    STATE(118), 1,
      sym_identifier,
    STATE(193), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6790] = 5,
    ACTIONS(663), 1,
      sym__unquoted_identifier,
    ACTIONS(665), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_identifier,
    STATE(193), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6807] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6824] = 1,
    ACTIONS(701), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6833] = 1,
    ACTIONS(701), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6842] = 1,
    ACTIONS(767), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6851] = 1,
    ACTIONS(733), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6860] = 1,
    ACTIONS(733), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6869] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6886] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(721), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [6897] = 1,
    ACTIONS(725), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6906] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(769), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [6917] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(771), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [6928] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(773), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [6939] = 5,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__unquoted_identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(90), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6956] = 3,
    ACTIONS(777), 1,
      sym_kw_or,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(775), 3,
      sym_kw_package,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [6969] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6986] = 5,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__unquoted_identifier,
    STATE(51), 1,
      sym_identifier,
    STATE(90), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7003] = 1,
    ACTIONS(779), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7012] = 5,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym__unquoted_identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(90), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7029] = 1,
    ACTIONS(667), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7038] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(781), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [7049] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(783), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [7060] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(388), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7077] = 1,
    ACTIONS(681), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7086] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(86), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7103] = 1,
    ACTIONS(785), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7112] = 1,
    ACTIONS(729), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7121] = 1,
    ACTIONS(671), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7130] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(46), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7147] = 1,
    ACTIONS(787), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7156] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(319), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7173] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(789), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [7184] = 5,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(791), 1,
      sym_kw_return,
    STATE(180), 1,
      sym_return_declaration,
    STATE(348), 1,
      sym_parameter_declaration,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7201] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(793), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [7212] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(741), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_kw_or,
      sym_kw_and,
  [7223] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(795), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [7233] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(797), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [7243] = 4,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(799), 1,
      sym_kw_varying,
    STATE(149), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7257] = 1,
    ACTIONS(801), 5,
      ts_builtin_sym_end,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7265] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(803), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [7275] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(805), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [7285] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(807), 3,
      sym_kw_package,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [7295] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(809), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [7305] = 3,
    ACTIONS(811), 1,
      sym_kw_anydata,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(813), 2,
      sym_kw_anytype,
      sym_kw_anydataset,
  [7317] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(815), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [7327] = 3,
    STATE(222), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(337), 2,
      sym_kw_is,
      sym_kw_as,
  [7339] = 4,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    STATE(41), 1,
      sym_literal_number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7353] = 3,
    STATE(232), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(817), 2,
      sym_kw_is,
      sym_kw_as,
  [7365] = 3,
    STATE(231), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(819), 2,
      sym_kw_is,
      sym_kw_as,
  [7377] = 3,
    STATE(215), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(821), 2,
      sym_kw_is,
      sym_kw_as,
  [7389] = 4,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(823), 1,
      sym_kw_to,
    STATE(394), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7403] = 4,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(825), 1,
      sym_kw_to,
    STATE(396), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7417] = 3,
    STATE(228), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(827), 2,
      sym_kw_is,
      sym_kw_as,
  [7429] = 3,
    STATE(236), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(829), 2,
      sym_kw_is,
      sym_kw_as,
  [7441] = 4,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    ACTIONS(831), 1,
      sym_kw_varying,
    STATE(170), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7455] = 3,
    STATE(209), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(349), 2,
      sym_kw_is,
      sym_kw_as,
  [7467] = 3,
    ACTIONS(835), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(833), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7479] = 3,
    STATE(233), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(837), 2,
      sym_kw_is,
      sym_kw_as,
  [7491] = 3,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(169), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7502] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(839), 2,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [7511] = 3,
    ACTIONS(841), 1,
      sym__number,
    STATE(356), 1,
      sym__precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7522] = 3,
    ACTIONS(791), 1,
      sym_kw_return,
    STATE(190), 1,
      sym_return_declaration,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7533] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(843), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7542] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(705), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7551] = 3,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7562] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(845), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7571] = 3,
    ACTIONS(847), 1,
      sym_kw_datatype_type,
    ACTIONS(849), 1,
      sym_kw_datatype_rowtype,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7582] = 3,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7593] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(855), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7602] = 3,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7613] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(861), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7622] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(833), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7631] = 3,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7642] = 3,
    ACTIONS(863), 1,
      sym_kw_local,
    ACTIONS(865), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7653] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(867), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7662] = 3,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7673] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(873), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7682] = 3,
    ACTIONS(875), 1,
      sym__number,
    STATE(426), 1,
      sym__scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7693] = 3,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7704] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(879), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7713] = 3,
    ACTIONS(881), 1,
      sym_kw_year,
    ACTIONS(883), 1,
      sym_kw_day,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7724] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(885), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7733] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(887), 2,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [7742] = 3,
    ACTIONS(889), 1,
      sym_kw_local,
    ACTIONS(891), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7753] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(893), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7762] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(895), 2,
      sym_kw_current_user,
      sym_kw_definer,
  [7771] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(897), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7780] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(103), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7789] = 3,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7800] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(103), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7809] = 3,
    ACTIONS(901), 1,
      sym_kw_null,
    ACTIONS(903), 1,
      sym_kw_not,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7820] = 3,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7831] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(905), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7840] = 2,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7848] = 2,
    ACTIONS(865), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7856] = 2,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7864] = 2,
    ACTIONS(909), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7872] = 2,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7880] = 2,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7888] = 2,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7896] = 2,
    ACTIONS(917), 1,
      sym_kw_collation,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7904] = 2,
    ACTIONS(919), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7912] = 2,
    ACTIONS(921), 1,
      sym_kw_settings,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7920] = 2,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7928] = 2,
    ACTIONS(925), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7936] = 2,
    ACTIONS(927), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7944] = 2,
    ACTIONS(929), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7952] = 2,
    ACTIONS(931), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7960] = 2,
    ACTIONS(933), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7968] = 2,
    ACTIONS(935), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7976] = 2,
    ACTIONS(937), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(939), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7984] = 2,
    ACTIONS(941), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [7992] = 2,
    ACTIONS(943), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8000] = 2,
    ACTIONS(945), 1,
      sym_kw_package,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8008] = 2,
    ACTIONS(611), 1,
      sym_kw_package,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8016] = 2,
    ACTIONS(947), 1,
      sym_kw_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8024] = 2,
    ACTIONS(949), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8032] = 2,
    ACTIONS(951), 1,
      sym_kw_precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8040] = 2,
    ACTIONS(953), 1,
      sym_kw_by,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8048] = 2,
    ACTIONS(955), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8056] = 2,
    ACTIONS(957), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8064] = 2,
    ACTIONS(959), 1,
      sym_kw_using_nls_comp,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8072] = 2,
    ACTIONS(961), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8080] = 2,
    ACTIONS(963), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8088] = 2,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8096] = 2,
    ACTIONS(965), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8104] = 2,
    ACTIONS(593), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8112] = 2,
    ACTIONS(967), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8120] = 2,
    ACTIONS(969), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8128] = 2,
    ACTIONS(971), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8136] = 2,
    ACTIONS(973), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8144] = 2,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8152] = 2,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8160] = 2,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8168] = 2,
    ACTIONS(979), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8176] = 2,
    ACTIONS(981), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(939), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8184] = 2,
    ACTIONS(983), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8192] = 2,
    ACTIONS(985), 1,
      sym_kw_replace,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8200] = 2,
    ACTIONS(987), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8208] = 2,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8216] = 2,
    ACTIONS(991), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8224] = 2,
    ACTIONS(993), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8232] = 2,
    ACTIONS(995), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(939), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8240] = 2,
    ACTIONS(997), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(939), 2,
      sym_comment_ml,
      sym_comment_sl,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 64,
  [SMALL_STATE(11)] = 128,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 232,
  [SMALL_STATE(14)] = 328,
  [SMALL_STATE(15)] = 424,
  [SMALL_STATE(16)] = 508,
  [SMALL_STATE(17)] = 586,
  [SMALL_STATE(18)] = 664,
  [SMALL_STATE(19)] = 723,
  [SMALL_STATE(20)] = 790,
  [SMALL_STATE(21)] = 857,
  [SMALL_STATE(22)] = 924,
  [SMALL_STATE(23)] = 991,
  [SMALL_STATE(24)] = 1027,
  [SMALL_STATE(25)] = 1065,
  [SMALL_STATE(26)] = 1103,
  [SMALL_STATE(27)] = 1139,
  [SMALL_STATE(28)] = 1177,
  [SMALL_STATE(29)] = 1215,
  [SMALL_STATE(30)] = 1248,
  [SMALL_STATE(31)] = 1285,
  [SMALL_STATE(32)] = 1322,
  [SMALL_STATE(33)] = 1354,
  [SMALL_STATE(34)] = 1386,
  [SMALL_STATE(35)] = 1418,
  [SMALL_STATE(36)] = 1452,
  [SMALL_STATE(37)] = 1484,
  [SMALL_STATE(38)] = 1516,
  [SMALL_STATE(39)] = 1548,
  [SMALL_STATE(40)] = 1580,
  [SMALL_STATE(41)] = 1612,
  [SMALL_STATE(42)] = 1643,
  [SMALL_STATE(43)] = 1674,
  [SMALL_STATE(44)] = 1705,
  [SMALL_STATE(45)] = 1736,
  [SMALL_STATE(46)] = 1767,
  [SMALL_STATE(47)] = 1798,
  [SMALL_STATE(48)] = 1851,
  [SMALL_STATE(49)] = 1904,
  [SMALL_STATE(50)] = 1957,
  [SMALL_STATE(51)] = 1999,
  [SMALL_STATE(52)] = 2027,
  [SMALL_STATE(53)] = 2054,
  [SMALL_STATE(54)] = 2081,
  [SMALL_STATE(55)] = 2108,
  [SMALL_STATE(56)] = 2135,
  [SMALL_STATE(57)] = 2162,
  [SMALL_STATE(58)] = 2201,
  [SMALL_STATE(59)] = 2240,
  [SMALL_STATE(60)] = 2286,
  [SMALL_STATE(61)] = 2332,
  [SMALL_STATE(62)] = 2373,
  [SMALL_STATE(63)] = 2416,
  [SMALL_STATE(64)] = 2457,
  [SMALL_STATE(65)] = 2491,
  [SMALL_STATE(66)] = 2523,
  [SMALL_STATE(67)] = 2557,
  [SMALL_STATE(68)] = 2591,
  [SMALL_STATE(69)] = 2625,
  [SMALL_STATE(70)] = 2659,
  [SMALL_STATE(71)] = 2697,
  [SMALL_STATE(72)] = 2735,
  [SMALL_STATE(73)] = 2767,
  [SMALL_STATE(74)] = 2805,
  [SMALL_STATE(75)] = 2834,
  [SMALL_STATE(76)] = 2858,
  [SMALL_STATE(77)] = 2884,
  [SMALL_STATE(78)] = 2910,
  [SMALL_STATE(79)] = 2936,
  [SMALL_STATE(80)] = 2960,
  [SMALL_STATE(81)] = 2986,
  [SMALL_STATE(82)] = 3017,
  [SMALL_STATE(83)] = 3042,
  [SMALL_STATE(84)] = 3073,
  [SMALL_STATE(85)] = 3104,
  [SMALL_STATE(86)] = 3129,
  [SMALL_STATE(87)] = 3162,
  [SMALL_STATE(88)] = 3193,
  [SMALL_STATE(89)] = 3218,
  [SMALL_STATE(90)] = 3240,
  [SMALL_STATE(91)] = 3260,
  [SMALL_STATE(92)] = 3280,
  [SMALL_STATE(93)] = 3300,
  [SMALL_STATE(94)] = 3322,
  [SMALL_STATE(95)] = 3344,
  [SMALL_STATE(96)] = 3366,
  [SMALL_STATE(97)] = 3388,
  [SMALL_STATE(98)] = 3410,
  [SMALL_STATE(99)] = 3432,
  [SMALL_STATE(100)] = 3452,
  [SMALL_STATE(101)] = 3474,
  [SMALL_STATE(102)] = 3498,
  [SMALL_STATE(103)] = 3520,
  [SMALL_STATE(104)] = 3538,
  [SMALL_STATE(105)] = 3562,
  [SMALL_STATE(106)] = 3584,
  [SMALL_STATE(107)] = 3608,
  [SMALL_STATE(108)] = 3632,
  [SMALL_STATE(109)] = 3656,
  [SMALL_STATE(110)] = 3680,
  [SMALL_STATE(111)] = 3704,
  [SMALL_STATE(112)] = 3728,
  [SMALL_STATE(113)] = 3750,
  [SMALL_STATE(114)] = 3771,
  [SMALL_STATE(115)] = 3790,
  [SMALL_STATE(116)] = 3811,
  [SMALL_STATE(117)] = 3832,
  [SMALL_STATE(118)] = 3853,
  [SMALL_STATE(119)] = 3874,
  [SMALL_STATE(120)] = 3899,
  [SMALL_STATE(121)] = 3918,
  [SMALL_STATE(122)] = 3943,
  [SMALL_STATE(123)] = 3964,
  [SMALL_STATE(124)] = 3989,
  [SMALL_STATE(125)] = 4014,
  [SMALL_STATE(126)] = 4035,
  [SMALL_STATE(127)] = 4056,
  [SMALL_STATE(128)] = 4077,
  [SMALL_STATE(129)] = 4098,
  [SMALL_STATE(130)] = 4119,
  [SMALL_STATE(131)] = 4140,
  [SMALL_STATE(132)] = 4167,
  [SMALL_STATE(133)] = 4188,
  [SMALL_STATE(134)] = 4213,
  [SMALL_STATE(135)] = 4230,
  [SMALL_STATE(136)] = 4247,
  [SMALL_STATE(137)] = 4264,
  [SMALL_STATE(138)] = 4280,
  [SMALL_STATE(139)] = 4296,
  [SMALL_STATE(140)] = 4312,
  [SMALL_STATE(141)] = 4328,
  [SMALL_STATE(142)] = 4344,
  [SMALL_STATE(143)] = 4360,
  [SMALL_STATE(144)] = 4376,
  [SMALL_STATE(145)] = 4392,
  [SMALL_STATE(146)] = 4408,
  [SMALL_STATE(147)] = 4424,
  [SMALL_STATE(148)] = 4440,
  [SMALL_STATE(149)] = 4460,
  [SMALL_STATE(150)] = 4476,
  [SMALL_STATE(151)] = 4492,
  [SMALL_STATE(152)] = 4508,
  [SMALL_STATE(153)] = 4524,
  [SMALL_STATE(154)] = 4540,
  [SMALL_STATE(155)] = 4556,
  [SMALL_STATE(156)] = 4572,
  [SMALL_STATE(157)] = 4588,
  [SMALL_STATE(158)] = 4604,
  [SMALL_STATE(159)] = 4620,
  [SMALL_STATE(160)] = 4636,
  [SMALL_STATE(161)] = 4660,
  [SMALL_STATE(162)] = 4684,
  [SMALL_STATE(163)] = 4700,
  [SMALL_STATE(164)] = 4716,
  [SMALL_STATE(165)] = 4732,
  [SMALL_STATE(166)] = 4748,
  [SMALL_STATE(167)] = 4764,
  [SMALL_STATE(168)] = 4780,
  [SMALL_STATE(169)] = 4796,
  [SMALL_STATE(170)] = 4812,
  [SMALL_STATE(171)] = 4828,
  [SMALL_STATE(172)] = 4848,
  [SMALL_STATE(173)] = 4864,
  [SMALL_STATE(174)] = 4880,
  [SMALL_STATE(175)] = 4896,
  [SMALL_STATE(176)] = 4912,
  [SMALL_STATE(177)] = 4935,
  [SMALL_STATE(178)] = 4958,
  [SMALL_STATE(179)] = 4981,
  [SMALL_STATE(180)] = 5010,
  [SMALL_STATE(181)] = 5031,
  [SMALL_STATE(182)] = 5054,
  [SMALL_STATE(183)] = 5077,
  [SMALL_STATE(184)] = 5100,
  [SMALL_STATE(185)] = 5123,
  [SMALL_STATE(186)] = 5140,
  [SMALL_STATE(187)] = 5157,
  [SMALL_STATE(188)] = 5174,
  [SMALL_STATE(189)] = 5197,
  [SMALL_STATE(190)] = 5210,
  [SMALL_STATE(191)] = 5231,
  [SMALL_STATE(192)] = 5248,
  [SMALL_STATE(193)] = 5271,
  [SMALL_STATE(194)] = 5284,
  [SMALL_STATE(195)] = 5307,
  [SMALL_STATE(196)] = 5330,
  [SMALL_STATE(197)] = 5353,
  [SMALL_STATE(198)] = 5376,
  [SMALL_STATE(199)] = 5399,
  [SMALL_STATE(200)] = 5411,
  [SMALL_STATE(201)] = 5423,
  [SMALL_STATE(202)] = 5435,
  [SMALL_STATE(203)] = 5455,
  [SMALL_STATE(204)] = 5467,
  [SMALL_STATE(205)] = 5479,
  [SMALL_STATE(206)] = 5497,
  [SMALL_STATE(207)] = 5509,
  [SMALL_STATE(208)] = 5527,
  [SMALL_STATE(209)] = 5546,
  [SMALL_STATE(210)] = 5563,
  [SMALL_STATE(211)] = 5586,
  [SMALL_STATE(212)] = 5609,
  [SMALL_STATE(213)] = 5632,
  [SMALL_STATE(214)] = 5649,
  [SMALL_STATE(215)] = 5662,
  [SMALL_STATE(216)] = 5679,
  [SMALL_STATE(217)] = 5698,
  [SMALL_STATE(218)] = 5715,
  [SMALL_STATE(219)] = 5734,
  [SMALL_STATE(220)] = 5747,
  [SMALL_STATE(221)] = 5770,
  [SMALL_STATE(222)] = 5789,
  [SMALL_STATE(223)] = 5806,
  [SMALL_STATE(224)] = 5829,
  [SMALL_STATE(225)] = 5846,
  [SMALL_STATE(226)] = 5863,
  [SMALL_STATE(227)] = 5886,
  [SMALL_STATE(228)] = 5903,
  [SMALL_STATE(229)] = 5920,
  [SMALL_STATE(230)] = 5939,
  [SMALL_STATE(231)] = 5956,
  [SMALL_STATE(232)] = 5973,
  [SMALL_STATE(233)] = 5990,
  [SMALL_STATE(234)] = 6007,
  [SMALL_STATE(235)] = 6024,
  [SMALL_STATE(236)] = 6041,
  [SMALL_STATE(237)] = 6058,
  [SMALL_STATE(238)] = 6075,
  [SMALL_STATE(239)] = 6092,
  [SMALL_STATE(240)] = 6105,
  [SMALL_STATE(241)] = 6125,
  [SMALL_STATE(242)] = 6137,
  [SMALL_STATE(243)] = 6149,
  [SMALL_STATE(244)] = 6169,
  [SMALL_STATE(245)] = 6181,
  [SMALL_STATE(246)] = 6193,
  [SMALL_STATE(247)] = 6213,
  [SMALL_STATE(248)] = 6233,
  [SMALL_STATE(249)] = 6245,
  [SMALL_STATE(250)] = 6265,
  [SMALL_STATE(251)] = 6277,
  [SMALL_STATE(252)] = 6297,
  [SMALL_STATE(253)] = 6309,
  [SMALL_STATE(254)] = 6321,
  [SMALL_STATE(255)] = 6333,
  [SMALL_STATE(256)] = 6345,
  [SMALL_STATE(257)] = 6357,
  [SMALL_STATE(258)] = 6369,
  [SMALL_STATE(259)] = 6385,
  [SMALL_STATE(260)] = 6397,
  [SMALL_STATE(261)] = 6413,
  [SMALL_STATE(262)] = 6425,
  [SMALL_STATE(263)] = 6445,
  [SMALL_STATE(264)] = 6457,
  [SMALL_STATE(265)] = 6471,
  [SMALL_STATE(266)] = 6483,
  [SMALL_STATE(267)] = 6495,
  [SMALL_STATE(268)] = 6507,
  [SMALL_STATE(269)] = 6519,
  [SMALL_STATE(270)] = 6531,
  [SMALL_STATE(271)] = 6542,
  [SMALL_STATE(272)] = 6553,
  [SMALL_STATE(273)] = 6570,
  [SMALL_STATE(274)] = 6581,
  [SMALL_STATE(275)] = 6596,
  [SMALL_STATE(276)] = 6613,
  [SMALL_STATE(277)] = 6630,
  [SMALL_STATE(278)] = 6645,
  [SMALL_STATE(279)] = 6662,
  [SMALL_STATE(280)] = 6679,
  [SMALL_STATE(281)] = 6696,
  [SMALL_STATE(282)] = 6713,
  [SMALL_STATE(283)] = 6730,
  [SMALL_STATE(284)] = 6739,
  [SMALL_STATE(285)] = 6756,
  [SMALL_STATE(286)] = 6773,
  [SMALL_STATE(287)] = 6790,
  [SMALL_STATE(288)] = 6807,
  [SMALL_STATE(289)] = 6824,
  [SMALL_STATE(290)] = 6833,
  [SMALL_STATE(291)] = 6842,
  [SMALL_STATE(292)] = 6851,
  [SMALL_STATE(293)] = 6860,
  [SMALL_STATE(294)] = 6869,
  [SMALL_STATE(295)] = 6886,
  [SMALL_STATE(296)] = 6897,
  [SMALL_STATE(297)] = 6906,
  [SMALL_STATE(298)] = 6917,
  [SMALL_STATE(299)] = 6928,
  [SMALL_STATE(300)] = 6939,
  [SMALL_STATE(301)] = 6956,
  [SMALL_STATE(302)] = 6969,
  [SMALL_STATE(303)] = 6986,
  [SMALL_STATE(304)] = 7003,
  [SMALL_STATE(305)] = 7012,
  [SMALL_STATE(306)] = 7029,
  [SMALL_STATE(307)] = 7038,
  [SMALL_STATE(308)] = 7049,
  [SMALL_STATE(309)] = 7060,
  [SMALL_STATE(310)] = 7077,
  [SMALL_STATE(311)] = 7086,
  [SMALL_STATE(312)] = 7103,
  [SMALL_STATE(313)] = 7112,
  [SMALL_STATE(314)] = 7121,
  [SMALL_STATE(315)] = 7130,
  [SMALL_STATE(316)] = 7147,
  [SMALL_STATE(317)] = 7156,
  [SMALL_STATE(318)] = 7173,
  [SMALL_STATE(319)] = 7184,
  [SMALL_STATE(320)] = 7201,
  [SMALL_STATE(321)] = 7212,
  [SMALL_STATE(322)] = 7223,
  [SMALL_STATE(323)] = 7233,
  [SMALL_STATE(324)] = 7243,
  [SMALL_STATE(325)] = 7257,
  [SMALL_STATE(326)] = 7265,
  [SMALL_STATE(327)] = 7275,
  [SMALL_STATE(328)] = 7285,
  [SMALL_STATE(329)] = 7295,
  [SMALL_STATE(330)] = 7305,
  [SMALL_STATE(331)] = 7317,
  [SMALL_STATE(332)] = 7327,
  [SMALL_STATE(333)] = 7339,
  [SMALL_STATE(334)] = 7353,
  [SMALL_STATE(335)] = 7365,
  [SMALL_STATE(336)] = 7377,
  [SMALL_STATE(337)] = 7389,
  [SMALL_STATE(338)] = 7403,
  [SMALL_STATE(339)] = 7417,
  [SMALL_STATE(340)] = 7429,
  [SMALL_STATE(341)] = 7441,
  [SMALL_STATE(342)] = 7455,
  [SMALL_STATE(343)] = 7467,
  [SMALL_STATE(344)] = 7479,
  [SMALL_STATE(345)] = 7491,
  [SMALL_STATE(346)] = 7502,
  [SMALL_STATE(347)] = 7511,
  [SMALL_STATE(348)] = 7522,
  [SMALL_STATE(349)] = 7533,
  [SMALL_STATE(350)] = 7542,
  [SMALL_STATE(351)] = 7551,
  [SMALL_STATE(352)] = 7562,
  [SMALL_STATE(353)] = 7571,
  [SMALL_STATE(354)] = 7582,
  [SMALL_STATE(355)] = 7593,
  [SMALL_STATE(356)] = 7602,
  [SMALL_STATE(357)] = 7613,
  [SMALL_STATE(358)] = 7622,
  [SMALL_STATE(359)] = 7631,
  [SMALL_STATE(360)] = 7642,
  [SMALL_STATE(361)] = 7653,
  [SMALL_STATE(362)] = 7662,
  [SMALL_STATE(363)] = 7673,
  [SMALL_STATE(364)] = 7682,
  [SMALL_STATE(365)] = 7693,
  [SMALL_STATE(366)] = 7704,
  [SMALL_STATE(367)] = 7713,
  [SMALL_STATE(368)] = 7724,
  [SMALL_STATE(369)] = 7733,
  [SMALL_STATE(370)] = 7742,
  [SMALL_STATE(371)] = 7753,
  [SMALL_STATE(372)] = 7762,
  [SMALL_STATE(373)] = 7771,
  [SMALL_STATE(374)] = 7780,
  [SMALL_STATE(375)] = 7789,
  [SMALL_STATE(376)] = 7800,
  [SMALL_STATE(377)] = 7809,
  [SMALL_STATE(378)] = 7820,
  [SMALL_STATE(379)] = 7831,
  [SMALL_STATE(380)] = 7840,
  [SMALL_STATE(381)] = 7848,
  [SMALL_STATE(382)] = 7856,
  [SMALL_STATE(383)] = 7864,
  [SMALL_STATE(384)] = 7872,
  [SMALL_STATE(385)] = 7880,
  [SMALL_STATE(386)] = 7888,
  [SMALL_STATE(387)] = 7896,
  [SMALL_STATE(388)] = 7904,
  [SMALL_STATE(389)] = 7912,
  [SMALL_STATE(390)] = 7920,
  [SMALL_STATE(391)] = 7928,
  [SMALL_STATE(392)] = 7936,
  [SMALL_STATE(393)] = 7944,
  [SMALL_STATE(394)] = 7952,
  [SMALL_STATE(395)] = 7960,
  [SMALL_STATE(396)] = 7968,
  [SMALL_STATE(397)] = 7976,
  [SMALL_STATE(398)] = 7984,
  [SMALL_STATE(399)] = 7992,
  [SMALL_STATE(400)] = 8000,
  [SMALL_STATE(401)] = 8008,
  [SMALL_STATE(402)] = 8016,
  [SMALL_STATE(403)] = 8024,
  [SMALL_STATE(404)] = 8032,
  [SMALL_STATE(405)] = 8040,
  [SMALL_STATE(406)] = 8048,
  [SMALL_STATE(407)] = 8056,
  [SMALL_STATE(408)] = 8064,
  [SMALL_STATE(409)] = 8072,
  [SMALL_STATE(410)] = 8080,
  [SMALL_STATE(411)] = 8088,
  [SMALL_STATE(412)] = 8096,
  [SMALL_STATE(413)] = 8104,
  [SMALL_STATE(414)] = 8112,
  [SMALL_STATE(415)] = 8120,
  [SMALL_STATE(416)] = 8128,
  [SMALL_STATE(417)] = 8136,
  [SMALL_STATE(418)] = 8144,
  [SMALL_STATE(419)] = 8152,
  [SMALL_STATE(420)] = 8160,
  [SMALL_STATE(421)] = 8168,
  [SMALL_STATE(422)] = 8176,
  [SMALL_STATE(423)] = 8184,
  [SMALL_STATE(424)] = 8192,
  [SMALL_STATE(425)] = 8200,
  [SMALL_STATE(426)] = 8208,
  [SMALL_STATE(427)] = 8216,
  [SMALL_STATE(428)] = 8224,
  [SMALL_STATE(429)] = 8232,
  [SMALL_STATE(430)] = 8240,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_element, 1, .production_id = 6),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element_name, 1, .production_id = 9),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element_name, 1, .production_id = 9),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 2, .production_id = 14),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 2, .production_id = 14),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 2, .production_id = 13),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 2, .production_id = 13),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 1, .production_id = 8),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 1, .production_id = 8),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 1, .production_id = 7),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 1, .production_id = 7),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element_parent, 3, .production_id = 22),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element_parent, 3, .production_id = 22),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_base_elements, 1, .production_id = 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_elements, 1, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_variable, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_variable, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__remote, 2, .production_id = 21),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote, 2, .production_id = 21),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prc_fnc_call, 2, .production_id = 6),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prc_fnc_call, 2, .production_id = 6),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 3, .production_id = 20),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 3, .production_id = 20),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 3, .production_id = 19),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 3, .production_id = 19),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 2, .production_id = 15),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 2, .production_id = 15),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 2, .production_id = 16),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 2, .production_id = 16),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_base_elements, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_elements, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_number, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_number, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prc_fnc_call, 3, .production_id = 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prc_fnc_call, 3, .production_id = 6),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indicator_variable, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indicator_variable, 2),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(12),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(422),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(43),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(44),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(44),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(358),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(90),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(429),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(179),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compile_clause_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compile_clause_repeat1, 2), SHIFT_REPEAT(12),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compile_clause_repeat1, 2), SHIFT_REPEAT(422),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subtype_datatypes, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nchar, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_char, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_operator_boolean, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_operator_boolean, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_operator_not_boolean, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_operator_not_boolean, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_float, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_number, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 5),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rowid_datatypes_urowid, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_varchar2, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 3, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nvarchar2, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 3, .production_id = 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 3, .production_id = 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 3, .production_id = 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 2),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2), SHIFT_REPEAT(387),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2), SHIFT_REPEAT(372),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2), SHIFT_REPEAT(405),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_operator_not_boolean, 2, .production_id = 23),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 1),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 23), SHIFT_REPEAT(92),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 23),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 23), SHIFT_REPEAT(92),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 5, .production_id = 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 5, .production_id = 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 5, .production_id = 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(50),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(204),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 5, .production_id = 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_properties, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compiler_parameter_clause, 3, .production_id = 5),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compiler_parameter_clause, 3, .production_id = 5),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_varchar2, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_raw, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_float, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_number, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nchar, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nvarchar2, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_varchar, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_char, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__supplied_datatypes_any_types, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 2, .production_id = 12),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 2, .production_id = 12),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_character, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 6),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_double_precision, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_byte_char, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_national, 4),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_precision_scale, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rowid_datatypes_urowid, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_year, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 6),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_precision_scale, 5),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2), SHIFT_REPEAT(387),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2), SHIFT_REPEAT(372),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2), SHIFT_REPEAT(405),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_properties, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_datatypes_type, 2, .production_id = 6),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_datatypes, 1, .production_id = 6),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_datatypes_rowtype, 2, .production_id = 6),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_year, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_char_nchar, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_national, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1, .production_id = 6),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 1, .production_id = 6),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1, .production_id = 6),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_character, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_byte_char, 4),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 5),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 2, .production_id = 6),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 2, .production_id = 6),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 3, .production_id = 12),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 3, .production_id = 12),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 12),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 12),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reuse_settings, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 5),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(317),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(311),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_editionable_noneditionable, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_properties, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_properties_repeat1, 2),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_properties_repeat1, 2), SHIFT_REPEAT(207),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean, 2, .production_id = 23),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessible_by_clause, 5),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_repeat1, 2, .production_id = 23),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_repeat1, 2, .production_id = 23), SHIFT_REPEAT(15),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean, 1, .production_id = 6),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invoker_rights_clause, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(9),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(430),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean, 3, .production_id = 24),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean, 2, .production_id = 12),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_collation_clause, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 2),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_obj, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_obj, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 11),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 2),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 6, .production_id = 1),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 18),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 18),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 11),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 11),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 18),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_declaration, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_predicate, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 1),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 1),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 2),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sharing_clause, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_repeat, 2, .production_id = 12),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_elements, 2, .production_id = 23),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 11),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_predicate, 6),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_between, 4, .production_id = 25),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_not_null, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_obj, 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_operator, 2, .production_id = 12),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_null, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 11, .production_id = 18),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_repeat1, 1, .production_id = 6),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_elements, 2, .production_id = 6),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 5, .production_id = 10),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 3, .production_id = 10),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 17),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 4, .production_id = 10),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_obj, 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 17),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 17),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 1),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_name, 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__schema, 2, .production_id = 3),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in_out_or_out, 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element, 1),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element_positional, 1),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in_out_or_out, 4),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in_out_or_out, 3),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_element, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in, 3),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_expression, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 6),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element_named, 3),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_char, 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [991] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
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
