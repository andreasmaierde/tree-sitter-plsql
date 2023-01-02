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
#define STATE_COUNT 508
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 311
#define ALIAS_COUNT 0
#define TOKEN_COUNT 172
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 25

enum {
  anon_sym_SEMI = 1,
  anon_sym_SLASH = 2,
  anon_sym_EQ = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
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
  sym_kw_case = 49,
  sym_kw_when = 50,
  sym_kw_then = 51,
  sym_kw_if = 52,
  sym_kw_else = 53,
  sym_kw_row = 54,
  sym_kw_count = 55,
  sym_kw_first = 56,
  sym_kw_last = 57,
  sym_kw_limit = 58,
  sym_kw_next = 59,
  sym_kw_prior = 60,
  sym_kw_rowcount = 61,
  sym_kw_bulk_rowcount = 62,
  sym_kw_compile = 63,
  sym_kw_debug = 64,
  sym_kw_specification = 65,
  sym_kw_body = 66,
  sym_kw_declare = 67,
  sym_kw_begin = 68,
  sym_kw_end = 69,
  sym_kw_or = 70,
  sym_kw_and = 71,
  sym_kw_replace = 72,
  sym_kw_editionable = 73,
  sym_kw_noneditionable = 74,
  sym_kw_metadata = 75,
  sym_kw_none = 76,
  sym_kw_default = 77,
  sym_kw_collation = 78,
  sym_kw_using_nls_comp = 79,
  sym_kw_authid = 80,
  sym_kw_current_user = 81,
  sym_kw_definer = 82,
  sym_kw_accessible = 83,
  sym_kw_by = 84,
  sym_kw_reuse = 85,
  sym_kw_settings = 86,
  sym_kw_byte = 87,
  sym_kw_char = 88,
  sym_kw_is = 89,
  sym_kw_as = 90,
  sym_kw_deterministic = 91,
  sym_kw_pipelined = 92,
  sym_kw_parallel_enable = 93,
  sym_kw_result_cache = 94,
  sym_kw_exists = 95,
  sym_kw_between = 96,
  sym_kw_found = 97,
  sym_kw_isopen = 98,
  sym_kw_in = 99,
  sym_kw_out = 100,
  sym_kw_nocopy = 101,
  sym_kw_like = 102,
  sym_kw_inserting = 103,
  sym_kw_deleting = 104,
  sym_kw_updating = 105,
  sym_kw_return = 106,
  sym_kw_varchar = 107,
  sym_kw_varchar2 = 108,
  sym_kw_nvarchar2 = 109,
  sym_kw_nchar = 110,
  sym_kw_int = 111,
  sym_kw_smallint = 112,
  sym_kw_real = 113,
  sym_kw_binary_float = 114,
  sym_kw_binary_double = 115,
  sym_kw_simple_float = 116,
  sym_kw_simple_double = 117,
  sym_kw_binary_integer = 118,
  sym_kw_pls_integer = 119,
  sym_kw_natural = 120,
  sym_kw_naturaln = 121,
  sym_kw_positive = 122,
  sym_kw_positiven = 123,
  sym_kw_signtype = 124,
  sym_kw_simple_integer = 125,
  sym_kw_integer = 126,
  sym_kw_number = 127,
  sym_kw_float = 128,
  sym_kw_long = 129,
  sym_kw_raw = 130,
  sym_kw_date = 131,
  sym_kw_timestamp = 132,
  sym_kw_with = 133,
  sym_kw_local = 134,
  sym_kw_time = 135,
  sym_kw_zone = 136,
  sym_kw_interval = 137,
  sym_kw_year = 138,
  sym_kw_month = 139,
  sym_kw_day = 140,
  sym_kw_minute = 141,
  sym_kw_second = 142,
  sym_kw_to = 143,
  sym_kw_blob = 144,
  sym_kw_clob = 145,
  sym_kw_nclob = 146,
  sym_kw_bfile = 147,
  sym_kw_rowid = 148,
  sym_kw_urowid = 149,
  sym_kw_boolean = 150,
  sym_kw_character = 151,
  sym_kw_varying = 152,
  sym_kw_numeric = 153,
  sym_kw_decimal = 154,
  sym_kw_dec = 155,
  sym_kw_double = 156,
  sym_kw_precision = 157,
  sym_kw_sys = 158,
  sym_kw_anydata = 159,
  sym_kw_anytype = 160,
  sym_kw_anydataset = 161,
  sym_kw_xmltype = 162,
  sym_kw_uritype = 163,
  sym_kw_sdo_geometry = 164,
  sym_kw_sdo_topo_geometry = 165,
  sym_kw_sdo_georaster = 166,
  sym_kw_json_element_t = 167,
  sym_kw_json_array_t = 168,
  sym_kw_json_object_t = 169,
  sym_kw_json_scalar_t = 170,
  sym_kw_json_key_list = 171,
  sym_source_file = 172,
  sym__element = 173,
  sym_sql_statement = 174,
  sym__ddl_statement = 175,
  sym__create_statement = 176,
  sym_create_package = 177,
  sym_package_properties = 178,
  sym__package_property_element = 179,
  sym__alter_statement = 180,
  sym_alter_package = 181,
  sym_alter_procedure = 182,
  sym_alter_function = 183,
  sym_alter_library = 184,
  sym_compile_clause = 185,
  sym_compiler_parameter_clause = 186,
  sym_editionable_noneditionable = 187,
  sym_sharing_clause = 188,
  sym_default_collation_clause = 189,
  sym_invoker_rights_clause = 190,
  sym_accessible_by_clause = 191,
  sym_accessor = 192,
  sym__unit_kind = 193,
  sym_reuse_settings = 194,
  sym__schema = 195,
  sym__remote = 196,
  sym__referenced_element = 197,
  sym__referenced_element_parent = 198,
  sym__referenced_element_name = 199,
  sym_byte_char = 200,
  sym__is_as = 201,
  sym_end_obj = 202,
  sym__package_item_list = 203,
  sym_create_obj = 204,
  sym_procedure_declaration = 205,
  sym_procedure_properties = 206,
  sym__procedure_property_element = 207,
  sym_function_declaration = 208,
  sym_function_properties = 209,
  sym__function_property_element = 210,
  sym__is_null_or_is_not_null = 211,
  sym_is_null = 212,
  sym_is_not_null = 213,
  sym_expression = 214,
  sym__expression_element = 215,
  sym__expression_base_elements = 216,
  sym__expression_base_operator_not_boolean = 217,
  sym__expression_base_case = 218,
  sym_expression_base_case_search = 219,
  sym_expression_base_case_simple = 220,
  sym__expression_base_boolean = 221,
  sym__expression_base_boolean_elements = 222,
  sym__expression_base_boolean_repeat = 223,
  sym__expression_base_boolean_operator = 224,
  sym__expression_base_boolean_in = 225,
  sym__expression_base_boolean_like = 226,
  sym__expression_base_boolean_between = 227,
  sym_conditional_predicate = 228,
  sym_return_declaration = 229,
  sym_datatype = 230,
  sym__character_datatypes = 231,
  sym__character_datatypes_char = 232,
  sym__character_datatypes_varchar2 = 233,
  sym__character_datatypes_nchar = 234,
  sym__character_datatypes_nvarchar2 = 235,
  sym__number_datatypes = 236,
  sym__number_datatypes_keyword = 237,
  sym__number_datatypes_number = 238,
  sym__number_datatypes_float = 239,
  sym__long_and_raw_datatypes = 240,
  sym__long_and_raw_datatypes_long_raw = 241,
  sym__long_and_raw_datatypes_raw = 242,
  sym__datetime_datatypes = 243,
  sym__datetime_datatypes_keyword = 244,
  sym__datetime_datatypes_date_timestamp = 245,
  sym__datetime_datatypes_date_interval_year = 246,
  sym__datetime_datatypes_date_interval_day = 247,
  sym__large_object_datatypes = 248,
  sym__rowid_datatypes = 249,
  sym__referenced_datatypes = 250,
  sym__referenced_datatypes_type = 251,
  sym__referenced_datatypes_rowtype = 252,
  sym__logical_datatypes = 253,
  sym__subtype_datatypes = 254,
  sym__rowid_datatypes_urowid = 255,
  sym__ansi_supported_datatypes_character = 256,
  sym__ansi_supported_datatypes_char_nchar = 257,
  sym__ansi_supported_datatypes_varchar = 258,
  sym__ansi_supported_datatypes_national = 259,
  sym__ansi_supported_datatypes_numeric_decimal_dec = 260,
  sym__ansi_supported_datatypes_double_precision = 261,
  sym__supplied_datatypes_any_types = 262,
  sym__supplied_datatypes_xml_types = 263,
  sym__supplied_datatypes_spatial_types = 264,
  sym__object_datatypes = 265,
  sym_ref_call = 266,
  sym_parameter_declaration = 267,
  sym_parameter_declaration_element = 268,
  sym__parameter_declaration_element_in = 269,
  sym__parameter_declaration_element_in_out_or_out = 270,
  sym_default_expression = 271,
  sym_parameter = 272,
  sym_parameter_element = 273,
  sym_parameter_element_positional = 274,
  sym_parameter_element_named = 275,
  sym_parameter_name = 276,
  sym_parameter_value = 277,
  sym__size = 278,
  sym__size_byte_char = 279,
  sym__size_precision_scale = 280,
  sym__precision = 281,
  sym__scale = 282,
  sym__sign_pos_neg = 283,
  sym_expression_operator_boolean = 284,
  sym_expression_operator_not_boolean = 285,
  sym_placeholder = 286,
  sym_indicator_variable = 287,
  sym_host_variable = 288,
  sym_identifier = 289,
  sym__quoted_identifier = 290,
  sym_literal_list = 291,
  sym__literal = 292,
  sym__literal_boolean = 293,
  sym_literal_number = 294,
  sym_literal_string = 295,
  aux_sym_source_file_repeat1 = 296,
  aux_sym_create_package_repeat1 = 297,
  aux_sym_package_properties_repeat1 = 298,
  aux_sym_alter_package_repeat1 = 299,
  aux_sym_compile_clause_repeat1 = 300,
  aux_sym_accessible_by_clause_repeat1 = 301,
  aux_sym_procedure_properties_repeat1 = 302,
  aux_sym_function_properties_repeat1 = 303,
  aux_sym__expression_base_operator_not_boolean_repeat1 = 304,
  aux_sym_expression_base_case_search_repeat1 = 305,
  aux_sym__expression_base_boolean_repeat1 = 306,
  aux_sym__expression_base_boolean_in_repeat1 = 307,
  aux_sym_parameter_declaration_repeat1 = 308,
  aux_sym_parameter_repeat1 = 309,
  aux_sym_literal_list_repeat1 = 310,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [sym_kw_case] = "kw_case",
  [sym_kw_when] = "kw_when",
  [sym_kw_then] = "kw_then",
  [sym_kw_if] = "kw_if",
  [sym_kw_else] = "kw_else",
  [sym_kw_row] = "kw_row",
  [sym_kw_count] = "kw_count",
  [sym_kw_first] = "kw_first",
  [sym_kw_last] = "kw_last",
  [sym_kw_limit] = "kw_limit",
  [sym_kw_next] = "kw_next",
  [sym_kw_prior] = "kw_prior",
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
  [sym__expression_base_case] = "_expression_base_case",
  [sym_expression_base_case_search] = "expression_base_case_search",
  [sym_expression_base_case_simple] = "expression_base_case_simple",
  [sym__expression_base_boolean] = "_expression_base_boolean",
  [sym__expression_base_boolean_elements] = "_expression_base_boolean_elements",
  [sym__expression_base_boolean_repeat] = "_expression_base_boolean_repeat",
  [sym__expression_base_boolean_operator] = "_expression_base_boolean_operator",
  [sym__expression_base_boolean_in] = "_expression_base_boolean_in",
  [sym__expression_base_boolean_like] = "_expression_base_boolean_like",
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
  [sym_ref_call] = "ref_call",
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
  [sym_literal_list] = "literal_list",
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
  [aux_sym_expression_base_case_search_repeat1] = "expression_base_case_search_repeat1",
  [aux_sym__expression_base_boolean_repeat1] = "_expression_base_boolean_repeat1",
  [aux_sym__expression_base_boolean_in_repeat1] = "_expression_base_boolean_in_repeat1",
  [aux_sym_parameter_declaration_repeat1] = "parameter_declaration_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym_literal_list_repeat1] = "literal_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_kw_case] = sym_kw_case,
  [sym_kw_when] = sym_kw_when,
  [sym_kw_then] = sym_kw_then,
  [sym_kw_if] = sym_kw_if,
  [sym_kw_else] = sym_kw_else,
  [sym_kw_row] = sym_kw_row,
  [sym_kw_count] = sym_kw_count,
  [sym_kw_first] = sym_kw_first,
  [sym_kw_last] = sym_kw_last,
  [sym_kw_limit] = sym_kw_limit,
  [sym_kw_next] = sym_kw_next,
  [sym_kw_prior] = sym_kw_prior,
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
  [sym__expression_base_case] = sym__expression_base_case,
  [sym_expression_base_case_search] = sym_expression_base_case_search,
  [sym_expression_base_case_simple] = sym_expression_base_case_simple,
  [sym__expression_base_boolean] = sym__expression_base_boolean,
  [sym__expression_base_boolean_elements] = sym__expression_base_boolean_elements,
  [sym__expression_base_boolean_repeat] = sym__expression_base_boolean_repeat,
  [sym__expression_base_boolean_operator] = sym__expression_base_boolean_operator,
  [sym__expression_base_boolean_in] = sym__expression_base_boolean_in,
  [sym__expression_base_boolean_like] = sym__expression_base_boolean_like,
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
  [sym_ref_call] = sym_ref_call,
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
  [sym_literal_list] = sym_literal_list,
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
  [aux_sym_expression_base_case_search_repeat1] = aux_sym_expression_base_case_search_repeat1,
  [aux_sym__expression_base_boolean_repeat1] = aux_sym__expression_base_boolean_repeat1,
  [aux_sym__expression_base_boolean_in_repeat1] = aux_sym__expression_base_boolean_in_repeat1,
  [aux_sym_parameter_declaration_repeat1] = aux_sym_parameter_declaration_repeat1,
  [aux_sym_parameter_repeat1] = aux_sym_parameter_repeat1,
  [aux_sym_literal_list_repeat1] = aux_sym_literal_list_repeat1,
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
  [anon_sym_COMMA] = {
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
  [sym_kw_case] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_when] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_then] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_if] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_else] = {
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
  [sym_kw_next] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_prior] = {
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
  [sym__expression_base_case] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_base_case_search] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_base_case_simple] = {
    .visible = true,
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
  [sym__expression_base_boolean_in] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_base_boolean_like] = {
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
  [sym_ref_call] = {
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
  [sym_literal_list] = {
    .visible = true,
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
  [aux_sym_expression_base_case_search_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_base_boolean_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_base_boolean_in_repeat1] = {
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
  [aux_sym_literal_list_repeat1] = {
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
  [11] = 9,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 13,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 17,
  [27] = 27,
  [28] = 15,
  [29] = 19,
  [30] = 21,
  [31] = 17,
  [32] = 19,
  [33] = 16,
  [34] = 21,
  [35] = 35,
  [36] = 15,
  [37] = 13,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 40,
  [42] = 40,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 38,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 47,
  [51] = 47,
  [52] = 47,
  [53] = 47,
  [54] = 47,
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
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 79,
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
  [137] = 69,
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
  [157] = 76,
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
  [173] = 159,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 171,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 172,
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
  [204] = 174,
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
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 149,
  [225] = 225,
  [226] = 226,
  [227] = 9,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 152,
  [237] = 237,
  [238] = 238,
  [239] = 135,
  [240] = 142,
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
  [252] = 150,
  [253] = 253,
  [254] = 254,
  [255] = 10,
  [256] = 256,
  [257] = 142,
  [258] = 149,
  [259] = 152,
  [260] = 135,
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
  [273] = 149,
  [274] = 274,
  [275] = 275,
  [276] = 152,
  [277] = 142,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 135,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 152,
  [296] = 296,
  [297] = 149,
  [298] = 298,
  [299] = 174,
  [300] = 159,
  [301] = 172,
  [302] = 302,
  [303] = 171,
  [304] = 304,
  [305] = 305,
  [306] = 150,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 149,
  [312] = 152,
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
  [324] = 135,
  [325] = 142,
  [326] = 326,
  [327] = 135,
  [328] = 328,
  [329] = 329,
  [330] = 142,
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
  [353] = 135,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 142,
  [363] = 149,
  [364] = 152,
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
  [401] = 393,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 393,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 457,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 457,
  [477] = 453,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 453,
  [486] = 486,
  [487] = 487,
  [488] = 261,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 469,
  [494] = 475,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 469,
  [501] = 475,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(342);
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '%') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == ',') ADVANCE(348);
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == ';') ADVANCE(343);
      if (lookahead == '<') ADVANCE(365);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == '>') ADVANCE(366);
      if (lookahead == '@') ADVANCE(352);
      if (lookahead == '\\') SKIP(329)
      if (lookahead == '^') ADVANCE(50);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(513);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(396);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(390);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(398);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(598);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(884);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(549);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(402);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(826);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(391);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(621);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(812);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(401);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(625);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(718);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(583);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(782);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('G' <= lookahead && lookahead <= 'Q') ||
          ('g' <= lookahead && lookahead <= 'q')) ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1005);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(29)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(37)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(37)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '%') ADVANCE(269);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == ',') ADVANCE(348);
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == ';') ADVANCE(343);
      if (lookahead == '<') ADVANCE(365);
      if (lookahead == '=') ADVANCE(346);
      if (lookahead == '>') ADVANCE(366);
      if (lookahead == '@') ADVANCE(352);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '^') ADVANCE(50);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(138);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(173);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(311);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(144);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(264);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(60);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(281);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(66);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(171);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(159);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '%') ADVANCE(269);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == ',') ADVANCE(348);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(597);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(624);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(441);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(682);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(728);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(884);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(797);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(955);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(681);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(827);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(449);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(718);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1005);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(397);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(588);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(399);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(769);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(798);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(854);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(813);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1005);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(588);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(399);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(769);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(798);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(854);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(813);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1005);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(588);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(399);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(769);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(960);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(854);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(813);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1005);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(399);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(960);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(854);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1005);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ';') ADVANCE(343);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '=') ADVANCE(345);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(597);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(624);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(441);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(682);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(884);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(797);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(955);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(681);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(827);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(449);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(718);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(597);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(624);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(441);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(682);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(884);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(797);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(681);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(827);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(449);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(718);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(597);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(624);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(441);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(682);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(884);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(797);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(681);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(658);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(827);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(449);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(718);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(952);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(418);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(858);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(1000);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(1002);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == '%') ADVANCE(269);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == ',') ADVANCE(348);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(343);
      if (lookahead == '@') ADVANCE(352);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(136);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(66);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == '\'') ADVANCE(1004);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == '\'') ADVANCE(1003);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(1009);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(360);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(355);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(362);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(361);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(356);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(314);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(96);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(233);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(157);
      END_STATE();
    case 58:
      if (lookahead == '|') ADVANCE(367);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1050);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1140);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(279);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(207);
      END_STATE();
    case 87:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(208);
      END_STATE();
    case 88:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(210);
      END_STATE();
    case 89:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(211);
      END_STATE();
    case 90:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1069);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1068);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(195);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 103:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(250);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      END_STATE();
    case 104:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1046);
      END_STATE();
    case 105:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1046);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1044);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1055);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1122);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1070);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(192);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(284);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1063);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1028);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1081);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1051);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1116);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1017);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1010);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1142);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1038);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1012);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1047);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1014);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1058);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1048);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1072);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1071);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1018);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1114);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1049);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1059);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(302);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 160:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 161:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(80);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 162:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1132);
      END_STATE();
    case 163:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 164:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 165:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 166:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1112);
      END_STATE();
    case 167:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1119);
      END_STATE();
    case 168:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(177);
      END_STATE();
    case 169:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 170:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(143);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1123);
      END_STATE();
    case 171:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(146);
      END_STATE();
    case 172:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 173:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(199);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 195:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(64);
      END_STATE();
    case 196:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(117);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1113);
      END_STATE();
    case 198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(284);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 201:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 202:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 203:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 204:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(304);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 215:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 216:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 217:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 218:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 219:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1026);
      END_STATE();
    case 220:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1025);
      END_STATE();
    case 221:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1085);
      END_STATE();
    case 222:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1074);
      END_STATE();
    case 223:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1013);
      END_STATE();
    case 224:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1053);
      END_STATE();
    case 225:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1138);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1077);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1066);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1023);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1023);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 244:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1123);
      END_STATE();
    case 245:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 246:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 247:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 248:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 249:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 251:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 252:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 253:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 255:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 256:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 257:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 258:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1054);
      END_STATE();
    case 259:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 260:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 261:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 262:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 263:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(312);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(313);
      END_STATE();
    case 264:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1045);
      END_STATE();
    case 265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1118);
      END_STATE();
    case 266:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1011);
      END_STATE();
    case 267:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1057);
      END_STATE();
    case 268:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1056);
      END_STATE();
    case 269:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 270:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1064);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 272:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 273:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 274:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 275:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 276:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 277:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 278:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 279:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 280:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1062);
      END_STATE();
    case 281:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      END_STATE();
    case 282:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(312);
      END_STATE();
    case 283:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(300);
      END_STATE();
    case 286:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      END_STATE();
    case 287:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(283);
      END_STATE();
    case 288:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(55);
      END_STATE();
    case 289:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1052);
      END_STATE();
    case 291:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1143);
      END_STATE();
    case 292:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 311:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 312:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 313:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 314:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 315:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 316:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 317:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1109);
      END_STATE();
    case 318:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(307);
      END_STATE();
    case 319:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(158);
      END_STATE();
    case 320:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(257);
      END_STATE();
    case 321:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1120);
      END_STATE();
    case 322:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1019);
      END_STATE();
    case 323:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(259);
      END_STATE();
    case 324:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 325:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(262);
      END_STATE();
    case 326:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1006);
      END_STATE();
    case 327:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(42);
      END_STATE();
    case 328:
      if (eof) ADVANCE(342);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 329:
      if (eof) ADVANCE(342);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(328)
      END_STATE();
    case 330:
      if (eof) ADVANCE(342);
      if (lookahead == '\n') SKIP(338)
      END_STATE();
    case 331:
      if (eof) ADVANCE(342);
      if (lookahead == '\n') SKIP(338)
      if (lookahead == '\r') SKIP(330)
      END_STATE();
    case 332:
      if (eof) ADVANCE(342);
      if (lookahead == '\n') SKIP(339)
      END_STATE();
    case 333:
      if (eof) ADVANCE(342);
      if (lookahead == '\n') SKIP(339)
      if (lookahead == '\r') SKIP(332)
      END_STATE();
    case 334:
      if (eof) ADVANCE(342);
      if (lookahead == '\n') SKIP(340)
      END_STATE();
    case 335:
      if (eof) ADVANCE(342);
      if (lookahead == '\n') SKIP(340)
      if (lookahead == '\r') SKIP(334)
      END_STATE();
    case 336:
      if (eof) ADVANCE(342);
      if (lookahead == '\n') SKIP(341)
      END_STATE();
    case 337:
      if (eof) ADVANCE(342);
      if (lookahead == '\n') SKIP(341)
      if (lookahead == '\r') SKIP(336)
      END_STATE();
    case 338:
      if (eof) ADVANCE(342);
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '%') ADVANCE(269);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == ',') ADVANCE(348);
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == '.') ADVANCE(350);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == ':') ADVANCE(370);
      if (lookahead == ';') ADVANCE(343);
      if (lookahead == '<') ADVANCE(365);
      if (lookahead == '=') ADVANCE(345);
      if (lookahead == '>') ADVANCE(366);
      if (lookahead == '@') ADVANCE(352);
      if (lookahead == '\\') SKIP(331)
      if (lookahead == '^') ADVANCE(50);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(137);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(226);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(254);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(264);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(72);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(338)
      END_STATE();
    case 339:
      if (eof) ADVANCE(342);
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ';') ADVANCE(343);
      if (lookahead == '\\') SKIP(333)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(673);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(788);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(786);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(551);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(804);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(419);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(590);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(814);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(339)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 340:
      if (eof) ADVANCE(342);
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ';') ADVANCE(343);
      if (lookahead == '\\') SKIP(335)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(673);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(788);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(786);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(804);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(419);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(590);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(814);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(340)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 341:
      if (eof) ADVANCE(342);
      if (lookahead == '"') ADVANCE(993);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ';') ADVANCE(343);
      if (lookahead == '\\') SKIP(337)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(673);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(786);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(804);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(341)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(46);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(356);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1006);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1009);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(363);
      if (lookahead == '>') ADVANCE(359);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(364);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(368);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(355);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '2') ADVANCE(1088);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(507);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(609);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(966);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(479);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(480);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(855);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(714);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(756);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(907);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(911);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(912);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(913);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(646);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(611);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(594);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(511);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(923);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(953);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(817);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(869);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(886);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(973);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(974);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(973);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(976);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1141);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1050);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(874);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(777);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(683);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(547);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(849);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(874);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(706);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(779);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(956);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(741);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(706);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(875);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(456);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(484);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(828);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(917);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(627);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(979);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(475);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(684);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(407);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(917);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(627);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(476);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(716);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(407);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(917);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(627);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(716);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(407);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(829);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(719);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(848);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(686);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(961);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(959);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(881);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(830);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(712);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(846);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(677);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(708);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(890);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(832);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(678);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(799);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(679);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(900);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(860);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(736);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(850);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(711);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(839);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(906);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(864);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(908);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(930);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(859);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(581);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(453);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(486);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(510);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(925);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(610);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(483);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(987);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(928);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(924);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(953);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(964);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(765);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(946);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(940);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(948);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(868);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1124);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1125);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1126);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(670);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(954);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1136);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(442);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(591);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(954);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(866);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(518);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(648);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(693);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(565);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(853);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(698);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(699);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(700);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(701);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(702);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(703);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(473);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(918);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(492);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1068);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(892);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1133);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1069);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1135);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(672);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(414);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(672);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(628);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(649);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(628);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(623);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(780);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(519);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1023);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(780);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(642);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(630);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(436);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(801);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(550);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(935);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(790);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(936);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(939);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(629);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(944);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(806);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(446);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1046);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(506);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(980);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(704);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(980);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1044);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1075);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1128);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1055);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1122);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1129);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1070);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(638);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(876);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(495);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(655);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(638);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(778);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(613);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(411);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(580);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(870);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(778);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(613);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(411);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(870);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(435);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(988);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(807);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(705);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(771);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(445);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(962);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(440);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(808);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(713);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(774);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(669);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(634);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(766);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(775);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(674);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1060);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1063);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1024);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1110);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1028);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1081);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1051);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1115);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1020);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1016);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1116);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1127);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1021);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1061);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1010);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1137);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1121);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1142);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1038);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1042);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1012);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1047);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1145);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1144);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1101);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1103);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1014);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1058);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1048);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1072);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1094);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1096);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1071);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1049);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(791);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(481);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(916);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(743);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(750);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(873);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(847);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(776);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(709);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(802);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(735);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(834);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(835);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(836);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(932);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(840);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(841);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(842);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(845);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(478);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(986);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(933);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(757);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(887);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(768);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(687);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(616);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(965);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(938);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(770);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(634);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(766);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(775);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1027);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1078);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1067);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(640);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1108);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1039);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1132);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1083);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1084);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1082);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(615);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(381);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(872);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(559);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(784);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(533);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(562);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(643);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(977);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(773);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(823);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(567);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(972);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(568);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(572);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(575);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(576);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1112);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1119);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(553);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1123);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(631);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(818);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(636);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(542);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(777);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(557);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(914);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(557);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(416);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(781);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(427);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(428);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(606);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(521);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(606);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(971);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(691);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(466);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(919);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(500);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(491);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(745);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(891);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(732);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(467);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(943);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(978);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(764);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(746);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(901);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(748);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(926);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(749);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(751);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(767);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(752);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(878);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(762);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(792);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(882);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(793);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(883);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(794);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(759);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(795);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(796);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(459);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(809);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(951);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(579);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(379);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(437);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(918);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(671);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1022);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1092);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1113);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1134);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1099);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1117);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(869);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(886);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(779);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(707);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(825);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(754);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(675);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(458);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(675);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(438);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(591);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(388);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(885);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(920);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(524);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(902);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(528);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(595);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(563);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(578);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(540);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(543);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(544);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(545);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(546);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(554);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(803);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(880);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(444);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(696);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(656);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(664);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(430);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(710);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(805);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(662);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(945);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(458);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(825);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(715);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(810);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(811);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(520);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(586);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(570);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(415);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(417);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(582);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(653);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(587);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1078);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1026);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1025);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1043);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1076);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1085);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1074);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1130);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1013);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1053);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1138);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1040);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(496);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(963);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(607);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(608);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(499);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(915);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(605);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(898);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(523);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(921);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(903);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(904);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(909);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(893);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(556);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(596);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(934);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(566);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(659);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(937);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(889);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(949);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(947);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(950);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(450);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(723);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(451);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(375);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(421);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(815);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(452);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(755);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(704);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(816);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(975);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(717);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(547);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(744);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(387);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(747);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(833);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(753);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(737);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(738);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(740);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(729);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(894);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(685);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(481);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(967);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(720);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(725);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(429);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(763);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(431);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(968);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(969);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(970);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(772);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1111);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1054);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(508);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(645);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(641);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(508);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(580);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(981);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(789);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(561);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(522);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(530);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(535);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(538);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(694);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(560);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(660);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1045);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(895);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(645);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1065);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1118);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1011);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1089);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1035);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1106);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1057);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1105);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1015);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1086);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(372);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1131);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1056);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1148);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1097);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1104);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(985);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(726);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(488);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(863);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(982);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(983);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(984);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(637);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(958);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(785);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(439);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(734);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(632);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(818);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(856);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(532);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(879);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(584);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(420);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(425);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(942);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(472);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(386);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1139);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1073);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1062);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(877);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(515);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(896);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(517);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(667);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(922);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(899);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(525);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(526);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(929);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(910);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(787);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(650);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(927);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(573);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(941);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(665);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(622);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1090);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1023);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1079);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1032);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1034);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1030);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1031);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1107);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1033);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1052);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1036);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1091);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1143);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1093);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1150);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1095);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1037);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1153);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1151);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1152);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1149);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(619);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(620);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(957);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(377);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(871);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1120);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(633);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(644);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(527);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(529);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(851);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(852);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(589);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(383);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(647);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(651);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(571);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(654);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(989);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(661);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(990);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(991);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(666);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(593);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(668);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(741);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(457);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(601);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(895);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(742);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(865);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(521);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(857);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(685);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(690);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(861);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(931);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(692);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(881);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(888);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(758);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(760);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(461);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(462);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(537);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(422);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1109);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1029);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(490);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(635);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(585);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(639);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(897);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1041);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1080);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1019);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1146);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1147);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(374);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(380);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(382);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(819);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(820);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(821);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(822);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(992);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(998);
      if (lookahead == '\r') ADVANCE(995);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead != 0) ADVANCE(1000);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(998);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead != 0) ADVANCE(1000);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(1000);
      if (lookahead == '"') ADVANCE(1008);
      if (lookahead != 0) ADVANCE(996);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '*') ADVANCE(1002);
      if (lookahead != 0) ADVANCE(1000);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '-') ADVANCE(999);
      if (lookahead == '/') ADVANCE(997);
      if (lookahead == '\\') ADVANCE(994);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(998);
      if (lookahead != 0) ADVANCE(1000);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead != 0) ADVANCE(1000);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead != 0) ADVANCE(1000);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '*') ADVANCE(1001);
      if (lookahead == '/') ADVANCE(1000);
      if (lookahead != 0) ADVANCE(1002);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '*') ADVANCE(1001);
      if (lookahead != 0) ADVANCE(1002);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(42);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(327);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1005);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1006);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_comment_ml);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_comment_sl);
      if (lookahead == '"') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1009);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_comment_sl);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1009);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_kw_create);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_kw_alter);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_kw_package);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_kw_function);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_kw_procedure);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_kw_trigger);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_kw_type);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_kw_datatype_type);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_kw_datatype_rowtype);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_kw_library);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_kw_true);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_kw_false);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_kw_null);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_kw_not);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_kw_case);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_kw_when);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_kw_then);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_kw_if);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_kw_else);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_kw_row);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(800);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_kw_count);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_kw_first);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_kw_last);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_kw_limit);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_kw_next);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_kw_prior);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_kw_rowcount);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_kw_bulk_rowcount);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_kw_compile);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_kw_debug);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_kw_specification);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_kw_body);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_kw_declare);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_kw_begin);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_kw_end);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_kw_or);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_kw_and);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_kw_replace);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_kw_editionable);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_kw_noneditionable);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_kw_metadata);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_kw_none);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_kw_default);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_kw_collation);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_kw_using_nls_comp);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_kw_authid);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_kw_current_user);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_kw_definer);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_kw_accessible);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_kw_by);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_kw_by);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(514);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_kw_reuse);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_kw_settings);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_kw_byte);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_kw_char);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_kw_char);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_kw_is);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_kw_is);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(824);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_kw_as);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_kw_deterministic);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_kw_pipelined);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_kw_parallel_enable);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_kw_result_cache);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_kw_exists);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_kw_between);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_kw_found);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_kw_isopen);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_kw_in);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_kw_in);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1090);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_kw_out);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_kw_nocopy);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_kw_like);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_kw_inserting);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_kw_deleting);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_kw_updating);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_kw_return);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_kw_varchar);
      if (lookahead == '2') ADVANCE(1087);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_kw_varchar2);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_kw_nvarchar2);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_kw_nchar);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_kw_int);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_kw_smallint);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_kw_real);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_kw_binary_float);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_kw_binary_double);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_kw_simple_float);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_kw_simple_double);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_kw_binary_integer);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_kw_pls_integer);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_kw_natural);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1100);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_kw_naturaln);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_kw_positive);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1102);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_kw_positiven);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_kw_signtype);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_kw_simple_integer);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_kw_integer);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_kw_number);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_kw_float);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_kw_long);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_kw_raw);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_kw_date);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_kw_timestamp);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_kw_with);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_kw_local);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_kw_time);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_kw_time);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(927);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_kw_zone);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_kw_interval);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_kw_year);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_kw_month);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_kw_day);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_kw_minute);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_kw_second);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_kw_to);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_kw_blob);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_kw_clob);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_kw_nclob);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_kw_bfile);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_kw_rowid);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_kw_urowid);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_kw_boolean);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_kw_character);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_kw_varying);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_kw_numeric);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_kw_decimal);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_kw_dec);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(724);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_kw_dec);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(724);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_kw_double);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_kw_precision);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_kw_sys);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_kw_anydata);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_kw_anydata);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_kw_anytype);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_kw_anydataset);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_kw_xmltype);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_kw_uritype);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_kw_sdo_geometry);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_kw_sdo_topo_geometry);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_kw_sdo_georaster);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_kw_json_element_t);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_kw_json_array_t);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_kw_json_object_t);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_kw_json_scalar_t);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_kw_json_key_list);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 29},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 29},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 29},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 338},
  [39] = {.lex_state = 338},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 338},
  [44] = {.lex_state = 338},
  [45] = {.lex_state = 338},
  [46] = {.lex_state = 338},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 338},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 338},
  [56] = {.lex_state = 338},
  [57] = {.lex_state = 338},
  [58] = {.lex_state = 338},
  [59] = {.lex_state = 338},
  [60] = {.lex_state = 338},
  [61] = {.lex_state = 338},
  [62] = {.lex_state = 338},
  [63] = {.lex_state = 338},
  [64] = {.lex_state = 338},
  [65] = {.lex_state = 338},
  [66] = {.lex_state = 338},
  [67] = {.lex_state = 338},
  [68] = {.lex_state = 338},
  [69] = {.lex_state = 338},
  [70] = {.lex_state = 338},
  [71] = {.lex_state = 338},
  [72] = {.lex_state = 338},
  [73] = {.lex_state = 338},
  [74] = {.lex_state = 338},
  [75] = {.lex_state = 32},
  [76] = {.lex_state = 338},
  [77] = {.lex_state = 32},
  [78] = {.lex_state = 338},
  [79] = {.lex_state = 338},
  [80] = {.lex_state = 338},
  [81] = {.lex_state = 338},
  [82] = {.lex_state = 32},
  [83] = {.lex_state = 339},
  [84] = {.lex_state = 32},
  [85] = {.lex_state = 340},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 27},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 32},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 341},
  [93] = {.lex_state = 341},
  [94] = {.lex_state = 341},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 341},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 37},
  [99] = {.lex_state = 37},
  [100] = {.lex_state = 27},
  [101] = {.lex_state = 341},
  [102] = {.lex_state = 27},
  [103] = {.lex_state = 341},
  [104] = {.lex_state = 41},
  [105] = {.lex_state = 41},
  [106] = {.lex_state = 41},
  [107] = {.lex_state = 27},
  [108] = {.lex_state = 27},
  [109] = {.lex_state = 41},
  [110] = {.lex_state = 27},
  [111] = {.lex_state = 27},
  [112] = {.lex_state = 32},
  [113] = {.lex_state = 32},
  [114] = {.lex_state = 27},
  [115] = {.lex_state = 338},
  [116] = {.lex_state = 338},
  [117] = {.lex_state = 41},
  [118] = {.lex_state = 41},
  [119] = {.lex_state = 41},
  [120] = {.lex_state = 41},
  [121] = {.lex_state = 41},
  [122] = {.lex_state = 41},
  [123] = {.lex_state = 41},
  [124] = {.lex_state = 338},
  [125] = {.lex_state = 41},
  [126] = {.lex_state = 41},
  [127] = {.lex_state = 338},
  [128] = {.lex_state = 38},
  [129] = {.lex_state = 338},
  [130] = {.lex_state = 338},
  [131] = {.lex_state = 27},
  [132] = {.lex_state = 338},
  [133] = {.lex_state = 27},
  [134] = {.lex_state = 338},
  [135] = {.lex_state = 27},
  [136] = {.lex_state = 27},
  [137] = {.lex_state = 341},
  [138] = {.lex_state = 29},
  [139] = {.lex_state = 338},
  [140] = {.lex_state = 338},
  [141] = {.lex_state = 29},
  [142] = {.lex_state = 27},
  [143] = {.lex_state = 338},
  [144] = {.lex_state = 338},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 338},
  [147] = {.lex_state = 338},
  [148] = {.lex_state = 338},
  [149] = {.lex_state = 27},
  [150] = {.lex_state = 27},
  [151] = {.lex_state = 41},
  [152] = {.lex_state = 27},
  [153] = {.lex_state = 338},
  [154] = {.lex_state = 341},
  [155] = {.lex_state = 338},
  [156] = {.lex_state = 29},
  [157] = {.lex_state = 341},
  [158] = {.lex_state = 41},
  [159] = {.lex_state = 27},
  [160] = {.lex_state = 41},
  [161] = {.lex_state = 41},
  [162] = {.lex_state = 41},
  [163] = {.lex_state = 41},
  [164] = {.lex_state = 41},
  [165] = {.lex_state = 41},
  [166] = {.lex_state = 41},
  [167] = {.lex_state = 41},
  [168] = {.lex_state = 41},
  [169] = {.lex_state = 41},
  [170] = {.lex_state = 41},
  [171] = {.lex_state = 27},
  [172] = {.lex_state = 27},
  [173] = {.lex_state = 27},
  [174] = {.lex_state = 27},
  [175] = {.lex_state = 41},
  [176] = {.lex_state = 41},
  [177] = {.lex_state = 27},
  [178] = {.lex_state = 41},
  [179] = {.lex_state = 41},
  [180] = {.lex_state = 41},
  [181] = {.lex_state = 41},
  [182] = {.lex_state = 41},
  [183] = {.lex_state = 41},
  [184] = {.lex_state = 41},
  [185] = {.lex_state = 41},
  [186] = {.lex_state = 27},
  [187] = {.lex_state = 27},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 41},
  [190] = {.lex_state = 41},
  [191] = {.lex_state = 41},
  [192] = {.lex_state = 27},
  [193] = {.lex_state = 41},
  [194] = {.lex_state = 41},
  [195] = {.lex_state = 41},
  [196] = {.lex_state = 41},
  [197] = {.lex_state = 27},
  [198] = {.lex_state = 41},
  [199] = {.lex_state = 41},
  [200] = {.lex_state = 41},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 41},
  [203] = {.lex_state = 27},
  [204] = {.lex_state = 27},
  [205] = {.lex_state = 27},
  [206] = {.lex_state = 27},
  [207] = {.lex_state = 27},
  [208] = {.lex_state = 27},
  [209] = {.lex_state = 27},
  [210] = {.lex_state = 27},
  [211] = {.lex_state = 33},
  [212] = {.lex_state = 27},
  [213] = {.lex_state = 27},
  [214] = {.lex_state = 27},
  [215] = {.lex_state = 27},
  [216] = {.lex_state = 27},
  [217] = {.lex_state = 27},
  [218] = {.lex_state = 27},
  [219] = {.lex_state = 27},
  [220] = {.lex_state = 27},
  [221] = {.lex_state = 27},
  [222] = {.lex_state = 27},
  [223] = {.lex_state = 27},
  [224] = {.lex_state = 27},
  [225] = {.lex_state = 27},
  [226] = {.lex_state = 27},
  [227] = {.lex_state = 338},
  [228] = {.lex_state = 27},
  [229] = {.lex_state = 27},
  [230] = {.lex_state = 27},
  [231] = {.lex_state = 27},
  [232] = {.lex_state = 27},
  [233] = {.lex_state = 27},
  [234] = {.lex_state = 27},
  [235] = {.lex_state = 27},
  [236] = {.lex_state = 27},
  [237] = {.lex_state = 27},
  [238] = {.lex_state = 27},
  [239] = {.lex_state = 27},
  [240] = {.lex_state = 27},
  [241] = {.lex_state = 27},
  [242] = {.lex_state = 27},
  [243] = {.lex_state = 27},
  [244] = {.lex_state = 27},
  [245] = {.lex_state = 27},
  [246] = {.lex_state = 27},
  [247] = {.lex_state = 27},
  [248] = {.lex_state = 27},
  [249] = {.lex_state = 27},
  [250] = {.lex_state = 27},
  [251] = {.lex_state = 27},
  [252] = {.lex_state = 27},
  [253] = {.lex_state = 27},
  [254] = {.lex_state = 27},
  [255] = {.lex_state = 338},
  [256] = {.lex_state = 27},
  [257] = {.lex_state = 27},
  [258] = {.lex_state = 27},
  [259] = {.lex_state = 27},
  [260] = {.lex_state = 27},
  [261] = {.lex_state = 338},
  [262] = {.lex_state = 338},
  [263] = {.lex_state = 27},
  [264] = {.lex_state = 338},
  [265] = {.lex_state = 338},
  [266] = {.lex_state = 27},
  [267] = {.lex_state = 27},
  [268] = {.lex_state = 338},
  [269] = {.lex_state = 338},
  [270] = {.lex_state = 33},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 33},
  [273] = {.lex_state = 27},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 27},
  [276] = {.lex_state = 27},
  [277] = {.lex_state = 27},
  [278] = {.lex_state = 27},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 33},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 27},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 27},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 27},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 27},
  [296] = {.lex_state = 33},
  [297] = {.lex_state = 27},
  [298] = {.lex_state = 41},
  [299] = {.lex_state = 27},
  [300] = {.lex_state = 27},
  [301] = {.lex_state = 27},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 27},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 33},
  [306] = {.lex_state = 27},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 33},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 27},
  [311] = {.lex_state = 27},
  [312] = {.lex_state = 27},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 27},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 33},
  [319] = {.lex_state = 33},
  [320] = {.lex_state = 27},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 27},
  [325] = {.lex_state = 27},
  [326] = {.lex_state = 33},
  [327] = {.lex_state = 27},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 27},
  [331] = {.lex_state = 27},
  [332] = {.lex_state = 33},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 33},
  [336] = {.lex_state = 41},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 33},
  [339] = {.lex_state = 33},
  [340] = {.lex_state = 33},
  [341] = {.lex_state = 27},
  [342] = {.lex_state = 27},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 338},
  [345] = {.lex_state = 27},
  [346] = {.lex_state = 338},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 33},
  [353] = {.lex_state = 27},
  [354] = {.lex_state = 33},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 33},
  [359] = {.lex_state = 33},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 33},
  [362] = {.lex_state = 27},
  [363] = {.lex_state = 27},
  [364] = {.lex_state = 27},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 33},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 27},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 27},
  [371] = {.lex_state = 33},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 27},
  [374] = {.lex_state = 33},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 33},
  [377] = {.lex_state = 33},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 33},
  [380] = {.lex_state = 33},
  [381] = {.lex_state = 27},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 27},
  [384] = {.lex_state = 27},
  [385] = {.lex_state = 27},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 27},
  [388] = {.lex_state = 27},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 27},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 28},
  [393] = {.lex_state = 27},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 28},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 27},
  [399] = {.lex_state = 27},
  [400] = {.lex_state = 27},
  [401] = {.lex_state = 27},
  [402] = {.lex_state = 27},
  [403] = {.lex_state = 27},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 27},
  [408] = {.lex_state = 27},
  [409] = {.lex_state = 338},
  [410] = {.lex_state = 27},
  [411] = {.lex_state = 27},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 27},
  [414] = {.lex_state = 27},
  [415] = {.lex_state = 27},
  [416] = {.lex_state = 27},
  [417] = {.lex_state = 27},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 27},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 27},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 27},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 28},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 33},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 27},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 27},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 998},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 27},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 34},
  [459] = {.lex_state = 27},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 27},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 338},
  [466] = {.lex_state = 34},
  [467] = {.lex_state = 27},
  [468] = {.lex_state = 27},
  [469] = {.lex_state = 27},
  [470] = {.lex_state = 28},
  [471] = {.lex_state = 27},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 27},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 27},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 998},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 27},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 27},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 998},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 27},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 27},
  [493] = {.lex_state = 27},
  [494] = {.lex_state = 27},
  [495] = {.lex_state = 27},
  [496] = {.lex_state = 27},
  [497] = {.lex_state = 27},
  [498] = {.lex_state = 27},
  [499] = {.lex_state = 27},
  [500] = {.lex_state = 27},
  [501] = {.lex_state = 27},
  [502] = {.lex_state = 27},
  [503] = {.lex_state = 27},
  [504] = {.lex_state = 27},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_kw_case] = ACTIONS(1),
    [sym_kw_when] = ACTIONS(1),
    [sym_kw_then] = ACTIONS(1),
    [sym_kw_if] = ACTIONS(1),
    [sym_kw_else] = ACTIONS(1),
    [sym_kw_row] = ACTIONS(1),
    [sym_kw_count] = ACTIONS(1),
    [sym_kw_first] = ACTIONS(1),
    [sym_kw_last] = ACTIONS(1),
    [sym_kw_limit] = ACTIONS(1),
    [sym_kw_next] = ACTIONS(1),
    [sym_kw_prior] = ACTIONS(1),
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
    [sym_source_file] = STATE(506),
    [sym__element] = STATE(95),
    [sym_sql_statement] = STATE(95),
    [sym__ddl_statement] = STATE(343),
    [sym__create_statement] = STATE(343),
    [sym_create_package] = STATE(343),
    [sym__alter_statement] = STATE(343),
    [sym_alter_package] = STATE(343),
    [sym_alter_procedure] = STATE(343),
    [sym_alter_function] = STATE(343),
    [sym_alter_library] = STATE(343),
    [sym_create_obj] = STATE(344),
    [aux_sym_source_file_repeat1] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment_ml] = ACTIONS(7),
    [sym_comment_sl] = ACTIONS(7),
    [sym_kw_create] = ACTIONS(9),
    [sym_kw_alter] = ACTIONS(11),
  },
  [2] = {
    [sym__schema] = STATE(282),
    [sym__referenced_element] = STATE(435),
    [sym__referenced_element_parent] = STATE(55),
    [sym__referenced_element_name] = STATE(43),
    [sym_datatype] = STATE(336),
    [sym__character_datatypes] = STATE(181),
    [sym__character_datatypes_char] = STATE(181),
    [sym__character_datatypes_varchar2] = STATE(181),
    [sym__character_datatypes_nchar] = STATE(181),
    [sym__character_datatypes_nvarchar2] = STATE(181),
    [sym__number_datatypes] = STATE(181),
    [sym__number_datatypes_keyword] = STATE(181),
    [sym__number_datatypes_number] = STATE(181),
    [sym__number_datatypes_float] = STATE(181),
    [sym__long_and_raw_datatypes] = STATE(181),
    [sym__long_and_raw_datatypes_long_raw] = STATE(181),
    [sym__long_and_raw_datatypes_raw] = STATE(181),
    [sym__datetime_datatypes] = STATE(181),
    [sym__datetime_datatypes_keyword] = STATE(181),
    [sym__datetime_datatypes_date_timestamp] = STATE(181),
    [sym__datetime_datatypes_date_interval_year] = STATE(181),
    [sym__datetime_datatypes_date_interval_day] = STATE(181),
    [sym__large_object_datatypes] = STATE(181),
    [sym__rowid_datatypes] = STATE(181),
    [sym__referenced_datatypes] = STATE(182),
    [sym__referenced_datatypes_type] = STATE(183),
    [sym__referenced_datatypes_rowtype] = STATE(184),
    [sym__logical_datatypes] = STATE(181),
    [sym__subtype_datatypes] = STATE(181),
    [sym__rowid_datatypes_urowid] = STATE(181),
    [sym__ansi_supported_datatypes_character] = STATE(181),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(181),
    [sym__ansi_supported_datatypes_varchar] = STATE(181),
    [sym__ansi_supported_datatypes_national] = STATE(181),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(181),
    [sym__ansi_supported_datatypes_double_precision] = STATE(181),
    [sym__supplied_datatypes_any_types] = STATE(181),
    [sym__supplied_datatypes_xml_types] = STATE(181),
    [sym__supplied_datatypes_spatial_types] = STATE(181),
    [sym__object_datatypes] = STATE(181),
    [sym__parameter_declaration_element_in] = STATE(428),
    [sym__parameter_declaration_element_in_out_or_out] = STATE(428),
    [sym_identifier] = STATE(104),
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
    [sym__schema] = STATE(282),
    [sym__referenced_element] = STATE(435),
    [sym__referenced_element_parent] = STATE(55),
    [sym__referenced_element_name] = STATE(43),
    [sym_datatype] = STATE(298),
    [sym__character_datatypes] = STATE(181),
    [sym__character_datatypes_char] = STATE(181),
    [sym__character_datatypes_varchar2] = STATE(181),
    [sym__character_datatypes_nchar] = STATE(181),
    [sym__character_datatypes_nvarchar2] = STATE(181),
    [sym__number_datatypes] = STATE(181),
    [sym__number_datatypes_keyword] = STATE(181),
    [sym__number_datatypes_number] = STATE(181),
    [sym__number_datatypes_float] = STATE(181),
    [sym__long_and_raw_datatypes] = STATE(181),
    [sym__long_and_raw_datatypes_long_raw] = STATE(181),
    [sym__long_and_raw_datatypes_raw] = STATE(181),
    [sym__datetime_datatypes] = STATE(181),
    [sym__datetime_datatypes_keyword] = STATE(181),
    [sym__datetime_datatypes_date_timestamp] = STATE(181),
    [sym__datetime_datatypes_date_interval_year] = STATE(181),
    [sym__datetime_datatypes_date_interval_day] = STATE(181),
    [sym__large_object_datatypes] = STATE(181),
    [sym__rowid_datatypes] = STATE(181),
    [sym__referenced_datatypes] = STATE(182),
    [sym__referenced_datatypes_type] = STATE(183),
    [sym__referenced_datatypes_rowtype] = STATE(184),
    [sym__logical_datatypes] = STATE(181),
    [sym__subtype_datatypes] = STATE(181),
    [sym__rowid_datatypes_urowid] = STATE(181),
    [sym__ansi_supported_datatypes_character] = STATE(181),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(181),
    [sym__ansi_supported_datatypes_varchar] = STATE(181),
    [sym__ansi_supported_datatypes_national] = STATE(181),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(181),
    [sym__ansi_supported_datatypes_double_precision] = STATE(181),
    [sym__supplied_datatypes_any_types] = STATE(181),
    [sym__supplied_datatypes_xml_types] = STATE(181),
    [sym__supplied_datatypes_spatial_types] = STATE(181),
    [sym__object_datatypes] = STATE(181),
    [sym_identifier] = STATE(104),
    [sym__quoted_identifier] = STATE(12),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(17),
    [sym_kw_out] = ACTIONS(59),
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
    [sym__schema] = STATE(282),
    [sym__referenced_element] = STATE(435),
    [sym__referenced_element_parent] = STATE(55),
    [sym__referenced_element_name] = STATE(43),
    [sym_datatype] = STATE(440),
    [sym__character_datatypes] = STATE(181),
    [sym__character_datatypes_char] = STATE(181),
    [sym__character_datatypes_varchar2] = STATE(181),
    [sym__character_datatypes_nchar] = STATE(181),
    [sym__character_datatypes_nvarchar2] = STATE(181),
    [sym__number_datatypes] = STATE(181),
    [sym__number_datatypes_keyword] = STATE(181),
    [sym__number_datatypes_number] = STATE(181),
    [sym__number_datatypes_float] = STATE(181),
    [sym__long_and_raw_datatypes] = STATE(181),
    [sym__long_and_raw_datatypes_long_raw] = STATE(181),
    [sym__long_and_raw_datatypes_raw] = STATE(181),
    [sym__datetime_datatypes] = STATE(181),
    [sym__datetime_datatypes_keyword] = STATE(181),
    [sym__datetime_datatypes_date_timestamp] = STATE(181),
    [sym__datetime_datatypes_date_interval_year] = STATE(181),
    [sym__datetime_datatypes_date_interval_day] = STATE(181),
    [sym__large_object_datatypes] = STATE(181),
    [sym__rowid_datatypes] = STATE(181),
    [sym__referenced_datatypes] = STATE(182),
    [sym__referenced_datatypes_type] = STATE(183),
    [sym__referenced_datatypes_rowtype] = STATE(184),
    [sym__logical_datatypes] = STATE(181),
    [sym__subtype_datatypes] = STATE(181),
    [sym__rowid_datatypes_urowid] = STATE(181),
    [sym__ansi_supported_datatypes_character] = STATE(181),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(181),
    [sym__ansi_supported_datatypes_varchar] = STATE(181),
    [sym__ansi_supported_datatypes_national] = STATE(181),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(181),
    [sym__ansi_supported_datatypes_double_precision] = STATE(181),
    [sym__supplied_datatypes_any_types] = STATE(181),
    [sym__supplied_datatypes_xml_types] = STATE(181),
    [sym__supplied_datatypes_spatial_types] = STATE(181),
    [sym__object_datatypes] = STATE(181),
    [sym_identifier] = STATE(104),
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
    [sym__schema] = STATE(282),
    [sym__referenced_element] = STATE(435),
    [sym__referenced_element_parent] = STATE(55),
    [sym__referenced_element_name] = STATE(43),
    [sym_datatype] = STATE(427),
    [sym__character_datatypes] = STATE(181),
    [sym__character_datatypes_char] = STATE(181),
    [sym__character_datatypes_varchar2] = STATE(181),
    [sym__character_datatypes_nchar] = STATE(181),
    [sym__character_datatypes_nvarchar2] = STATE(181),
    [sym__number_datatypes] = STATE(181),
    [sym__number_datatypes_keyword] = STATE(181),
    [sym__number_datatypes_number] = STATE(181),
    [sym__number_datatypes_float] = STATE(181),
    [sym__long_and_raw_datatypes] = STATE(181),
    [sym__long_and_raw_datatypes_long_raw] = STATE(181),
    [sym__long_and_raw_datatypes_raw] = STATE(181),
    [sym__datetime_datatypes] = STATE(181),
    [sym__datetime_datatypes_keyword] = STATE(181),
    [sym__datetime_datatypes_date_timestamp] = STATE(181),
    [sym__datetime_datatypes_date_interval_year] = STATE(181),
    [sym__datetime_datatypes_date_interval_day] = STATE(181),
    [sym__large_object_datatypes] = STATE(181),
    [sym__rowid_datatypes] = STATE(181),
    [sym__referenced_datatypes] = STATE(182),
    [sym__referenced_datatypes_type] = STATE(183),
    [sym__referenced_datatypes_rowtype] = STATE(184),
    [sym__logical_datatypes] = STATE(181),
    [sym__subtype_datatypes] = STATE(181),
    [sym__rowid_datatypes_urowid] = STATE(181),
    [sym__ansi_supported_datatypes_character] = STATE(181),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(181),
    [sym__ansi_supported_datatypes_varchar] = STATE(181),
    [sym__ansi_supported_datatypes_national] = STATE(181),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(181),
    [sym__ansi_supported_datatypes_double_precision] = STATE(181),
    [sym__supplied_datatypes_any_types] = STATE(181),
    [sym__supplied_datatypes_xml_types] = STATE(181),
    [sym__supplied_datatypes_spatial_types] = STATE(181),
    [sym__object_datatypes] = STATE(181),
    [sym_identifier] = STATE(104),
    [sym__quoted_identifier] = STATE(12),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(17),
    [sym_kw_nocopy] = ACTIONS(63),
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
    [sym__schema] = STATE(282),
    [sym__referenced_element] = STATE(435),
    [sym__referenced_element_parent] = STATE(55),
    [sym__referenced_element_name] = STATE(43),
    [sym_datatype] = STATE(331),
    [sym__character_datatypes] = STATE(181),
    [sym__character_datatypes_char] = STATE(181),
    [sym__character_datatypes_varchar2] = STATE(181),
    [sym__character_datatypes_nchar] = STATE(181),
    [sym__character_datatypes_nvarchar2] = STATE(181),
    [sym__number_datatypes] = STATE(181),
    [sym__number_datatypes_keyword] = STATE(181),
    [sym__number_datatypes_number] = STATE(181),
    [sym__number_datatypes_float] = STATE(181),
    [sym__long_and_raw_datatypes] = STATE(181),
    [sym__long_and_raw_datatypes_long_raw] = STATE(181),
    [sym__long_and_raw_datatypes_raw] = STATE(181),
    [sym__datetime_datatypes] = STATE(181),
    [sym__datetime_datatypes_keyword] = STATE(181),
    [sym__datetime_datatypes_date_timestamp] = STATE(181),
    [sym__datetime_datatypes_date_interval_year] = STATE(181),
    [sym__datetime_datatypes_date_interval_day] = STATE(181),
    [sym__large_object_datatypes] = STATE(181),
    [sym__rowid_datatypes] = STATE(181),
    [sym__referenced_datatypes] = STATE(182),
    [sym__referenced_datatypes_type] = STATE(183),
    [sym__referenced_datatypes_rowtype] = STATE(184),
    [sym__logical_datatypes] = STATE(181),
    [sym__subtype_datatypes] = STATE(181),
    [sym__rowid_datatypes_urowid] = STATE(181),
    [sym__ansi_supported_datatypes_character] = STATE(181),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(181),
    [sym__ansi_supported_datatypes_varchar] = STATE(181),
    [sym__ansi_supported_datatypes_national] = STATE(181),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(181),
    [sym__ansi_supported_datatypes_double_precision] = STATE(181),
    [sym__supplied_datatypes_any_types] = STATE(181),
    [sym__supplied_datatypes_xml_types] = STATE(181),
    [sym__supplied_datatypes_spatial_types] = STATE(181),
    [sym__object_datatypes] = STATE(181),
    [sym_identifier] = STATE(104),
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
    [sym__schema] = STATE(282),
    [sym__referenced_element] = STATE(435),
    [sym__referenced_element_parent] = STATE(55),
    [sym__referenced_element_name] = STATE(43),
    [sym_datatype] = STATE(438),
    [sym__character_datatypes] = STATE(181),
    [sym__character_datatypes_char] = STATE(181),
    [sym__character_datatypes_varchar2] = STATE(181),
    [sym__character_datatypes_nchar] = STATE(181),
    [sym__character_datatypes_nvarchar2] = STATE(181),
    [sym__number_datatypes] = STATE(181),
    [sym__number_datatypes_keyword] = STATE(181),
    [sym__number_datatypes_number] = STATE(181),
    [sym__number_datatypes_float] = STATE(181),
    [sym__long_and_raw_datatypes] = STATE(181),
    [sym__long_and_raw_datatypes_long_raw] = STATE(181),
    [sym__long_and_raw_datatypes_raw] = STATE(181),
    [sym__datetime_datatypes] = STATE(181),
    [sym__datetime_datatypes_keyword] = STATE(181),
    [sym__datetime_datatypes_date_timestamp] = STATE(181),
    [sym__datetime_datatypes_date_interval_year] = STATE(181),
    [sym__datetime_datatypes_date_interval_day] = STATE(181),
    [sym__large_object_datatypes] = STATE(181),
    [sym__rowid_datatypes] = STATE(181),
    [sym__referenced_datatypes] = STATE(182),
    [sym__referenced_datatypes_type] = STATE(183),
    [sym__referenced_datatypes_rowtype] = STATE(184),
    [sym__logical_datatypes] = STATE(181),
    [sym__subtype_datatypes] = STATE(181),
    [sym__rowid_datatypes_urowid] = STATE(181),
    [sym__ansi_supported_datatypes_character] = STATE(181),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(181),
    [sym__ansi_supported_datatypes_varchar] = STATE(181),
    [sym__ansi_supported_datatypes_national] = STATE(181),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(181),
    [sym__ansi_supported_datatypes_double_precision] = STATE(181),
    [sym__supplied_datatypes_any_types] = STATE(181),
    [sym__supplied_datatypes_xml_types] = STATE(181),
    [sym__supplied_datatypes_spatial_types] = STATE(181),
    [sym__object_datatypes] = STATE(181),
    [sym_identifier] = STATE(104),
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
    [sym__schema] = STATE(282),
    [sym__referenced_element] = STATE(435),
    [sym__referenced_element_parent] = STATE(55),
    [sym__referenced_element_name] = STATE(43),
    [sym_datatype] = STATE(440),
    [sym__character_datatypes] = STATE(181),
    [sym__character_datatypes_char] = STATE(181),
    [sym__character_datatypes_varchar2] = STATE(181),
    [sym__character_datatypes_nchar] = STATE(181),
    [sym__character_datatypes_nvarchar2] = STATE(181),
    [sym__number_datatypes] = STATE(181),
    [sym__number_datatypes_keyword] = STATE(181),
    [sym__number_datatypes_number] = STATE(181),
    [sym__number_datatypes_float] = STATE(181),
    [sym__long_and_raw_datatypes] = STATE(181),
    [sym__long_and_raw_datatypes_long_raw] = STATE(181),
    [sym__long_and_raw_datatypes_raw] = STATE(181),
    [sym__datetime_datatypes] = STATE(181),
    [sym__datetime_datatypes_keyword] = STATE(181),
    [sym__datetime_datatypes_date_timestamp] = STATE(181),
    [sym__datetime_datatypes_date_interval_year] = STATE(181),
    [sym__datetime_datatypes_date_interval_day] = STATE(181),
    [sym__large_object_datatypes] = STATE(181),
    [sym__rowid_datatypes] = STATE(181),
    [sym__referenced_datatypes] = STATE(182),
    [sym__referenced_datatypes_type] = STATE(183),
    [sym__referenced_datatypes_rowtype] = STATE(184),
    [sym__logical_datatypes] = STATE(181),
    [sym__subtype_datatypes] = STATE(181),
    [sym__rowid_datatypes_urowid] = STATE(181),
    [sym__ansi_supported_datatypes_character] = STATE(181),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(181),
    [sym__ansi_supported_datatypes_varchar] = STATE(181),
    [sym__ansi_supported_datatypes_national] = STATE(181),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(181),
    [sym__ansi_supported_datatypes_double_precision] = STATE(181),
    [sym__supplied_datatypes_any_types] = STATE(181),
    [sym__supplied_datatypes_xml_types] = STATE(181),
    [sym__supplied_datatypes_spatial_types] = STATE(181),
    [sym__object_datatypes] = STATE(181),
    [sym_identifier] = STATE(104),
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
    ACTIONS(65), 7,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_COLON,
    ACTIONS(67), 42,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
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
      sym_kw_in,
      sym_kw_like,
      sym_kw_return,
  [186] = 3,
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
    ACTIONS(71), 42,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
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
      sym_kw_in,
      sym_kw_like,
      sym_kw_return,
  [244] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(171), 1,
      sym_expression,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(135), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(87), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(38), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [347] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(221), 1,
      sym_expression,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(135), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(87), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(38), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [450] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(99), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    STATE(500), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(353), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(97), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(39), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [553] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(99), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    STATE(494), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(353), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(97), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(39), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [656] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(187), 1,
      sym_expression,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(135), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(87), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(38), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [759] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(99), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    STATE(475), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(353), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(97), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(39), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [862] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(101), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(235), 1,
      sym_expression,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(239), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(97), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(39), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [965] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(103), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    STATE(499), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(260), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(97), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(39), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1068] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(101), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(220), 1,
      sym_expression,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(239), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(97), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(39), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1171] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(303), 1,
      sym_expression,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(135), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(87), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(38), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1274] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(103), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    STATE(473), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(260), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(97), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(39), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1377] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(103), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    STATE(479), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(260), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(97), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(39), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1480] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(105), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    STATE(446), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(291), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(87), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(38), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1583] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(172), 1,
      sym_expression,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(135), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(87), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(38), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1686] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(103), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    STATE(415), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(260), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(97), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(39), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1789] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(99), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    STATE(493), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(353), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(97), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(39), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1892] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(235), 1,
      sym_expression,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(135), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(87), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(38), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1995] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(220), 1,
      sym_expression,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(135), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(87), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(38), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2098] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(301), 1,
      sym_expression,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(135), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(87), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(38), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2201] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(109), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(235), 1,
      sym_expression,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(327), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(107), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(46), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2304] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(99), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    STATE(501), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(353), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(97), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(39), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2407] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(109), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(220), 1,
      sym_expression,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(327), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(107), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(46), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2510] = 30,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(113), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    STATE(472), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(324), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(111), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(46), 4,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
    STATE(78), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
  [2615] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(99), 1,
      sym_kw_not,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    STATE(469), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(353), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(97), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(39), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2718] = 29,
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
    ACTIONS(91), 1,
      sym_kw_case,
    ACTIONS(95), 1,
      sym_kw_updating,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(177), 1,
      sym_expression,
    STATE(253), 1,
      sym__expression_base_boolean,
    STATE(254), 1,
      sym__expression_base_operator_not_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(135), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(87), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(256), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(38), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2821] = 19,
    ACTIONS(125), 1,
      sym_kw_not,
    ACTIONS(127), 1,
      sym_kw_is,
    ACTIONS(129), 1,
      sym_kw_between,
    ACTIONS(131), 1,
      sym_kw_in,
    ACTIONS(133), 1,
      sym_kw_like,
    STATE(75), 1,
      sym_expression_operator_boolean,
    STATE(77), 1,
      sym_expression_operator_not_boolean,
    STATE(88), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    STATE(207), 1,
      sym__expression_base_boolean_like,
    STATE(209), 1,
      sym__expression_base_boolean_in,
    STATE(212), 1,
      sym__expression_base_boolean_operator,
    STATE(238), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(121), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    STATE(213), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(117), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(119), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [2900] = 19,
    ACTIONS(127), 1,
      sym_kw_is,
    ACTIONS(133), 1,
      sym_kw_like,
    ACTIONS(135), 1,
      sym_kw_not,
    ACTIONS(137), 1,
      sym_kw_between,
    ACTIONS(139), 1,
      sym_kw_in,
    STATE(75), 1,
      sym_expression_operator_boolean,
    STATE(77), 1,
      sym_expression_operator_not_boolean,
    STATE(88), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    STATE(207), 1,
      sym__expression_base_boolean_like,
    STATE(209), 1,
      sym__expression_base_boolean_in,
    STATE(212), 1,
      sym__expression_base_boolean_operator,
    STATE(238), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(121), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    STATE(213), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(119), 6,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(117), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2977] = 25,
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
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(109), 1,
      sym_kw_not,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(246), 1,
      sym__expression_base_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(327), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(143), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(79), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3065] = 25,
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
    ACTIONS(89), 1,
      sym_kw_not,
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(246), 1,
      sym__expression_base_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(135), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(145), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(81), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3153] = 25,
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
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(101), 1,
      sym_kw_not,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(246), 1,
      sym__expression_base_boolean,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(239), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(147), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(80), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3241] = 5,
    ACTIONS(153), 1,
      anon_sym_AT,
    STATE(60), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(149), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(151), 26,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [3287] = 5,
    ACTIONS(153), 1,
      anon_sym_AT,
    STATE(59), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(155), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(157), 26,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [3333] = 4,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(159), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(161), 27,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [3377] = 19,
    ACTIONS(127), 1,
      sym_kw_is,
    ACTIONS(133), 1,
      sym_kw_like,
    ACTIONS(165), 1,
      sym_kw_not,
    ACTIONS(167), 1,
      sym_kw_between,
    ACTIONS(169), 1,
      sym_kw_in,
    STATE(75), 1,
      sym_expression_operator_boolean,
    STATE(77), 1,
      sym_expression_operator_not_boolean,
    STATE(88), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    STATE(207), 1,
      sym__expression_base_boolean_like,
    STATE(209), 1,
      sym__expression_base_boolean_in,
    STATE(212), 1,
      sym__expression_base_boolean_operator,
    STATE(238), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(119), 3,
      anon_sym_RPAREN,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(121), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    STATE(213), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(117), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3451] = 23,
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
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(325), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(143), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(79), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3533] = 5,
    ACTIONS(153), 1,
      anon_sym_AT,
    STATE(62), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(171), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(173), 26,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [3579] = 23,
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
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(277), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(145), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(81), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3661] = 23,
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
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(142), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(145), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(81), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3743] = 23,
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
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(257), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(147), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(80), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3825] = 23,
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
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(240), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(147), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(80), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3907] = 23,
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
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(330), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(143), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(79), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3989] = 23,
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
    ACTIONS(95), 1,
      sym_kw_updating,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(93), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(362), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(147), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(80), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [4071] = 5,
    ACTIONS(153), 1,
      anon_sym_AT,
    STATE(61), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(175), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(177), 26,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4117] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(179), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(181), 27,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4158] = 4,
    ACTIONS(183), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(159), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(161), 25,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4200] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(185), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(187), 26,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4240] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(189), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(191), 26,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4280] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(193), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(195), 26,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4320] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(197), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(199), 26,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4360] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(201), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(203), 26,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4400] = 5,
    ACTIONS(209), 1,
      anon_sym_COLON,
    STATE(70), 1,
      sym_indicator_variable,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(205), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(207), 23,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4443] = 5,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(211), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(213), 23,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4486] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(217), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(219), 24,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4524] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(223), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(221), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4562] = 4,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(229), 23,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4602] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(233), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(231), 24,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4640] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(235), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(237), 23,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4677] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(239), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(241), 23,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4714] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(243), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(245), 23,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4751] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(247), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(249), 23,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4788] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(251), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(253), 23,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4825] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(255), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(257), 23,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4862] = 20,
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
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(259), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(245), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [4933] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(261), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(263), 23,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_not,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [4970] = 20,
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
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host_variable,
    STATE(64), 1,
      sym__referenced_element,
    STATE(282), 1,
      sym__schema,
    STATE(395), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(265), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(102), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [5041] = 5,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(396), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(267), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(269), 16,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [5077] = 14,
    ACTIONS(127), 1,
      sym_kw_is,
    ACTIONS(133), 1,
      sym_kw_like,
    ACTIONS(165), 1,
      sym_kw_not,
    ACTIONS(167), 1,
      sym_kw_between,
    ACTIONS(169), 1,
      sym_kw_in,
    STATE(75), 1,
      sym_expression_operator_boolean,
    STATE(207), 1,
      sym__expression_base_boolean_like,
    STATE(209), 1,
      sym__expression_base_boolean_in,
    STATE(212), 1,
      sym__expression_base_boolean_operator,
    STATE(238), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(213), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(117), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5130] = 14,
    ACTIONS(127), 1,
      sym_kw_is,
    ACTIONS(133), 1,
      sym_kw_like,
    ACTIONS(135), 1,
      sym_kw_not,
    ACTIONS(137), 1,
      sym_kw_between,
    ACTIONS(139), 1,
      sym_kw_in,
    STATE(75), 1,
      sym_expression_operator_boolean,
    STATE(207), 1,
      sym__expression_base_boolean_like,
    STATE(209), 1,
      sym__expression_base_boolean_in,
    STATE(212), 1,
      sym__expression_base_boolean_operator,
    STATE(238), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(213), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(117), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5183] = 14,
    ACTIONS(125), 1,
      sym_kw_not,
    ACTIONS(127), 1,
      sym_kw_is,
    ACTIONS(129), 1,
      sym_kw_between,
    ACTIONS(131), 1,
      sym_kw_in,
    ACTIONS(133), 1,
      sym_kw_like,
    STATE(75), 1,
      sym_expression_operator_boolean,
    STATE(207), 1,
      sym__expression_base_boolean_like,
    STATE(209), 1,
      sym__expression_base_boolean_in,
    STATE(212), 1,
      sym__expression_base_boolean_operator,
    STATE(238), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(213), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(117), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5236] = 14,
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
    STATE(392), 1,
      sym_identifier,
    STATE(421), 1,
      sym_parameter_element,
    STATE(447), 1,
      sym_parameter_value,
    STATE(470), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(436), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(273), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(450), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [5286] = 10,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      sym_kw_debug,
    ACTIONS(281), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(264), 1,
      sym_reuse_settings,
    STATE(458), 1,
      sym_identifier,
    STATE(101), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(277), 3,
      sym_kw_package,
      sym_kw_specification,
      sym_kw_body,
    ACTIONS(275), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [5328] = 14,
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
    STATE(392), 1,
      sym_identifier,
    STATE(394), 1,
      sym_parameter_element,
    STATE(447), 1,
      sym_parameter_value,
    STATE(470), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(436), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(273), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(450), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [5378] = 9,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(265), 1,
      sym_reuse_settings,
    STATE(458), 1,
      sym_identifier,
    STATE(93), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(285), 3,
      sym_kw_package,
      sym_kw_specification,
      sym_kw_body,
    ACTIONS(283), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [5417] = 6,
    STATE(77), 1,
      sym_expression_operator_not_boolean,
    STATE(86), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(287), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(292), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    ACTIONS(290), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [5448] = 11,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(299), 1,
      sym_kw_default,
    ACTIONS(301), 1,
      sym_kw_authid,
    ACTIONS(303), 1,
      sym_kw_accessible,
    STATE(111), 1,
      sym_sharing_clause,
    STATE(290), 1,
      sym__is_as,
    STATE(388), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(297), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(305), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(131), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [5489] = 6,
    STATE(77), 1,
      sym_expression_operator_not_boolean,
    STATE(86), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(115), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(121), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    ACTIONS(307), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [5520] = 11,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(299), 1,
      sym_kw_default,
    ACTIONS(301), 1,
      sym_kw_authid,
    ACTIONS(303), 1,
      sym_kw_accessible,
    STATE(108), 1,
      sym_sharing_clause,
    STATE(271), 1,
      sym__is_as,
    STATE(390), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(297), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(309), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(131), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [5561] = 10,
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
    STATE(423), 1,
      sym_parameter_value,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(273), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(450), 5,
      sym_identifier,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [5599] = 10,
    ACTIONS(299), 1,
      sym_kw_default,
    ACTIONS(301), 1,
      sym_kw_authid,
    ACTIONS(303), 1,
      sym_kw_accessible,
    STATE(114), 1,
      sym_sharing_clause,
    STATE(292), 1,
      sym__is_as,
    STATE(385), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(297), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(311), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(131), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [5637] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(265), 1,
      sym_reuse_settings,
    STATE(458), 1,
      sym_identifier,
    STATE(93), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(283), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [5671] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(269), 1,
      sym_reuse_settings,
    STATE(458), 1,
      sym_identifier,
    STATE(103), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(313), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [5705] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(269), 1,
      sym_reuse_settings,
    STATE(458), 1,
      sym_identifier,
    STATE(96), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(313), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [5739] = 7,
    ACTIONS(9), 1,
      sym_kw_create,
    ACTIONS(11), 1,
      sym_kw_alter,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    STATE(344), 1,
      sym_create_obj,
    ACTIONS(317), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(97), 3,
      sym__element,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
    STATE(343), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [5771] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(262), 1,
      sym_reuse_settings,
    STATE(458), 1,
      sym_identifier,
    STATE(103), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(319), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [5805] = 7,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 1,
      sym_kw_create,
    ACTIONS(329), 1,
      sym_kw_alter,
    STATE(344), 1,
      sym_create_obj,
    ACTIONS(323), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(97), 3,
      sym__element,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
    STATE(343), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [5837] = 12,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(211), 1,
      sym__unit_kind,
    STATE(282), 1,
      sym__schema,
    STATE(426), 1,
      sym__referenced_element,
    STATE(432), 1,
      sym_accessor,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(332), 5,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [5879] = 12,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(211), 1,
      sym__unit_kind,
    STATE(282), 1,
      sym__schema,
    STATE(418), 1,
      sym_accessor,
    STATE(426), 1,
      sym__referenced_element,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(332), 5,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [5921] = 10,
    ACTIONS(299), 1,
      sym_kw_default,
    ACTIONS(301), 1,
      sym_kw_authid,
    ACTIONS(303), 1,
      sym_kw_accessible,
    STATE(110), 1,
      sym_sharing_clause,
    STATE(285), 1,
      sym__is_as,
    STATE(413), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(297), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(334), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(131), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [5959] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      sym_kw_reuse,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(265), 1,
      sym_reuse_settings,
    STATE(458), 1,
      sym_identifier,
    STATE(103), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(283), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [5993] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(336), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(338), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [6016] = 6,
    ACTIONS(342), 1,
      sym__unquoted_identifier,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(458), 1,
      sym_identifier,
    STATE(103), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(340), 10,
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
  [6045] = 4,
    ACTIONS(183), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(161), 3,
      anon_sym_AT,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
    ACTIONS(348), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [6069] = 5,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      sym_kw_with,
    STATE(145), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(350), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [6094] = 5,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_kw_varying,
    STATE(158), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(356), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [6119] = 9,
    ACTIONS(299), 1,
      sym_kw_default,
    ACTIONS(301), 1,
      sym_kw_authid,
    ACTIONS(303), 1,
      sym_kw_accessible,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_parameter_declaration,
    STATE(461), 1,
      sym_procedure_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(197), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [6152] = 8,
    ACTIONS(299), 1,
      sym_kw_default,
    ACTIONS(301), 1,
      sym_kw_authid,
    ACTIONS(303), 1,
      sym_kw_accessible,
    STATE(284), 1,
      sym__is_as,
    STATE(416), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(366), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(131), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [6183] = 5,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_kw_varying,
    STATE(199), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(368), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [6208] = 8,
    ACTIONS(299), 1,
      sym_kw_default,
    ACTIONS(301), 1,
      sym_kw_authid,
    ACTIONS(303), 1,
      sym_kw_accessible,
    STATE(280), 1,
      sym__is_as,
    STATE(403), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(370), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(131), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [6239] = 8,
    ACTIONS(299), 1,
      sym_kw_default,
    ACTIONS(301), 1,
      sym_kw_authid,
    ACTIONS(303), 1,
      sym_kw_accessible,
    STATE(294), 1,
      sym__is_as,
    STATE(383), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(372), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(131), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [6270] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(376), 3,
      anon_sym_DASH,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(374), 9,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [6291] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(380), 3,
      anon_sym_DASH,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(378), 9,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [6312] = 8,
    ACTIONS(299), 1,
      sym_kw_default,
    ACTIONS(301), 1,
      sym_kw_authid,
    ACTIONS(303), 1,
      sym_kw_accessible,
    STATE(289), 1,
      sym__is_as,
    STATE(407), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(382), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(131), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [6343] = 5,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(147), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(384), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6367] = 5,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(144), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(390), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6391] = 4,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(392), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [6413] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(394), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_with,
      sym_kw_to,
  [6431] = 4,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(396), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [6453] = 4,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(398), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [6475] = 4,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    STATE(198), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(400), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [6497] = 4,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(404), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [6519] = 4,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(201), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(406), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [6541] = 5,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(143), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(408), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6565] = 4,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(410), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [6587] = 4,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(412), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [6609] = 5,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(140), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(414), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6633] = 11,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      sym_kw_when,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(282), 1,
      sym__schema,
    STATE(342), 1,
      aux_sym_expression_base_case_search_repeat1,
    STATE(424), 1,
      sym__referenced_element,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [6668] = 4,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(139), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(418), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6689] = 4,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(132), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(420), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6710] = 6,
    ACTIONS(299), 1,
      sym_kw_default,
    ACTIONS(301), 1,
      sym_kw_authid,
    ACTIONS(303), 1,
      sym_kw_accessible,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(422), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(136), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [6735] = 4,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(134), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(424), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6756] = 7,
    ACTIONS(299), 1,
      sym_kw_default,
    ACTIONS(301), 1,
      sym_kw_authid,
    ACTIONS(303), 1,
      sym_kw_accessible,
    ACTIONS(426), 1,
      anon_sym_SEMI,
    STATE(482), 1,
      sym_procedure_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(197), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [6783] = 4,
    ACTIONS(430), 1,
      sym_kw_compile,
    ACTIONS(433), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(134), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(428), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6804] = 4,
    STATE(149), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(436), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [6825] = 6,
    ACTIONS(438), 1,
      sym_kw_default,
    ACTIONS(441), 1,
      sym_kw_authid,
    ACTIONS(444), 1,
      sym_kw_accessible,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(447), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(136), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [6850] = 2,
    ACTIONS(235), 1,
      sym__unquoted_identifier,
    ACTIONS(237), 11,
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
  [6867] = 6,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(449), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(434), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [6892] = 4,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(134), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(451), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6913] = 4,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(134), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(453), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [6934] = 6,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(455), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(443), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [6959] = 4,
    STATE(152), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(457), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [6980] = 4,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(134), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(459), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7001] = 4,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(134), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(461), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7022] = 3,
    ACTIONS(465), 1,
      sym_kw_with,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(463), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7041] = 4,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(153), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(467), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7062] = 4,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(134), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(469), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7083] = 4,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(155), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(471), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7104] = 4,
    STATE(150), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(473), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [7125] = 5,
    STATE(150), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(477), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(475), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
  [7148] = 3,
    ACTIONS(482), 1,
      sym_kw_raw,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(480), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7167] = 4,
    STATE(150), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(484), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [7188] = 4,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(134), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(486), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7209] = 2,
    ACTIONS(490), 1,
      sym__unquoted_identifier,
    ACTIONS(488), 11,
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
  [7226] = 4,
    ACTIONS(386), 1,
      sym_kw_compile,
    ACTIONS(388), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(134), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(492), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [7247] = 6,
    ACTIONS(494), 1,
      sym__single_quote_string,
    ACTIONS(496), 1,
      sym__number,
    ACTIONS(498), 1,
      sym__float,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(500), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(154), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [7272] = 2,
    ACTIONS(261), 1,
      sym__unquoted_identifier,
    ACTIONS(263), 11,
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
  [7289] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(502), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7305] = 5,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(510), 6,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [7327] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(512), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7343] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(514), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7359] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(516), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7375] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(518), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7391] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(520), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7407] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(522), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7423] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(524), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7439] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(526), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7455] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(528), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7471] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(530), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7487] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(532), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7503] = 5,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(538), 6,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [7525] = 5,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(510), 6,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [7547] = 5,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(510), 6,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [7569] = 5,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(544), 6,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [7591] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(546), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7607] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(548), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7623] = 5,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(538), 6,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [7645] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(556), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7661] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(558), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7677] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(560), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7693] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(562), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7709] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(564), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7725] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(566), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7741] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(566), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7757] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(568), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7773] = 3,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(572), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [7791] = 5,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(510), 6,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [7813] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(574), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7829] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(576), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7845] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(412), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7861] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(578), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7877] = 6,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    ACTIONS(582), 1,
      sym_kw_default,
    ACTIONS(585), 1,
      sym_kw_authid,
    ACTIONS(588), 1,
      sym_kw_accessible,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(192), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [7901] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(591), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7917] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(593), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7933] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(595), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7949] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(597), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [7965] = 6,
    ACTIONS(299), 1,
      sym_kw_default,
    ACTIONS(301), 1,
      sym_kw_authid,
    ACTIONS(303), 1,
      sym_kw_accessible,
    ACTIONS(599), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(192), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [7989] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(601), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [8005] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(603), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [8021] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(605), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [8037] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(607), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [8053] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(609), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [8069] = 4,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(614), 7,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8089] = 5,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(544), 6,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8111] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(622), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8126] = 5,
    ACTIONS(624), 1,
      anon_sym_SEMI,
    STATE(490), 1,
      sym_function_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(266), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(626), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [8147] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(628), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8162] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(510), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8177] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(628), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8192] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(630), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8207] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(43), 1,
      sym__referenced_element_name,
    STATE(55), 1,
      sym__referenced_element_parent,
    STATE(57), 1,
      sym_identifier,
    STATE(282), 1,
      sym__schema,
    STATE(448), 1,
      sym__referenced_element,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [8236] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(634), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8251] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(628), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8266] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(323), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8289] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(544), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8304] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(322), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8327] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(572), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8342] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(321), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8365] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(642), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8380] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(644), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8395] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(614), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8410] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(334), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8433] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(313), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8456] = 5,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(252), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(646), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(473), 4,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
  [8477] = 5,
    ACTIONS(648), 1,
      anon_sym_SEMI,
    STATE(481), 1,
      sym_function_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(266), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(626), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [8498] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(650), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8513] = 1,
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
  [8526] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(652), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8541] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(654), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8556] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(302), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8579] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(656), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8594] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(304), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8617] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(307), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8640] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(658), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8655] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(660), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8670] = 5,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(252), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(646), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(484), 4,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
  [8691] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(662), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8706] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(628), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8721] = 4,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(258), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(436), 6,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8740] = 5,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(236), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(646), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(457), 4,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
  [8761] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(309), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8784] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(664), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8799] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(666), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8814] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(668), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8829] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(670), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8844] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(672), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [8859] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(329), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8882] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(333), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8905] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(315), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8928] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(328), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8951] = 6,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(640), 1,
      sym_kw_end,
    STATE(314), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [8974] = 5,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(252), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(674), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(475), 4,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
  [8995] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(119), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [9010] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(119), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [9025] = 1,
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
  [9038] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(677), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [9053] = 4,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(259), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(457), 6,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [9072] = 4,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(252), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(473), 6,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [9091] = 4,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(252), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(484), 6,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [9110] = 5,
    STATE(224), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(646), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(436), 4,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
  [9131] = 1,
    ACTIONS(679), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9143] = 1,
    ACTIONS(681), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9155] = 4,
    ACTIONS(683), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(263), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(685), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [9173] = 1,
    ACTIONS(283), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9185] = 1,
    ACTIONS(313), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9197] = 4,
    ACTIONS(688), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(263), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(690), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [9215] = 5,
    ACTIONS(692), 1,
      sym_kw_function,
    ACTIONS(695), 1,
      sym_kw_procedure,
    ACTIONS(698), 1,
      sym_kw_end,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(267), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9235] = 1,
    ACTIONS(700), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9247] = 1,
    ACTIONS(319), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9259] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(231), 2,
      sym_identifier,
      sym_literal_string,
  [9280] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(218), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9297] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym__single_quote_string,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(244), 2,
      sym_identifier,
      sym_literal_string,
  [9318] = 5,
    STATE(150), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(473), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(702), 2,
      sym_kw_or,
      sym_kw_and,
  [9337] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(251), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9354] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(704), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [9367] = 5,
    STATE(150), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(484), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(702), 2,
      sym_kw_or,
      sym_kw_and,
  [9386] = 5,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(276), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(457), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(702), 2,
      sym_kw_or,
      sym_kw_and,
  [9405] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(706), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [9418] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(230), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9435] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(232), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9452] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(233), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9469] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(44), 1,
      sym__referenced_element_parent,
    STATE(45), 1,
      sym_identifier,
    STATE(48), 1,
      sym__referenced_element_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [9492] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(248), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9509] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(250), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9526] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(247), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9543] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(222), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9560] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(708), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [9573] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(216), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9590] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(214), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9607] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(241), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9624] = 5,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(273), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(702), 2,
      sym_kw_or,
      sym_kw_and,
  [9643] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(223), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9660] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(710), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [9673] = 4,
    ACTIONS(636), 1,
      sym_kw_function,
    ACTIONS(638), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(249), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [9690] = 5,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(306), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(712), 2,
      sym_kw_or,
      sym_kw_and,
  [9708] = 6,
    ACTIONS(714), 1,
      sym__unquoted_identifier,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_identifier,
    STATE(10), 1,
      sym__quoted_identifier,
    STATE(386), 1,
      sym_parameter_declaration_element,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [9728] = 5,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(306), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(712), 2,
      sym_kw_or,
      sym_kw_and,
  [9746] = 4,
    STATE(441), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(718), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(720), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
  [9762] = 5,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(544), 2,
      sym_kw_or,
      sym_kw_and,
  [9780] = 5,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(510), 2,
      sym_kw_or,
      sym_kw_and,
  [9798] = 5,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(510), 2,
      sym_kw_or,
      sym_kw_and,
  [9816] = 2,
    ACTIONS(724), 1,
      anon_sym_SLASH,
    ACTIONS(722), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9828] = 5,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(538), 2,
      sym_kw_or,
      sym_kw_and,
  [9846] = 2,
    ACTIONS(728), 1,
      anon_sym_SLASH,
    ACTIONS(726), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9858] = 6,
    ACTIONS(730), 1,
      sym__unquoted_identifier,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym_identifier,
    STATE(255), 1,
      sym__quoted_identifier,
    STATE(354), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [9878] = 5,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(306), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(734), 2,
      sym_kw_or,
      sym_kw_and,
  [9896] = 2,
    ACTIONS(737), 1,
      anon_sym_SLASH,
    ACTIONS(726), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9908] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    ACTIONS(739), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(478), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [9928] = 2,
    ACTIONS(743), 1,
      anon_sym_SLASH,
    ACTIONS(741), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9940] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(745), 5,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [9952] = 4,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(306), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(473), 3,
      anon_sym_RPAREN,
      sym_kw_or,
      sym_kw_and,
  [9968] = 4,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(306), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(484), 3,
      anon_sym_RPAREN,
      sym_kw_or,
      sym_kw_and,
  [9984] = 2,
    ACTIONS(749), 1,
      anon_sym_SLASH,
    ACTIONS(747), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9996] = 2,
    ACTIONS(753), 1,
      anon_sym_SLASH,
    ACTIONS(751), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10008] = 2,
    ACTIONS(757), 1,
      anon_sym_SLASH,
    ACTIONS(755), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10020] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(759), 5,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_return,
  [10032] = 2,
    ACTIONS(763), 1,
      anon_sym_SLASH,
    ACTIONS(761), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10044] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(89), 1,
      sym_identifier,
    STATE(379), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10064] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(87), 1,
      sym_identifier,
    STATE(366), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10084] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(765), 5,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_return,
  [10096] = 2,
    ACTIONS(769), 1,
      anon_sym_SLASH,
    ACTIONS(767), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10108] = 2,
    ACTIONS(773), 1,
      anon_sym_SLASH,
    ACTIONS(771), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10120] = 2,
    ACTIONS(775), 1,
      anon_sym_SLASH,
    ACTIONS(771), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10132] = 5,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(297), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(712), 2,
      sym_kw_or,
      sym_kw_and,
  [10150] = 5,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(295), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(712), 2,
      sym_kw_or,
      sym_kw_and,
  [10168] = 6,
    ACTIONS(714), 1,
      sym__unquoted_identifier,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_identifier,
    STATE(10), 1,
      sym__quoted_identifier,
    STATE(445), 1,
      sym_parameter_declaration_element,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10188] = 4,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(311), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(436), 3,
      anon_sym_RPAREN,
      sym_kw_or,
      sym_kw_and,
  [10204] = 2,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(777), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10216] = 2,
    ACTIONS(783), 1,
      anon_sym_SLASH,
    ACTIONS(781), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10228] = 4,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(312), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(457), 3,
      anon_sym_RPAREN,
      sym_kw_or,
      sym_kw_and,
  [10244] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(785), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [10256] = 6,
    ACTIONS(730), 1,
      sym__unquoted_identifier,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      sym_identifier,
    STATE(255), 1,
      sym__quoted_identifier,
    STATE(361), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10276] = 2,
    ACTIONS(789), 1,
      anon_sym_SLASH,
    ACTIONS(787), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10288] = 2,
    ACTIONS(793), 1,
      anon_sym_SLASH,
    ACTIONS(791), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10300] = 6,
    ACTIONS(730), 1,
      sym__unquoted_identifier,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_identifier,
    STATE(255), 1,
      sym__quoted_identifier,
    STATE(340), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10320] = 4,
    STATE(437), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(720), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
    ACTIONS(795), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10336] = 2,
    ACTIONS(799), 1,
      anon_sym_SLASH,
    ACTIONS(797), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10348] = 6,
    ACTIONS(730), 1,
      sym__unquoted_identifier,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      sym_identifier,
    STATE(255), 1,
      sym__quoted_identifier,
    STATE(359), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10368] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(345), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10385] = 5,
    ACTIONS(730), 1,
      sym__unquoted_identifier,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      sym_identifier,
    STATE(255), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10402] = 5,
    ACTIONS(801), 1,
      sym_kw_package,
    ACTIONS(803), 1,
      sym_kw_function,
    ACTIONS(805), 1,
      sym_kw_procedure,
    ACTIONS(807), 1,
      sym_kw_library,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10419] = 5,
    ACTIONS(416), 1,
      sym_kw_when,
    ACTIONS(809), 1,
      sym_kw_else,
    ACTIONS(811), 1,
      sym_kw_end,
    STATE(370), 1,
      aux_sym_expression_base_case_search_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10436] = 2,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    ACTIONS(813), 5,
      ts_builtin_sym_end,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10447] = 4,
    ACTIONS(817), 1,
      sym_kw_package,
    STATE(487), 1,
      sym_editionable_noneditionable,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(819), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [10462] = 5,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(821), 1,
      sym_kw_return,
    STATE(225), 1,
      sym_return_declaration,
    STATE(433), 1,
      sym_parameter_declaration,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10479] = 3,
    ACTIONS(825), 1,
      sym_kw_or,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(823), 3,
      sym_kw_package,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [10492] = 1,
    ACTIONS(751), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10501] = 1,
    ACTIONS(827), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10510] = 1,
    ACTIONS(755), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10519] = 1,
    ACTIONS(726), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10528] = 1,
    ACTIONS(829), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10537] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(56), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10554] = 5,
    ACTIONS(436), 1,
      sym_kw_and,
    ACTIONS(646), 1,
      sym_kw_or,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(363), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10571] = 5,
    ACTIONS(730), 1,
      sym__unquoted_identifier,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_identifier,
    STATE(255), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10588] = 1,
    ACTIONS(787), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10597] = 1,
    ACTIONS(787), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10606] = 1,
    ACTIONS(777), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10615] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(72), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10632] = 5,
    ACTIONS(730), 1,
      sym__unquoted_identifier,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(148), 1,
      sym_identifier,
    STATE(255), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10649] = 5,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(831), 1,
      sym_kw_char,
    ACTIONS(833), 1,
      sym_kw_character,
    STATE(202), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10666] = 5,
    ACTIONS(730), 1,
      sym__unquoted_identifier,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      sym_identifier,
    STATE(255), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10683] = 5,
    ACTIONS(457), 1,
      sym_kw_and,
    ACTIONS(646), 1,
      sym_kw_or,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(364), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10700] = 5,
    ACTIONS(473), 1,
      sym_kw_and,
    ACTIONS(646), 1,
      sym_kw_or,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(252), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10717] = 5,
    ACTIONS(484), 1,
      sym_kw_and,
    ACTIONS(646), 1,
      sym_kw_or,
    STATE(228), 1,
      sym__expression_base_boolean_repeat,
    STATE(252), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10734] = 1,
    ACTIONS(722), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10743] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(91), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10760] = 1,
    ACTIONS(751), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10769] = 5,
    ACTIONS(416), 1,
      sym_kw_when,
    ACTIONS(835), 1,
      sym_kw_else,
    ACTIONS(837), 1,
      sym_kw_end,
    STATE(370), 1,
      aux_sym_expression_base_case_search_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10786] = 1,
    ACTIONS(839), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10795] = 4,
    ACTIONS(841), 1,
      sym_kw_when,
    STATE(370), 1,
      aux_sym_expression_base_case_search_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(844), 2,
      sym_kw_else,
      sym_kw_end,
  [10810] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(474), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10827] = 1,
    ACTIONS(771), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10836] = 4,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    STATE(486), 1,
      sym_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(848), 2,
      sym_kw_byte,
      sym_kw_char,
  [10851] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(65), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10868] = 1,
    ACTIONS(850), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10877] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(58), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10894] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(56), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10911] = 1,
    ACTIONS(791), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10920] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(100), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10937] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(632), 1,
      sym__unquoted_identifier,
    STATE(12), 1,
      sym__quoted_identifier,
    STATE(107), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10954] = 4,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(852), 1,
      sym_kw_varying,
    STATE(162), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10968] = 4,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10982] = 3,
    STATE(286), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(859), 2,
      sym_kw_is,
      sym_kw_as,
  [10994] = 4,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(861), 1,
      sym_kw_varying,
    STATE(180), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11008] = 3,
    STATE(288), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(863), 2,
      sym_kw_is,
      sym_kw_as,
  [11020] = 4,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11034] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(869), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [11044] = 3,
    STATE(294), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(372), 2,
      sym_kw_is,
      sym_kw_as,
  [11056] = 4,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11070] = 3,
    STATE(284), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(366), 2,
      sym_kw_is,
      sym_kw_as,
  [11082] = 4,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11096] = 3,
    ACTIONS(882), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(880), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11108] = 4,
    ACTIONS(884), 1,
      sym_kw_between,
    ACTIONS(886), 1,
      sym_kw_in,
    ACTIONS(888), 1,
      sym_kw_like,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11122] = 4,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11136] = 4,
    ACTIONS(83), 1,
      sym__number,
    ACTIONS(85), 1,
      sym__float,
    STATE(74), 1,
      sym_literal_number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11150] = 4,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11164] = 4,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11178] = 4,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_kw_to,
    STATE(497), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11192] = 4,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(903), 1,
      sym_kw_to,
    STATE(495), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11206] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(905), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [11216] = 4,
    ACTIONS(888), 1,
      sym_kw_like,
    ACTIONS(907), 1,
      sym_kw_between,
    ACTIONS(909), 1,
      sym_kw_in,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11230] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(911), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [11240] = 3,
    STATE(274), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(913), 2,
      sym_kw_is,
      sym_kw_as,
  [11252] = 4,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11266] = 4,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11280] = 4,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11294] = 3,
    STATE(283), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(924), 2,
      sym_kw_is,
      sym_kw_as,
  [11306] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(926), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [11316] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(928), 3,
      sym_kw_package,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11326] = 4,
    ACTIONS(888), 1,
      sym_kw_like,
    ACTIONS(930), 1,
      sym_kw_between,
    ACTIONS(932), 1,
      sym_kw_in,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11340] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(934), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [11350] = 1,
    ACTIONS(936), 5,
      ts_builtin_sym_end,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [11358] = 3,
    STATE(281), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(938), 2,
      sym_kw_is,
      sym_kw_as,
  [11370] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(940), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [11380] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(942), 3,
      sym_kw_when,
      sym_kw_else,
      sym_kw_end,
  [11390] = 3,
    STATE(279), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(944), 2,
      sym_kw_is,
      sym_kw_as,
  [11402] = 3,
    ACTIONS(946), 1,
      sym_kw_anydata,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(948), 2,
      sym_kw_anytype,
      sym_kw_anydataset,
  [11414] = 4,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11428] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(952), 2,
      sym_kw_current_user,
      sym_kw_definer,
  [11437] = 3,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11448] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(874), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11457] = 3,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(163), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11468] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(954), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11477] = 3,
    ACTIONS(416), 1,
      sym_kw_when,
    STATE(368), 1,
      aux_sym_expression_base_case_search_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11488] = 3,
    ACTIONS(956), 1,
      sym_kw_local,
    ACTIONS(958), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11499] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(960), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11508] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(962), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11517] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(964), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11526] = 3,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11537] = 3,
    ACTIONS(966), 1,
      sym_kw_null,
    ACTIONS(968), 1,
      sym_kw_not,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11548] = 3,
    ACTIONS(970), 1,
      sym__number,
    STATE(484), 1,
      sym__scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11559] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(918), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11568] = 3,
    ACTIONS(821), 1,
      sym_kw_return,
    STATE(206), 1,
      sym_return_declaration,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11579] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(396), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11590] = 3,
    ACTIONS(972), 1,
      sym_kw_datatype_type,
    ACTIONS(974), 1,
      sym_kw_datatype_rowtype,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11601] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(976), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11610] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(718), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11619] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(978), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11628] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(980), 2,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [11637] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(982), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11646] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(984), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11655] = 3,
    ACTIONS(986), 1,
      sym_kw_local,
    ACTIONS(988), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11666] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(899), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11675] = 3,
    ACTIONS(990), 1,
      sym__number,
    STATE(449), 1,
      sym__precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11686] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(857), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11695] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(992), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11704] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(994), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11713] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(996), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11722] = 3,
    ACTIONS(998), 1,
      anon_sym_COMMA,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11733] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(880), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11742] = 3,
    ACTIONS(1002), 1,
      sym_kw_year,
    ACTIONS(1004), 1,
      sym_kw_day,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11753] = 3,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11764] = 2,
    ACTIONS(1006), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1008), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11772] = 2,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11780] = 2,
    ACTIONS(1012), 1,
      sym_kw_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11788] = 2,
    ACTIONS(1014), 1,
      sym_kw_using_nls_comp,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11796] = 2,
    ACTIONS(1016), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11804] = 2,
    ACTIONS(1018), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11812] = 2,
    ACTIONS(1020), 1,
      sym_kw_settings,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11820] = 2,
    ACTIONS(1022), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11828] = 2,
    ACTIONS(426), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11836] = 2,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11844] = 2,
    ACTIONS(1026), 1,
      sym_kw_precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11852] = 2,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11860] = 2,
    ACTIONS(1030), 1,
      sym_kw_by,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11868] = 2,
    ACTIONS(1032), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11876] = 2,
    ACTIONS(1034), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11884] = 2,
    ACTIONS(1036), 1,
      sym_kw_collation,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11892] = 2,
    ACTIONS(1038), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11900] = 2,
    ACTIONS(1040), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11908] = 2,
    ACTIONS(958), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11916] = 2,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11924] = 2,
    ACTIONS(1044), 1,
      sym_kw_end,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11932] = 2,
    ACTIONS(1046), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11940] = 2,
    ACTIONS(1048), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11948] = 2,
    ACTIONS(1050), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11956] = 2,
    ACTIONS(1052), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1008), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11964] = 2,
    ACTIONS(1054), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11972] = 2,
    ACTIONS(1056), 1,
      sym_kw_then,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11980] = 2,
    ACTIONS(1058), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11988] = 2,
    ACTIONS(624), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11996] = 2,
    ACTIONS(1060), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12004] = 2,
    ACTIONS(1062), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12012] = 2,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12020] = 2,
    ACTIONS(1066), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1008), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12028] = 2,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12036] = 2,
    ACTIONS(1070), 1,
      sym_kw_package,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12044] = 2,
    ACTIONS(679), 1,
      sym_kw_package,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12052] = 2,
    ACTIONS(1072), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12060] = 2,
    ACTIONS(1074), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12068] = 2,
    ACTIONS(1076), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12076] = 2,
    ACTIONS(1078), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12084] = 2,
    ACTIONS(1080), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12092] = 2,
    ACTIONS(1082), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12100] = 2,
    ACTIONS(1084), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12108] = 2,
    ACTIONS(1086), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12116] = 2,
    ACTIONS(1088), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12124] = 2,
    ACTIONS(1090), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12132] = 2,
    ACTIONS(1092), 1,
      sym_kw_end,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12140] = 2,
    ACTIONS(1094), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12148] = 2,
    ACTIONS(1096), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12156] = 2,
    ACTIONS(1098), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12164] = 2,
    ACTIONS(1100), 1,
      sym_kw_replace,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12172] = 2,
    ACTIONS(1102), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12180] = 2,
    ACTIONS(1104), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12188] = 2,
    ACTIONS(1106), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12196] = 2,
    ACTIONS(1108), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 64,
  [SMALL_STATE(11)] = 128,
  [SMALL_STATE(12)] = 186,
  [SMALL_STATE(13)] = 244,
  [SMALL_STATE(14)] = 347,
  [SMALL_STATE(15)] = 450,
  [SMALL_STATE(16)] = 553,
  [SMALL_STATE(17)] = 656,
  [SMALL_STATE(18)] = 759,
  [SMALL_STATE(19)] = 862,
  [SMALL_STATE(20)] = 965,
  [SMALL_STATE(21)] = 1068,
  [SMALL_STATE(22)] = 1171,
  [SMALL_STATE(23)] = 1274,
  [SMALL_STATE(24)] = 1377,
  [SMALL_STATE(25)] = 1480,
  [SMALL_STATE(26)] = 1583,
  [SMALL_STATE(27)] = 1686,
  [SMALL_STATE(28)] = 1789,
  [SMALL_STATE(29)] = 1892,
  [SMALL_STATE(30)] = 1995,
  [SMALL_STATE(31)] = 2098,
  [SMALL_STATE(32)] = 2201,
  [SMALL_STATE(33)] = 2304,
  [SMALL_STATE(34)] = 2407,
  [SMALL_STATE(35)] = 2510,
  [SMALL_STATE(36)] = 2615,
  [SMALL_STATE(37)] = 2718,
  [SMALL_STATE(38)] = 2821,
  [SMALL_STATE(39)] = 2900,
  [SMALL_STATE(40)] = 2977,
  [SMALL_STATE(41)] = 3065,
  [SMALL_STATE(42)] = 3153,
  [SMALL_STATE(43)] = 3241,
  [SMALL_STATE(44)] = 3287,
  [SMALL_STATE(45)] = 3333,
  [SMALL_STATE(46)] = 3377,
  [SMALL_STATE(47)] = 3451,
  [SMALL_STATE(48)] = 3533,
  [SMALL_STATE(49)] = 3579,
  [SMALL_STATE(50)] = 3661,
  [SMALL_STATE(51)] = 3743,
  [SMALL_STATE(52)] = 3825,
  [SMALL_STATE(53)] = 3907,
  [SMALL_STATE(54)] = 3989,
  [SMALL_STATE(55)] = 4071,
  [SMALL_STATE(56)] = 4117,
  [SMALL_STATE(57)] = 4158,
  [SMALL_STATE(58)] = 4200,
  [SMALL_STATE(59)] = 4240,
  [SMALL_STATE(60)] = 4280,
  [SMALL_STATE(61)] = 4320,
  [SMALL_STATE(62)] = 4360,
  [SMALL_STATE(63)] = 4400,
  [SMALL_STATE(64)] = 4443,
  [SMALL_STATE(65)] = 4486,
  [SMALL_STATE(66)] = 4524,
  [SMALL_STATE(67)] = 4562,
  [SMALL_STATE(68)] = 4602,
  [SMALL_STATE(69)] = 4640,
  [SMALL_STATE(70)] = 4677,
  [SMALL_STATE(71)] = 4714,
  [SMALL_STATE(72)] = 4751,
  [SMALL_STATE(73)] = 4788,
  [SMALL_STATE(74)] = 4825,
  [SMALL_STATE(75)] = 4862,
  [SMALL_STATE(76)] = 4933,
  [SMALL_STATE(77)] = 4970,
  [SMALL_STATE(78)] = 5041,
  [SMALL_STATE(79)] = 5077,
  [SMALL_STATE(80)] = 5130,
  [SMALL_STATE(81)] = 5183,
  [SMALL_STATE(82)] = 5236,
  [SMALL_STATE(83)] = 5286,
  [SMALL_STATE(84)] = 5328,
  [SMALL_STATE(85)] = 5378,
  [SMALL_STATE(86)] = 5417,
  [SMALL_STATE(87)] = 5448,
  [SMALL_STATE(88)] = 5489,
  [SMALL_STATE(89)] = 5520,
  [SMALL_STATE(90)] = 5561,
  [SMALL_STATE(91)] = 5599,
  [SMALL_STATE(92)] = 5637,
  [SMALL_STATE(93)] = 5671,
  [SMALL_STATE(94)] = 5705,
  [SMALL_STATE(95)] = 5739,
  [SMALL_STATE(96)] = 5771,
  [SMALL_STATE(97)] = 5805,
  [SMALL_STATE(98)] = 5837,
  [SMALL_STATE(99)] = 5879,
  [SMALL_STATE(100)] = 5921,
  [SMALL_STATE(101)] = 5959,
  [SMALL_STATE(102)] = 5993,
  [SMALL_STATE(103)] = 6016,
  [SMALL_STATE(104)] = 6045,
  [SMALL_STATE(105)] = 6069,
  [SMALL_STATE(106)] = 6094,
  [SMALL_STATE(107)] = 6119,
  [SMALL_STATE(108)] = 6152,
  [SMALL_STATE(109)] = 6183,
  [SMALL_STATE(110)] = 6208,
  [SMALL_STATE(111)] = 6239,
  [SMALL_STATE(112)] = 6270,
  [SMALL_STATE(113)] = 6291,
  [SMALL_STATE(114)] = 6312,
  [SMALL_STATE(115)] = 6343,
  [SMALL_STATE(116)] = 6367,
  [SMALL_STATE(117)] = 6391,
  [SMALL_STATE(118)] = 6413,
  [SMALL_STATE(119)] = 6431,
  [SMALL_STATE(120)] = 6453,
  [SMALL_STATE(121)] = 6475,
  [SMALL_STATE(122)] = 6497,
  [SMALL_STATE(123)] = 6519,
  [SMALL_STATE(124)] = 6541,
  [SMALL_STATE(125)] = 6565,
  [SMALL_STATE(126)] = 6587,
  [SMALL_STATE(127)] = 6609,
  [SMALL_STATE(128)] = 6633,
  [SMALL_STATE(129)] = 6668,
  [SMALL_STATE(130)] = 6689,
  [SMALL_STATE(131)] = 6710,
  [SMALL_STATE(132)] = 6735,
  [SMALL_STATE(133)] = 6756,
  [SMALL_STATE(134)] = 6783,
  [SMALL_STATE(135)] = 6804,
  [SMALL_STATE(136)] = 6825,
  [SMALL_STATE(137)] = 6850,
  [SMALL_STATE(138)] = 6867,
  [SMALL_STATE(139)] = 6892,
  [SMALL_STATE(140)] = 6913,
  [SMALL_STATE(141)] = 6934,
  [SMALL_STATE(142)] = 6959,
  [SMALL_STATE(143)] = 6980,
  [SMALL_STATE(144)] = 7001,
  [SMALL_STATE(145)] = 7022,
  [SMALL_STATE(146)] = 7041,
  [SMALL_STATE(147)] = 7062,
  [SMALL_STATE(148)] = 7083,
  [SMALL_STATE(149)] = 7104,
  [SMALL_STATE(150)] = 7125,
  [SMALL_STATE(151)] = 7148,
  [SMALL_STATE(152)] = 7167,
  [SMALL_STATE(153)] = 7188,
  [SMALL_STATE(154)] = 7209,
  [SMALL_STATE(155)] = 7226,
  [SMALL_STATE(156)] = 7247,
  [SMALL_STATE(157)] = 7272,
  [SMALL_STATE(158)] = 7289,
  [SMALL_STATE(159)] = 7305,
  [SMALL_STATE(160)] = 7327,
  [SMALL_STATE(161)] = 7343,
  [SMALL_STATE(162)] = 7359,
  [SMALL_STATE(163)] = 7375,
  [SMALL_STATE(164)] = 7391,
  [SMALL_STATE(165)] = 7407,
  [SMALL_STATE(166)] = 7423,
  [SMALL_STATE(167)] = 7439,
  [SMALL_STATE(168)] = 7455,
  [SMALL_STATE(169)] = 7471,
  [SMALL_STATE(170)] = 7487,
  [SMALL_STATE(171)] = 7503,
  [SMALL_STATE(172)] = 7525,
  [SMALL_STATE(173)] = 7547,
  [SMALL_STATE(174)] = 7569,
  [SMALL_STATE(175)] = 7591,
  [SMALL_STATE(176)] = 7607,
  [SMALL_STATE(177)] = 7623,
  [SMALL_STATE(178)] = 7645,
  [SMALL_STATE(179)] = 7661,
  [SMALL_STATE(180)] = 7677,
  [SMALL_STATE(181)] = 7693,
  [SMALL_STATE(182)] = 7709,
  [SMALL_STATE(183)] = 7725,
  [SMALL_STATE(184)] = 7741,
  [SMALL_STATE(185)] = 7757,
  [SMALL_STATE(186)] = 7773,
  [SMALL_STATE(187)] = 7791,
  [SMALL_STATE(188)] = 7813,
  [SMALL_STATE(189)] = 7829,
  [SMALL_STATE(190)] = 7845,
  [SMALL_STATE(191)] = 7861,
  [SMALL_STATE(192)] = 7877,
  [SMALL_STATE(193)] = 7901,
  [SMALL_STATE(194)] = 7917,
  [SMALL_STATE(195)] = 7933,
  [SMALL_STATE(196)] = 7949,
  [SMALL_STATE(197)] = 7965,
  [SMALL_STATE(198)] = 7989,
  [SMALL_STATE(199)] = 8005,
  [SMALL_STATE(200)] = 8021,
  [SMALL_STATE(201)] = 8037,
  [SMALL_STATE(202)] = 8053,
  [SMALL_STATE(203)] = 8069,
  [SMALL_STATE(204)] = 8089,
  [SMALL_STATE(205)] = 8111,
  [SMALL_STATE(206)] = 8126,
  [SMALL_STATE(207)] = 8147,
  [SMALL_STATE(208)] = 8162,
  [SMALL_STATE(209)] = 8177,
  [SMALL_STATE(210)] = 8192,
  [SMALL_STATE(211)] = 8207,
  [SMALL_STATE(212)] = 8236,
  [SMALL_STATE(213)] = 8251,
  [SMALL_STATE(214)] = 8266,
  [SMALL_STATE(215)] = 8289,
  [SMALL_STATE(216)] = 8304,
  [SMALL_STATE(217)] = 8327,
  [SMALL_STATE(218)] = 8342,
  [SMALL_STATE(219)] = 8365,
  [SMALL_STATE(220)] = 8380,
  [SMALL_STATE(221)] = 8395,
  [SMALL_STATE(222)] = 8410,
  [SMALL_STATE(223)] = 8433,
  [SMALL_STATE(224)] = 8456,
  [SMALL_STATE(225)] = 8477,
  [SMALL_STATE(226)] = 8498,
  [SMALL_STATE(227)] = 8513,
  [SMALL_STATE(228)] = 8526,
  [SMALL_STATE(229)] = 8541,
  [SMALL_STATE(230)] = 8556,
  [SMALL_STATE(231)] = 8579,
  [SMALL_STATE(232)] = 8594,
  [SMALL_STATE(233)] = 8617,
  [SMALL_STATE(234)] = 8640,
  [SMALL_STATE(235)] = 8655,
  [SMALL_STATE(236)] = 8670,
  [SMALL_STATE(237)] = 8691,
  [SMALL_STATE(238)] = 8706,
  [SMALL_STATE(239)] = 8721,
  [SMALL_STATE(240)] = 8740,
  [SMALL_STATE(241)] = 8761,
  [SMALL_STATE(242)] = 8784,
  [SMALL_STATE(243)] = 8799,
  [SMALL_STATE(244)] = 8814,
  [SMALL_STATE(245)] = 8829,
  [SMALL_STATE(246)] = 8844,
  [SMALL_STATE(247)] = 8859,
  [SMALL_STATE(248)] = 8882,
  [SMALL_STATE(249)] = 8905,
  [SMALL_STATE(250)] = 8928,
  [SMALL_STATE(251)] = 8951,
  [SMALL_STATE(252)] = 8974,
  [SMALL_STATE(253)] = 8995,
  [SMALL_STATE(254)] = 9010,
  [SMALL_STATE(255)] = 9025,
  [SMALL_STATE(256)] = 9038,
  [SMALL_STATE(257)] = 9053,
  [SMALL_STATE(258)] = 9072,
  [SMALL_STATE(259)] = 9091,
  [SMALL_STATE(260)] = 9110,
  [SMALL_STATE(261)] = 9131,
  [SMALL_STATE(262)] = 9143,
  [SMALL_STATE(263)] = 9155,
  [SMALL_STATE(264)] = 9173,
  [SMALL_STATE(265)] = 9185,
  [SMALL_STATE(266)] = 9197,
  [SMALL_STATE(267)] = 9215,
  [SMALL_STATE(268)] = 9235,
  [SMALL_STATE(269)] = 9247,
  [SMALL_STATE(270)] = 9259,
  [SMALL_STATE(271)] = 9280,
  [SMALL_STATE(272)] = 9297,
  [SMALL_STATE(273)] = 9318,
  [SMALL_STATE(274)] = 9337,
  [SMALL_STATE(275)] = 9354,
  [SMALL_STATE(276)] = 9367,
  [SMALL_STATE(277)] = 9386,
  [SMALL_STATE(278)] = 9405,
  [SMALL_STATE(279)] = 9418,
  [SMALL_STATE(280)] = 9435,
  [SMALL_STATE(281)] = 9452,
  [SMALL_STATE(282)] = 9469,
  [SMALL_STATE(283)] = 9492,
  [SMALL_STATE(284)] = 9509,
  [SMALL_STATE(285)] = 9526,
  [SMALL_STATE(286)] = 9543,
  [SMALL_STATE(287)] = 9560,
  [SMALL_STATE(288)] = 9573,
  [SMALL_STATE(289)] = 9590,
  [SMALL_STATE(290)] = 9607,
  [SMALL_STATE(291)] = 9624,
  [SMALL_STATE(292)] = 9643,
  [SMALL_STATE(293)] = 9660,
  [SMALL_STATE(294)] = 9673,
  [SMALL_STATE(295)] = 9690,
  [SMALL_STATE(296)] = 9708,
  [SMALL_STATE(297)] = 9728,
  [SMALL_STATE(298)] = 9746,
  [SMALL_STATE(299)] = 9762,
  [SMALL_STATE(300)] = 9780,
  [SMALL_STATE(301)] = 9798,
  [SMALL_STATE(302)] = 9816,
  [SMALL_STATE(303)] = 9828,
  [SMALL_STATE(304)] = 9846,
  [SMALL_STATE(305)] = 9858,
  [SMALL_STATE(306)] = 9878,
  [SMALL_STATE(307)] = 9896,
  [SMALL_STATE(308)] = 9908,
  [SMALL_STATE(309)] = 9928,
  [SMALL_STATE(310)] = 9940,
  [SMALL_STATE(311)] = 9952,
  [SMALL_STATE(312)] = 9968,
  [SMALL_STATE(313)] = 9984,
  [SMALL_STATE(314)] = 9996,
  [SMALL_STATE(315)] = 10008,
  [SMALL_STATE(316)] = 10020,
  [SMALL_STATE(317)] = 10032,
  [SMALL_STATE(318)] = 10044,
  [SMALL_STATE(319)] = 10064,
  [SMALL_STATE(320)] = 10084,
  [SMALL_STATE(321)] = 10096,
  [SMALL_STATE(322)] = 10108,
  [SMALL_STATE(323)] = 10120,
  [SMALL_STATE(324)] = 10132,
  [SMALL_STATE(325)] = 10150,
  [SMALL_STATE(326)] = 10168,
  [SMALL_STATE(327)] = 10188,
  [SMALL_STATE(328)] = 10204,
  [SMALL_STATE(329)] = 10216,
  [SMALL_STATE(330)] = 10228,
  [SMALL_STATE(331)] = 10244,
  [SMALL_STATE(332)] = 10256,
  [SMALL_STATE(333)] = 10276,
  [SMALL_STATE(334)] = 10288,
  [SMALL_STATE(335)] = 10300,
  [SMALL_STATE(336)] = 10320,
  [SMALL_STATE(337)] = 10336,
  [SMALL_STATE(338)] = 10348,
  [SMALL_STATE(339)] = 10368,
  [SMALL_STATE(340)] = 10385,
  [SMALL_STATE(341)] = 10402,
  [SMALL_STATE(342)] = 10419,
  [SMALL_STATE(343)] = 10436,
  [SMALL_STATE(344)] = 10447,
  [SMALL_STATE(345)] = 10462,
  [SMALL_STATE(346)] = 10479,
  [SMALL_STATE(347)] = 10492,
  [SMALL_STATE(348)] = 10501,
  [SMALL_STATE(349)] = 10510,
  [SMALL_STATE(350)] = 10519,
  [SMALL_STATE(351)] = 10528,
  [SMALL_STATE(352)] = 10537,
  [SMALL_STATE(353)] = 10554,
  [SMALL_STATE(354)] = 10571,
  [SMALL_STATE(355)] = 10588,
  [SMALL_STATE(356)] = 10597,
  [SMALL_STATE(357)] = 10606,
  [SMALL_STATE(358)] = 10615,
  [SMALL_STATE(359)] = 10632,
  [SMALL_STATE(360)] = 10649,
  [SMALL_STATE(361)] = 10666,
  [SMALL_STATE(362)] = 10683,
  [SMALL_STATE(363)] = 10700,
  [SMALL_STATE(364)] = 10717,
  [SMALL_STATE(365)] = 10734,
  [SMALL_STATE(366)] = 10743,
  [SMALL_STATE(367)] = 10760,
  [SMALL_STATE(368)] = 10769,
  [SMALL_STATE(369)] = 10786,
  [SMALL_STATE(370)] = 10795,
  [SMALL_STATE(371)] = 10810,
  [SMALL_STATE(372)] = 10827,
  [SMALL_STATE(373)] = 10836,
  [SMALL_STATE(374)] = 10851,
  [SMALL_STATE(375)] = 10868,
  [SMALL_STATE(376)] = 10877,
  [SMALL_STATE(377)] = 10894,
  [SMALL_STATE(378)] = 10911,
  [SMALL_STATE(379)] = 10920,
  [SMALL_STATE(380)] = 10937,
  [SMALL_STATE(381)] = 10954,
  [SMALL_STATE(382)] = 10968,
  [SMALL_STATE(383)] = 10982,
  [SMALL_STATE(384)] = 10994,
  [SMALL_STATE(385)] = 11008,
  [SMALL_STATE(386)] = 11020,
  [SMALL_STATE(387)] = 11034,
  [SMALL_STATE(388)] = 11044,
  [SMALL_STATE(389)] = 11056,
  [SMALL_STATE(390)] = 11070,
  [SMALL_STATE(391)] = 11082,
  [SMALL_STATE(392)] = 11096,
  [SMALL_STATE(393)] = 11108,
  [SMALL_STATE(394)] = 11122,
  [SMALL_STATE(395)] = 11136,
  [SMALL_STATE(396)] = 11150,
  [SMALL_STATE(397)] = 11164,
  [SMALL_STATE(398)] = 11178,
  [SMALL_STATE(399)] = 11192,
  [SMALL_STATE(400)] = 11206,
  [SMALL_STATE(401)] = 11216,
  [SMALL_STATE(402)] = 11230,
  [SMALL_STATE(403)] = 11240,
  [SMALL_STATE(404)] = 11252,
  [SMALL_STATE(405)] = 11266,
  [SMALL_STATE(406)] = 11280,
  [SMALL_STATE(407)] = 11294,
  [SMALL_STATE(408)] = 11306,
  [SMALL_STATE(409)] = 11316,
  [SMALL_STATE(410)] = 11326,
  [SMALL_STATE(411)] = 11340,
  [SMALL_STATE(412)] = 11350,
  [SMALL_STATE(413)] = 11358,
  [SMALL_STATE(414)] = 11370,
  [SMALL_STATE(415)] = 11380,
  [SMALL_STATE(416)] = 11390,
  [SMALL_STATE(417)] = 11402,
  [SMALL_STATE(418)] = 11414,
  [SMALL_STATE(419)] = 11428,
  [SMALL_STATE(420)] = 11437,
  [SMALL_STATE(421)] = 11448,
  [SMALL_STATE(422)] = 11457,
  [SMALL_STATE(423)] = 11468,
  [SMALL_STATE(424)] = 11477,
  [SMALL_STATE(425)] = 11488,
  [SMALL_STATE(426)] = 11499,
  [SMALL_STATE(427)] = 11508,
  [SMALL_STATE(428)] = 11517,
  [SMALL_STATE(429)] = 11526,
  [SMALL_STATE(430)] = 11537,
  [SMALL_STATE(431)] = 11548,
  [SMALL_STATE(432)] = 11559,
  [SMALL_STATE(433)] = 11568,
  [SMALL_STATE(434)] = 11579,
  [SMALL_STATE(435)] = 11590,
  [SMALL_STATE(436)] = 11601,
  [SMALL_STATE(437)] = 11610,
  [SMALL_STATE(438)] = 11619,
  [SMALL_STATE(439)] = 11628,
  [SMALL_STATE(440)] = 11637,
  [SMALL_STATE(441)] = 11646,
  [SMALL_STATE(442)] = 11655,
  [SMALL_STATE(443)] = 11666,
  [SMALL_STATE(444)] = 11675,
  [SMALL_STATE(445)] = 11686,
  [SMALL_STATE(446)] = 11695,
  [SMALL_STATE(447)] = 11704,
  [SMALL_STATE(448)] = 11713,
  [SMALL_STATE(449)] = 11722,
  [SMALL_STATE(450)] = 11733,
  [SMALL_STATE(451)] = 11742,
  [SMALL_STATE(452)] = 11753,
  [SMALL_STATE(453)] = 11764,
  [SMALL_STATE(454)] = 11772,
  [SMALL_STATE(455)] = 11780,
  [SMALL_STATE(456)] = 11788,
  [SMALL_STATE(457)] = 11796,
  [SMALL_STATE(458)] = 11804,
  [SMALL_STATE(459)] = 11812,
  [SMALL_STATE(460)] = 11820,
  [SMALL_STATE(461)] = 11828,
  [SMALL_STATE(462)] = 11836,
  [SMALL_STATE(463)] = 11844,
  [SMALL_STATE(464)] = 11852,
  [SMALL_STATE(465)] = 11860,
  [SMALL_STATE(466)] = 11868,
  [SMALL_STATE(467)] = 11876,
  [SMALL_STATE(468)] = 11884,
  [SMALL_STATE(469)] = 11892,
  [SMALL_STATE(470)] = 11900,
  [SMALL_STATE(471)] = 11908,
  [SMALL_STATE(472)] = 11916,
  [SMALL_STATE(473)] = 11924,
  [SMALL_STATE(474)] = 11932,
  [SMALL_STATE(475)] = 11940,
  [SMALL_STATE(476)] = 11948,
  [SMALL_STATE(477)] = 11956,
  [SMALL_STATE(478)] = 11964,
  [SMALL_STATE(479)] = 11972,
  [SMALL_STATE(480)] = 11980,
  [SMALL_STATE(481)] = 11988,
  [SMALL_STATE(482)] = 11996,
  [SMALL_STATE(483)] = 12004,
  [SMALL_STATE(484)] = 12012,
  [SMALL_STATE(485)] = 12020,
  [SMALL_STATE(486)] = 12028,
  [SMALL_STATE(487)] = 12036,
  [SMALL_STATE(488)] = 12044,
  [SMALL_STATE(489)] = 12052,
  [SMALL_STATE(490)] = 12060,
  [SMALL_STATE(491)] = 12068,
  [SMALL_STATE(492)] = 12076,
  [SMALL_STATE(493)] = 12084,
  [SMALL_STATE(494)] = 12092,
  [SMALL_STATE(495)] = 12100,
  [SMALL_STATE(496)] = 12108,
  [SMALL_STATE(497)] = 12116,
  [SMALL_STATE(498)] = 12124,
  [SMALL_STATE(499)] = 12132,
  [SMALL_STATE(500)] = 12140,
  [SMALL_STATE(501)] = 12148,
  [SMALL_STATE(502)] = 12156,
  [SMALL_STATE(503)] = 12164,
  [SMALL_STATE(504)] = 12172,
  [SMALL_STATE(505)] = 12180,
  [SMALL_STATE(506)] = 12188,
  [SMALL_STATE(507)] = 12196,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_element, 1, .production_id = 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 1, .production_id = 8),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 1, .production_id = 8),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 2, .production_id = 13),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 2, .production_id = 13),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element_name, 1, .production_id = 9),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element_name, 1, .production_id = 9),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 2, .production_id = 14),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 2, .production_id = 14),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 1, .production_id = 7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 1, .production_id = 7),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element_parent, 3, .production_id = 22),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element_parent, 3, .production_id = 22),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__remote, 2, .production_id = 21),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote, 2, .production_id = 21),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 3, .production_id = 19),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 3, .production_id = 19),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 2, .production_id = 16),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 2, .production_id = 16),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 2, .production_id = 15),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 2, .production_id = 15),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 3, .production_id = 20),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 3, .production_id = 20),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_base_elements, 1, .production_id = 6),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_elements, 1, .production_id = 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_variable, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_variable, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_call, 2, .production_id = 6),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_call, 2, .production_id = 6),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_call, 3, .production_id = 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_call, 3, .production_id = 6),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indicator_variable, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indicator_variable, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_list, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_list, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_base_elements, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_elements, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_number, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_number, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_base_elements, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_elements, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 23), SHIFT_REPEAT(112),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 23),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 23), SHIFT_REPEAT(112),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_operator_not_boolean, 2, .production_id = 23),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(346),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(341),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 12),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 12),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compile_clause_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compile_clause_repeat1, 2), SHIFT_REPEAT(12),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compile_clause_repeat1, 2), SHIFT_REPEAT(453),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subtype_datatypes, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_char, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nchar, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_operator_not_boolean, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_operator_not_boolean, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_operator_boolean, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_operator_boolean, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 3, .production_id = 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 3, .production_id = 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rowid_datatypes_urowid, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_float, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_number, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nvarchar2, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_varchar2, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 3, .production_id = 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 3, .production_id = 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_properties, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 5, .production_id = 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(83),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(261),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean, 1, .production_id = 6),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2), SHIFT_REPEAT(468),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2), SHIFT_REPEAT(419),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2), SHIFT_REPEAT(465),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 5, .production_id = 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean, 2, .production_id = 12),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean, 2, .production_id = 23),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_repeat1, 2, .production_id = 23),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_repeat1, 2, .production_id = 23), SHIFT_REPEAT(41),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean, 3, .production_id = 24),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 5, .production_id = 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compiler_parameter_clause, 3, .production_id = 5),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compiler_parameter_clause, 3, .production_id = 5),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 5, .production_id = 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_char, 2),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 3), SHIFT(14),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 3), SHIFT(215),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__supplied_datatypes_any_types, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_character, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_national, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_char_nchar, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_byte_char, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_national, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 6),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_precision_scale, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 6),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_precision_scale, 5),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_datatypes_rowtype, 2, .production_id = 6),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 4),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_datatypes_type, 2, .production_id = 6),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 4),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 2), SHIFT(14),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 2), SHIFT(208),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_double_precision, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_character, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1, .production_id = 6),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_datatypes, 1, .production_id = 6),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_year, 4),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_predicate, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rowid_datatypes_urowid, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_raw, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_year, 5),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2), SHIFT_REPEAT(468),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2), SHIFT_REPEAT(419),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2), SHIFT_REPEAT(465),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 5),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_byte_char, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_float, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_properties, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_number, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nchar, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nvarchar2, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_varchar2, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_varchar, 2),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_in_repeat1, 2), SHIFT_REPEAT(14),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_in_repeat1, 2),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 4), SHIFT(14),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 4), SHIFT(237),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_elements, 2, .production_id = 6),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_base_case_search, 5),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_elements, 2, .production_id = 23),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_base_case_simple, 4, .production_id = 12),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_between, 4),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_not_null, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_repeat1, 1, .production_id = 6),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_base_case_simple, 6, .production_id = 12),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_like, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_predicate, 6),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_between, 5),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 5),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_base_case_search, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_null, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_like, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_operator, 2, .production_id = 12),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_repeat, 2, .production_id = 12),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_repeat1, 2, .production_id = 23), SHIFT_REPEAT(42),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 6),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_editionable_noneditionable, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 5),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_properties_repeat1, 2),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_properties_repeat1, 2), SHIFT_REPEAT(263),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_properties, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(339),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(380),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reuse_settings, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessible_by_clause, 6),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessible_by_clause, 5),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_collation_clause, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invoker_rights_clause, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 11),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 18),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_repeat1, 2, .production_id = 23), SHIFT_REPEAT(40),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 6, .production_id = 1),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sharing_clause, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 2),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 18),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 1),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 2),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_obj, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 4),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 11),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 2),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 11),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 18),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_declaration, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 2),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 1),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in, 1),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_obj, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_obj, 1),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 11, .production_id = 18),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 1),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 11),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_base_case_search_repeat1, 2), SHIFT_REPEAT(24),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_base_case_search_repeat1, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(326),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 17),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(82),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 1),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_name, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2), SHIFT_REPEAT(141),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 17),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 4, .production_id = 10),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(98),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 5, .production_id = 10),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_obj, 3),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 3, .production_id = 10),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 17),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_base_case_search_repeat1, 4),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element_named, 3),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1, .production_id = 6),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in_out_or_out, 2),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_element, 2),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element, 1),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in_out_or_out, 4),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__schema, 2, .production_id = 3),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in_out_or_out, 3),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in, 3),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_expression, 2),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element_positional, 1),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 2, .production_id = 12),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_char, 1),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
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
