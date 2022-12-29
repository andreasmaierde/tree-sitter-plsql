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
#define STATE_COUNT 722
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 286
#define ALIAS_COUNT 0
#define TOKEN_COUNT 155
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 16

enum {
  anon_sym_SEMI = 1,
  anon_sym_SLASH = 2,
  anon_sym_EQ = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_DOT = 6,
  anon_sym_PERCENT = 7,
  anon_sym_COMMA = 8,
  anon_sym_SQUOTE = 9,
  anon_sym_COLON_EQ = 10,
  anon_sym_EQ_GT = 11,
  anon_sym_LT = 12,
  anon_sym_LT_EQ = 13,
  anon_sym_GT = 14,
  anon_sym_GT_EQ = 15,
  anon_sym_LT_GT = 16,
  anon_sym_BANG_EQ = 17,
  anon_sym_TILDE_EQ = 18,
  anon_sym_CARET_EQ = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_STAR = 22,
  sym__unquoted_identifier = 23,
  anon_sym_DQUOTE = 24,
  aux_sym__quoted_identifier_token1 = 25,
  sym__single_quote_string = 26,
  sym__number = 27,
  sym__float = 28,
  sym_comment_ml = 29,
  sym_comment_sl = 30,
  sym_kw_create = 31,
  sym_kw_alter = 32,
  sym_kw_package = 33,
  sym_kw_function = 34,
  sym_kw_procedure = 35,
  sym_kw_trigger = 36,
  sym_kw_type = 37,
  sym_kw_datatype_type = 38,
  sym_kw_datatype_rowtype = 39,
  sym_kw_library = 40,
  sym_kw_true = 41,
  sym_kw_false = 42,
  sym_kw_null = 43,
  sym_kw_not = 44,
  sym_kw_row = 45,
  sym_kw_compile = 46,
  sym_kw_debug = 47,
  sym_kw_specification = 48,
  sym_kw_body = 49,
  sym_kw_begin = 50,
  sym_kw_end = 51,
  sym_kw_or = 52,
  sym_kw_and = 53,
  sym_kw_replace = 54,
  sym_kw_editionable = 55,
  sym_kw_noneditionable = 56,
  sym_kw_metadata = 57,
  sym_kw_none = 58,
  sym_kw_default = 59,
  sym_kw_collation = 60,
  sym_kw_using_nls_comp = 61,
  sym_kw_authid = 62,
  sym_kw_current_user = 63,
  sym_kw_definer = 64,
  sym_kw_accessible = 65,
  sym_kw_by = 66,
  sym_kw_reuse = 67,
  sym_kw_settings = 68,
  sym_kw_byte = 69,
  sym_kw_char = 70,
  sym_kw_is = 71,
  sym_kw_as = 72,
  sym_kw_deterministic = 73,
  sym_kw_pipelined = 74,
  sym_kw_parallel_enable = 75,
  sym_kw_result_cache = 76,
  sym_kw_exists = 77,
  sym_kw_between = 78,
  sym_kw_found = 79,
  sym_kw_isopen = 80,
  sym_kw_notfound = 81,
  sym_kw_in = 82,
  sym_kw_out = 83,
  sym_kw_nocopy = 84,
  sym_kw_like = 85,
  sym_kw_inserting = 86,
  sym_kw_deleting = 87,
  sym_kw_updating = 88,
  sym_kw_return = 89,
  sym_kw_varchar = 90,
  sym_kw_varchar2 = 91,
  sym_kw_nvarchar2 = 92,
  sym_kw_nchar = 93,
  sym_kw_int = 94,
  sym_kw_smallint = 95,
  sym_kw_real = 96,
  sym_kw_binary_float = 97,
  sym_kw_binary_double = 98,
  sym_kw_simple_float = 99,
  sym_kw_simple_double = 100,
  sym_kw_binary_integer = 101,
  sym_kw_pls_integer = 102,
  sym_kw_natural = 103,
  sym_kw_naturaln = 104,
  sym_kw_positive = 105,
  sym_kw_positiven = 106,
  sym_kw_signtype = 107,
  sym_kw_simple_integer = 108,
  sym_kw_integer = 109,
  sym_kw_number = 110,
  sym_kw_float = 111,
  sym_kw_long = 112,
  sym_kw_raw = 113,
  sym_kw_date = 114,
  sym_kw_timestamp = 115,
  sym_kw_with = 116,
  sym_kw_local = 117,
  sym_kw_time = 118,
  sym_kw_zone = 119,
  sym_kw_interval = 120,
  sym_kw_year = 121,
  sym_kw_month = 122,
  sym_kw_day = 123,
  sym_kw_minute = 124,
  sym_kw_second = 125,
  sym_kw_to = 126,
  sym_kw_blob = 127,
  sym_kw_clob = 128,
  sym_kw_nclob = 129,
  sym_kw_bfile = 130,
  sym_kw_rowid = 131,
  sym_kw_urowid = 132,
  sym_kw_boolean = 133,
  sym_kw_character = 134,
  sym_kw_varying = 135,
  sym_kw_numeric = 136,
  sym_kw_decimal = 137,
  sym_kw_dec = 138,
  sym_kw_double = 139,
  sym_kw_precision = 140,
  sym_kw_sys = 141,
  sym_kw_anydata = 142,
  sym_kw_anytype = 143,
  sym_kw_anydataset = 144,
  sym_kw_xmltype = 145,
  sym_kw_uritype = 146,
  sym_kw_sdo_geometry = 147,
  sym_kw_sdo_topo_geometry = 148,
  sym_kw_sdo_georaster = 149,
  sym_kw_json_element_t = 150,
  sym_kw_json_array_t = 151,
  sym_kw_json_object_t = 152,
  sym_kw_json_scalar_t = 153,
  sym_kw_json_key_list = 154,
  sym_source_file = 155,
  sym__element = 156,
  sym_sql_statement = 157,
  sym__ddl_statement = 158,
  sym__create_statement = 159,
  sym_create_package = 160,
  sym_package_properties = 161,
  sym__package_property_element = 162,
  sym__alter_statement = 163,
  sym_alter_package = 164,
  sym_alter_procedure = 165,
  sym_alter_function = 166,
  sym_alter_library = 167,
  sym_compile_clause = 168,
  sym_compiler_parameter_clause = 169,
  sym_editionable_noneditionable = 170,
  sym_sharing_clause = 171,
  sym_default_collation_clause = 172,
  sym_invoker_rights_clause = 173,
  sym_accessible_by_clause = 174,
  sym_accessor = 175,
  sym_unit_kind = 176,
  sym_reuse_settings = 177,
  sym__schema = 178,
  sym_byte_char = 179,
  sym__is_as = 180,
  sym_end_obj = 181,
  sym__package_item_list = 182,
  sym_create_obj = 183,
  sym_procedure_declaration = 184,
  sym_procedure_properties = 185,
  sym__procedure_property_element = 186,
  sym_function_declaration = 187,
  sym_function_properties = 188,
  sym__function_property_element = 189,
  sym__is_null_or_is_not_null = 190,
  sym_is_null = 191,
  sym_is_not_null = 192,
  sym_expression = 193,
  sym__expression_elements = 194,
  sym__expression_numeric = 195,
  sym__expression_numeric_sub = 196,
  sym__expression_boolean = 197,
  sym__expression_boolean_elements = 198,
  sym_expression_boolean_ref = 199,
  sym__other_boolean_form = 200,
  sym__other_boolean_form_collection = 201,
  sym__other_boolean_form_expression = 202,
  sym__other_boolean_form_named_cursor = 203,
  sym__other_boolean_form_expression_is = 204,
  sym__other_boolean_form_expression_between = 205,
  sym__other_boolean_form_expression_in = 206,
  sym__other_boolean_form_expression_like = 207,
  sym__other_boolean_form_expression_relational_operation = 208,
  sym_conditional_predicate = 209,
  sym_return_declaration = 210,
  sym_datatype = 211,
  sym__character_datatypes = 212,
  sym__character_datatypes_char = 213,
  sym__character_datatypes_varchar2 = 214,
  sym__character_datatypes_nchar = 215,
  sym__character_datatypes_nvarchar2 = 216,
  sym__number_datatypes = 217,
  sym__number_datatypes_keyword = 218,
  sym__number_datatypes_number = 219,
  sym__number_datatypes_float = 220,
  sym__long_and_raw_datatypes = 221,
  sym__long_and_raw_datatypes_long_raw = 222,
  sym__long_and_raw_datatypes_raw = 223,
  sym__datetime_datatypes = 224,
  sym__datetime_datatypes_keyword = 225,
  sym__datetime_datatypes_date_timestamp = 226,
  sym__datetime_datatypes_date_interval_year = 227,
  sym__datetime_datatypes_date_interval_day = 228,
  sym__large_object_datatypes = 229,
  sym__rowid_datatypes = 230,
  sym__referenced_datatypes = 231,
  sym__referenced_datatypes_type = 232,
  sym__referenced_datatypes_rowtype = 233,
  sym__logical_datatypes = 234,
  sym__subtype_datatypes = 235,
  sym__rowid_datatypes_urowid = 236,
  sym__ansi_supported_datatypes_character = 237,
  sym__ansi_supported_datatypes_char_nchar = 238,
  sym__ansi_supported_datatypes_varchar = 239,
  sym__ansi_supported_datatypes_national = 240,
  sym__ansi_supported_datatypes_numeric_decimal_dec = 241,
  sym__ansi_supported_datatypes_double_precision = 242,
  sym__supplied_datatypes_any_types = 243,
  sym__supplied_datatypes_xml_types = 244,
  sym__supplied_datatypes_spatial_types = 245,
  sym__object_datatypes = 246,
  sym_prc_fnc_call = 247,
  sym_parameter_declaration = 248,
  sym_parameter_declaration_element = 249,
  sym__parameter_declaration_element_in = 250,
  sym__parameter_declaration_element_in_out_or_out = 251,
  sym_default_expression = 252,
  sym_parameter = 253,
  sym_parameter_element = 254,
  sym_parameter_element_positional = 255,
  sym_parameter_element_named = 256,
  sym_parameter_name = 257,
  sym_parameter_value = 258,
  sym__size = 259,
  sym__size_byte_char = 260,
  sym__size_precision_scale = 261,
  sym__precision = 262,
  sym__scale = 263,
  sym_relational_operator = 264,
  sym__relational_operator_not_equal = 265,
  sym_relational_operator_compute = 266,
  sym_identifier = 267,
  sym__quoted_identifier = 268,
  sym__literal = 269,
  sym__literal_boolean = 270,
  sym_literal_number = 271,
  sym_literal_string = 272,
  aux_sym_source_file_repeat1 = 273,
  aux_sym_create_package_repeat1 = 274,
  aux_sym_package_properties_repeat1 = 275,
  aux_sym_alter_package_repeat1 = 276,
  aux_sym_compile_clause_repeat1 = 277,
  aux_sym_accessible_by_clause_repeat1 = 278,
  aux_sym_procedure_properties_repeat1 = 279,
  aux_sym_function_properties_repeat1 = 280,
  aux_sym__expression_numeric_repeat1 = 281,
  aux_sym__expression_boolean_repeat1 = 282,
  aux_sym__other_boolean_form_expression_in_repeat1 = 283,
  aux_sym_parameter_declaration_repeat1 = 284,
  aux_sym_parameter_repeat1 = 285,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_SLASH] = "/",
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
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
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
  [sym_unit_kind] = "unit_kind",
  [sym_reuse_settings] = "reuse_settings",
  [sym__schema] = "_schema",
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
  [sym__expression_elements] = "_expression_elements",
  [sym__expression_numeric] = "_expression_numeric",
  [sym__expression_numeric_sub] = "_expression_numeric_sub",
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
  [sym_relational_operator] = "relational_operator",
  [sym__relational_operator_not_equal] = "_relational_operator_not_equal",
  [sym_relational_operator_compute] = "relational_operator_compute",
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
  [aux_sym__expression_numeric_repeat1] = "_expression_numeric_repeat1",
  [aux_sym__expression_boolean_repeat1] = "_expression_boolean_repeat1",
  [aux_sym__other_boolean_form_expression_in_repeat1] = "_other_boolean_form_expression_in_repeat1",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
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
  [sym_unit_kind] = sym_unit_kind,
  [sym_reuse_settings] = sym_reuse_settings,
  [sym__schema] = sym__schema,
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
  [sym__expression_elements] = sym__expression_elements,
  [sym__expression_numeric] = sym__expression_numeric,
  [sym__expression_numeric_sub] = sym__expression_numeric_sub,
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
  [sym_relational_operator] = sym_relational_operator,
  [sym__relational_operator_not_equal] = sym__relational_operator_not_equal,
  [sym_relational_operator_compute] = sym_relational_operator_compute,
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
  [aux_sym__expression_numeric_repeat1] = aux_sym__expression_numeric_repeat1,
  [aux_sym__expression_boolean_repeat1] = aux_sym__expression_boolean_repeat1,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [sym__expression_elements] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_numeric] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_numeric_sub] = {
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
  [sym_relational_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__relational_operator_not_equal] = {
    .visible = false,
    .named = true,
  },
  [sym_relational_operator_compute] = {
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
  [aux_sym__expression_numeric_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_boolean_repeat1] = {
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
  field_package_name = 6,
  field_prc_fnc_name = 7,
  field_prc_name = 8,
  field_ref_element_name = 9,
  field_ref_obj_name = 10,
  field_schema_name = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_compile_parameter_name] = "compile_parameter_name",
  [field_compile_parameter_value] = "compile_parameter_value",
  [field_fnc_name] = "fnc_name",
  [field_name] = "name",
  [field_obj_name] = "obj_name",
  [field_package_name] = "package_name",
  [field_prc_fnc_name] = "prc_fnc_name",
  [field_prc_name] = "prc_name",
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
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 1},
  [13] = {.index = 15, .length = 1},
  [14] = {.index = 16, .length = 2},
  [15] = {.index = 18, .length = 2},
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
    {field_prc_name, 1},
  [8] =
    {field_obj_name, 3},
  [9] =
    {field_schema_name, 0, .inherited = true},
  [10] =
    {field_fnc_name, 1},
  [11] =
    {field_obj_name, 4},
    {field_schema_name, 3, .inherited = true},
  [13] =
    {field_schema_name, 1, .inherited = true},
  [14] =
    {field_ref_element_name, 0},
  [15] =
    {field_prc_fnc_name, 0},
  [16] =
    {field_ref_element_name, 2},
    {field_ref_obj_name, 0},
  [18] =
    {field_package_name, 0},
    {field_prc_fnc_name, 2},
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
  [13] = 11,
  [14] = 12,
  [15] = 15,
  [16] = 12,
  [17] = 15,
  [18] = 11,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 9,
  [28] = 10,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 10,
  [33] = 9,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 23,
  [38] = 38,
  [39] = 39,
  [40] = 36,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 36,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 21,
  [50] = 50,
  [51] = 47,
  [52] = 52,
  [53] = 22,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 55,
  [60] = 60,
  [61] = 58,
  [62] = 57,
  [63] = 63,
  [64] = 56,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 69,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 56,
  [80] = 80,
  [81] = 81,
  [82] = 58,
  [83] = 80,
  [84] = 81,
  [85] = 55,
  [86] = 86,
  [87] = 56,
  [88] = 57,
  [89] = 89,
  [90] = 56,
  [91] = 91,
  [92] = 81,
  [93] = 57,
  [94] = 80,
  [95] = 95,
  [96] = 75,
  [97] = 56,
  [98] = 98,
  [99] = 99,
  [100] = 57,
  [101] = 69,
  [102] = 75,
  [103] = 103,
  [104] = 57,
  [105] = 105,
  [106] = 23,
  [107] = 22,
  [108] = 21,
  [109] = 24,
  [110] = 26,
  [111] = 25,
  [112] = 30,
  [113] = 113,
  [114] = 114,
  [115] = 113,
  [116] = 114,
  [117] = 114,
  [118] = 113,
  [119] = 119,
  [120] = 24,
  [121] = 9,
  [122] = 25,
  [123] = 31,
  [124] = 119,
  [125] = 119,
  [126] = 10,
  [127] = 26,
  [128] = 29,
  [129] = 34,
  [130] = 29,
  [131] = 30,
  [132] = 31,
  [133] = 46,
  [134] = 134,
  [135] = 35,
  [136] = 52,
  [137] = 38,
  [138] = 41,
  [139] = 39,
  [140] = 140,
  [141] = 42,
  [142] = 50,
  [143] = 134,
  [144] = 98,
  [145] = 145,
  [146] = 42,
  [147] = 41,
  [148] = 35,
  [149] = 39,
  [150] = 43,
  [151] = 140,
  [152] = 45,
  [153] = 54,
  [154] = 71,
  [155] = 65,
  [156] = 63,
  [157] = 78,
  [158] = 99,
  [159] = 74,
  [160] = 72,
  [161] = 77,
  [162] = 70,
  [163] = 66,
  [164] = 76,
  [165] = 95,
  [166] = 86,
  [167] = 68,
  [168] = 91,
  [169] = 89,
  [170] = 67,
  [171] = 171,
  [172] = 68,
  [173] = 42,
  [174] = 35,
  [175] = 35,
  [176] = 67,
  [177] = 39,
  [178] = 46,
  [179] = 39,
  [180] = 180,
  [181] = 41,
  [182] = 63,
  [183] = 41,
  [184] = 39,
  [185] = 42,
  [186] = 35,
  [187] = 42,
  [188] = 65,
  [189] = 41,
  [190] = 65,
  [191] = 191,
  [192] = 63,
  [193] = 193,
  [194] = 194,
  [195] = 63,
  [196] = 196,
  [197] = 197,
  [198] = 65,
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
  [217] = 9,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 10,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 66,
  [230] = 230,
  [231] = 66,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 31,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 31,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 10,
  [253] = 253,
  [254] = 9,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 250,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 258,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 9,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 255,
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
  [290] = 10,
  [291] = 9,
  [292] = 10,
  [293] = 293,
  [294] = 294,
  [295] = 255,
  [296] = 269,
  [297] = 297,
  [298] = 258,
  [299] = 299,
  [300] = 300,
  [301] = 250,
  [302] = 302,
  [303] = 303,
  [304] = 294,
  [305] = 305,
  [306] = 306,
  [307] = 265,
  [308] = 308,
  [309] = 309,
  [310] = 262,
  [311] = 263,
  [312] = 264,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 268,
  [318] = 270,
  [319] = 319,
  [320] = 273,
  [321] = 276,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 319,
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
  [345] = 276,
  [346] = 346,
  [347] = 273,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 294,
  [353] = 353,
  [354] = 270,
  [355] = 268,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 10,
  [360] = 9,
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
  [379] = 322,
  [380] = 265,
  [381] = 381,
  [382] = 264,
  [383] = 263,
  [384] = 269,
  [385] = 262,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 364,
  [390] = 363,
  [391] = 322,
  [392] = 392,
  [393] = 365,
  [394] = 366,
  [395] = 351,
  [396] = 396,
  [397] = 367,
  [398] = 349,
  [399] = 368,
  [400] = 369,
  [401] = 370,
  [402] = 348,
  [403] = 403,
  [404] = 372,
  [405] = 373,
  [406] = 319,
  [407] = 346,
  [408] = 374,
  [409] = 375,
  [410] = 410,
  [411] = 294,
  [412] = 376,
  [413] = 350,
  [414] = 414,
  [415] = 415,
  [416] = 339,
  [417] = 417,
  [418] = 334,
  [419] = 353,
  [420] = 356,
  [421] = 357,
  [422] = 333,
  [423] = 335,
  [424] = 336,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 337,
  [430] = 430,
  [431] = 362,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 338,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 436,
  [440] = 440,
  [441] = 377,
  [442] = 442,
  [443] = 436,
  [444] = 358,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 361,
  [451] = 451,
  [452] = 346,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
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
  [475] = 459,
  [476] = 476,
  [477] = 468,
  [478] = 459,
  [479] = 454,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 482,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 377,
  [491] = 491,
  [492] = 376,
  [493] = 375,
  [494] = 374,
  [495] = 373,
  [496] = 372,
  [497] = 370,
  [498] = 369,
  [499] = 368,
  [500] = 367,
  [501] = 501,
  [502] = 366,
  [503] = 365,
  [504] = 364,
  [505] = 363,
  [506] = 362,
  [507] = 361,
  [508] = 358,
  [509] = 357,
  [510] = 356,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 353,
  [515] = 515,
  [516] = 351,
  [517] = 350,
  [518] = 349,
  [519] = 348,
  [520] = 482,
  [521] = 294,
  [522] = 470,
  [523] = 523,
  [524] = 339,
  [525] = 334,
  [526] = 526,
  [527] = 338,
  [528] = 337,
  [529] = 336,
  [530] = 335,
  [531] = 333,
  [532] = 468,
  [533] = 454,
  [534] = 534,
  [535] = 535,
  [536] = 534,
  [537] = 537,
  [538] = 538,
  [539] = 535,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 537,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 540,
  [552] = 538,
  [553] = 553,
  [554] = 534,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 553,
  [559] = 535,
  [560] = 556,
  [561] = 561,
  [562] = 562,
  [563] = 538,
  [564] = 540,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 537,
  [570] = 556,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 579,
  [581] = 581,
  [582] = 578,
  [583] = 583,
  [584] = 584,
  [585] = 577,
  [586] = 575,
  [587] = 571,
  [588] = 588,
  [589] = 589,
  [590] = 589,
  [591] = 581,
  [592] = 584,
  [593] = 578,
  [594] = 594,
  [595] = 595,
  [596] = 574,
  [597] = 588,
  [598] = 598,
  [599] = 573,
  [600] = 577,
  [601] = 581,
  [602] = 574,
  [603] = 575,
  [604] = 572,
  [605] = 605,
  [606] = 584,
  [607] = 595,
  [608] = 579,
  [609] = 595,
  [610] = 571,
  [611] = 573,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 617,
  [626] = 620,
  [627] = 627,
  [628] = 614,
  [629] = 622,
  [630] = 630,
  [631] = 631,
  [632] = 630,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 638,
  [641] = 634,
  [642] = 633,
  [643] = 612,
  [644] = 631,
  [645] = 637,
  [646] = 636,
  [647] = 635,
  [648] = 617,
  [649] = 614,
  [650] = 630,
  [651] = 622,
  [652] = 630,
  [653] = 653,
  [654] = 303,
  [655] = 622,
  [656] = 630,
  [657] = 620,
  [658] = 622,
  [659] = 622,
  [660] = 618,
  [661] = 661,
  [662] = 622,
  [663] = 622,
  [664] = 622,
  [665] = 639,
  [666] = 619,
  [667] = 667,
  [668] = 668,
  [669] = 667,
  [670] = 670,
  [671] = 668,
  [672] = 672,
  [673] = 631,
  [674] = 674,
  [675] = 612,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 613,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 681,
  [684] = 616,
  [685] = 685,
  [686] = 633,
  [687] = 676,
  [688] = 661,
  [689] = 634,
  [690] = 672,
  [691] = 639,
  [692] = 619,
  [693] = 667,
  [694] = 668,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 638,
  [699] = 677,
  [700] = 674,
  [701] = 637,
  [702] = 676,
  [703] = 677,
  [704] = 704,
  [705] = 681,
  [706] = 636,
  [707] = 639,
  [708] = 668,
  [709] = 639,
  [710] = 668,
  [711] = 639,
  [712] = 639,
  [713] = 639,
  [714] = 639,
  [715] = 635,
  [716] = 716,
  [717] = 717,
  [718] = 674,
  [719] = 624,
  [720] = 720,
  [721] = 670,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(346);
      if (lookahead == '!') ADVANCE(72);
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '%') ADVANCE(356);
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead == '(') ADVANCE(351);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead == '+') ADVANCE(370);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(371);
      if (lookahead == '.') ADVANCE(354);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == ';') ADVANCE(347);
      if (lookahead == '<') ADVANCE(362);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == '>') ADVANCE(364);
      if (lookahead == '\\') SKIP(336)
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(464);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(512);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(619);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(390);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(391);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(724);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(870);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(624);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(546);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(818);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(393);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(501);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(626);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(804);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(399);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(635);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(713);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(583);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(778);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('G' <= lookahead && lookahead <= 'Q') ||
          ('g' <= lookahead && lookahead <= 'q')) ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(47)
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
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(44)
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
      if (lookahead == '\n') SKIP(50)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(58)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(58)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(65)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(65)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(57)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(57)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(62)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(62)
      if (lookahead == '\r') SKIP(39)
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(61)
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(61)
      if (lookahead == '\r') SKIP(41)
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(72);
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '%') ADVANCE(355);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '(') ADVANCE(351);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead == '+') ADVANCE(370);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(371);
      if (lookahead == '.') ADVANCE(354);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == ';') ADVANCE(347);
      if (lookahead == '<') ADVANCE(362);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == '>') ADVANCE(364);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(749);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(575);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(585);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(392);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(736);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(629);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(791);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(819);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(847);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(805);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(72);
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '%') ADVANCE(355);
      if (lookahead == '(') ADVANCE(351);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead == '+') ADVANCE(370);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(371);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == ';') ADVANCE(347);
      if (lookahead == '<') ADVANCE(362);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == '>') ADVANCE(364);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(749);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(737);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(629);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(792);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(819);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(44)
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(72);
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead == '+') ADVANCE(370);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(371);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == '<') ADVANCE(362);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == '>') ADVANCE(364);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(575);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(737);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(629);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(792);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(72);
      if (lookahead == '%') ADVANCE(357);
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead == '(') ADVANCE(351);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ';') ADVANCE(347);
      if (lookahead == '<') ADVANCE(362);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == '>') ADVANCE(364);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(183);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(315);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(230);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(157);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(286);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(90);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(189);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(254);
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
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(593);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(620);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(439);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(678);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(735);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(870);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(790);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(935);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(677);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(502);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(837);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(440);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(713);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(47)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(984);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '(') ADVANCE(351);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '(') ADVANCE(351);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ';') ADVANCE(347);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(392);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(941);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(847);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(50)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '(') ADVANCE(351);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(543);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '(') ADVANCE(351);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(543);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '(') ADVANCE(351);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '(') ADVANCE(351);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '(') ADVANCE(351);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(585);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(392);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(763);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(791);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(847);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(805);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(55)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(543);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(57)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(932);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(420);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(849);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(58)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(593);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(620);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(439);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(678);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(755);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(870);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(790);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(935);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(677);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(502);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(837);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(440);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(713);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(59)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(593);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(620);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(439);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(678);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(755);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(870);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(790);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(402);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(677);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(502);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(837);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(440);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(713);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(60)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') SKIP(42)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(593);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(620);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(439);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(678);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(755);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(870);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(790);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(677);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(502);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(837);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(440);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(713);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(61)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(956);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(62)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(978);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ';') ADVANCE(347);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(329);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(255);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(252);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(65)
      END_STATE();
    case 66:
      if (lookahead == '\'') ADVANCE(982);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == '\'') ADVANCE(981);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '*') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '/') ADVANCE(986);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == '*') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(988);
      END_STATE();
    case 72:
      if (lookahead == '=') ADVANCE(367);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(360);
      END_STATE();
    case 74:
      if (lookahead == '=') ADVANCE(369);
      END_STATE();
    case 75:
      if (lookahead == '=') ADVANCE(368);
      END_STATE();
    case 76:
      if (lookahead == '>') ADVANCE(361);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(316);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(120);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(117);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(238);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(166);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1015);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(267);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(327);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1107);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
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
          lookahead == 'b') ADVANCE(283);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(136);
      END_STATE();
    case 106:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(214);
      END_STATE();
    case 107:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(215);
      END_STATE();
    case 108:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(216);
      END_STATE();
    case 109:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(217);
      END_STATE();
    case 110:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1034);
      END_STATE();
    case 111:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1033);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 112:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 113:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 114:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      END_STATE();
    case 115:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 116:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 117:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 118:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 119:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 120:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 121:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 122:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1011);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1009);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1040);
      END_STATE();
    case 126:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1020);
      END_STATE();
    case 127:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1090);
      END_STATE();
    case 128:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1035);
      END_STATE();
    case 129:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1042);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 133:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 134:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1028);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1049);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1016);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1084);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(996);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1109);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(991);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1012);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(997);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(993);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1023);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1013);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1037);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1036);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1082);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1014);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(305);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 173:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(101);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 174:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(261);
      END_STATE();
    case 175:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1100);
      END_STATE();
    case 176:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 177:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 178:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 179:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1080);
      END_STATE();
    case 180:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1087);
      END_STATE();
    case 181:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 182:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 183:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(92);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1091);
      END_STATE();
    case 186:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 188:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 189:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 197:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 198:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 199:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 201:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 202:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 203:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 204:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1081);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 207:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 208:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 209:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 210:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 211:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 213:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 215:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 216:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 217:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 218:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 220:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 221:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 222:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 223:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1041);
      END_STATE();
    case 224:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1053);
      END_STATE();
    case 225:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1039);
      END_STATE();
    case 226:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(992);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1018);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1105);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1043);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1031);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 232:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 233:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1002);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 248:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 251:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 252:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 253:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 255:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 256:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 257:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 258:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 259:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 260:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 261:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 262:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 263:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 264:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 265:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1019);
      END_STATE();
    case 266:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 267:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 268:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 269:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 270:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(318);
      END_STATE();
    case 271:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      END_STATE();
    case 272:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1086);
      END_STATE();
    case 273:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1022);
      END_STATE();
    case 274:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1021);
      END_STATE();
    case 275:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1029);
      END_STATE();
    case 276:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 277:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 278:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 279:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 280:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 281:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 282:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 283:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 284:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1027);
      END_STATE();
    case 285:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      END_STATE();
    case 286:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      END_STATE();
    case 287:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      END_STATE();
    case 288:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      END_STATE();
    case 289:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(308);
      END_STATE();
    case 290:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      END_STATE();
    case 291:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 292:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 293:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1017);
      END_STATE();
    case 296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1110);
      END_STATE();
    case 297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 298:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 301:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 302:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 305:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 311:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(330);
      END_STATE();
    case 312:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 313:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 314:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 315:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 316:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 317:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 318:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 319:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 320:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 322:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 323:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1077);
      END_STATE();
    case 324:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(311);
      END_STATE();
    case 325:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(167);
      END_STATE();
    case 326:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(264);
      END_STATE();
    case 327:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1088);
      END_STATE();
    case 328:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(998);
      END_STATE();
    case 329:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1024);
      END_STATE();
    case 330:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(266);
      END_STATE();
    case 331:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(192);
      END_STATE();
    case 332:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(268);
      END_STATE();
    case 333:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
      END_STATE();
    case 334:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(66);
      END_STATE();
    case 335:
      if (eof) ADVANCE(346);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 336:
      if (eof) ADVANCE(346);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(335)
      END_STATE();
    case 337:
      if (eof) ADVANCE(346);
      if (lookahead == '\n') SKIP(343)
      END_STATE();
    case 338:
      if (eof) ADVANCE(346);
      if (lookahead == '\n') SKIP(343)
      if (lookahead == '\r') SKIP(337)
      END_STATE();
    case 339:
      if (eof) ADVANCE(346);
      if (lookahead == '\n') SKIP(344)
      END_STATE();
    case 340:
      if (eof) ADVANCE(346);
      if (lookahead == '\n') SKIP(344)
      if (lookahead == '\r') SKIP(339)
      END_STATE();
    case 341:
      if (eof) ADVANCE(346);
      if (lookahead == '\n') SKIP(345)
      END_STATE();
    case 342:
      if (eof) ADVANCE(346);
      if (lookahead == '\n') SKIP(345)
      if (lookahead == '\r') SKIP(341)
      END_STATE();
    case 343:
      if (eof) ADVANCE(346);
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ';') ADVANCE(347);
      if (lookahead == '\\') SKIP(338)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(784);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(780);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(549);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(796);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(421);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(343)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 344:
      if (eof) ADVANCE(346);
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ';') ADVANCE(347);
      if (lookahead == '\\') SKIP(340)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(784);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(780);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(796);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(421);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(344)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 345:
      if (eof) ADVANCE(346);
      if (lookahead == '"') ADVANCE(971);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ';') ADVANCE(347);
      if (lookahead == '\\') SKIP(342)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(780);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(796);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(345)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(70);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(361);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(363);
      if (lookahead == '>') ADVANCE(366);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(988);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '2') ADVANCE(1056);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(432);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(505);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(605);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(938);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(478);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(477);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(710);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(758);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(887);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(890);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(891);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(892);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(590);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(646);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(607);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(510);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(901);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(933);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(774);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(936);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(738);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(809);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(859);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(872);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(951);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(952);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(951);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(953);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(951);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1108);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1015);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(820);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(821);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(898);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(621);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(475);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(681);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(898);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(621);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(476);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(712);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(898);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(621);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(712);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(405);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(715);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(822);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(672);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(683);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(942);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(940);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(868);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(672);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(708);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(673);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(473);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(704);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(882);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(824);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(674);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(876);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(675);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(793);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(730);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(829);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(886);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(830);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(888);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(854);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(846);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(909);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(852);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(693);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(580);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(452);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(485);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(906);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(606);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(964);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(908);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(902);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(933);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(857);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(946);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(946);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(926);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(920);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(928);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1092);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1093);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1094);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(667);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(934);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1103);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(441);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(587);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(934);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(856);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(515);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(690);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(564);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(845);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(694);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(695);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(696);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(697);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(698);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(699);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(470);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(897);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(490);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1033);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(878);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1103);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(668);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(413);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(668);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1101);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1034);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(550);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(622);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(648);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(622);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(618);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(625);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(776);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(516);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1002);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(776);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(794);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(412);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(548);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(914);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(530);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(411);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(596);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(641);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(783);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(916);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(424);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(623);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(924);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(446);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1011);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(503);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1011);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(957);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(700);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(957);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1009);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1040);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1096);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1020);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1090);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1097);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1035);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(773);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(609);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(410);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(547);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(860);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(773);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(609);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(410);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(860);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(434);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(965);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(943);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(799);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(701);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(766);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(636);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(494);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(633);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(636);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(438);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(800);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(709);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(769);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(666);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(631);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(770);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1025);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1028);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1078);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1049);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1016);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1083);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(999);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(995);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1084);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1095);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1000);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1026);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(989);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1104);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1089);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1109);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1004);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(991);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1012);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1112);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1111);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1069);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1071);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(993);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1023);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1013);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1037);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1062);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1064);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1036);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1014);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(594);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(479);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(896);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(741);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(746);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(863);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(823);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(771);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(795);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(944);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(873);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(826);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(911);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(828);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(832);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(833);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(834);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(835);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(836);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(723);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(963);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(912);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(753);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(764);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(918);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(631);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(760);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(770);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(775);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(442);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(642);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1076);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1005);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1100);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1051);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1052);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1050);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(611);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(381);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(862);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(553);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(779);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(529);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(557);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(640);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(954);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(767);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(816);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(568);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(950);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(569);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(572);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(576);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(577);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1080);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1087);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(634);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(538);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(400);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(772);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(679);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(840);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(400);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(772);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(777);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(425);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(427);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(455);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(482);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(595);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(717);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1091);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(627);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(810);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(602);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(518);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(602);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(669);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(949);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(865);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(893);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(899);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(468);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(742);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(499);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(726);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(877);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(489);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(923);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(955);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(469);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(905);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(759);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(743);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(745);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(747);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(748);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(762);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(750);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(867);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(756);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(869);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(785);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(718);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(692);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(754);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(786);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(787);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(788);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(789);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(458);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(801);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(931);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(579);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(435);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(515);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(897);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1001);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1060);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1081);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1102);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1067);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1085);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(859);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(872);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(774);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(703);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(817);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(866);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(671);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(457);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(671);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(436);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(587);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(386);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(871);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(900);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(883);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(521);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(525);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(591);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(528);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(578);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(539);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(540);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(797);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(562);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(444);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(702);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(654);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(659);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(429);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(706);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(798);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(655);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(925);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(457);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(711);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(817);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(802);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(803);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(517);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(561);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(567);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(416);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(581);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(651);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(584);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1045);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1032);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(596);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1008);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1041);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1053);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1039);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(992);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1018);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1105);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1006);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1046);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1044);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1031);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1043);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1031);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(488);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(495);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(945);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(895);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(599);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(491);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(520);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(903);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(884);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(879);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(554);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(592);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(686);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(409);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(566);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(653);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(874);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(917);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(929);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(927);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(448);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(930);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(449);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(719);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(450);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(376);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(414);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(700);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(807);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(752);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(714);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(740);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(388);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(744);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(751);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(731);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(732);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(733);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(734);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(725);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(880);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(682);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(880);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(479);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(716);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(721);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(757);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(947);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(948);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(768);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1079);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1019);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(508);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(643);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(638);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(508);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(547);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(958);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(782);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(560);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(519);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(558);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(527);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(531);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(532);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(534);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(691);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(658);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(881);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1030);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1086);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(990);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1057);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1074);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1022);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1073);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(994);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1054);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1099);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1066);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1021);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1115);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1065);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1072);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(643);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(962);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(722);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(851);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(487);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(959);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(960);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(961);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(637);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(967);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(939);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(437);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(628);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(810);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(728);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(848);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(535);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(418);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(422);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(472);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(921);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(387);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1106);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1038);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1027);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(864);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(664);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(904);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(522);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(915);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(523);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(889);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(781);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(645);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(907);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(556);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(573);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(922);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(662);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(617);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1058);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1002);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1047);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1075);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1017);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1059);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1110);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1061);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1117);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1063);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1120);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1118);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1119);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1116);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(615);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(954);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(616);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(551);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(937);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(656);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(514);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1088);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(514);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(377);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(861);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(630);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(397);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(524);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(526);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(843);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(844);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(586);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(383);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(644);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(647);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(649);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(571);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(650);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(966);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(660);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(968);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(661);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(969);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(663);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(588);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(589);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(665);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(738);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(456);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(597);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(881);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(739);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(855);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(875);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(518);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(850);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(682);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(687);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(853);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(868);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(910);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(688);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(460);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(461);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(533);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(419);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1077);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1003);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(632);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(570);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(639);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(633);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1007);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1048);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(998);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1113);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1114);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(375);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(380);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(382);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(812);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(813);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(648);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(814);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(815);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(970);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(976);
      if (lookahead == '\r') ADVANCE(973);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(976);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(978);
      if (lookahead == '"') ADVANCE(987);
      if (lookahead != 0) ADVANCE(974);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '*') ADVANCE(980);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '-') ADVANCE(977);
      if (lookahead == '/') ADVANCE(975);
      if (lookahead == '\\') ADVANCE(972);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(976);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '-') ADVANCE(974);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '*') ADVANCE(979);
      if (lookahead == '/') ADVANCE(978);
      if (lookahead != 0) ADVANCE(980);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '*') ADVANCE(979);
      if (lookahead != 0) ADVANCE(980);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(66);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(334);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(983);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(984);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(985);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_comment_ml);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_comment_sl);
      if (lookahead == '"') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(988);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_comment_sl);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(988);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_kw_create);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_kw_alter);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_kw_package);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_kw_function);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_kw_procedure);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_kw_trigger);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_kw_type);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_kw_datatype_type);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_kw_datatype_rowtype);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_kw_library);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_kw_true);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_kw_false);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_kw_null);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_kw_not);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_kw_row);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_kw_compile);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_kw_debug);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_kw_specification);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_kw_body);
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
          lookahead == 't') ADVANCE(513);
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
          lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_kw_is);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_kw_is);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(811);
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
      ACCEPT_TOKEN(sym_kw_notfound);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_kw_in);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_kw_in);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(556);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_kw_in);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(556);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1058);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_kw_in);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1058);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_kw_out);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_kw_nocopy);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_kw_like);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_kw_inserting);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_kw_deleting);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_kw_updating);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_kw_return);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_kw_varchar);
      if (lookahead == '2') ADVANCE(1055);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_kw_varchar2);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_kw_nvarchar2);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_kw_nchar);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_kw_int);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_kw_smallint);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_kw_real);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_kw_binary_float);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_kw_binary_double);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_kw_simple_float);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_kw_simple_double);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_kw_binary_integer);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_kw_pls_integer);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_kw_natural);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1068);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_kw_naturaln);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_kw_positive);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1070);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_kw_positiven);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_kw_signtype);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_kw_simple_integer);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_kw_integer);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_kw_number);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_kw_float);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_kw_long);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_kw_raw);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_kw_date);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_kw_timestamp);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_kw_with);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_kw_local);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_kw_time);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_kw_time);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(907);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_kw_zone);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_kw_interval);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_kw_year);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_kw_month);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_kw_day);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_kw_minute);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_kw_second);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_kw_to);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_kw_blob);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_kw_clob);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_kw_nclob);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_kw_bfile);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_kw_rowid);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_kw_urowid);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_kw_boolean);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_kw_character);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_kw_varying);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_kw_numeric);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_kw_decimal);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_kw_dec);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_kw_double);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_kw_precision);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_kw_sys);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_kw_anydata);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_kw_anydata);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_kw_anytype);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_kw_anydataset);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_kw_xmltype);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_kw_uritype);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_kw_sdo_geometry);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_kw_sdo_topo_geometry);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_kw_sdo_georaster);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_kw_json_element_t);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_kw_json_array_t);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_kw_json_object_t);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_kw_json_scalar_t);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_kw_json_key_list);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 47},
  [3] = {.lex_state = 59},
  [4] = {.lex_state = 60},
  [5] = {.lex_state = 60},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 61},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 43},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 43},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 43},
  [20] = {.lex_state = 43},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 43},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 46},
  [28] = {.lex_state = 46},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 43},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 43},
  [34] = {.lex_state = 43},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 44},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 43},
  [40] = {.lex_state = 55},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 55},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 55},
  [48] = {.lex_state = 55},
  [49] = {.lex_state = 44},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 55},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 44},
  [54] = {.lex_state = 43},
  [55] = {.lex_state = 55},
  [56] = {.lex_state = 55},
  [57] = {.lex_state = 55},
  [58] = {.lex_state = 55},
  [59] = {.lex_state = 55},
  [60] = {.lex_state = 55},
  [61] = {.lex_state = 55},
  [62] = {.lex_state = 55},
  [63] = {.lex_state = 43},
  [64] = {.lex_state = 55},
  [65] = {.lex_state = 43},
  [66] = {.lex_state = 43},
  [67] = {.lex_state = 43},
  [68] = {.lex_state = 43},
  [69] = {.lex_state = 55},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 43},
  [72] = {.lex_state = 43},
  [73] = {.lex_state = 55},
  [74] = {.lex_state = 43},
  [75] = {.lex_state = 55},
  [76] = {.lex_state = 43},
  [77] = {.lex_state = 43},
  [78] = {.lex_state = 43},
  [79] = {.lex_state = 55},
  [80] = {.lex_state = 55},
  [81] = {.lex_state = 55},
  [82] = {.lex_state = 55},
  [83] = {.lex_state = 55},
  [84] = {.lex_state = 55},
  [85] = {.lex_state = 55},
  [86] = {.lex_state = 43},
  [87] = {.lex_state = 55},
  [88] = {.lex_state = 55},
  [89] = {.lex_state = 43},
  [90] = {.lex_state = 55},
  [91] = {.lex_state = 43},
  [92] = {.lex_state = 55},
  [93] = {.lex_state = 55},
  [94] = {.lex_state = 55},
  [95] = {.lex_state = 43},
  [96] = {.lex_state = 55},
  [97] = {.lex_state = 55},
  [98] = {.lex_state = 43},
  [99] = {.lex_state = 43},
  [100] = {.lex_state = 55},
  [101] = {.lex_state = 55},
  [102] = {.lex_state = 55},
  [103] = {.lex_state = 43},
  [104] = {.lex_state = 55},
  [105] = {.lex_state = 45},
  [106] = {.lex_state = 46},
  [107] = {.lex_state = 46},
  [108] = {.lex_state = 46},
  [109] = {.lex_state = 44},
  [110] = {.lex_state = 44},
  [111] = {.lex_state = 44},
  [112] = {.lex_state = 44},
  [113] = {.lex_state = 46},
  [114] = {.lex_state = 46},
  [115] = {.lex_state = 46},
  [116] = {.lex_state = 46},
  [117] = {.lex_state = 46},
  [118] = {.lex_state = 46},
  [119] = {.lex_state = 46},
  [120] = {.lex_state = 45},
  [121] = {.lex_state = 44},
  [122] = {.lex_state = 45},
  [123] = {.lex_state = 44},
  [124] = {.lex_state = 46},
  [125] = {.lex_state = 46},
  [126] = {.lex_state = 44},
  [127] = {.lex_state = 45},
  [128] = {.lex_state = 44},
  [129] = {.lex_state = 44},
  [130] = {.lex_state = 45},
  [131] = {.lex_state = 44},
  [132] = {.lex_state = 45},
  [133] = {.lex_state = 44},
  [134] = {.lex_state = 50},
  [135] = {.lex_state = 44},
  [136] = {.lex_state = 44},
  [137] = {.lex_state = 44},
  [138] = {.lex_state = 44},
  [139] = {.lex_state = 44},
  [140] = {.lex_state = 50},
  [141] = {.lex_state = 44},
  [142] = {.lex_state = 44},
  [143] = {.lex_state = 50},
  [144] = {.lex_state = 44},
  [145] = {.lex_state = 50},
  [146] = {.lex_state = 44},
  [147] = {.lex_state = 44},
  [148] = {.lex_state = 44},
  [149] = {.lex_state = 44},
  [150] = {.lex_state = 44},
  [151] = {.lex_state = 50},
  [152] = {.lex_state = 44},
  [153] = {.lex_state = 44},
  [154] = {.lex_state = 44},
  [155] = {.lex_state = 44},
  [156] = {.lex_state = 44},
  [157] = {.lex_state = 44},
  [158] = {.lex_state = 44},
  [159] = {.lex_state = 44},
  [160] = {.lex_state = 44},
  [161] = {.lex_state = 44},
  [162] = {.lex_state = 44},
  [163] = {.lex_state = 44},
  [164] = {.lex_state = 44},
  [165] = {.lex_state = 44},
  [166] = {.lex_state = 44},
  [167] = {.lex_state = 44},
  [168] = {.lex_state = 44},
  [169] = {.lex_state = 44},
  [170] = {.lex_state = 44},
  [171] = {.lex_state = 343},
  [172] = {.lex_state = 45},
  [173] = {.lex_state = 46},
  [174] = {.lex_state = 46},
  [175] = {.lex_state = 46},
  [176] = {.lex_state = 45},
  [177] = {.lex_state = 46},
  [178] = {.lex_state = 46},
  [179] = {.lex_state = 46},
  [180] = {.lex_state = 344},
  [181] = {.lex_state = 46},
  [182] = {.lex_state = 45},
  [183] = {.lex_state = 46},
  [184] = {.lex_state = 46},
  [185] = {.lex_state = 46},
  [186] = {.lex_state = 46},
  [187] = {.lex_state = 46},
  [188] = {.lex_state = 45},
  [189] = {.lex_state = 46},
  [190] = {.lex_state = 46},
  [191] = {.lex_state = 46},
  [192] = {.lex_state = 46},
  [193] = {.lex_state = 46},
  [194] = {.lex_state = 46},
  [195] = {.lex_state = 46},
  [196] = {.lex_state = 345},
  [197] = {.lex_state = 50},
  [198] = {.lex_state = 46},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 345},
  [201] = {.lex_state = 345},
  [202] = {.lex_state = 46},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 345},
  [205] = {.lex_state = 345},
  [206] = {.lex_state = 58},
  [207] = {.lex_state = 345},
  [208] = {.lex_state = 58},
  [209] = {.lex_state = 58},
  [210] = {.lex_state = 46},
  [211] = {.lex_state = 46},
  [212] = {.lex_state = 46},
  [213] = {.lex_state = 46},
  [214] = {.lex_state = 55},
  [215] = {.lex_state = 46},
  [216] = {.lex_state = 343},
  [217] = {.lex_state = 50},
  [218] = {.lex_state = 50},
  [219] = {.lex_state = 343},
  [220] = {.lex_state = 343},
  [221] = {.lex_state = 343},
  [222] = {.lex_state = 50},
  [223] = {.lex_state = 50},
  [224] = {.lex_state = 343},
  [225] = {.lex_state = 343},
  [226] = {.lex_state = 50},
  [227] = {.lex_state = 343},
  [228] = {.lex_state = 343},
  [229] = {.lex_state = 50},
  [230] = {.lex_state = 345},
  [231] = {.lex_state = 345},
  [232] = {.lex_state = 50},
  [233] = {.lex_state = 343},
  [234] = {.lex_state = 343},
  [235] = {.lex_state = 46},
  [236] = {.lex_state = 50},
  [237] = {.lex_state = 50},
  [238] = {.lex_state = 343},
  [239] = {.lex_state = 46},
  [240] = {.lex_state = 343},
  [241] = {.lex_state = 343},
  [242] = {.lex_state = 343},
  [243] = {.lex_state = 43},
  [244] = {.lex_state = 46},
  [245] = {.lex_state = 345},
  [246] = {.lex_state = 343},
  [247] = {.lex_state = 343},
  [248] = {.lex_state = 343},
  [249] = {.lex_state = 46},
  [250] = {.lex_state = 51},
  [251] = {.lex_state = 58},
  [252] = {.lex_state = 58},
  [253] = {.lex_state = 50},
  [254] = {.lex_state = 58},
  [255] = {.lex_state = 52},
  [256] = {.lex_state = 58},
  [257] = {.lex_state = 46},
  [258] = {.lex_state = 51},
  [259] = {.lex_state = 58},
  [260] = {.lex_state = 46},
  [261] = {.lex_state = 46},
  [262] = {.lex_state = 48},
  [263] = {.lex_state = 48},
  [264] = {.lex_state = 48},
  [265] = {.lex_state = 48},
  [266] = {.lex_state = 58},
  [267] = {.lex_state = 46},
  [268] = {.lex_state = 48},
  [269] = {.lex_state = 48},
  [270] = {.lex_state = 48},
  [271] = {.lex_state = 46},
  [272] = {.lex_state = 46},
  [273] = {.lex_state = 48},
  [274] = {.lex_state = 343},
  [275] = {.lex_state = 46},
  [276] = {.lex_state = 48},
  [277] = {.lex_state = 46},
  [278] = {.lex_state = 46},
  [279] = {.lex_state = 46},
  [280] = {.lex_state = 46},
  [281] = {.lex_state = 46},
  [282] = {.lex_state = 46},
  [283] = {.lex_state = 46},
  [284] = {.lex_state = 46},
  [285] = {.lex_state = 46},
  [286] = {.lex_state = 46},
  [287] = {.lex_state = 46},
  [288] = {.lex_state = 46},
  [289] = {.lex_state = 46},
  [290] = {.lex_state = 48},
  [291] = {.lex_state = 48},
  [292] = {.lex_state = 343},
  [293] = {.lex_state = 343},
  [294] = {.lex_state = 52},
  [295] = {.lex_state = 53},
  [296] = {.lex_state = 46},
  [297] = {.lex_state = 49},
  [298] = {.lex_state = 54},
  [299] = {.lex_state = 48},
  [300] = {.lex_state = 343},
  [301] = {.lex_state = 54},
  [302] = {.lex_state = 46},
  [303] = {.lex_state = 343},
  [304] = {.lex_state = 46},
  [305] = {.lex_state = 46},
  [306] = {.lex_state = 343},
  [307] = {.lex_state = 46},
  [308] = {.lex_state = 46},
  [309] = {.lex_state = 48},
  [310] = {.lex_state = 65},
  [311] = {.lex_state = 46},
  [312] = {.lex_state = 46},
  [313] = {.lex_state = 49},
  [314] = {.lex_state = 49},
  [315] = {.lex_state = 343},
  [316] = {.lex_state = 343},
  [317] = {.lex_state = 46},
  [318] = {.lex_state = 46},
  [319] = {.lex_state = 56},
  [320] = {.lex_state = 46},
  [321] = {.lex_state = 46},
  [322] = {.lex_state = 52},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 46},
  [325] = {.lex_state = 46},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 48},
  [334] = {.lex_state = 48},
  [335] = {.lex_state = 48},
  [336] = {.lex_state = 48},
  [337] = {.lex_state = 48},
  [338] = {.lex_state = 48},
  [339] = {.lex_state = 48},
  [340] = {.lex_state = 46},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 46},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 49},
  [346] = {.lex_state = 48},
  [347] = {.lex_state = 49},
  [348] = {.lex_state = 48},
  [349] = {.lex_state = 48},
  [350] = {.lex_state = 48},
  [351] = {.lex_state = 48},
  [352] = {.lex_state = 48},
  [353] = {.lex_state = 48},
  [354] = {.lex_state = 49},
  [355] = {.lex_state = 49},
  [356] = {.lex_state = 48},
  [357] = {.lex_state = 48},
  [358] = {.lex_state = 48},
  [359] = {.lex_state = 49},
  [360] = {.lex_state = 49},
  [361] = {.lex_state = 48},
  [362] = {.lex_state = 48},
  [363] = {.lex_state = 48},
  [364] = {.lex_state = 48},
  [365] = {.lex_state = 48},
  [366] = {.lex_state = 48},
  [367] = {.lex_state = 48},
  [368] = {.lex_state = 48},
  [369] = {.lex_state = 48},
  [370] = {.lex_state = 48},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 48},
  [373] = {.lex_state = 48},
  [374] = {.lex_state = 48},
  [375] = {.lex_state = 48},
  [376] = {.lex_state = 48},
  [377] = {.lex_state = 48},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 46},
  [380] = {.lex_state = 49},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 49},
  [383] = {.lex_state = 49},
  [384] = {.lex_state = 49},
  [385] = {.lex_state = 49},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 49},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 46},
  [390] = {.lex_state = 46},
  [391] = {.lex_state = 53},
  [392] = {.lex_state = 46},
  [393] = {.lex_state = 46},
  [394] = {.lex_state = 46},
  [395] = {.lex_state = 46},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 46},
  [398] = {.lex_state = 46},
  [399] = {.lex_state = 46},
  [400] = {.lex_state = 46},
  [401] = {.lex_state = 46},
  [402] = {.lex_state = 46},
  [403] = {.lex_state = 46},
  [404] = {.lex_state = 46},
  [405] = {.lex_state = 46},
  [406] = {.lex_state = 57},
  [407] = {.lex_state = 46},
  [408] = {.lex_state = 46},
  [409] = {.lex_state = 46},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 53},
  [412] = {.lex_state = 46},
  [413] = {.lex_state = 46},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 46},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 46},
  [419] = {.lex_state = 46},
  [420] = {.lex_state = 46},
  [421] = {.lex_state = 46},
  [422] = {.lex_state = 46},
  [423] = {.lex_state = 46},
  [424] = {.lex_state = 46},
  [425] = {.lex_state = 46},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 49},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 46},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 46},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 49},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 46},
  [436] = {.lex_state = 62},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 62},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 46},
  [442] = {.lex_state = 46},
  [443] = {.lex_state = 62},
  [444] = {.lex_state = 46},
  [445] = {.lex_state = 49},
  [446] = {.lex_state = 49},
  [447] = {.lex_state = 49},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 49},
  [450] = {.lex_state = 46},
  [451] = {.lex_state = 49},
  [452] = {.lex_state = 49},
  [453] = {.lex_state = 343},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 49},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 49},
  [459] = {.lex_state = 46},
  [460] = {.lex_state = 49},
  [461] = {.lex_state = 49},
  [462] = {.lex_state = 49},
  [463] = {.lex_state = 49},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 49},
  [466] = {.lex_state = 49},
  [467] = {.lex_state = 49},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 46},
  [470] = {.lex_state = 49},
  [471] = {.lex_state = 65},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 49},
  [475] = {.lex_state = 46},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 46},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 46},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 49},
  [483] = {.lex_state = 49},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 49},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 49},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 49},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 49},
  [493] = {.lex_state = 49},
  [494] = {.lex_state = 49},
  [495] = {.lex_state = 49},
  [496] = {.lex_state = 49},
  [497] = {.lex_state = 49},
  [498] = {.lex_state = 49},
  [499] = {.lex_state = 49},
  [500] = {.lex_state = 49},
  [501] = {.lex_state = 49},
  [502] = {.lex_state = 49},
  [503] = {.lex_state = 49},
  [504] = {.lex_state = 49},
  [505] = {.lex_state = 49},
  [506] = {.lex_state = 49},
  [507] = {.lex_state = 49},
  [508] = {.lex_state = 49},
  [509] = {.lex_state = 49},
  [510] = {.lex_state = 49},
  [511] = {.lex_state = 49},
  [512] = {.lex_state = 49},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 49},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 49},
  [517] = {.lex_state = 49},
  [518] = {.lex_state = 49},
  [519] = {.lex_state = 49},
  [520] = {.lex_state = 49},
  [521] = {.lex_state = 49},
  [522] = {.lex_state = 49},
  [523] = {.lex_state = 49},
  [524] = {.lex_state = 49},
  [525] = {.lex_state = 49},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 49},
  [528] = {.lex_state = 49},
  [529] = {.lex_state = 49},
  [530] = {.lex_state = 49},
  [531] = {.lex_state = 49},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 46},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 46},
  [539] = {.lex_state = 46},
  [540] = {.lex_state = 46},
  [541] = {.lex_state = 46},
  [542] = {.lex_state = 46},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 46},
  [545] = {.lex_state = 49},
  [546] = {.lex_state = 46},
  [547] = {.lex_state = 46},
  [548] = {.lex_state = 46},
  [549] = {.lex_state = 46},
  [550] = {.lex_state = 46},
  [551] = {.lex_state = 46},
  [552] = {.lex_state = 46},
  [553] = {.lex_state = 65},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 46},
  [556] = {.lex_state = 46},
  [557] = {.lex_state = 46},
  [558] = {.lex_state = 65},
  [559] = {.lex_state = 46},
  [560] = {.lex_state = 46},
  [561] = {.lex_state = 46},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 46},
  [564] = {.lex_state = 46},
  [565] = {.lex_state = 343},
  [566] = {.lex_state = 46},
  [567] = {.lex_state = 46},
  [568] = {.lex_state = 46},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 46},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 47},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 46},
  [575] = {.lex_state = 46},
  [576] = {.lex_state = 46},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 46},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 49},
  [584] = {.lex_state = 47},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 46},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 47},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 46},
  [592] = {.lex_state = 47},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 47},
  [596] = {.lex_state = 46},
  [597] = {.lex_state = 47},
  [598] = {.lex_state = 49},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 46},
  [602] = {.lex_state = 46},
  [603] = {.lex_state = 46},
  [604] = {.lex_state = 47},
  [605] = {.lex_state = 46},
  [606] = {.lex_state = 47},
  [607] = {.lex_state = 47},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 47},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 46},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 46},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 46},
  [621] = {.lex_state = 47},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 46},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 46},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 46},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 46},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 46},
  [636] = {.lex_state = 46},
  [637] = {.lex_state = 46},
  [638] = {.lex_state = 47},
  [639] = {.lex_state = 976},
  [640] = {.lex_state = 47},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 46},
  [643] = {.lex_state = 46},
  [644] = {.lex_state = 46},
  [645] = {.lex_state = 46},
  [646] = {.lex_state = 46},
  [647] = {.lex_state = 46},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 46},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 46},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 976},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 47},
  [668] = {.lex_state = 47},
  [669] = {.lex_state = 47},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 47},
  [672] = {.lex_state = 47},
  [673] = {.lex_state = 46},
  [674] = {.lex_state = 46},
  [675] = {.lex_state = 46},
  [676] = {.lex_state = 46},
  [677] = {.lex_state = 46},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 46},
  [681] = {.lex_state = 46},
  [682] = {.lex_state = 65},
  [683] = {.lex_state = 46},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 46},
  [686] = {.lex_state = 46},
  [687] = {.lex_state = 46},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 47},
  [691] = {.lex_state = 976},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 47},
  [694] = {.lex_state = 47},
  [695] = {.lex_state = 46},
  [696] = {.lex_state = 59},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 47},
  [699] = {.lex_state = 46},
  [700] = {.lex_state = 46},
  [701] = {.lex_state = 46},
  [702] = {.lex_state = 46},
  [703] = {.lex_state = 46},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 46},
  [706] = {.lex_state = 46},
  [707] = {.lex_state = 976},
  [708] = {.lex_state = 47},
  [709] = {.lex_state = 976},
  [710] = {.lex_state = 47},
  [711] = {.lex_state = 976},
  [712] = {.lex_state = 976},
  [713] = {.lex_state = 976},
  [714] = {.lex_state = 976},
  [715] = {.lex_state = 46},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 46},
  [718] = {.lex_state = 46},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
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
    [sym_kw_datatype_rowtype] = ACTIONS(1),
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
    [sym_source_file] = STATE(716),
    [sym__element] = STATE(203),
    [sym_sql_statement] = STATE(203),
    [sym__ddl_statement] = STATE(526),
    [sym__create_statement] = STATE(526),
    [sym_create_package] = STATE(526),
    [sym__alter_statement] = STATE(526),
    [sym_alter_package] = STATE(526),
    [sym_alter_procedure] = STATE(526),
    [sym_alter_function] = STATE(526),
    [sym_alter_library] = STATE(526),
    [sym_create_obj] = STATE(453),
    [aux_sym_source_file_repeat1] = STATE(203),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment_ml] = ACTIONS(7),
    [sym_comment_sl] = ACTIONS(7),
    [sym_kw_create] = ACTIONS(9),
    [sym_kw_alter] = ACTIONS(11),
  },
  [2] = {
    [sym_datatype] = STATE(299),
    [sym__character_datatypes] = STATE(377),
    [sym__character_datatypes_char] = STATE(377),
    [sym__character_datatypes_varchar2] = STATE(377),
    [sym__character_datatypes_nchar] = STATE(377),
    [sym__character_datatypes_nvarchar2] = STATE(377),
    [sym__number_datatypes] = STATE(377),
    [sym__number_datatypes_keyword] = STATE(377),
    [sym__number_datatypes_number] = STATE(377),
    [sym__number_datatypes_float] = STATE(377),
    [sym__long_and_raw_datatypes] = STATE(377),
    [sym__long_and_raw_datatypes_long_raw] = STATE(377),
    [sym__long_and_raw_datatypes_raw] = STATE(377),
    [sym__datetime_datatypes] = STATE(377),
    [sym__datetime_datatypes_keyword] = STATE(377),
    [sym__datetime_datatypes_date_timestamp] = STATE(377),
    [sym__datetime_datatypes_date_interval_year] = STATE(377),
    [sym__datetime_datatypes_date_interval_day] = STATE(377),
    [sym__large_object_datatypes] = STATE(377),
    [sym__rowid_datatypes] = STATE(377),
    [sym__referenced_datatypes] = STATE(377),
    [sym__referenced_datatypes_type] = STATE(377),
    [sym__referenced_datatypes_rowtype] = STATE(377),
    [sym__logical_datatypes] = STATE(377),
    [sym__subtype_datatypes] = STATE(377),
    [sym__rowid_datatypes_urowid] = STATE(377),
    [sym__ansi_supported_datatypes_character] = STATE(377),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(377),
    [sym__ansi_supported_datatypes_varchar] = STATE(377),
    [sym__ansi_supported_datatypes_national] = STATE(377),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(377),
    [sym__ansi_supported_datatypes_double_precision] = STATE(377),
    [sym__supplied_datatypes_any_types] = STATE(377),
    [sym__supplied_datatypes_xml_types] = STATE(377),
    [sym__supplied_datatypes_spatial_types] = STATE(377),
    [sym__object_datatypes] = STATE(377),
    [sym__parameter_declaration_element_in] = STATE(485),
    [sym__parameter_declaration_element_in_out_or_out] = STATE(485),
    [sym_identifier] = STATE(262),
    [sym__quoted_identifier] = STATE(291),
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
    [sym_datatype] = STATE(309),
    [sym__character_datatypes] = STATE(377),
    [sym__character_datatypes_char] = STATE(377),
    [sym__character_datatypes_varchar2] = STATE(377),
    [sym__character_datatypes_nchar] = STATE(377),
    [sym__character_datatypes_nvarchar2] = STATE(377),
    [sym__number_datatypes] = STATE(377),
    [sym__number_datatypes_keyword] = STATE(377),
    [sym__number_datatypes_number] = STATE(377),
    [sym__number_datatypes_float] = STATE(377),
    [sym__long_and_raw_datatypes] = STATE(377),
    [sym__long_and_raw_datatypes_long_raw] = STATE(377),
    [sym__long_and_raw_datatypes_raw] = STATE(377),
    [sym__datetime_datatypes] = STATE(377),
    [sym__datetime_datatypes_keyword] = STATE(377),
    [sym__datetime_datatypes_date_timestamp] = STATE(377),
    [sym__datetime_datatypes_date_interval_year] = STATE(377),
    [sym__datetime_datatypes_date_interval_day] = STATE(377),
    [sym__large_object_datatypes] = STATE(377),
    [sym__rowid_datatypes] = STATE(377),
    [sym__referenced_datatypes] = STATE(377),
    [sym__referenced_datatypes_type] = STATE(377),
    [sym__referenced_datatypes_rowtype] = STATE(377),
    [sym__logical_datatypes] = STATE(377),
    [sym__subtype_datatypes] = STATE(377),
    [sym__rowid_datatypes_urowid] = STATE(377),
    [sym__ansi_supported_datatypes_character] = STATE(377),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(377),
    [sym__ansi_supported_datatypes_varchar] = STATE(377),
    [sym__ansi_supported_datatypes_national] = STATE(377),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(377),
    [sym__ansi_supported_datatypes_double_precision] = STATE(377),
    [sym__supplied_datatypes_any_types] = STATE(377),
    [sym__supplied_datatypes_xml_types] = STATE(377),
    [sym__supplied_datatypes_spatial_types] = STATE(377),
    [sym__object_datatypes] = STATE(377),
    [sym_identifier] = STATE(262),
    [sym__quoted_identifier] = STATE(291),
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
    [sym_datatype] = STATE(501),
    [sym__character_datatypes] = STATE(490),
    [sym__character_datatypes_char] = STATE(490),
    [sym__character_datatypes_varchar2] = STATE(490),
    [sym__character_datatypes_nchar] = STATE(490),
    [sym__character_datatypes_nvarchar2] = STATE(490),
    [sym__number_datatypes] = STATE(490),
    [sym__number_datatypes_keyword] = STATE(490),
    [sym__number_datatypes_number] = STATE(490),
    [sym__number_datatypes_float] = STATE(490),
    [sym__long_and_raw_datatypes] = STATE(490),
    [sym__long_and_raw_datatypes_long_raw] = STATE(490),
    [sym__long_and_raw_datatypes_raw] = STATE(490),
    [sym__datetime_datatypes] = STATE(490),
    [sym__datetime_datatypes_keyword] = STATE(490),
    [sym__datetime_datatypes_date_timestamp] = STATE(490),
    [sym__datetime_datatypes_date_interval_year] = STATE(490),
    [sym__datetime_datatypes_date_interval_day] = STATE(490),
    [sym__large_object_datatypes] = STATE(490),
    [sym__rowid_datatypes] = STATE(490),
    [sym__referenced_datatypes] = STATE(490),
    [sym__referenced_datatypes_type] = STATE(490),
    [sym__referenced_datatypes_rowtype] = STATE(490),
    [sym__logical_datatypes] = STATE(490),
    [sym__subtype_datatypes] = STATE(490),
    [sym__rowid_datatypes_urowid] = STATE(490),
    [sym__ansi_supported_datatypes_character] = STATE(490),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(490),
    [sym__ansi_supported_datatypes_varchar] = STATE(490),
    [sym__ansi_supported_datatypes_national] = STATE(490),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(490),
    [sym__ansi_supported_datatypes_double_precision] = STATE(490),
    [sym__supplied_datatypes_any_types] = STATE(490),
    [sym__supplied_datatypes_xml_types] = STATE(490),
    [sym__supplied_datatypes_spatial_types] = STATE(490),
    [sym__object_datatypes] = STATE(490),
    [sym_identifier] = STATE(385),
    [sym__quoted_identifier] = STATE(360),
    [sym__unquoted_identifier] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(65),
    [sym_kw_nocopy] = ACTIONS(67),
    [sym_kw_varchar] = ACTIONS(69),
    [sym_kw_varchar2] = ACTIONS(71),
    [sym_kw_nvarchar2] = ACTIONS(73),
    [sym_kw_nchar] = ACTIONS(75),
    [sym_kw_int] = ACTIONS(77),
    [sym_kw_smallint] = ACTIONS(79),
    [sym_kw_real] = ACTIONS(79),
    [sym_kw_binary_float] = ACTIONS(79),
    [sym_kw_binary_double] = ACTIONS(79),
    [sym_kw_simple_float] = ACTIONS(79),
    [sym_kw_simple_double] = ACTIONS(79),
    [sym_kw_binary_integer] = ACTIONS(79),
    [sym_kw_pls_integer] = ACTIONS(79),
    [sym_kw_natural] = ACTIONS(77),
    [sym_kw_naturaln] = ACTIONS(79),
    [sym_kw_positive] = ACTIONS(77),
    [sym_kw_positiven] = ACTIONS(79),
    [sym_kw_signtype] = ACTIONS(79),
    [sym_kw_simple_integer] = ACTIONS(79),
    [sym_kw_integer] = ACTIONS(79),
    [sym_kw_number] = ACTIONS(81),
    [sym_kw_float] = ACTIONS(83),
    [sym_kw_long] = ACTIONS(85),
    [sym_kw_raw] = ACTIONS(87),
    [sym_kw_date] = ACTIONS(79),
    [sym_kw_timestamp] = ACTIONS(89),
    [sym_kw_interval] = ACTIONS(91),
    [sym_kw_blob] = ACTIONS(79),
    [sym_kw_clob] = ACTIONS(79),
    [sym_kw_nclob] = ACTIONS(79),
    [sym_kw_bfile] = ACTIONS(79),
    [sym_kw_rowid] = ACTIONS(79),
    [sym_kw_urowid] = ACTIONS(93),
    [sym_kw_boolean] = ACTIONS(79),
    [sym_kw_character] = ACTIONS(95),
    [sym_kw_numeric] = ACTIONS(97),
    [sym_kw_decimal] = ACTIONS(97),
    [sym_kw_dec] = ACTIONS(99),
    [sym_kw_double] = ACTIONS(101),
    [sym_kw_sys] = ACTIONS(103),
    [sym_kw_xmltype] = ACTIONS(79),
    [sym_kw_uritype] = ACTIONS(79),
    [sym_kw_sdo_geometry] = ACTIONS(79),
    [sym_kw_sdo_topo_geometry] = ACTIONS(79),
    [sym_kw_sdo_georaster] = ACTIONS(79),
    [sym_kw_json_element_t] = ACTIONS(79),
    [sym_kw_json_array_t] = ACTIONS(79),
    [sym_kw_json_object_t] = ACTIONS(79),
    [sym_kw_json_scalar_t] = ACTIONS(79),
    [sym_kw_json_key_list] = ACTIONS(79),
  },
  [5] = {
    [sym_datatype] = STATE(455),
    [sym__character_datatypes] = STATE(490),
    [sym__character_datatypes_char] = STATE(490),
    [sym__character_datatypes_varchar2] = STATE(490),
    [sym__character_datatypes_nchar] = STATE(490),
    [sym__character_datatypes_nvarchar2] = STATE(490),
    [sym__number_datatypes] = STATE(490),
    [sym__number_datatypes_keyword] = STATE(490),
    [sym__number_datatypes_number] = STATE(490),
    [sym__number_datatypes_float] = STATE(490),
    [sym__long_and_raw_datatypes] = STATE(490),
    [sym__long_and_raw_datatypes_long_raw] = STATE(490),
    [sym__long_and_raw_datatypes_raw] = STATE(490),
    [sym__datetime_datatypes] = STATE(490),
    [sym__datetime_datatypes_keyword] = STATE(490),
    [sym__datetime_datatypes_date_timestamp] = STATE(490),
    [sym__datetime_datatypes_date_interval_year] = STATE(490),
    [sym__datetime_datatypes_date_interval_day] = STATE(490),
    [sym__large_object_datatypes] = STATE(490),
    [sym__rowid_datatypes] = STATE(490),
    [sym__referenced_datatypes] = STATE(490),
    [sym__referenced_datatypes_type] = STATE(490),
    [sym__referenced_datatypes_rowtype] = STATE(490),
    [sym__logical_datatypes] = STATE(490),
    [sym__subtype_datatypes] = STATE(490),
    [sym__rowid_datatypes_urowid] = STATE(490),
    [sym__ansi_supported_datatypes_character] = STATE(490),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(490),
    [sym__ansi_supported_datatypes_varchar] = STATE(490),
    [sym__ansi_supported_datatypes_national] = STATE(490),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(490),
    [sym__ansi_supported_datatypes_double_precision] = STATE(490),
    [sym__supplied_datatypes_any_types] = STATE(490),
    [sym__supplied_datatypes_xml_types] = STATE(490),
    [sym__supplied_datatypes_spatial_types] = STATE(490),
    [sym__object_datatypes] = STATE(490),
    [sym_identifier] = STATE(385),
    [sym__quoted_identifier] = STATE(360),
    [sym__unquoted_identifier] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(65),
    [sym_kw_nocopy] = ACTIONS(105),
    [sym_kw_varchar] = ACTIONS(69),
    [sym_kw_varchar2] = ACTIONS(71),
    [sym_kw_nvarchar2] = ACTIONS(73),
    [sym_kw_nchar] = ACTIONS(75),
    [sym_kw_int] = ACTIONS(77),
    [sym_kw_smallint] = ACTIONS(79),
    [sym_kw_real] = ACTIONS(79),
    [sym_kw_binary_float] = ACTIONS(79),
    [sym_kw_binary_double] = ACTIONS(79),
    [sym_kw_simple_float] = ACTIONS(79),
    [sym_kw_simple_double] = ACTIONS(79),
    [sym_kw_binary_integer] = ACTIONS(79),
    [sym_kw_pls_integer] = ACTIONS(79),
    [sym_kw_natural] = ACTIONS(77),
    [sym_kw_naturaln] = ACTIONS(79),
    [sym_kw_positive] = ACTIONS(77),
    [sym_kw_positiven] = ACTIONS(79),
    [sym_kw_signtype] = ACTIONS(79),
    [sym_kw_simple_integer] = ACTIONS(79),
    [sym_kw_integer] = ACTIONS(79),
    [sym_kw_number] = ACTIONS(81),
    [sym_kw_float] = ACTIONS(83),
    [sym_kw_long] = ACTIONS(85),
    [sym_kw_raw] = ACTIONS(87),
    [sym_kw_date] = ACTIONS(79),
    [sym_kw_timestamp] = ACTIONS(89),
    [sym_kw_interval] = ACTIONS(91),
    [sym_kw_blob] = ACTIONS(79),
    [sym_kw_clob] = ACTIONS(79),
    [sym_kw_nclob] = ACTIONS(79),
    [sym_kw_bfile] = ACTIONS(79),
    [sym_kw_rowid] = ACTIONS(79),
    [sym_kw_urowid] = ACTIONS(93),
    [sym_kw_boolean] = ACTIONS(79),
    [sym_kw_character] = ACTIONS(95),
    [sym_kw_numeric] = ACTIONS(97),
    [sym_kw_decimal] = ACTIONS(97),
    [sym_kw_dec] = ACTIONS(99),
    [sym_kw_double] = ACTIONS(101),
    [sym_kw_sys] = ACTIONS(103),
    [sym_kw_xmltype] = ACTIONS(79),
    [sym_kw_uritype] = ACTIONS(79),
    [sym_kw_sdo_geometry] = ACTIONS(79),
    [sym_kw_sdo_topo_geometry] = ACTIONS(79),
    [sym_kw_sdo_georaster] = ACTIONS(79),
    [sym_kw_json_element_t] = ACTIONS(79),
    [sym_kw_json_array_t] = ACTIONS(79),
    [sym_kw_json_object_t] = ACTIONS(79),
    [sym_kw_json_scalar_t] = ACTIONS(79),
    [sym_kw_json_key_list] = ACTIONS(79),
  },
  [6] = {
    [sym_datatype] = STATE(501),
    [sym__character_datatypes] = STATE(490),
    [sym__character_datatypes_char] = STATE(490),
    [sym__character_datatypes_varchar2] = STATE(490),
    [sym__character_datatypes_nchar] = STATE(490),
    [sym__character_datatypes_nvarchar2] = STATE(490),
    [sym__number_datatypes] = STATE(490),
    [sym__number_datatypes_keyword] = STATE(490),
    [sym__number_datatypes_number] = STATE(490),
    [sym__number_datatypes_float] = STATE(490),
    [sym__long_and_raw_datatypes] = STATE(490),
    [sym__long_and_raw_datatypes_long_raw] = STATE(490),
    [sym__long_and_raw_datatypes_raw] = STATE(490),
    [sym__datetime_datatypes] = STATE(490),
    [sym__datetime_datatypes_keyword] = STATE(490),
    [sym__datetime_datatypes_date_timestamp] = STATE(490),
    [sym__datetime_datatypes_date_interval_year] = STATE(490),
    [sym__datetime_datatypes_date_interval_day] = STATE(490),
    [sym__large_object_datatypes] = STATE(490),
    [sym__rowid_datatypes] = STATE(490),
    [sym__referenced_datatypes] = STATE(490),
    [sym__referenced_datatypes_type] = STATE(490),
    [sym__referenced_datatypes_rowtype] = STATE(490),
    [sym__logical_datatypes] = STATE(490),
    [sym__subtype_datatypes] = STATE(490),
    [sym__rowid_datatypes_urowid] = STATE(490),
    [sym__ansi_supported_datatypes_character] = STATE(490),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(490),
    [sym__ansi_supported_datatypes_varchar] = STATE(490),
    [sym__ansi_supported_datatypes_national] = STATE(490),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(490),
    [sym__ansi_supported_datatypes_double_precision] = STATE(490),
    [sym__supplied_datatypes_any_types] = STATE(490),
    [sym__supplied_datatypes_xml_types] = STATE(490),
    [sym__supplied_datatypes_spatial_types] = STATE(490),
    [sym__object_datatypes] = STATE(490),
    [sym_identifier] = STATE(385),
    [sym__quoted_identifier] = STATE(360),
    [sym__unquoted_identifier] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(65),
    [sym_kw_varchar] = ACTIONS(69),
    [sym_kw_varchar2] = ACTIONS(71),
    [sym_kw_nvarchar2] = ACTIONS(73),
    [sym_kw_nchar] = ACTIONS(75),
    [sym_kw_int] = ACTIONS(77),
    [sym_kw_smallint] = ACTIONS(79),
    [sym_kw_real] = ACTIONS(79),
    [sym_kw_binary_float] = ACTIONS(79),
    [sym_kw_binary_double] = ACTIONS(79),
    [sym_kw_simple_float] = ACTIONS(79),
    [sym_kw_simple_double] = ACTIONS(79),
    [sym_kw_binary_integer] = ACTIONS(79),
    [sym_kw_pls_integer] = ACTIONS(79),
    [sym_kw_natural] = ACTIONS(77),
    [sym_kw_naturaln] = ACTIONS(79),
    [sym_kw_positive] = ACTIONS(77),
    [sym_kw_positiven] = ACTIONS(79),
    [sym_kw_signtype] = ACTIONS(79),
    [sym_kw_simple_integer] = ACTIONS(79),
    [sym_kw_integer] = ACTIONS(79),
    [sym_kw_number] = ACTIONS(81),
    [sym_kw_float] = ACTIONS(83),
    [sym_kw_long] = ACTIONS(85),
    [sym_kw_raw] = ACTIONS(87),
    [sym_kw_date] = ACTIONS(79),
    [sym_kw_timestamp] = ACTIONS(89),
    [sym_kw_interval] = ACTIONS(91),
    [sym_kw_blob] = ACTIONS(79),
    [sym_kw_clob] = ACTIONS(79),
    [sym_kw_nclob] = ACTIONS(79),
    [sym_kw_bfile] = ACTIONS(79),
    [sym_kw_rowid] = ACTIONS(79),
    [sym_kw_urowid] = ACTIONS(93),
    [sym_kw_boolean] = ACTIONS(79),
    [sym_kw_character] = ACTIONS(95),
    [sym_kw_numeric] = ACTIONS(97),
    [sym_kw_decimal] = ACTIONS(97),
    [sym_kw_dec] = ACTIONS(99),
    [sym_kw_double] = ACTIONS(101),
    [sym_kw_sys] = ACTIONS(103),
    [sym_kw_xmltype] = ACTIONS(79),
    [sym_kw_uritype] = ACTIONS(79),
    [sym_kw_sdo_geometry] = ACTIONS(79),
    [sym_kw_sdo_topo_geometry] = ACTIONS(79),
    [sym_kw_sdo_georaster] = ACTIONS(79),
    [sym_kw_json_element_t] = ACTIONS(79),
    [sym_kw_json_array_t] = ACTIONS(79),
    [sym_kw_json_object_t] = ACTIONS(79),
    [sym_kw_json_scalar_t] = ACTIONS(79),
    [sym_kw_json_key_list] = ACTIONS(79),
  },
  [7] = {
    [sym_datatype] = STATE(487),
    [sym__character_datatypes] = STATE(490),
    [sym__character_datatypes_char] = STATE(490),
    [sym__character_datatypes_varchar2] = STATE(490),
    [sym__character_datatypes_nchar] = STATE(490),
    [sym__character_datatypes_nvarchar2] = STATE(490),
    [sym__number_datatypes] = STATE(490),
    [sym__number_datatypes_keyword] = STATE(490),
    [sym__number_datatypes_number] = STATE(490),
    [sym__number_datatypes_float] = STATE(490),
    [sym__long_and_raw_datatypes] = STATE(490),
    [sym__long_and_raw_datatypes_long_raw] = STATE(490),
    [sym__long_and_raw_datatypes_raw] = STATE(490),
    [sym__datetime_datatypes] = STATE(490),
    [sym__datetime_datatypes_keyword] = STATE(490),
    [sym__datetime_datatypes_date_timestamp] = STATE(490),
    [sym__datetime_datatypes_date_interval_year] = STATE(490),
    [sym__datetime_datatypes_date_interval_day] = STATE(490),
    [sym__large_object_datatypes] = STATE(490),
    [sym__rowid_datatypes] = STATE(490),
    [sym__referenced_datatypes] = STATE(490),
    [sym__referenced_datatypes_type] = STATE(490),
    [sym__referenced_datatypes_rowtype] = STATE(490),
    [sym__logical_datatypes] = STATE(490),
    [sym__subtype_datatypes] = STATE(490),
    [sym__rowid_datatypes_urowid] = STATE(490),
    [sym__ansi_supported_datatypes_character] = STATE(490),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(490),
    [sym__ansi_supported_datatypes_varchar] = STATE(490),
    [sym__ansi_supported_datatypes_national] = STATE(490),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(490),
    [sym__ansi_supported_datatypes_double_precision] = STATE(490),
    [sym__supplied_datatypes_any_types] = STATE(490),
    [sym__supplied_datatypes_xml_types] = STATE(490),
    [sym__supplied_datatypes_spatial_types] = STATE(490),
    [sym__object_datatypes] = STATE(490),
    [sym_identifier] = STATE(385),
    [sym__quoted_identifier] = STATE(360),
    [sym__unquoted_identifier] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(65),
    [sym_kw_varchar] = ACTIONS(69),
    [sym_kw_varchar2] = ACTIONS(71),
    [sym_kw_nvarchar2] = ACTIONS(73),
    [sym_kw_nchar] = ACTIONS(75),
    [sym_kw_int] = ACTIONS(77),
    [sym_kw_smallint] = ACTIONS(79),
    [sym_kw_real] = ACTIONS(79),
    [sym_kw_binary_float] = ACTIONS(79),
    [sym_kw_binary_double] = ACTIONS(79),
    [sym_kw_simple_float] = ACTIONS(79),
    [sym_kw_simple_double] = ACTIONS(79),
    [sym_kw_binary_integer] = ACTIONS(79),
    [sym_kw_pls_integer] = ACTIONS(79),
    [sym_kw_natural] = ACTIONS(77),
    [sym_kw_naturaln] = ACTIONS(79),
    [sym_kw_positive] = ACTIONS(77),
    [sym_kw_positiven] = ACTIONS(79),
    [sym_kw_signtype] = ACTIONS(79),
    [sym_kw_simple_integer] = ACTIONS(79),
    [sym_kw_integer] = ACTIONS(79),
    [sym_kw_number] = ACTIONS(81),
    [sym_kw_float] = ACTIONS(83),
    [sym_kw_long] = ACTIONS(85),
    [sym_kw_raw] = ACTIONS(87),
    [sym_kw_date] = ACTIONS(79),
    [sym_kw_timestamp] = ACTIONS(89),
    [sym_kw_interval] = ACTIONS(91),
    [sym_kw_blob] = ACTIONS(79),
    [sym_kw_clob] = ACTIONS(79),
    [sym_kw_nclob] = ACTIONS(79),
    [sym_kw_bfile] = ACTIONS(79),
    [sym_kw_rowid] = ACTIONS(79),
    [sym_kw_urowid] = ACTIONS(93),
    [sym_kw_boolean] = ACTIONS(79),
    [sym_kw_character] = ACTIONS(95),
    [sym_kw_numeric] = ACTIONS(97),
    [sym_kw_decimal] = ACTIONS(97),
    [sym_kw_dec] = ACTIONS(99),
    [sym_kw_double] = ACTIONS(101),
    [sym_kw_sys] = ACTIONS(103),
    [sym_kw_xmltype] = ACTIONS(79),
    [sym_kw_uritype] = ACTIONS(79),
    [sym_kw_sdo_geometry] = ACTIONS(79),
    [sym_kw_sdo_topo_geometry] = ACTIONS(79),
    [sym_kw_sdo_georaster] = ACTIONS(79),
    [sym_kw_json_element_t] = ACTIONS(79),
    [sym_kw_json_array_t] = ACTIONS(79),
    [sym_kw_json_object_t] = ACTIONS(79),
    [sym_kw_json_scalar_t] = ACTIONS(79),
    [sym_kw_json_key_list] = ACTIONS(79),
  },
  [8] = {
    [sym_datatype] = STATE(442),
    [sym__character_datatypes] = STATE(441),
    [sym__character_datatypes_char] = STATE(441),
    [sym__character_datatypes_varchar2] = STATE(441),
    [sym__character_datatypes_nchar] = STATE(441),
    [sym__character_datatypes_nvarchar2] = STATE(441),
    [sym__number_datatypes] = STATE(441),
    [sym__number_datatypes_keyword] = STATE(441),
    [sym__number_datatypes_number] = STATE(441),
    [sym__number_datatypes_float] = STATE(441),
    [sym__long_and_raw_datatypes] = STATE(441),
    [sym__long_and_raw_datatypes_long_raw] = STATE(441),
    [sym__long_and_raw_datatypes_raw] = STATE(441),
    [sym__datetime_datatypes] = STATE(441),
    [sym__datetime_datatypes_keyword] = STATE(441),
    [sym__datetime_datatypes_date_timestamp] = STATE(441),
    [sym__datetime_datatypes_date_interval_year] = STATE(441),
    [sym__datetime_datatypes_date_interval_day] = STATE(441),
    [sym__large_object_datatypes] = STATE(441),
    [sym__rowid_datatypes] = STATE(441),
    [sym__referenced_datatypes] = STATE(441),
    [sym__referenced_datatypes_type] = STATE(441),
    [sym__referenced_datatypes_rowtype] = STATE(441),
    [sym__logical_datatypes] = STATE(441),
    [sym__subtype_datatypes] = STATE(441),
    [sym__rowid_datatypes_urowid] = STATE(441),
    [sym__ansi_supported_datatypes_character] = STATE(441),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(441),
    [sym__ansi_supported_datatypes_varchar] = STATE(441),
    [sym__ansi_supported_datatypes_national] = STATE(441),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(441),
    [sym__ansi_supported_datatypes_double_precision] = STATE(441),
    [sym__supplied_datatypes_any_types] = STATE(441),
    [sym__supplied_datatypes_xml_types] = STATE(441),
    [sym__supplied_datatypes_spatial_types] = STATE(441),
    [sym__object_datatypes] = STATE(441),
    [sym_identifier] = STATE(310),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_char] = ACTIONS(111),
    [sym_kw_varchar] = ACTIONS(113),
    [sym_kw_varchar2] = ACTIONS(115),
    [sym_kw_nvarchar2] = ACTIONS(117),
    [sym_kw_nchar] = ACTIONS(119),
    [sym_kw_int] = ACTIONS(121),
    [sym_kw_smallint] = ACTIONS(123),
    [sym_kw_real] = ACTIONS(123),
    [sym_kw_binary_float] = ACTIONS(123),
    [sym_kw_binary_double] = ACTIONS(123),
    [sym_kw_simple_float] = ACTIONS(123),
    [sym_kw_simple_double] = ACTIONS(123),
    [sym_kw_binary_integer] = ACTIONS(123),
    [sym_kw_pls_integer] = ACTIONS(123),
    [sym_kw_natural] = ACTIONS(121),
    [sym_kw_naturaln] = ACTIONS(123),
    [sym_kw_positive] = ACTIONS(121),
    [sym_kw_positiven] = ACTIONS(123),
    [sym_kw_signtype] = ACTIONS(123),
    [sym_kw_simple_integer] = ACTIONS(123),
    [sym_kw_integer] = ACTIONS(123),
    [sym_kw_number] = ACTIONS(125),
    [sym_kw_float] = ACTIONS(127),
    [sym_kw_long] = ACTIONS(129),
    [sym_kw_raw] = ACTIONS(131),
    [sym_kw_date] = ACTIONS(123),
    [sym_kw_timestamp] = ACTIONS(133),
    [sym_kw_interval] = ACTIONS(135),
    [sym_kw_blob] = ACTIONS(123),
    [sym_kw_clob] = ACTIONS(123),
    [sym_kw_nclob] = ACTIONS(123),
    [sym_kw_bfile] = ACTIONS(123),
    [sym_kw_rowid] = ACTIONS(123),
    [sym_kw_urowid] = ACTIONS(137),
    [sym_kw_boolean] = ACTIONS(123),
    [sym_kw_character] = ACTIONS(139),
    [sym_kw_numeric] = ACTIONS(141),
    [sym_kw_decimal] = ACTIONS(141),
    [sym_kw_dec] = ACTIONS(143),
    [sym_kw_double] = ACTIONS(145),
    [sym_kw_sys] = ACTIONS(147),
    [sym_kw_xmltype] = ACTIONS(123),
    [sym_kw_uritype] = ACTIONS(123),
    [sym_kw_sdo_geometry] = ACTIONS(123),
    [sym_kw_sdo_topo_geometry] = ACTIONS(123),
    [sym_kw_sdo_georaster] = ACTIONS(123),
    [sym_kw_json_element_t] = ACTIONS(123),
    [sym_kw_json_array_t] = ACTIONS(123),
    [sym_kw_json_object_t] = ACTIONS(123),
    [sym_kw_json_scalar_t] = ACTIONS(123),
    [sym_kw_json_key_list] = ACTIONS(123),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(149), 8,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_in,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(151), 47,
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
    ACTIONS(153), 8,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_in,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(155), 47,
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
  [128] = 19,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym__unquoted_identifier,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym__number,
    ACTIONS(173), 1,
      sym__float,
    ACTIONS(179), 1,
      sym_kw_not,
    ACTIONS(185), 1,
      sym_kw_updating,
    STATE(15), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(20), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(182), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(162), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(176), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
    ACTIONS(157), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [216] = 19,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      sym__unquoted_identifier,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym__number,
    ACTIONS(204), 1,
      sym__float,
    ACTIONS(210), 1,
      sym_kw_not,
    ACTIONS(216), 1,
      sym_kw_updating,
    STATE(15), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(20), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(213), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(193), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(207), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
    ACTIONS(188), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [304] = 19,
    ACTIONS(164), 1,
      sym__unquoted_identifier,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym_kw_not,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    STATE(15), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(20), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(162), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
    ACTIONS(157), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [392] = 19,
    ACTIONS(195), 1,
      sym__unquoted_identifier,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      sym_kw_not,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    STATE(15), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(20), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(193), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
    ACTIONS(188), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [480] = 19,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      sym__unquoted_identifier,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym__number,
    ACTIONS(247), 1,
      sym__float,
    ACTIONS(253), 1,
      sym_kw_not,
    ACTIONS(259), 1,
      sym_kw_updating,
    STATE(15), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(20), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(256), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(236), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(250), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
    ACTIONS(231), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [568] = 19,
    ACTIONS(210), 1,
      sym_kw_not,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(19), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(193), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
    ACTIONS(188), 13,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [655] = 19,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      sym__unquoted_identifier,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym__number,
    ACTIONS(247), 1,
      sym__float,
    ACTIONS(253), 1,
      sym_kw_not,
    ACTIONS(259), 1,
      sym_kw_updating,
    STATE(17), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(19), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(256), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(236), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(250), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
    ACTIONS(231), 13,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [742] = 19,
    ACTIONS(179), 1,
      sym_kw_not,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(19), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(162), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
    ACTIONS(157), 13,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
  [829] = 14,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      sym_kw_not,
    ACTIONS(281), 1,
      sym_kw_is,
    ACTIONS(284), 1,
      sym_kw_between,
    ACTIONS(287), 1,
      sym_kw_in,
    ACTIONS(290), 1,
      sym_kw_like,
    STATE(94), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(273), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(266), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(95), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(269), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_or,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [899] = 14,
    ACTIONS(278), 1,
      sym_kw_not,
    ACTIONS(281), 1,
      sym_kw_is,
    ACTIONS(284), 1,
      sym_kw_between,
    ACTIONS(287), 1,
      sym_kw_in,
    ACTIONS(290), 1,
      sym_kw_like,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(273), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(266), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(95), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(269), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_or,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [969] = 13,
    ACTIONS(306), 1,
      sym_kw_not,
    ACTIONS(309), 1,
      sym_kw_is,
    ACTIONS(312), 1,
      sym_kw_between,
    ACTIONS(315), 1,
      sym_kw_in,
    ACTIONS(318), 1,
      sym_kw_like,
    STATE(94), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(304), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(296), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(95), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(299), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_or,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1037] = 13,
    ACTIONS(331), 1,
      sym_kw_not,
    ACTIONS(334), 1,
      sym_kw_is,
    ACTIONS(337), 1,
      sym_kw_between,
    ACTIONS(340), 1,
      sym_kw_in,
    ACTIONS(343), 1,
      sym_kw_like,
    STATE(94), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(329), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(321), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(95), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(324), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_or,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1105] = 13,
    ACTIONS(356), 1,
      sym_kw_not,
    ACTIONS(359), 1,
      sym_kw_is,
    ACTIONS(362), 1,
      sym_kw_between,
    ACTIONS(365), 1,
      sym_kw_in,
    ACTIONS(368), 1,
      sym_kw_like,
    STATE(94), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(351), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(354), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(346), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(95), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
    ACTIONS(349), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_or,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1173] = 7,
    STATE(24), 1,
      aux_sym__expression_numeric_repeat1,
    STATE(477), 1,
      sym_relational_operator_compute,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(371), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    ACTIONS(376), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(374), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1225] = 7,
    STATE(26), 1,
      aux_sym__expression_numeric_repeat1,
    STATE(477), 1,
      sym_relational_operator_compute,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(381), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    ACTIONS(385), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(383), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1277] = 7,
    STATE(24), 1,
      aux_sym__expression_numeric_repeat1,
    STATE(477), 1,
      sym_relational_operator_compute,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(381), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    ACTIONS(391), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(389), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1329] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(149), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 31,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_datatype_type,
      sym_kw_not,
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
  [1372] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(153), 3,
      anon_sym_PERCENT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 31,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_datatype_type,
      sym_kw_not,
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
  [1415] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(376), 7,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(374), 26,
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
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1457] = 8,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_DOT,
    ACTIONS(404), 1,
      anon_sym_PERCENT,
    STATE(52), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(406), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(395), 23,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1509] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(409), 7,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(411), 26,
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
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1551] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(153), 6,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(155), 26,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1592] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(149), 6,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(151), 26,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1633] = 6,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(422), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(415), 23,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1679] = 5,
    STATE(46), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(429), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(427), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(425), 22,
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
      sym__float,
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
  [1722] = 17,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      sym_kw_not,
    STATE(11), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(20), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [1789] = 13,
    ACTIONS(354), 1,
      sym__unquoted_identifier,
    ACTIONS(434), 1,
      sym_kw_not,
    ACTIONS(437), 1,
      sym_kw_is,
    ACTIONS(440), 1,
      sym_kw_between,
    ACTIONS(443), 1,
      sym_kw_in,
    ACTIONS(446), 1,
      sym_kw_like,
    STATE(83), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(351), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(349), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(346), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [1848] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(451), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(449), 25,
      anon_sym_SEMI,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [1887] = 7,
    STATE(46), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(461), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(463), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(458), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(456), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
    ACTIONS(453), 12,
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
  [1934] = 17,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      sym_kw_not,
    STATE(18), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(19), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [2001] = 7,
    STATE(39), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(427), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(429), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(469), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(425), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
    ACTIONS(466), 12,
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
  [2048] = 5,
    STATE(35), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(476), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(474), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(472), 22,
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
      sym__float,
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
  [2091] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(481), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(479), 25,
      anon_sym_SEMI,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2130] = 17,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      sym_kw_not,
    STATE(13), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(20), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [2197] = 4,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(488), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(485), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2238] = 5,
    STATE(46), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(495), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(493), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(491), 22,
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
      sym__float,
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
  [2281] = 17,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      sym_kw_not,
    STATE(16), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(19), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [2348] = 17,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      sym_kw_not,
    STATE(12), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(20), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [2415] = 13,
    ACTIONS(304), 1,
      sym__unquoted_identifier,
    ACTIONS(498), 1,
      sym_kw_not,
    ACTIONS(501), 1,
      sym_kw_is,
    ACTIONS(504), 1,
      sym_kw_between,
    ACTIONS(507), 1,
      sym_kw_in,
    ACTIONS(510), 1,
      sym_kw_like,
    STATE(83), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(296), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [2474] = 7,
    STATE(186), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(493), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(519), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(516), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(491), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
    ACTIONS(513), 12,
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
  [2521] = 17,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      sym_kw_not,
    STATE(14), 1,
      aux_sym__other_boolean_form_expression_in_repeat1,
    STATE(20), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [2588] = 4,
    ACTIONS(522), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(527), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(524), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2629] = 13,
    ACTIONS(329), 1,
      sym__unquoted_identifier,
    ACTIONS(530), 1,
      sym_kw_not,
    ACTIONS(533), 1,
      sym_kw_is,
    ACTIONS(536), 1,
      sym_kw_between,
    ACTIONS(539), 1,
      sym_kw_in,
    ACTIONS(542), 1,
      sym_kw_like,
    STATE(83), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(324), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(321), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [2688] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(547), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(545), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [2726] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(557), 1,
      sym_kw_not,
    ACTIONS(561), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(114), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(555), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(190), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(187), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [2790] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym__number,
    ACTIONS(567), 1,
      sym__float,
    ACTIONS(571), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(124), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(122), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(569), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(198), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(181), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [2854] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym__number,
    ACTIONS(567), 1,
      sym__float,
    ACTIONS(571), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(124), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(122), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(573), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(195), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(185), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [2918] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(557), 1,
      sym_kw_not,
    ACTIONS(561), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(118), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(555), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(190), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(187), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [2982] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(557), 1,
      sym_kw_not,
    ACTIONS(561), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(117), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(555), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(190), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(187), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [3046] = 16,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(565), 1,
      sym__number,
    ACTIONS(567), 1,
      sym__float,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
    ACTIONS(577), 1,
      sym__unquoted_identifier,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym_kw_not,
    STATE(105), 1,
      sym_expression,
    STATE(112), 1,
      sym_identifier,
    STATE(121), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(122), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(581), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(188), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(141), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [3110] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(557), 1,
      sym_kw_not,
    ACTIONS(561), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(113), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(555), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(190), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(187), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [3174] = 16,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym__number,
    ACTIONS(567), 1,
      sym__float,
    ACTIONS(577), 1,
      sym__unquoted_identifier,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym_kw_not,
    STATE(112), 1,
      sym_identifier,
    STATE(119), 1,
      sym_expression,
    STATE(121), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(122), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(581), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(182), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(141), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [3238] = 6,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(596), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(593), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(585), 11,
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
    ACTIONS(588), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_or,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3282] = 16,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym__number,
    ACTIONS(567), 1,
      sym__float,
    ACTIONS(571), 1,
      sym_kw_not,
    ACTIONS(577), 1,
      sym__unquoted_identifier,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_identifier,
    STATE(119), 1,
      sym_expression,
    STATE(121), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(122), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(598), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(198), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(138), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [3346] = 4,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(605), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(600), 23,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3386] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(609), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(607), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3424] = 5,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(619), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(616), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym_kw_in,
    ACTIONS(611), 11,
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
    ACTIONS(614), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_or,
      sym_kw_and,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3466] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(596), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(588), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3504] = 16,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(577), 1,
      sym__unquoted_identifier,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(625), 1,
      sym_kw_not,
    STATE(53), 1,
      sym_expression,
    STATE(112), 1,
      sym_identifier,
    STATE(121), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(623), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(155), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(146), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [3568] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(629), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(627), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3606] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(633), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(631), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3644] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(637), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(635), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3682] = 16,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      sym_kw_not,
    STATE(22), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [3746] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(641), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(639), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3784] = 16,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      sym_kw_not,
    STATE(23), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [3848] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(645), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(643), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3886] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(649), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(647), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3924] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(653), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(651), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [3962] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym__number,
    ACTIONS(567), 1,
      sym__float,
    ACTIONS(571), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(124), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(122), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(655), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(198), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(183), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [4026] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(657), 1,
      anon_sym_LPAREN,
    ACTIONS(661), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(108), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(659), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(155), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(173), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [4090] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym__number,
    ACTIONS(567), 1,
      sym__float,
    ACTIONS(571), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(124), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(122), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(663), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(198), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(142), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [4154] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(557), 1,
      sym_kw_not,
    ACTIONS(561), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(115), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(555), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(190), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(187), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [4218] = 16,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(577), 1,
      sym__unquoted_identifier,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(625), 1,
      sym_kw_not,
    STATE(49), 1,
      sym_expression,
    STATE(112), 1,
      sym_identifier,
    STATE(121), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(623), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(155), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(146), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [4282] = 16,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym__number,
    ACTIONS(567), 1,
      sym__float,
    ACTIONS(571), 1,
      sym_kw_not,
    ACTIONS(577), 1,
      sym__unquoted_identifier,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_identifier,
    STATE(119), 1,
      sym_expression,
    STATE(121), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(122), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(663), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(198), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(142), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [4346] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(557), 1,
      sym_kw_not,
    ACTIONS(561), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(116), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(555), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(190), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(187), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [4410] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(667), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(665), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [4448] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym__number,
    ACTIONS(567), 1,
      sym__float,
    ACTIONS(571), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(124), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(122), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(669), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(198), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(189), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [4512] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(661), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(124), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(659), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(156), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(173), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [4576] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(673), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(671), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [4614] = 16,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym__number,
    ACTIONS(567), 1,
      sym__float,
    ACTIONS(571), 1,
      sym_kw_not,
    ACTIONS(577), 1,
      sym__unquoted_identifier,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_identifier,
    STATE(119), 1,
      sym_expression,
    STATE(121), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(122), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(675), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(198), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(147), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [4678] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(679), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(677), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [4716] = 16,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym__number,
    ACTIONS(567), 1,
      sym__float,
    ACTIONS(571), 1,
      sym_kw_not,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    STATE(125), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(122), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(681), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(198), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(50), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [4780] = 16,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(577), 1,
      sym__unquoted_identifier,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(625), 1,
      sym_kw_not,
    STATE(112), 1,
      sym_identifier,
    STATE(119), 1,
      sym_expression,
    STATE(121), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(623), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(156), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(146), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [4844] = 16,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      sym_kw_not,
    STATE(21), 1,
      sym_expression,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(65), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [4908] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(685), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(683), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [4946] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(657), 1,
      anon_sym_LPAREN,
    ACTIONS(661), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(106), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(659), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(155), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(173), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [5010] = 16,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    ACTIONS(565), 1,
      sym__number,
    ACTIONS(567), 1,
      sym__float,
    ACTIONS(571), 1,
      sym_kw_not,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    STATE(125), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(122), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(687), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(198), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(41), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [5074] = 4,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(694), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(689), 23,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [5114] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(694), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(689), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [5152] = 16,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(229), 1,
      sym_kw_updating,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      sym_kw_not,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_identifier,
    STATE(33), 1,
      sym__quoted_identifier,
    STATE(125), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(25), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(225), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(63), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(42), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [5216] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(657), 1,
      anon_sym_LPAREN,
    ACTIONS(661), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(107), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(659), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(155), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(173), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [5280] = 16,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(577), 1,
      sym__unquoted_identifier,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(621), 1,
      anon_sym_LPAREN,
    ACTIONS(625), 1,
      sym_kw_not,
    STATE(37), 1,
      sym_expression,
    STATE(112), 1,
      sym_identifier,
    STATE(121), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(623), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(155), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(146), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [5344] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(236), 5,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
      sym__number,
      sym_kw_in,
    ACTIONS(231), 24,
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
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_like,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [5382] = 16,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(557), 1,
      sym_kw_not,
    ACTIONS(561), 1,
      sym_kw_updating,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(124), 1,
      sym_expression,
    STATE(131), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(559), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(111), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
    ACTIONS(555), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(192), 3,
      sym__expression_elements,
      sym__expression_numeric,
      sym__expression_boolean,
    STATE(187), 9,
      sym__expression_boolean_elements,
      sym_expression_boolean_ref,
      sym__other_boolean_form,
      sym__other_boolean_form_collection,
      sym__other_boolean_form_expression,
      sym__other_boolean_form_named_cursor,
      sym_conditional_predicate,
      sym_prc_fnc_call,
      sym__literal_boolean,
  [5446] = 13,
    ACTIONS(702), 1,
      sym__unquoted_identifier,
    ACTIONS(704), 1,
      sym_kw_not,
    ACTIONS(706), 1,
      sym_kw_is,
    ACTIONS(708), 1,
      sym_kw_between,
    ACTIONS(710), 1,
      sym_kw_in,
    ACTIONS(712), 1,
      sym_kw_like,
    STATE(83), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(700), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(698), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(696), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [5503] = 12,
    ACTIONS(437), 1,
      sym_kw_is,
    ACTIONS(446), 1,
      sym_kw_like,
    ACTIONS(714), 1,
      sym_kw_not,
    ACTIONS(717), 1,
      sym_kw_between,
    ACTIONS(720), 1,
      sym_kw_in,
    STATE(80), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(351), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(349), 3,
      anon_sym_RPAREN,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(346), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [5557] = 12,
    ACTIONS(533), 1,
      sym_kw_is,
    ACTIONS(542), 1,
      sym_kw_like,
    ACTIONS(723), 1,
      sym_kw_not,
    ACTIONS(726), 1,
      sym_kw_between,
    ACTIONS(729), 1,
      sym_kw_in,
    STATE(80), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(324), 3,
      anon_sym_RPAREN,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(321), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [5611] = 12,
    ACTIONS(501), 1,
      sym_kw_is,
    ACTIONS(510), 1,
      sym_kw_like,
    ACTIONS(732), 1,
      sym_kw_not,
    ACTIONS(735), 1,
      sym_kw_between,
    ACTIONS(738), 1,
      sym_kw_in,
    STATE(80), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 3,
      anon_sym_RPAREN,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(296), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [5665] = 7,
    STATE(109), 1,
      aux_sym__expression_numeric_repeat1,
    STATE(468), 1,
      sym_relational_operator_compute,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(371), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    ACTIONS(376), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(374), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [5708] = 7,
    STATE(109), 1,
      aux_sym__expression_numeric_repeat1,
    STATE(468), 1,
      sym_relational_operator_compute,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(381), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    ACTIONS(391), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(389), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [5751] = 7,
    STATE(110), 1,
      aux_sym__expression_numeric_repeat1,
    STATE(468), 1,
      sym_relational_operator_compute,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(381), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    ACTIONS(385), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(383), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [5794] = 8,
    ACTIONS(741), 1,
      anon_sym_SEMI,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    ACTIONS(745), 1,
      anon_sym_DOT,
    ACTIONS(747), 1,
      anon_sym_PERCENT,
    STATE(136), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(406), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(395), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [5838] = 12,
    ACTIONS(706), 1,
      sym_kw_is,
    ACTIONS(712), 1,
      sym_kw_like,
    ACTIONS(749), 1,
      sym_kw_not,
    ACTIONS(751), 1,
      sym_kw_and,
    ACTIONS(753), 1,
      sym_kw_between,
    ACTIONS(755), 1,
      sym_kw_in,
    STATE(80), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(700), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(696), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [5890] = 12,
    ACTIONS(706), 1,
      sym_kw_is,
    ACTIONS(712), 1,
      sym_kw_like,
    ACTIONS(749), 1,
      sym_kw_not,
    ACTIONS(753), 1,
      sym_kw_between,
    ACTIONS(755), 1,
      sym_kw_in,
    ACTIONS(757), 1,
      sym_kw_and,
    STATE(80), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(700), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(696), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [5942] = 12,
    ACTIONS(706), 1,
      sym_kw_is,
    ACTIONS(712), 1,
      sym_kw_like,
    ACTIONS(749), 1,
      sym_kw_not,
    ACTIONS(753), 1,
      sym_kw_between,
    ACTIONS(755), 1,
      sym_kw_in,
    ACTIONS(759), 1,
      sym_kw_and,
    STATE(80), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(700), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(696), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [5994] = 12,
    ACTIONS(706), 1,
      sym_kw_is,
    ACTIONS(712), 1,
      sym_kw_like,
    ACTIONS(749), 1,
      sym_kw_not,
    ACTIONS(753), 1,
      sym_kw_between,
    ACTIONS(755), 1,
      sym_kw_in,
    ACTIONS(761), 1,
      sym_kw_and,
    STATE(80), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(700), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(696), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [6046] = 12,
    ACTIONS(706), 1,
      sym_kw_is,
    ACTIONS(712), 1,
      sym_kw_like,
    ACTIONS(749), 1,
      sym_kw_not,
    ACTIONS(753), 1,
      sym_kw_between,
    ACTIONS(755), 1,
      sym_kw_in,
    ACTIONS(763), 1,
      sym_kw_and,
    STATE(80), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(700), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(696), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [6098] = 12,
    ACTIONS(706), 1,
      sym_kw_is,
    ACTIONS(712), 1,
      sym_kw_like,
    ACTIONS(749), 1,
      sym_kw_not,
    ACTIONS(753), 1,
      sym_kw_between,
    ACTIONS(755), 1,
      sym_kw_in,
    ACTIONS(765), 1,
      sym_kw_and,
    STATE(80), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(700), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(696), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [6150] = 11,
    ACTIONS(704), 1,
      sym_kw_not,
    ACTIONS(706), 1,
      sym_kw_is,
    ACTIONS(708), 1,
      sym_kw_between,
    ACTIONS(710), 1,
      sym_kw_in,
    ACTIONS(712), 1,
      sym_kw_like,
    STATE(83), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(700), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(696), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [6199] = 7,
    STATE(120), 1,
      aux_sym__expression_numeric_repeat1,
    STATE(532), 1,
      sym_relational_operator_compute,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(371), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
    ACTIONS(378), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    ACTIONS(376), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(374), 15,
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
  [6240] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(149), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(151), 21,
      anon_sym_SEMI,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [6273] = 7,
    STATE(127), 1,
      aux_sym__expression_numeric_repeat1,
    STATE(532), 1,
      sym_relational_operator_compute,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(381), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    ACTIONS(385), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(383), 15,
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
  [6314] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(409), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      sym__unquoted_identifier,
    ACTIONS(411), 19,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [6347] = 11,
    ACTIONS(706), 1,
      sym_kw_is,
    ACTIONS(712), 1,
      sym_kw_like,
    ACTIONS(749), 1,
      sym_kw_not,
    ACTIONS(753), 1,
      sym_kw_between,
    ACTIONS(755), 1,
      sym_kw_in,
    STATE(80), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(700), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(696), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(165), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [6396] = 11,
    ACTIONS(767), 1,
      sym_kw_not,
    ACTIONS(769), 1,
      sym_kw_is,
    ACTIONS(771), 1,
      sym_kw_between,
    ACTIONS(773), 1,
      sym_kw_in,
    ACTIONS(775), 1,
      sym_kw_like,
    STATE(94), 1,
      sym_relational_operator,
    STATE(214), 1,
      sym__relational_operator_not_equal,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(700), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(696), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
    STATE(95), 8,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
      sym__other_boolean_form_expression_is,
      sym__other_boolean_form_expression_between,
      sym__other_boolean_form_expression_in,
      sym__other_boolean_form_expression_like,
      sym__other_boolean_form_expression_relational_operation,
  [6445] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(153), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(155), 21,
      anon_sym_SEMI,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [6478] = 7,
    STATE(120), 1,
      aux_sym__expression_numeric_repeat1,
    STATE(532), 1,
      sym_relational_operator_compute,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(381), 2,
      anon_sym_SLASH,
      anon_sym_DASH,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_STAR,
    ACTIONS(391), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(389), 15,
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
  [6519] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(376), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      sym__unquoted_identifier,
    ACTIONS(374), 19,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [6552] = 6,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    ACTIONS(777), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(422), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(415), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [6590] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(376), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      sym__unquoted_identifier,
    ACTIONS(374), 17,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [6621] = 8,
    ACTIONS(741), 1,
      anon_sym_SEMI,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    ACTIONS(747), 1,
      anon_sym_PERCENT,
    ACTIONS(779), 1,
      anon_sym_DOT,
    STATE(136), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(406), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(395), 15,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      sym_kw_not,
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [6662] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(409), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      sym__unquoted_identifier,
    ACTIONS(411), 17,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_DQUOTE,
      sym_kw_not,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [6693] = 5,
    STATE(133), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(781), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(493), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(491), 15,
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
  [6727] = 15,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    ACTIONS(786), 1,
      sym__unquoted_identifier,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    ACTIONS(790), 1,
      sym__single_quote_string,
    ACTIONS(792), 1,
      sym__number,
    ACTIONS(794), 1,
      sym__float,
    STATE(217), 1,
      sym__quoted_identifier,
    STATE(218), 1,
      sym_identifier,
    STATE(232), 1,
      sym_parameter_value,
    STATE(621), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(151), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(237), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(796), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(223), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [6781] = 5,
    STATE(133), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(798), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(427), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(425), 15,
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
  [6815] = 4,
    ACTIONS(800), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(527), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(524), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [6847] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(451), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(449), 18,
      anon_sym_SEMI,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [6877] = 7,
    ACTIONS(427), 1,
      sym__unquoted_identifier,
    STATE(139), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(425), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(798), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(466), 13,
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
  [6915] = 7,
    ACTIONS(461), 1,
      sym__unquoted_identifier,
    STATE(133), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(456), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(458), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(798), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(453), 13,
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
  [6953] = 15,
    ACTIONS(786), 1,
      sym__unquoted_identifier,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    ACTIONS(790), 1,
      sym__single_quote_string,
    ACTIONS(792), 1,
      sym__number,
    ACTIONS(794), 1,
      sym__float,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      sym__quoted_identifier,
    STATE(218), 1,
      sym_identifier,
    STATE(232), 1,
      sym_parameter_value,
    STATE(621), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(145), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(237), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(796), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(223), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [7007] = 5,
    STATE(135), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(798), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(474), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(472), 15,
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
  [7041] = 7,
    ACTIONS(493), 1,
      sym__unquoted_identifier,
    STATE(186), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(491), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(516), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(519), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(513), 13,
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
  [7079] = 15,
    ACTIONS(786), 1,
      sym__unquoted_identifier,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    ACTIONS(790), 1,
      sym__single_quote_string,
    ACTIONS(792), 1,
      sym__number,
    ACTIONS(794), 1,
      sym__float,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      sym__quoted_identifier,
    STATE(218), 1,
      sym_identifier,
    STATE(232), 1,
      sym_parameter_value,
    STATE(621), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(140), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(237), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(796), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(223), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [7133] = 4,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(694), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(689), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7165] = 15,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    ACTIONS(810), 1,
      sym__unquoted_identifier,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(816), 1,
      sym__single_quote_string,
    ACTIONS(819), 1,
      sym__number,
    ACTIONS(822), 1,
      sym__float,
    STATE(217), 1,
      sym__quoted_identifier,
    STATE(218), 1,
      sym_identifier,
    STATE(232), 1,
      sym_parameter_value,
    STATE(621), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(145), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(237), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(825), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(223), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [7219] = 5,
    STATE(148), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(828), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(474), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(472), 15,
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
  [7253] = 7,
    ACTIONS(427), 1,
      sym__unquoted_identifier,
    STATE(149), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(425), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(831), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(466), 13,
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
  [7291] = 5,
    STATE(133), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(831), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(427), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(425), 15,
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
  [7325] = 7,
    ACTIONS(461), 1,
      sym__unquoted_identifier,
    STATE(133), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(456), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(458), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(834), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(453), 13,
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
  [7363] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(481), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(479), 18,
      anon_sym_SEMI,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7393] = 15,
    ACTIONS(786), 1,
      sym__unquoted_identifier,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    ACTIONS(790), 1,
      sym__single_quote_string,
    ACTIONS(792), 1,
      sym__number,
    ACTIONS(794), 1,
      sym__float,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      sym__quoted_identifier,
    STATE(218), 1,
      sym_identifier,
    STATE(232), 1,
      sym_parameter_value,
    STATE(621), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(145), 2,
      sym_parameter_element,
      aux_sym_parameter_repeat1,
    STATE(237), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(796), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(223), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [7447] = 4,
    ACTIONS(839), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(488), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(485), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7479] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(547), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(545), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7508] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(633), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(631), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7537] = 4,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(605), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(600), 16,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7568] = 6,
    ACTIONS(596), 1,
      sym__unquoted_identifier,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(593), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(588), 4,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(585), 12,
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
  [7603] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(653), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(651), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7632] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(694), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(689), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7661] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(641), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(639), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7690] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(637), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(635), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7719] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(649), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(647), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7748] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(629), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(627), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7777] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(609), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(607), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7806] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(645), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(643), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7835] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(685), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(683), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7864] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(667), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(665), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7893] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(596), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(588), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7922] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(679), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(677), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7951] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(673), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(671), 17,
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
      sym_kw_or,
      sym_kw_and,
      sym_kw_is,
      sym_kw_between,
      sym_kw_in,
      sym_kw_like,
  [7980] = 5,
    ACTIONS(619), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(611), 12,
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
  [8013] = 10,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(851), 1,
      sym_kw_debug,
    ACTIONS(853), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(293), 1,
      sym_reuse_settings,
    STATE(696), 1,
      sym_identifier,
    STATE(204), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(849), 3,
      sym_kw_package,
      sym_kw_specification,
      sym_kw_body,
    ACTIONS(847), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [8055] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(596), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(588), 15,
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
  [8082] = 5,
    STATE(175), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(474), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(855), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(472), 13,
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
  [8113] = 6,
    ACTIONS(858), 1,
      sym_kw_or,
    ACTIONS(860), 1,
      sym_kw_and,
    STATE(178), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(427), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(425), 13,
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
  [8146] = 5,
    STATE(178), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(427), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(860), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(425), 13,
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
  [8177] = 5,
    ACTIONS(619), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(611), 12,
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
  [8208] = 6,
    ACTIONS(858), 1,
      sym_kw_or,
    ACTIONS(863), 1,
      sym_kw_and,
    STATE(178), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(458), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(453), 13,
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
  [8241] = 5,
    STATE(178), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(493), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(866), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(491), 13,
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
  [8272] = 5,
    STATE(178), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(458), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(863), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(453), 13,
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
  [8303] = 9,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(853), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(306), 1,
      sym_reuse_settings,
    STATE(696), 1,
      sym_identifier,
    STATE(196), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(871), 3,
      sym_kw_package,
      sym_kw_specification,
      sym_kw_body,
    ACTIONS(869), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [8342] = 5,
    STATE(184), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(858), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(466), 13,
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
  [8373] = 6,
    ACTIONS(596), 1,
      sym__unquoted_identifier,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(588), 2,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(593), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(585), 12,
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
  [8406] = 6,
    ACTIONS(858), 1,
      sym_kw_or,
    ACTIONS(860), 1,
      sym_kw_and,
    STATE(177), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(466), 13,
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
  [8439] = 5,
    STATE(178), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(458), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(858), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(453), 13,
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
  [8470] = 5,
    STATE(186), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(474), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(858), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(472), 13,
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
  [8501] = 5,
    STATE(178), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(427), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(858), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(425), 13,
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
  [8532] = 6,
    ACTIONS(855), 1,
      sym_kw_and,
    ACTIONS(858), 1,
      sym_kw_or,
    STATE(174), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(474), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(472), 13,
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
  [8565] = 4,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(605), 3,
      anon_sym_LT,
      anon_sym_GT,
      sym__unquoted_identifier,
    ACTIONS(600), 14,
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
  [8594] = 5,
    STATE(179), 1,
      aux_sym__expression_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(469), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(860), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(466), 13,
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
  [8625] = 4,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(605), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(600), 13,
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
  [8652] = 11,
    ACTIONS(881), 1,
      anon_sym_DOT,
    ACTIONS(885), 1,
      sym_kw_default,
    ACTIONS(887), 1,
      sym_kw_authid,
    ACTIONS(889), 1,
      sym_kw_accessible,
    STATE(213), 1,
      sym_sharing_clause,
    STATE(371), 1,
      sym__is_as,
    STATE(544), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(883), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(891), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(235), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [8693] = 5,
    ACTIONS(588), 1,
      sym_kw_and,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(593), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(585), 12,
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
  [8722] = 11,
    ACTIONS(881), 1,
      anon_sym_DOT,
    ACTIONS(885), 1,
      sym_kw_default,
    ACTIONS(887), 1,
      sym_kw_authid,
    ACTIONS(889), 1,
      sym_kw_accessible,
    STATE(215), 1,
      sym_sharing_clause,
    STATE(330), 1,
      sym__is_as,
    STATE(546), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(883), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(895), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(235), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [8763] = 10,
    ACTIONS(885), 1,
      sym_kw_default,
    ACTIONS(887), 1,
      sym_kw_authid,
    ACTIONS(889), 1,
      sym_kw_accessible,
    STATE(210), 1,
      sym_sharing_clause,
    STATE(343), 1,
      sym__is_as,
    STATE(561), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(883), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(897), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(235), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [8801] = 4,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(593), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(585), 12,
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
  [8827] = 8,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(853), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(300), 1,
      sym_reuse_settings,
    STATE(696), 1,
      sym_identifier,
    STATE(207), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(901), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [8861] = 10,
    ACTIONS(786), 1,
      sym__unquoted_identifier,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    ACTIONS(790), 1,
      sym__single_quote_string,
    ACTIONS(792), 1,
      sym__number,
    ACTIONS(794), 1,
      sym__float,
    STATE(217), 1,
      sym__quoted_identifier,
    STATE(226), 1,
      sym_parameter_value,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(796), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(223), 5,
      sym_identifier,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [8899] = 4,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(605), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(600), 12,
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
  [8925] = 7,
    ACTIONS(905), 1,
      ts_builtin_sym_end,
    ACTIONS(910), 1,
      sym_kw_create,
    ACTIONS(913), 1,
      sym_kw_alter,
    STATE(453), 1,
      sym_create_obj,
    ACTIONS(907), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(199), 3,
      sym__element,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
    STATE(526), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [8957] = 8,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(853), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(300), 1,
      sym_reuse_settings,
    STATE(696), 1,
      sym_identifier,
    STATE(201), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(901), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [8991] = 8,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(853), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(315), 1,
      sym_reuse_settings,
    STATE(696), 1,
      sym_identifier,
    STATE(207), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(916), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9025] = 10,
    ACTIONS(885), 1,
      sym_kw_default,
    ACTIONS(887), 1,
      sym_kw_authid,
    ACTIONS(889), 1,
      sym_kw_accessible,
    STATE(211), 1,
      sym_sharing_clause,
    STATE(381), 1,
      sym__is_as,
    STATE(541), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(883), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(918), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(235), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [9063] = 7,
    ACTIONS(9), 1,
      sym_kw_create,
    ACTIONS(11), 1,
      sym_kw_alter,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
    STATE(453), 1,
      sym_create_obj,
    ACTIONS(922), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(199), 3,
      sym__element,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
    STATE(526), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [9095] = 8,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(853), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(306), 1,
      sym_reuse_settings,
    STATE(696), 1,
      sym_identifier,
    STATE(207), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(869), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9129] = 8,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(853), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(306), 1,
      sym_reuse_settings,
    STATE(696), 1,
      sym_identifier,
    STATE(196), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(869), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [9163] = 10,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
    ACTIONS(926), 1,
      sym__unquoted_identifier,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    STATE(251), 1,
      sym_identifier,
    STATE(254), 1,
      sym__quoted_identifier,
    STATE(427), 1,
      sym_unit_kind,
    STATE(467), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(208), 2,
      sym_accessor,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(930), 5,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [9200] = 6,
    ACTIONS(934), 1,
      sym__unquoted_identifier,
    ACTIONS(937), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(696), 1,
      sym_identifier,
    STATE(207), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(932), 10,
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
  [9229] = 10,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
    ACTIONS(942), 1,
      sym__unquoted_identifier,
    ACTIONS(945), 1,
      anon_sym_DQUOTE,
    STATE(251), 1,
      sym_identifier,
    STATE(254), 1,
      sym__quoted_identifier,
    STATE(427), 1,
      sym_unit_kind,
    STATE(467), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(208), 2,
      sym_accessor,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(948), 5,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [9266] = 9,
    ACTIONS(926), 1,
      sym__unquoted_identifier,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    STATE(251), 1,
      sym_identifier,
    STATE(254), 1,
      sym__quoted_identifier,
    STATE(427), 1,
      sym_unit_kind,
    STATE(467), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(206), 2,
      sym_accessor,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(930), 5,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [9300] = 8,
    ACTIONS(885), 1,
      sym_kw_default,
    ACTIONS(887), 1,
      sym_kw_authid,
    ACTIONS(889), 1,
      sym_kw_accessible,
    STATE(332), 1,
      sym__is_as,
    STATE(547), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(951), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(235), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [9331] = 8,
    ACTIONS(885), 1,
      sym_kw_default,
    ACTIONS(887), 1,
      sym_kw_authid,
    ACTIONS(889), 1,
      sym_kw_accessible,
    STATE(327), 1,
      sym__is_as,
    STATE(548), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(953), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(235), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [9362] = 9,
    ACTIONS(885), 1,
      sym_kw_default,
    ACTIONS(887), 1,
      sym_kw_authid,
    ACTIONS(889), 1,
      sym_kw_accessible,
    ACTIONS(955), 1,
      anon_sym_SEMI,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
    STATE(244), 1,
      sym_parameter_declaration,
    STATE(678), 1,
      sym_procedure_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(257), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [9395] = 8,
    ACTIONS(885), 1,
      sym_kw_default,
    ACTIONS(887), 1,
      sym_kw_authid,
    ACTIONS(889), 1,
      sym_kw_accessible,
    STATE(341), 1,
      sym__is_as,
    STATE(555), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(959), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(235), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [9426] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(963), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(961), 10,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
      sym_kw_not,
      sym_kw_inserting,
      sym_kw_deleting,
      sym_kw_updating,
  [9447] = 8,
    ACTIONS(885), 1,
      sym_kw_default,
    ACTIONS(887), 1,
      sym_kw_authid,
    ACTIONS(889), 1,
      sym_kw_accessible,
    STATE(378), 1,
      sym__is_as,
    STATE(542), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(965), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(235), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [9478] = 5,
    ACTIONS(881), 1,
      anon_sym_DOT,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(234), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(967), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9502] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(149), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(151), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [9522] = 4,
    ACTIONS(975), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(977), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(973), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [9544] = 5,
    ACTIONS(881), 1,
      anon_sym_DOT,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(240), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(979), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9568] = 5,
    ACTIONS(881), 1,
      anon_sym_DOT,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(225), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(981), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9592] = 5,
    ACTIONS(881), 1,
      anon_sym_DOT,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(241), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(983), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9616] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(153), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(155), 9,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [9636] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(977), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(973), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [9655] = 4,
    ACTIONS(987), 1,
      sym_kw_compile,
    ACTIONS(990), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(224), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(985), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9676] = 4,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(224), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(993), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9697] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(997), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(995), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [9716] = 4,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(228), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(999), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9737] = 4,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(224), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1001), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9758] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(609), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(607), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [9777] = 2,
    ACTIONS(1005), 1,
      sym__unquoted_identifier,
    ACTIONS(1003), 11,
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
  [9794] = 2,
    ACTIONS(609), 1,
      sym__unquoted_identifier,
    ACTIONS(607), 11,
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
  [9811] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1009), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(1007), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [9830] = 4,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(224), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1011), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9851] = 4,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(224), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1013), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9872] = 6,
    ACTIONS(885), 1,
      sym_kw_default,
    ACTIONS(887), 1,
      sym_kw_authid,
    ACTIONS(889), 1,
      sym_kw_accessible,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1015), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(239), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [9897] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(409), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(411), 8,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [9916] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1021), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(1017), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [9937] = 4,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(224), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1023), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [9958] = 6,
    ACTIONS(1025), 1,
      sym_kw_default,
    ACTIONS(1028), 1,
      sym_kw_authid,
    ACTIONS(1031), 1,
      sym_kw_accessible,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1034), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(239), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [9983] = 4,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(224), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1036), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10004] = 4,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(224), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1038), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10025] = 4,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(238), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1040), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10046] = 6,
    ACTIONS(1042), 1,
      sym__single_quote_string,
    ACTIONS(1044), 1,
      sym__number,
    ACTIONS(1046), 1,
      sym__float,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1048), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(230), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [10071] = 7,
    ACTIONS(885), 1,
      sym_kw_default,
    ACTIONS(887), 1,
      sym_kw_authid,
    ACTIONS(889), 1,
      sym_kw_accessible,
    ACTIONS(1050), 1,
      anon_sym_SEMI,
    STATE(623), 1,
      sym_procedure_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(257), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [10098] = 2,
    ACTIONS(409), 1,
      sym__unquoted_identifier,
    ACTIONS(411), 11,
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
  [10115] = 4,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(224), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1052), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10136] = 4,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(246), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1054), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10157] = 4,
    ACTIONS(969), 1,
      sym_kw_compile,
    ACTIONS(971), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(233), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(1056), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10178] = 6,
    ACTIONS(1058), 1,
      anon_sym_SEMI,
    ACTIONS(1060), 1,
      sym_kw_default,
    ACTIONS(1063), 1,
      sym_kw_authid,
    ACTIONS(1066), 1,
      sym_kw_accessible,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(249), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [10202] = 6,
    ACTIONS(1069), 1,
      anon_sym_LPAREN,
    ACTIONS(1073), 1,
      sym__unquoted_identifier,
    ACTIONS(1075), 1,
      sym_kw_varying,
    STATE(376), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1071), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10226] = 4,
    ACTIONS(881), 1,
      anon_sym_DOT,
    ACTIONS(1079), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1077), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [10246] = 3,
    ACTIONS(153), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(155), 8,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [10264] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1083), 2,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(1081), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [10282] = 3,
    ACTIONS(149), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(151), 8,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [10300] = 6,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
    ACTIONS(1089), 1,
      sym__unquoted_identifier,
    ACTIONS(1091), 1,
      sym_kw_with,
    STATE(322), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1087), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10324] = 4,
    ACTIONS(881), 1,
      anon_sym_DOT,
    ACTIONS(1095), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1093), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [10344] = 6,
    ACTIONS(885), 1,
      sym_kw_default,
    ACTIONS(887), 1,
      sym_kw_authid,
    ACTIONS(889), 1,
      sym_kw_accessible,
    ACTIONS(1097), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(249), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [10368] = 6,
    ACTIONS(1075), 1,
      sym_kw_varying,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    ACTIONS(1103), 1,
      sym__unquoted_identifier,
    STATE(372), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1101), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10392] = 3,
    ACTIONS(1107), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1105), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [10409] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(432), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [10432] = 5,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    ACTIONS(1117), 1,
      sym_kw_varying,
    STATE(412), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1071), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [10453] = 5,
    ACTIONS(1121), 1,
      anon_sym_DOT,
    ACTIONS(1123), 1,
      sym__unquoted_identifier,
    ACTIONS(1125), 1,
      sym_kw_datatype_type,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1119), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10474] = 5,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1131), 1,
      sym__unquoted_identifier,
    STATE(364), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1129), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10495] = 5,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    ACTIONS(1135), 1,
      sym__unquoted_identifier,
    STATE(366), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1133), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10516] = 5,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    ACTIONS(1139), 1,
      sym__unquoted_identifier,
    STATE(339), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1137), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10537] = 3,
    ACTIONS(1143), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1141), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [10554] = 5,
    ACTIONS(1117), 1,
      sym_kw_varying,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(404), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1101), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [10575] = 5,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    ACTIONS(1149), 1,
      sym__unquoted_identifier,
    STATE(369), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1147), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10596] = 5,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    ACTIONS(1153), 1,
      sym__unquoted_identifier,
    STATE(335), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1151), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10617] = 5,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    ACTIONS(1157), 1,
      sym__unquoted_identifier,
    STATE(370), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1155), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10638] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(438), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [10661] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(414), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [10684] = 5,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    ACTIONS(1161), 1,
      sym__unquoted_identifier,
    STATE(373), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1159), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10705] = 1,
    ACTIONS(151), 10,
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
  [10718] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(426), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [10741] = 5,
    ACTIONS(1069), 1,
      anon_sym_LPAREN,
    ACTIONS(1165), 1,
      sym__unquoted_identifier,
    STATE(374), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1163), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [10762] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(415), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [10785] = 5,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    ACTIONS(1167), 1,
      sym_kw_with,
    STATE(379), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1087), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [10806] = 5,
    ACTIONS(1169), 1,
      anon_sym_SEMI,
    STATE(627), 1,
      sym_function_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(308), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(1171), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [10827] = 5,
    ACTIONS(1173), 1,
      anon_sym_SEMI,
    STATE(704), 1,
      sym_function_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(308), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(1171), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [10848] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(434), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [10871] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(430), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [10894] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(417), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [10917] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(396), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [10940] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(428), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [10963] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(386), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [10986] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(410), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11009] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(448), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11032] = 6,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(1113), 1,
      sym_kw_end,
    STATE(388), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11055] = 3,
    ACTIONS(153), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(155), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_datatype_type,
      sym_kw_default,
  [11072] = 3,
    ACTIONS(149), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(151), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_datatype_type,
      sym_kw_default,
  [11089] = 1,
    ACTIONS(155), 10,
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
  [11102] = 1,
    ACTIONS(869), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11114] = 3,
    ACTIONS(1177), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1175), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
      sym_kw_with,
  [11130] = 6,
    ACTIONS(1089), 1,
      sym__unquoted_identifier,
    ACTIONS(1179), 1,
      anon_sym_LPAREN,
    ACTIONS(1181), 1,
      sym_kw_with,
    STATE(391), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1087), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [11152] = 4,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(423), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1151), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11170] = 7,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    ACTIONS(1185), 1,
      sym__unquoted_identifier,
    ACTIONS(1188), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_identifier,
    STATE(9), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(297), 2,
      sym_parameter_declaration_element,
      aux_sym_parameter_declaration_repeat1,
  [11194] = 6,
    ACTIONS(1103), 1,
      sym__unquoted_identifier,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    ACTIONS(1193), 1,
      sym_kw_varying,
    STATE(496), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1101), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [11216] = 5,
    ACTIONS(1199), 1,
      sym__unquoted_identifier,
    STATE(474), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1197), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
    ACTIONS(1195), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [11236] = 1,
    ACTIONS(916), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11248] = 6,
    ACTIONS(1073), 1,
      sym__unquoted_identifier,
    ACTIONS(1193), 1,
      sym_kw_varying,
    ACTIONS(1201), 1,
      anon_sym_LPAREN,
    STATE(492), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1071), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [11270] = 4,
    ACTIONS(1203), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(302), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(1205), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11288] = 1,
    ACTIONS(1208), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11300] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1175), 7,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_with,
      sym_kw_to,
  [11314] = 5,
    ACTIONS(1210), 1,
      sym_kw_function,
    ACTIONS(1213), 1,
      sym_kw_procedure,
    ACTIONS(1216), 1,
      sym_kw_end,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(305), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11334] = 1,
    ACTIONS(901), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11346] = 4,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(416), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1137), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11364] = 4,
    ACTIONS(1218), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(302), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(1220), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11382] = 5,
    ACTIONS(1224), 1,
      sym__unquoted_identifier,
    STATE(511), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1197), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
    ACTIONS(1222), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [11402] = 4,
    ACTIONS(1226), 1,
      anon_sym_DOT,
    ACTIONS(1228), 1,
      sym_kw_datatype_type,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1119), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11420] = 4,
    ACTIONS(1230), 1,
      anon_sym_LPAREN,
    STATE(389), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1129), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11438] = 4,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(394), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1133), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11456] = 7,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
    ACTIONS(1234), 1,
      sym__unquoted_identifier,
    ACTIONS(1236), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_identifier,
    STATE(9), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(297), 2,
      sym_parameter_declaration_element,
      aux_sym_parameter_declaration_repeat1,
  [11480] = 7,
    ACTIONS(1234), 1,
      sym__unquoted_identifier,
    ACTIONS(1236), 1,
      anon_sym_DQUOTE,
    ACTIONS(1238), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_identifier,
    STATE(9), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(313), 2,
      sym_parameter_declaration_element,
      aux_sym_parameter_declaration_repeat1,
  [11504] = 1,
    ACTIONS(1240), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11516] = 1,
    ACTIONS(1242), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [11528] = 4,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(400), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1147), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11546] = 4,
    ACTIONS(1230), 1,
      anon_sym_LPAREN,
    STATE(401), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1155), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11564] = 4,
    ACTIONS(1246), 1,
      sym__unquoted_identifier,
    ACTIONS(1248), 1,
      sym_kw_raw,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1244), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11582] = 4,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(405), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1159), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11600] = 4,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
    STATE(408), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1163), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11618] = 4,
    ACTIONS(1252), 1,
      sym__unquoted_identifier,
    ACTIONS(1254), 1,
      sym_kw_with,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1250), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11636] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(288), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11653] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1256), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [11666] = 3,
    ACTIONS(1258), 1,
      sym_kw_raw,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1244), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [11681] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(260), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11698] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(281), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11715] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(284), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11732] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(275), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11749] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(287), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11766] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(289), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11783] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(286), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11800] = 3,
    ACTIONS(1262), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1260), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11815] = 3,
    ACTIONS(1266), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1264), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11830] = 3,
    ACTIONS(1139), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1137), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11845] = 3,
    ACTIONS(1270), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1268), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11860] = 3,
    ACTIONS(1274), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1272), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11875] = 3,
    ACTIONS(1278), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1276), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11890] = 3,
    ACTIONS(1282), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1280), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [11905] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1284), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [11918] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(271), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11935] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1286), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [11948] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(272), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11965] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(277), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [11982] = 4,
    ACTIONS(1201), 1,
      anon_sym_LPAREN,
    STATE(494), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1163), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [11999] = 3,
    ACTIONS(1290), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1288), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12014] = 4,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    STATE(495), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1159), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12031] = 3,
    ACTIONS(1294), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1292), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12046] = 3,
    ACTIONS(1298), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1296), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12061] = 3,
    ACTIONS(1302), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1300), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12076] = 3,
    ACTIONS(1306), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1304), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12091] = 3,
    ACTIONS(1177), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1175), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12106] = 3,
    ACTIONS(1310), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1308), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12121] = 4,
    ACTIONS(1312), 1,
      anon_sym_LPAREN,
    STATE(497), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1155), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12138] = 4,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    STATE(498), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1147), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12155] = 3,
    ACTIONS(1316), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1314), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12170] = 3,
    ACTIONS(1320), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1318), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12185] = 3,
    ACTIONS(1324), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1322), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12200] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(155), 6,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
      sym_kw_datatype_type,
  [12213] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(151), 6,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
      sym_kw_datatype_type,
  [12226] = 3,
    ACTIONS(1328), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1326), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12241] = 3,
    ACTIONS(1332), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1330), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12256] = 3,
    ACTIONS(1336), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1334), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12271] = 3,
    ACTIONS(1340), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1338), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12286] = 3,
    ACTIONS(1344), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1342), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12301] = 3,
    ACTIONS(1348), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1346), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12316] = 3,
    ACTIONS(1352), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1350), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12331] = 3,
    ACTIONS(1356), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1354), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12346] = 3,
    ACTIONS(1360), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1358), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12361] = 3,
    ACTIONS(1364), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1362), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12376] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(283), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [12393] = 3,
    ACTIONS(1368), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1366), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12408] = 3,
    ACTIONS(1372), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1370), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12423] = 3,
    ACTIONS(1376), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1374), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12438] = 3,
    ACTIONS(1380), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1378), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12453] = 3,
    ACTIONS(1384), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1382), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12468] = 3,
    ACTIONS(1388), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1386), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_DQUOTE,
      sym_kw_default,
  [12483] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(285), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [12500] = 3,
    ACTIONS(1390), 1,
      sym_kw_with,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1250), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12515] = 4,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    STATE(524), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1137), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12532] = 4,
    ACTIONS(1109), 1,
      sym_kw_function,
    ACTIONS(1111), 1,
      sym_kw_procedure,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(282), 4,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      aux_sym_create_package_repeat1,
  [12549] = 4,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    STATE(502), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1133), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12566] = 4,
    ACTIONS(1312), 1,
      anon_sym_LPAREN,
    STATE(504), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1129), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12583] = 4,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    STATE(530), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1151), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12600] = 4,
    ACTIONS(1392), 1,
      anon_sym_DOT,
    ACTIONS(1394), 1,
      sym_kw_datatype_type,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1119), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [12617] = 2,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1396), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [12629] = 6,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1400), 1,
      anon_sym_SEMI,
    ACTIONS(1402), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(615), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12649] = 2,
    ACTIONS(1404), 1,
      anon_sym_SLASH,
    ACTIONS(1396), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [12661] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1338), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12673] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1334), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12685] = 4,
    ACTIONS(1252), 1,
      sym__unquoted_identifier,
    ACTIONS(1406), 1,
      sym_kw_with,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1250), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [12701] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1408), 5,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_return,
  [12713] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1342), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12725] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1346), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12737] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1304), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12749] = 2,
    ACTIONS(1412), 1,
      anon_sym_SLASH,
    ACTIONS(1410), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [12761] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1350), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12773] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1296), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12785] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1354), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12797] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1358), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12809] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1362), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12821] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1292), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12833] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1414), 5,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [12845] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1366), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12857] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1370), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12869] = 4,
    ACTIONS(1246), 1,
      sym__unquoted_identifier,
    ACTIONS(1416), 1,
      sym_kw_raw,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1244), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [12885] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1288), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12897] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1374), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12909] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1378), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12921] = 2,
    ACTIONS(1420), 1,
      anon_sym_SLASH,
    ACTIONS(1418), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [12933] = 3,
    ACTIONS(1177), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1175), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_kw_with,
  [12947] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1382), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12959] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1300), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12971] = 2,
    ACTIONS(1424), 1,
      anon_sym_SLASH,
    ACTIONS(1422), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [12983] = 2,
    ACTIONS(1428), 1,
      anon_sym_SLASH,
    ACTIONS(1426), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [12995] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1280), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13007] = 2,
    ACTIONS(1432), 1,
      anon_sym_SLASH,
    ACTIONS(1430), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13019] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1264), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13031] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1308), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13043] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1314), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13055] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1318), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13067] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1260), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13079] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1137), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13091] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1268), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13103] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1434), 5,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_return,
  [13115] = 2,
    ACTIONS(1438), 1,
      anon_sym_SLASH,
    ACTIONS(1436), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13127] = 6,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(1440), 1,
      sym__unquoted_identifier,
    STATE(254), 1,
      sym__quoted_identifier,
    STATE(256), 1,
      sym_identifier,
    STATE(512), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13147] = 2,
    ACTIONS(1444), 1,
      anon_sym_SLASH,
    ACTIONS(1442), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13159] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1272), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13171] = 2,
    ACTIONS(1448), 1,
      anon_sym_SLASH,
    ACTIONS(1446), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13183] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1330), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13195] = 2,
    ACTIONS(1452), 1,
      anon_sym_SLASH,
    ACTIONS(1450), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13207] = 6,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1402), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(193), 1,
      sym_identifier,
    STATE(523), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13227] = 2,
    ACTIONS(1454), 1,
      anon_sym_SLASH,
    ACTIONS(1450), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13239] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1276), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13251] = 6,
    ACTIONS(107), 1,
      sym__unquoted_identifier,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1456), 1,
      sym_kw_exists,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13271] = 2,
    ACTIONS(1460), 1,
      anon_sym_SLASH,
    ACTIONS(1458), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13283] = 2,
    ACTIONS(1464), 1,
      anon_sym_SLASH,
    ACTIONS(1462), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13295] = 6,
    ACTIONS(577), 1,
      sym__unquoted_identifier,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
    ACTIONS(1456), 1,
      sym_kw_exists,
    STATE(121), 1,
      sym__quoted_identifier,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13315] = 2,
    ACTIONS(1468), 1,
      anon_sym_SLASH,
    ACTIONS(1466), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13327] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1386), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13339] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1470), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13351] = 6,
    ACTIONS(262), 1,
      sym__unquoted_identifier,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(1472), 1,
      sym_kw_exists,
    STATE(33), 1,
      sym__quoted_identifier,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13371] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1322), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13383] = 6,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1402), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(191), 1,
      sym_identifier,
    STATE(463), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13403] = 6,
    ACTIONS(1474), 1,
      sym__unquoted_identifier,
    ACTIONS(1476), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      sym_identifier,
    STATE(274), 1,
      sym__quoted_identifier,
    STATE(462), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13423] = 6,
    ACTIONS(1474), 1,
      sym__unquoted_identifier,
    ACTIONS(1476), 1,
      anon_sym_DQUOTE,
    STATE(220), 1,
      sym_identifier,
    STATE(274), 1,
      sym__quoted_identifier,
    STATE(461), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13443] = 2,
    ACTIONS(1480), 1,
      anon_sym_SLASH,
    ACTIONS(1478), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13455] = 6,
    ACTIONS(1474), 1,
      sym__unquoted_identifier,
    ACTIONS(1476), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      sym_identifier,
    STATE(274), 1,
      sym__quoted_identifier,
    STATE(460), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13475] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1326), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13487] = 6,
    ACTIONS(1474), 1,
      sym__unquoted_identifier,
    ACTIONS(1476), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      sym_identifier,
    STATE(274), 1,
      sym__quoted_identifier,
    STATE(458), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13507] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1288), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [13518] = 4,
    ACTIONS(1482), 1,
      sym_kw_package,
    STATE(653), 1,
      sym_editionable_noneditionable,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1484), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [13533] = 5,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    ACTIONS(1486), 1,
      sym_kw_char,
    ACTIONS(1488), 1,
      sym_kw_character,
    STATE(493), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13550] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1490), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [13561] = 1,
    ACTIONS(1462), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13570] = 1,
    ACTIONS(1492), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13579] = 5,
    ACTIONS(1474), 1,
      sym__unquoted_identifier,
    ACTIONS(1476), 1,
      anon_sym_DQUOTE,
    STATE(242), 1,
      sym_identifier,
    STATE(274), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13596] = 4,
    ACTIONS(1494), 1,
      anon_sym_RPAREN,
    STATE(689), 1,
      sym_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1496), 2,
      sym_kw_byte,
      sym_kw_char,
  [13611] = 5,
    ACTIONS(1474), 1,
      sym__unquoted_identifier,
    ACTIONS(1476), 1,
      anon_sym_DQUOTE,
    STATE(247), 1,
      sym_identifier,
    STATE(274), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13628] = 5,
    ACTIONS(1474), 1,
      sym__unquoted_identifier,
    ACTIONS(1476), 1,
      anon_sym_DQUOTE,
    STATE(227), 1,
      sym_identifier,
    STATE(274), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13645] = 5,
    ACTIONS(1474), 1,
      sym__unquoted_identifier,
    ACTIONS(1476), 1,
      anon_sym_DQUOTE,
    STATE(248), 1,
      sym_identifier,
    STATE(274), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13662] = 5,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1402), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(194), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13679] = 1,
    ACTIONS(1478), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13688] = 5,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1402), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(212), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13705] = 5,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1402), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(480), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13722] = 5,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(1440), 1,
      sym__unquoted_identifier,
    STATE(254), 1,
      sym__quoted_identifier,
    STATE(266), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13739] = 4,
    ACTIONS(551), 1,
      sym__number,
    ACTIONS(553), 1,
      sym__float,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(128), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
  [13754] = 5,
    ACTIONS(1498), 1,
      sym_kw_package,
    ACTIONS(1500), 1,
      sym_kw_function,
    ACTIONS(1502), 1,
      sym_kw_procedure,
    ACTIONS(1504), 1,
      sym_kw_library,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13771] = 5,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1402), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(688), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13788] = 3,
    ACTIONS(1508), 1,
      sym_kw_or,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1506), 3,
      sym_kw_package,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [13801] = 1,
    ACTIONS(1442), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13810] = 1,
    ACTIONS(1450), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13819] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1222), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [13830] = 4,
    ACTIONS(1510), 1,
      anon_sym_RPAREN,
    STATE(641), 1,
      sym_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1496), 2,
      sym_kw_byte,
      sym_kw_char,
  [13845] = 1,
    ACTIONS(1436), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13854] = 4,
    ACTIONS(221), 1,
      sym__number,
    ACTIONS(223), 1,
      sym__float,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(29), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
  [13869] = 4,
    ACTIONS(1512), 1,
      anon_sym_RPAREN,
    STATE(634), 1,
      sym_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1496), 2,
      sym_kw_byte,
      sym_kw_char,
  [13884] = 5,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    ACTIONS(1514), 1,
      sym_kw_char,
    ACTIONS(1516), 1,
      sym_kw_character,
    STATE(375), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13901] = 5,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
    ACTIONS(1518), 1,
      sym_kw_return,
    STATE(279), 1,
      sym_return_declaration,
    STATE(576), 1,
      sym_parameter_declaration,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13918] = 1,
    ACTIONS(1436), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13927] = 5,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1402), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(638), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13944] = 5,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1402), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(698), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13961] = 1,
    ACTIONS(1520), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13970] = 3,
    ACTIONS(1524), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1522), 3,
      anon_sym_RPAREN,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [13983] = 1,
    ACTIONS(1426), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13992] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1526), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14003] = 1,
    ACTIONS(1410), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14012] = 1,
    ACTIONS(1410), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14021] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1386), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14032] = 1,
    ACTIONS(1528), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14041] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1382), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14052] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1378), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14063] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1374), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14074] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1370), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14085] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1366), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14096] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1362), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14107] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1358), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14118] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1354), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14129] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1350), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14140] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1530), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14151] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1346), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14162] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1342), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14173] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1338), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14184] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1334), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14195] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1330), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14206] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1326), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14217] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1322), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14228] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1318), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14239] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1314), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14250] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1532), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14261] = 5,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    ACTIONS(1440), 1,
      sym__unquoted_identifier,
    STATE(254), 1,
      sym__quoted_identifier,
    STATE(259), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14278] = 1,
    ACTIONS(1396), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14287] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1308), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14298] = 1,
    ACTIONS(1534), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14307] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1304), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14318] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1300), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14329] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1296), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14340] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1292), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14351] = 5,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1402), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(640), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14368] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1175), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14379] = 5,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1402), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14396] = 5,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(1402), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(202), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14413] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1280), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14424] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1264), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14435] = 2,
    ACTIONS(1538), 1,
      anon_sym_SEMI,
    ACTIONS(1536), 5,
      ts_builtin_sym_end,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14446] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1276), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14457] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1272), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14468] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1268), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14479] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1137), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14490] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1260), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14501] = 4,
    ACTIONS(565), 1,
      sym__number,
    ACTIONS(567), 1,
      sym__float,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(130), 2,
      sym__expression_numeric_sub,
      sym_literal_number,
  [14516] = 5,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    ACTIONS(1540), 1,
      sym_kw_char,
    ACTIONS(1542), 1,
      sym_kw_character,
    STATE(409), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14533] = 4,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    ACTIONS(1544), 1,
      sym_kw_varying,
    STATE(358), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14547] = 4,
    ACTIONS(1546), 1,
      sym_kw_between,
    ACTIONS(1548), 1,
      sym_kw_in,
    ACTIONS(1550), 1,
      sym_kw_like,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14561] = 4,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    ACTIONS(1552), 1,
      sym_kw_varying,
    STATE(508), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14575] = 4,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    ACTIONS(1554), 1,
      sym_kw_varying,
    STATE(503), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14589] = 4,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    ACTIONS(1556), 1,
      sym_kw_to,
    STATE(687), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14603] = 4,
    ACTIONS(1550), 1,
      sym_kw_like,
    ACTIONS(1558), 1,
      sym_kw_between,
    ACTIONS(1560), 1,
      sym_kw_in,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14617] = 4,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    ACTIONS(1562), 1,
      sym_kw_to,
    STATE(699), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14631] = 3,
    STATE(326), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1564), 2,
      sym_kw_is,
      sym_kw_as,
  [14643] = 3,
    STATE(323), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1566), 2,
      sym_kw_is,
      sym_kw_as,
  [14655] = 4,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    ACTIONS(1568), 1,
      sym_kw_varying,
    STATE(393), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14669] = 3,
    STATE(341), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(959), 2,
      sym_kw_is,
      sym_kw_as,
  [14681] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1570), 3,
      anon_sym_RPAREN,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [14691] = 3,
    STATE(378), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(965), 2,
      sym_kw_is,
      sym_kw_as,
  [14703] = 3,
    STATE(329), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1572), 2,
      sym_kw_is,
      sym_kw_as,
  [14715] = 3,
    STATE(328), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1574), 2,
      sym_kw_is,
      sym_kw_as,
  [14727] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1576), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [14737] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1578), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [14747] = 4,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    ACTIONS(1580), 1,
      sym_kw_to,
    STATE(677), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14761] = 4,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    ACTIONS(1582), 1,
      sym_kw_to,
    STATE(676), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14775] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1584), 3,
      sym_kw_found,
      sym_kw_isopen,
      sym_kw_notfound,
  [14785] = 4,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    ACTIONS(1586), 1,
      sym_kw_varying,
    STATE(444), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14799] = 3,
    STATE(344), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1588), 2,
      sym_kw_is,
      sym_kw_as,
  [14811] = 3,
    ACTIONS(1590), 1,
      sym_kw_anydata,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1592), 2,
      sym_kw_anytype,
      sym_kw_anydataset,
  [14823] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1594), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [14833] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1596), 3,
      sym_kw_found,
      sym_kw_isopen,
      sym_kw_notfound,
  [14843] = 4,
    ACTIONS(1598), 1,
      sym_kw_between,
    ACTIONS(1600), 1,
      sym_kw_in,
    ACTIONS(1602), 1,
      sym_kw_like,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14857] = 3,
    ACTIONS(1604), 1,
      sym_kw_anydata,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1606), 2,
      sym_kw_anytype,
      sym_kw_anydataset,
  [14869] = 3,
    STATE(331), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1608), 2,
      sym_kw_is,
      sym_kw_as,
  [14881] = 1,
    ACTIONS(1610), 5,
      ts_builtin_sym_end,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14889] = 4,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    ACTIONS(1612), 1,
      sym_kw_to,
    STATE(702), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14903] = 4,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    ACTIONS(1614), 1,
      sym_kw_to,
    STATE(703), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14917] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1616), 3,
      sym_kw_package,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [14927] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1618), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [14937] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1620), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [14947] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1622), 3,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_end,
  [14957] = 4,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    ACTIONS(1624), 1,
      sym_kw_varying,
    STATE(365), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14971] = 3,
    ACTIONS(1626), 1,
      sym_kw_anydata,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1628), 2,
      sym_kw_anytype,
      sym_kw_anydataset,
  [14983] = 3,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    STATE(361), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14994] = 3,
    ACTIONS(1630), 1,
      sym__single_quote_string,
    STATE(86), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15005] = 3,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    STATE(357), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15016] = 3,
    ACTIONS(1632), 1,
      sym_kw_local,
    ACTIONS(1634), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15027] = 3,
    ACTIONS(1636), 1,
      sym_kw_local,
    ACTIONS(1638), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15038] = 3,
    ACTIONS(1518), 1,
      sym_kw_return,
    STATE(280), 1,
      sym_return_declaration,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15049] = 3,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    STATE(351), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15060] = 3,
    ACTIONS(1640), 1,
      anon_sym_RPAREN,
    ACTIONS(1642), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15071] = 3,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(397), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15082] = 3,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    STATE(367), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15093] = 3,
    ACTIONS(1644), 1,
      sym_kw_year,
    ACTIONS(1646), 1,
      sym_kw_day,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15104] = 3,
    ACTIONS(1648), 1,
      anon_sym_RPAREN,
    ACTIONS(1650), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15115] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1652), 2,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [15124] = 3,
    ACTIONS(1654), 1,
      sym__number,
    STATE(648), 1,
      sym__scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15135] = 3,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    STATE(516), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15146] = 3,
    ACTIONS(1656), 1,
      sym_kw_local,
    ACTIONS(1658), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15157] = 3,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(450), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15168] = 3,
    ACTIONS(1660), 1,
      sym__single_quote_string,
    STATE(153), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15179] = 3,
    ACTIONS(1662), 1,
      sym_kw_null,
    ACTIONS(1664), 1,
      sym_kw_not,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15190] = 3,
    ACTIONS(1666), 1,
      sym_kw_null,
    ACTIONS(1668), 1,
      sym_kw_not,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15201] = 3,
    ACTIONS(1670), 1,
      sym_kw_year,
    ACTIONS(1672), 1,
      sym_kw_day,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15212] = 3,
    ACTIONS(1674), 1,
      sym__number,
    STATE(617), 1,
      sym__scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15223] = 3,
    ACTIONS(1676), 1,
      anon_sym_RPAREN,
    ACTIONS(1678), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15234] = 3,
    ACTIONS(1680), 1,
      sym__number,
    ACTIONS(1682), 1,
      sym__float,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15245] = 3,
    ACTIONS(1684), 1,
      sym__number,
    STATE(578), 1,
      sym__precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15256] = 3,
    ACTIONS(1686), 1,
      sym_kw_local,
    ACTIONS(1688), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15267] = 3,
    ACTIONS(1630), 1,
      sym__single_quote_string,
    STATE(54), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15278] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1690), 2,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [15287] = 3,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15298] = 3,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(395), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15309] = 3,
    ACTIONS(1692), 1,
      sym_kw_year,
    ACTIONS(1694), 1,
      sym_kw_day,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15320] = 3,
    ACTIONS(1696), 1,
      sym_kw_local,
    ACTIONS(1698), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15331] = 3,
    ACTIONS(1700), 1,
      sym_kw_local,
    ACTIONS(1702), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15342] = 3,
    ACTIONS(1660), 1,
      sym__single_quote_string,
    STATE(166), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15353] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1704), 2,
      sym_kw_current_user,
      sym_kw_definer,
  [15362] = 3,
    ACTIONS(1706), 1,
      sym__number,
    STATE(625), 1,
      sym__scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15373] = 3,
    ACTIONS(1708), 1,
      sym__number,
    STATE(593), 1,
      sym__precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15384] = 3,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    STATE(500), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15395] = 3,
    ACTIONS(1710), 1,
      sym__number,
    STATE(582), 1,
      sym__precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15406] = 3,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    STATE(507), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15417] = 3,
    ACTIONS(1191), 1,
      anon_sym_LPAREN,
    STATE(509), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15428] = 2,
    ACTIONS(1712), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15436] = 2,
    ACTIONS(1714), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15444] = 2,
    ACTIONS(1716), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15452] = 2,
    ACTIONS(1718), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15460] = 2,
    ACTIONS(1720), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15468] = 2,
    ACTIONS(1722), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15476] = 2,
    ACTIONS(1724), 1,
      sym_kw_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15484] = 2,
    ACTIONS(1726), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15492] = 2,
    ACTIONS(1728), 1,
      sym_kw_precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15500] = 2,
    ACTIONS(1730), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15508] = 2,
    ACTIONS(1732), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15516] = 2,
    ACTIONS(1734), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15524] = 2,
    ACTIONS(1736), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15532] = 2,
    ACTIONS(1738), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15540] = 2,
    ACTIONS(1740), 1,
      sym_kw_precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15548] = 2,
    ACTIONS(1173), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15556] = 2,
    ACTIONS(1742), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15564] = 2,
    ACTIONS(1744), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15572] = 2,
    ACTIONS(1746), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15580] = 2,
    ACTIONS(1748), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15588] = 2,
    ACTIONS(1750), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15596] = 2,
    ACTIONS(1752), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15604] = 2,
    ACTIONS(1754), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15612] = 2,
    ACTIONS(1756), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15620] = 2,
    ACTIONS(1758), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15628] = 2,
    ACTIONS(1760), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15636] = 2,
    ACTIONS(1762), 1,
      sym_kw_datatype_type,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15644] = 2,
    ACTIONS(1764), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1766), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15652] = 2,
    ACTIONS(1768), 1,
      sym_kw_datatype_type,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15660] = 2,
    ACTIONS(1770), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15668] = 2,
    ACTIONS(1772), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15676] = 2,
    ACTIONS(1774), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15684] = 2,
    ACTIONS(1776), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15692] = 2,
    ACTIONS(1778), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15700] = 2,
    ACTIONS(1780), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15708] = 2,
    ACTIONS(1782), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15716] = 2,
    ACTIONS(1784), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15724] = 2,
    ACTIONS(1786), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15732] = 2,
    ACTIONS(1788), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15740] = 2,
    ACTIONS(1790), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15748] = 2,
    ACTIONS(1792), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15756] = 2,
    ACTIONS(1794), 1,
      sym_kw_package,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15764] = 2,
    ACTIONS(1208), 1,
      sym_kw_package,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15772] = 2,
    ACTIONS(1796), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15780] = 2,
    ACTIONS(1798), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15788] = 2,
    ACTIONS(1800), 1,
      sym_kw_precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15796] = 2,
    ACTIONS(1802), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15804] = 2,
    ACTIONS(1804), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15812] = 2,
    ACTIONS(1806), 1,
      sym_kw_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15820] = 2,
    ACTIONS(1808), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15828] = 2,
    ACTIONS(1810), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15836] = 2,
    ACTIONS(1812), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15844] = 2,
    ACTIONS(1814), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15852] = 2,
    ACTIONS(1816), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1766), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15860] = 2,
    ACTIONS(1818), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15868] = 2,
    ACTIONS(1820), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15876] = 2,
    ACTIONS(1822), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15884] = 2,
    ACTIONS(1824), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15892] = 2,
    ACTIONS(1826), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15900] = 2,
    ACTIONS(1828), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15908] = 2,
    ACTIONS(1830), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15916] = 2,
    ACTIONS(1832), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15924] = 2,
    ACTIONS(1702), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15932] = 2,
    ACTIONS(1834), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15940] = 2,
    ACTIONS(1836), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15948] = 2,
    ACTIONS(1838), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15956] = 2,
    ACTIONS(1050), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15964] = 2,
    ACTIONS(1840), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15972] = 2,
    ACTIONS(1842), 1,
      sym_kw_collation,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15980] = 2,
    ACTIONS(1844), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15988] = 2,
    ACTIONS(1846), 1,
      sym_kw_by,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15996] = 2,
    ACTIONS(1848), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16004] = 2,
    ACTIONS(1850), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16012] = 2,
    ACTIONS(1852), 1,
      sym_kw_replace,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16020] = 2,
    ACTIONS(1854), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16028] = 2,
    ACTIONS(1856), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16036] = 2,
    ACTIONS(1858), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16044] = 2,
    ACTIONS(1860), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16052] = 2,
    ACTIONS(1862), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16060] = 2,
    ACTIONS(1864), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1766), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16068] = 2,
    ACTIONS(1866), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16076] = 2,
    ACTIONS(1868), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16084] = 2,
    ACTIONS(1870), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16092] = 2,
    ACTIONS(1872), 1,
      sym_kw_settings,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16100] = 2,
    ACTIONS(1874), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16108] = 2,
    ACTIONS(1876), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16116] = 2,
    ACTIONS(1878), 1,
      sym_kw_datatype_type,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16124] = 2,
    ACTIONS(1880), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16132] = 2,
    ACTIONS(1638), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16140] = 2,
    ACTIONS(1882), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16148] = 2,
    ACTIONS(1884), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16156] = 2,
    ACTIONS(1886), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16164] = 2,
    ACTIONS(1888), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16172] = 2,
    ACTIONS(1890), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16180] = 2,
    ACTIONS(1892), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16188] = 2,
    ACTIONS(1894), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1766), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16196] = 2,
    ACTIONS(1896), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16204] = 2,
    ACTIONS(1898), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1766), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16212] = 2,
    ACTIONS(1900), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16220] = 2,
    ACTIONS(1902), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1766), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16228] = 2,
    ACTIONS(1904), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1766), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16236] = 2,
    ACTIONS(1906), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1766), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16244] = 2,
    ACTIONS(1908), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1766), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16252] = 2,
    ACTIONS(1910), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16260] = 2,
    ACTIONS(1912), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16268] = 2,
    ACTIONS(1914), 1,
      sym_kw_using_nls_comp,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16276] = 2,
    ACTIONS(1658), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16284] = 2,
    ACTIONS(1916), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16292] = 2,
    ACTIONS(1918), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16300] = 2,
    ACTIONS(1920), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 64,
  [SMALL_STATE(11)] = 128,
  [SMALL_STATE(12)] = 216,
  [SMALL_STATE(13)] = 304,
  [SMALL_STATE(14)] = 392,
  [SMALL_STATE(15)] = 480,
  [SMALL_STATE(16)] = 568,
  [SMALL_STATE(17)] = 655,
  [SMALL_STATE(18)] = 742,
  [SMALL_STATE(19)] = 829,
  [SMALL_STATE(20)] = 899,
  [SMALL_STATE(21)] = 969,
  [SMALL_STATE(22)] = 1037,
  [SMALL_STATE(23)] = 1105,
  [SMALL_STATE(24)] = 1173,
  [SMALL_STATE(25)] = 1225,
  [SMALL_STATE(26)] = 1277,
  [SMALL_STATE(27)] = 1329,
  [SMALL_STATE(28)] = 1372,
  [SMALL_STATE(29)] = 1415,
  [SMALL_STATE(30)] = 1457,
  [SMALL_STATE(31)] = 1509,
  [SMALL_STATE(32)] = 1551,
  [SMALL_STATE(33)] = 1592,
  [SMALL_STATE(34)] = 1633,
  [SMALL_STATE(35)] = 1679,
  [SMALL_STATE(36)] = 1722,
  [SMALL_STATE(37)] = 1789,
  [SMALL_STATE(38)] = 1848,
  [SMALL_STATE(39)] = 1887,
  [SMALL_STATE(40)] = 1934,
  [SMALL_STATE(41)] = 2001,
  [SMALL_STATE(42)] = 2048,
  [SMALL_STATE(43)] = 2091,
  [SMALL_STATE(44)] = 2130,
  [SMALL_STATE(45)] = 2197,
  [SMALL_STATE(46)] = 2238,
  [SMALL_STATE(47)] = 2281,
  [SMALL_STATE(48)] = 2348,
  [SMALL_STATE(49)] = 2415,
  [SMALL_STATE(50)] = 2474,
  [SMALL_STATE(51)] = 2521,
  [SMALL_STATE(52)] = 2588,
  [SMALL_STATE(53)] = 2629,
  [SMALL_STATE(54)] = 2688,
  [SMALL_STATE(55)] = 2726,
  [SMALL_STATE(56)] = 2790,
  [SMALL_STATE(57)] = 2854,
  [SMALL_STATE(58)] = 2918,
  [SMALL_STATE(59)] = 2982,
  [SMALL_STATE(60)] = 3046,
  [SMALL_STATE(61)] = 3110,
  [SMALL_STATE(62)] = 3174,
  [SMALL_STATE(63)] = 3238,
  [SMALL_STATE(64)] = 3282,
  [SMALL_STATE(65)] = 3346,
  [SMALL_STATE(66)] = 3386,
  [SMALL_STATE(67)] = 3424,
  [SMALL_STATE(68)] = 3466,
  [SMALL_STATE(69)] = 3504,
  [SMALL_STATE(70)] = 3568,
  [SMALL_STATE(71)] = 3606,
  [SMALL_STATE(72)] = 3644,
  [SMALL_STATE(73)] = 3682,
  [SMALL_STATE(74)] = 3746,
  [SMALL_STATE(75)] = 3784,
  [SMALL_STATE(76)] = 3848,
  [SMALL_STATE(77)] = 3886,
  [SMALL_STATE(78)] = 3924,
  [SMALL_STATE(79)] = 3962,
  [SMALL_STATE(80)] = 4026,
  [SMALL_STATE(81)] = 4090,
  [SMALL_STATE(82)] = 4154,
  [SMALL_STATE(83)] = 4218,
  [SMALL_STATE(84)] = 4282,
  [SMALL_STATE(85)] = 4346,
  [SMALL_STATE(86)] = 4410,
  [SMALL_STATE(87)] = 4448,
  [SMALL_STATE(88)] = 4512,
  [SMALL_STATE(89)] = 4576,
  [SMALL_STATE(90)] = 4614,
  [SMALL_STATE(91)] = 4678,
  [SMALL_STATE(92)] = 4716,
  [SMALL_STATE(93)] = 4780,
  [SMALL_STATE(94)] = 4844,
  [SMALL_STATE(95)] = 4908,
  [SMALL_STATE(96)] = 4946,
  [SMALL_STATE(97)] = 5010,
  [SMALL_STATE(98)] = 5074,
  [SMALL_STATE(99)] = 5114,
  [SMALL_STATE(100)] = 5152,
  [SMALL_STATE(101)] = 5216,
  [SMALL_STATE(102)] = 5280,
  [SMALL_STATE(103)] = 5344,
  [SMALL_STATE(104)] = 5382,
  [SMALL_STATE(105)] = 5446,
  [SMALL_STATE(106)] = 5503,
  [SMALL_STATE(107)] = 5557,
  [SMALL_STATE(108)] = 5611,
  [SMALL_STATE(109)] = 5665,
  [SMALL_STATE(110)] = 5708,
  [SMALL_STATE(111)] = 5751,
  [SMALL_STATE(112)] = 5794,
  [SMALL_STATE(113)] = 5838,
  [SMALL_STATE(114)] = 5890,
  [SMALL_STATE(115)] = 5942,
  [SMALL_STATE(116)] = 5994,
  [SMALL_STATE(117)] = 6046,
  [SMALL_STATE(118)] = 6098,
  [SMALL_STATE(119)] = 6150,
  [SMALL_STATE(120)] = 6199,
  [SMALL_STATE(121)] = 6240,
  [SMALL_STATE(122)] = 6273,
  [SMALL_STATE(123)] = 6314,
  [SMALL_STATE(124)] = 6347,
  [SMALL_STATE(125)] = 6396,
  [SMALL_STATE(126)] = 6445,
  [SMALL_STATE(127)] = 6478,
  [SMALL_STATE(128)] = 6519,
  [SMALL_STATE(129)] = 6552,
  [SMALL_STATE(130)] = 6590,
  [SMALL_STATE(131)] = 6621,
  [SMALL_STATE(132)] = 6662,
  [SMALL_STATE(133)] = 6693,
  [SMALL_STATE(134)] = 6727,
  [SMALL_STATE(135)] = 6781,
  [SMALL_STATE(136)] = 6815,
  [SMALL_STATE(137)] = 6847,
  [SMALL_STATE(138)] = 6877,
  [SMALL_STATE(139)] = 6915,
  [SMALL_STATE(140)] = 6953,
  [SMALL_STATE(141)] = 7007,
  [SMALL_STATE(142)] = 7041,
  [SMALL_STATE(143)] = 7079,
  [SMALL_STATE(144)] = 7133,
  [SMALL_STATE(145)] = 7165,
  [SMALL_STATE(146)] = 7219,
  [SMALL_STATE(147)] = 7253,
  [SMALL_STATE(148)] = 7291,
  [SMALL_STATE(149)] = 7325,
  [SMALL_STATE(150)] = 7363,
  [SMALL_STATE(151)] = 7393,
  [SMALL_STATE(152)] = 7447,
  [SMALL_STATE(153)] = 7479,
  [SMALL_STATE(154)] = 7508,
  [SMALL_STATE(155)] = 7537,
  [SMALL_STATE(156)] = 7568,
  [SMALL_STATE(157)] = 7603,
  [SMALL_STATE(158)] = 7632,
  [SMALL_STATE(159)] = 7661,
  [SMALL_STATE(160)] = 7690,
  [SMALL_STATE(161)] = 7719,
  [SMALL_STATE(162)] = 7748,
  [SMALL_STATE(163)] = 7777,
  [SMALL_STATE(164)] = 7806,
  [SMALL_STATE(165)] = 7835,
  [SMALL_STATE(166)] = 7864,
  [SMALL_STATE(167)] = 7893,
  [SMALL_STATE(168)] = 7922,
  [SMALL_STATE(169)] = 7951,
  [SMALL_STATE(170)] = 7980,
  [SMALL_STATE(171)] = 8013,
  [SMALL_STATE(172)] = 8055,
  [SMALL_STATE(173)] = 8082,
  [SMALL_STATE(174)] = 8113,
  [SMALL_STATE(175)] = 8146,
  [SMALL_STATE(176)] = 8177,
  [SMALL_STATE(177)] = 8208,
  [SMALL_STATE(178)] = 8241,
  [SMALL_STATE(179)] = 8272,
  [SMALL_STATE(180)] = 8303,
  [SMALL_STATE(181)] = 8342,
  [SMALL_STATE(182)] = 8373,
  [SMALL_STATE(183)] = 8406,
  [SMALL_STATE(184)] = 8439,
  [SMALL_STATE(185)] = 8470,
  [SMALL_STATE(186)] = 8501,
  [SMALL_STATE(187)] = 8532,
  [SMALL_STATE(188)] = 8565,
  [SMALL_STATE(189)] = 8594,
  [SMALL_STATE(190)] = 8625,
  [SMALL_STATE(191)] = 8652,
  [SMALL_STATE(192)] = 8693,
  [SMALL_STATE(193)] = 8722,
  [SMALL_STATE(194)] = 8763,
  [SMALL_STATE(195)] = 8801,
  [SMALL_STATE(196)] = 8827,
  [SMALL_STATE(197)] = 8861,
  [SMALL_STATE(198)] = 8899,
  [SMALL_STATE(199)] = 8925,
  [SMALL_STATE(200)] = 8957,
  [SMALL_STATE(201)] = 8991,
  [SMALL_STATE(202)] = 9025,
  [SMALL_STATE(203)] = 9063,
  [SMALL_STATE(204)] = 9095,
  [SMALL_STATE(205)] = 9129,
  [SMALL_STATE(206)] = 9163,
  [SMALL_STATE(207)] = 9200,
  [SMALL_STATE(208)] = 9229,
  [SMALL_STATE(209)] = 9266,
  [SMALL_STATE(210)] = 9300,
  [SMALL_STATE(211)] = 9331,
  [SMALL_STATE(212)] = 9362,
  [SMALL_STATE(213)] = 9395,
  [SMALL_STATE(214)] = 9426,
  [SMALL_STATE(215)] = 9447,
  [SMALL_STATE(216)] = 9478,
  [SMALL_STATE(217)] = 9502,
  [SMALL_STATE(218)] = 9522,
  [SMALL_STATE(219)] = 9544,
  [SMALL_STATE(220)] = 9568,
  [SMALL_STATE(221)] = 9592,
  [SMALL_STATE(222)] = 9616,
  [SMALL_STATE(223)] = 9636,
  [SMALL_STATE(224)] = 9655,
  [SMALL_STATE(225)] = 9676,
  [SMALL_STATE(226)] = 9697,
  [SMALL_STATE(227)] = 9716,
  [SMALL_STATE(228)] = 9737,
  [SMALL_STATE(229)] = 9758,
  [SMALL_STATE(230)] = 9777,
  [SMALL_STATE(231)] = 9794,
  [SMALL_STATE(232)] = 9811,
  [SMALL_STATE(233)] = 9830,
  [SMALL_STATE(234)] = 9851,
  [SMALL_STATE(235)] = 9872,
  [SMALL_STATE(236)] = 9897,
  [SMALL_STATE(237)] = 9916,
  [SMALL_STATE(238)] = 9937,
  [SMALL_STATE(239)] = 9958,
  [SMALL_STATE(240)] = 9983,
  [SMALL_STATE(241)] = 10004,
  [SMALL_STATE(242)] = 10025,
  [SMALL_STATE(243)] = 10046,
  [SMALL_STATE(244)] = 10071,
  [SMALL_STATE(245)] = 10098,
  [SMALL_STATE(246)] = 10115,
  [SMALL_STATE(247)] = 10136,
  [SMALL_STATE(248)] = 10157,
  [SMALL_STATE(249)] = 10178,
  [SMALL_STATE(250)] = 10202,
  [SMALL_STATE(251)] = 10226,
  [SMALL_STATE(252)] = 10246,
  [SMALL_STATE(253)] = 10264,
  [SMALL_STATE(254)] = 10282,
  [SMALL_STATE(255)] = 10300,
  [SMALL_STATE(256)] = 10324,
  [SMALL_STATE(257)] = 10344,
  [SMALL_STATE(258)] = 10368,
  [SMALL_STATE(259)] = 10392,
  [SMALL_STATE(260)] = 10409,
  [SMALL_STATE(261)] = 10432,
  [SMALL_STATE(262)] = 10453,
  [SMALL_STATE(263)] = 10474,
  [SMALL_STATE(264)] = 10495,
  [SMALL_STATE(265)] = 10516,
  [SMALL_STATE(266)] = 10537,
  [SMALL_STATE(267)] = 10554,
  [SMALL_STATE(268)] = 10575,
  [SMALL_STATE(269)] = 10596,
  [SMALL_STATE(270)] = 10617,
  [SMALL_STATE(271)] = 10638,
  [SMALL_STATE(272)] = 10661,
  [SMALL_STATE(273)] = 10684,
  [SMALL_STATE(274)] = 10705,
  [SMALL_STATE(275)] = 10718,
  [SMALL_STATE(276)] = 10741,
  [SMALL_STATE(277)] = 10762,
  [SMALL_STATE(278)] = 10785,
  [SMALL_STATE(279)] = 10806,
  [SMALL_STATE(280)] = 10827,
  [SMALL_STATE(281)] = 10848,
  [SMALL_STATE(282)] = 10871,
  [SMALL_STATE(283)] = 10894,
  [SMALL_STATE(284)] = 10917,
  [SMALL_STATE(285)] = 10940,
  [SMALL_STATE(286)] = 10963,
  [SMALL_STATE(287)] = 10986,
  [SMALL_STATE(288)] = 11009,
  [SMALL_STATE(289)] = 11032,
  [SMALL_STATE(290)] = 11055,
  [SMALL_STATE(291)] = 11072,
  [SMALL_STATE(292)] = 11089,
  [SMALL_STATE(293)] = 11102,
  [SMALL_STATE(294)] = 11114,
  [SMALL_STATE(295)] = 11130,
  [SMALL_STATE(296)] = 11152,
  [SMALL_STATE(297)] = 11170,
  [SMALL_STATE(298)] = 11194,
  [SMALL_STATE(299)] = 11216,
  [SMALL_STATE(300)] = 11236,
  [SMALL_STATE(301)] = 11248,
  [SMALL_STATE(302)] = 11270,
  [SMALL_STATE(303)] = 11288,
  [SMALL_STATE(304)] = 11300,
  [SMALL_STATE(305)] = 11314,
  [SMALL_STATE(306)] = 11334,
  [SMALL_STATE(307)] = 11346,
  [SMALL_STATE(308)] = 11364,
  [SMALL_STATE(309)] = 11382,
  [SMALL_STATE(310)] = 11402,
  [SMALL_STATE(311)] = 11420,
  [SMALL_STATE(312)] = 11438,
  [SMALL_STATE(313)] = 11456,
  [SMALL_STATE(314)] = 11480,
  [SMALL_STATE(315)] = 11504,
  [SMALL_STATE(316)] = 11516,
  [SMALL_STATE(317)] = 11528,
  [SMALL_STATE(318)] = 11546,
  [SMALL_STATE(319)] = 11564,
  [SMALL_STATE(320)] = 11582,
  [SMALL_STATE(321)] = 11600,
  [SMALL_STATE(322)] = 11618,
  [SMALL_STATE(323)] = 11636,
  [SMALL_STATE(324)] = 11653,
  [SMALL_STATE(325)] = 11666,
  [SMALL_STATE(326)] = 11681,
  [SMALL_STATE(327)] = 11698,
  [SMALL_STATE(328)] = 11715,
  [SMALL_STATE(329)] = 11732,
  [SMALL_STATE(330)] = 11749,
  [SMALL_STATE(331)] = 11766,
  [SMALL_STATE(332)] = 11783,
  [SMALL_STATE(333)] = 11800,
  [SMALL_STATE(334)] = 11815,
  [SMALL_STATE(335)] = 11830,
  [SMALL_STATE(336)] = 11845,
  [SMALL_STATE(337)] = 11860,
  [SMALL_STATE(338)] = 11875,
  [SMALL_STATE(339)] = 11890,
  [SMALL_STATE(340)] = 11905,
  [SMALL_STATE(341)] = 11918,
  [SMALL_STATE(342)] = 11935,
  [SMALL_STATE(343)] = 11948,
  [SMALL_STATE(344)] = 11965,
  [SMALL_STATE(345)] = 11982,
  [SMALL_STATE(346)] = 11999,
  [SMALL_STATE(347)] = 12014,
  [SMALL_STATE(348)] = 12031,
  [SMALL_STATE(349)] = 12046,
  [SMALL_STATE(350)] = 12061,
  [SMALL_STATE(351)] = 12076,
  [SMALL_STATE(352)] = 12091,
  [SMALL_STATE(353)] = 12106,
  [SMALL_STATE(354)] = 12121,
  [SMALL_STATE(355)] = 12138,
  [SMALL_STATE(356)] = 12155,
  [SMALL_STATE(357)] = 12170,
  [SMALL_STATE(358)] = 12185,
  [SMALL_STATE(359)] = 12200,
  [SMALL_STATE(360)] = 12213,
  [SMALL_STATE(361)] = 12226,
  [SMALL_STATE(362)] = 12241,
  [SMALL_STATE(363)] = 12256,
  [SMALL_STATE(364)] = 12271,
  [SMALL_STATE(365)] = 12286,
  [SMALL_STATE(366)] = 12301,
  [SMALL_STATE(367)] = 12316,
  [SMALL_STATE(368)] = 12331,
  [SMALL_STATE(369)] = 12346,
  [SMALL_STATE(370)] = 12361,
  [SMALL_STATE(371)] = 12376,
  [SMALL_STATE(372)] = 12393,
  [SMALL_STATE(373)] = 12408,
  [SMALL_STATE(374)] = 12423,
  [SMALL_STATE(375)] = 12438,
  [SMALL_STATE(376)] = 12453,
  [SMALL_STATE(377)] = 12468,
  [SMALL_STATE(378)] = 12483,
  [SMALL_STATE(379)] = 12500,
  [SMALL_STATE(380)] = 12515,
  [SMALL_STATE(381)] = 12532,
  [SMALL_STATE(382)] = 12549,
  [SMALL_STATE(383)] = 12566,
  [SMALL_STATE(384)] = 12583,
  [SMALL_STATE(385)] = 12600,
  [SMALL_STATE(386)] = 12617,
  [SMALL_STATE(387)] = 12629,
  [SMALL_STATE(388)] = 12649,
  [SMALL_STATE(389)] = 12661,
  [SMALL_STATE(390)] = 12673,
  [SMALL_STATE(391)] = 12685,
  [SMALL_STATE(392)] = 12701,
  [SMALL_STATE(393)] = 12713,
  [SMALL_STATE(394)] = 12725,
  [SMALL_STATE(395)] = 12737,
  [SMALL_STATE(396)] = 12749,
  [SMALL_STATE(397)] = 12761,
  [SMALL_STATE(398)] = 12773,
  [SMALL_STATE(399)] = 12785,
  [SMALL_STATE(400)] = 12797,
  [SMALL_STATE(401)] = 12809,
  [SMALL_STATE(402)] = 12821,
  [SMALL_STATE(403)] = 12833,
  [SMALL_STATE(404)] = 12845,
  [SMALL_STATE(405)] = 12857,
  [SMALL_STATE(406)] = 12869,
  [SMALL_STATE(407)] = 12885,
  [SMALL_STATE(408)] = 12897,
  [SMALL_STATE(409)] = 12909,
  [SMALL_STATE(410)] = 12921,
  [SMALL_STATE(411)] = 12933,
  [SMALL_STATE(412)] = 12947,
  [SMALL_STATE(413)] = 12959,
  [SMALL_STATE(414)] = 12971,
  [SMALL_STATE(415)] = 12983,
  [SMALL_STATE(416)] = 12995,
  [SMALL_STATE(417)] = 13007,
  [SMALL_STATE(418)] = 13019,
  [SMALL_STATE(419)] = 13031,
  [SMALL_STATE(420)] = 13043,
  [SMALL_STATE(421)] = 13055,
  [SMALL_STATE(422)] = 13067,
  [SMALL_STATE(423)] = 13079,
  [SMALL_STATE(424)] = 13091,
  [SMALL_STATE(425)] = 13103,
  [SMALL_STATE(426)] = 13115,
  [SMALL_STATE(427)] = 13127,
  [SMALL_STATE(428)] = 13147,
  [SMALL_STATE(429)] = 13159,
  [SMALL_STATE(430)] = 13171,
  [SMALL_STATE(431)] = 13183,
  [SMALL_STATE(432)] = 13195,
  [SMALL_STATE(433)] = 13207,
  [SMALL_STATE(434)] = 13227,
  [SMALL_STATE(435)] = 13239,
  [SMALL_STATE(436)] = 13251,
  [SMALL_STATE(437)] = 13271,
  [SMALL_STATE(438)] = 13283,
  [SMALL_STATE(439)] = 13295,
  [SMALL_STATE(440)] = 13315,
  [SMALL_STATE(441)] = 13327,
  [SMALL_STATE(442)] = 13339,
  [SMALL_STATE(443)] = 13351,
  [SMALL_STATE(444)] = 13371,
  [SMALL_STATE(445)] = 13383,
  [SMALL_STATE(446)] = 13403,
  [SMALL_STATE(447)] = 13423,
  [SMALL_STATE(448)] = 13443,
  [SMALL_STATE(449)] = 13455,
  [SMALL_STATE(450)] = 13475,
  [SMALL_STATE(451)] = 13487,
  [SMALL_STATE(452)] = 13507,
  [SMALL_STATE(453)] = 13518,
  [SMALL_STATE(454)] = 13533,
  [SMALL_STATE(455)] = 13550,
  [SMALL_STATE(456)] = 13561,
  [SMALL_STATE(457)] = 13570,
  [SMALL_STATE(458)] = 13579,
  [SMALL_STATE(459)] = 13596,
  [SMALL_STATE(460)] = 13611,
  [SMALL_STATE(461)] = 13628,
  [SMALL_STATE(462)] = 13645,
  [SMALL_STATE(463)] = 13662,
  [SMALL_STATE(464)] = 13679,
  [SMALL_STATE(465)] = 13688,
  [SMALL_STATE(466)] = 13705,
  [SMALL_STATE(467)] = 13722,
  [SMALL_STATE(468)] = 13739,
  [SMALL_STATE(469)] = 13754,
  [SMALL_STATE(470)] = 13771,
  [SMALL_STATE(471)] = 13788,
  [SMALL_STATE(472)] = 13801,
  [SMALL_STATE(473)] = 13810,
  [SMALL_STATE(474)] = 13819,
  [SMALL_STATE(475)] = 13830,
  [SMALL_STATE(476)] = 13845,
  [SMALL_STATE(477)] = 13854,
  [SMALL_STATE(478)] = 13869,
  [SMALL_STATE(479)] = 13884,
  [SMALL_STATE(480)] = 13901,
  [SMALL_STATE(481)] = 13918,
  [SMALL_STATE(482)] = 13927,
  [SMALL_STATE(483)] = 13944,
  [SMALL_STATE(484)] = 13961,
  [SMALL_STATE(485)] = 13970,
  [SMALL_STATE(486)] = 13983,
  [SMALL_STATE(487)] = 13992,
  [SMALL_STATE(488)] = 14003,
  [SMALL_STATE(489)] = 14012,
  [SMALL_STATE(490)] = 14021,
  [SMALL_STATE(491)] = 14032,
  [SMALL_STATE(492)] = 14041,
  [SMALL_STATE(493)] = 14052,
  [SMALL_STATE(494)] = 14063,
  [SMALL_STATE(495)] = 14074,
  [SMALL_STATE(496)] = 14085,
  [SMALL_STATE(497)] = 14096,
  [SMALL_STATE(498)] = 14107,
  [SMALL_STATE(499)] = 14118,
  [SMALL_STATE(500)] = 14129,
  [SMALL_STATE(501)] = 14140,
  [SMALL_STATE(502)] = 14151,
  [SMALL_STATE(503)] = 14162,
  [SMALL_STATE(504)] = 14173,
  [SMALL_STATE(505)] = 14184,
  [SMALL_STATE(506)] = 14195,
  [SMALL_STATE(507)] = 14206,
  [SMALL_STATE(508)] = 14217,
  [SMALL_STATE(509)] = 14228,
  [SMALL_STATE(510)] = 14239,
  [SMALL_STATE(511)] = 14250,
  [SMALL_STATE(512)] = 14261,
  [SMALL_STATE(513)] = 14278,
  [SMALL_STATE(514)] = 14287,
  [SMALL_STATE(515)] = 14298,
  [SMALL_STATE(516)] = 14307,
  [SMALL_STATE(517)] = 14318,
  [SMALL_STATE(518)] = 14329,
  [SMALL_STATE(519)] = 14340,
  [SMALL_STATE(520)] = 14351,
  [SMALL_STATE(521)] = 14368,
  [SMALL_STATE(522)] = 14379,
  [SMALL_STATE(523)] = 14396,
  [SMALL_STATE(524)] = 14413,
  [SMALL_STATE(525)] = 14424,
  [SMALL_STATE(526)] = 14435,
  [SMALL_STATE(527)] = 14446,
  [SMALL_STATE(528)] = 14457,
  [SMALL_STATE(529)] = 14468,
  [SMALL_STATE(530)] = 14479,
  [SMALL_STATE(531)] = 14490,
  [SMALL_STATE(532)] = 14501,
  [SMALL_STATE(533)] = 14516,
  [SMALL_STATE(534)] = 14533,
  [SMALL_STATE(535)] = 14547,
  [SMALL_STATE(536)] = 14561,
  [SMALL_STATE(537)] = 14575,
  [SMALL_STATE(538)] = 14589,
  [SMALL_STATE(539)] = 14603,
  [SMALL_STATE(540)] = 14617,
  [SMALL_STATE(541)] = 14631,
  [SMALL_STATE(542)] = 14643,
  [SMALL_STATE(543)] = 14655,
  [SMALL_STATE(544)] = 14669,
  [SMALL_STATE(545)] = 14681,
  [SMALL_STATE(546)] = 14691,
  [SMALL_STATE(547)] = 14703,
  [SMALL_STATE(548)] = 14715,
  [SMALL_STATE(549)] = 14727,
  [SMALL_STATE(550)] = 14737,
  [SMALL_STATE(551)] = 14747,
  [SMALL_STATE(552)] = 14761,
  [SMALL_STATE(553)] = 14775,
  [SMALL_STATE(554)] = 14785,
  [SMALL_STATE(555)] = 14799,
  [SMALL_STATE(556)] = 14811,
  [SMALL_STATE(557)] = 14823,
  [SMALL_STATE(558)] = 14833,
  [SMALL_STATE(559)] = 14843,
  [SMALL_STATE(560)] = 14857,
  [SMALL_STATE(561)] = 14869,
  [SMALL_STATE(562)] = 14881,
  [SMALL_STATE(563)] = 14889,
  [SMALL_STATE(564)] = 14903,
  [SMALL_STATE(565)] = 14917,
  [SMALL_STATE(566)] = 14927,
  [SMALL_STATE(567)] = 14937,
  [SMALL_STATE(568)] = 14947,
  [SMALL_STATE(569)] = 14957,
  [SMALL_STATE(570)] = 14971,
  [SMALL_STATE(571)] = 14983,
  [SMALL_STATE(572)] = 14994,
  [SMALL_STATE(573)] = 15005,
  [SMALL_STATE(574)] = 15016,
  [SMALL_STATE(575)] = 15027,
  [SMALL_STATE(576)] = 15038,
  [SMALL_STATE(577)] = 15049,
  [SMALL_STATE(578)] = 15060,
  [SMALL_STATE(579)] = 15071,
  [SMALL_STATE(580)] = 15082,
  [SMALL_STATE(581)] = 15093,
  [SMALL_STATE(582)] = 15104,
  [SMALL_STATE(583)] = 15115,
  [SMALL_STATE(584)] = 15124,
  [SMALL_STATE(585)] = 15135,
  [SMALL_STATE(586)] = 15146,
  [SMALL_STATE(587)] = 15157,
  [SMALL_STATE(588)] = 15168,
  [SMALL_STATE(589)] = 15179,
  [SMALL_STATE(590)] = 15190,
  [SMALL_STATE(591)] = 15201,
  [SMALL_STATE(592)] = 15212,
  [SMALL_STATE(593)] = 15223,
  [SMALL_STATE(594)] = 15234,
  [SMALL_STATE(595)] = 15245,
  [SMALL_STATE(596)] = 15256,
  [SMALL_STATE(597)] = 15267,
  [SMALL_STATE(598)] = 15278,
  [SMALL_STATE(599)] = 15287,
  [SMALL_STATE(600)] = 15298,
  [SMALL_STATE(601)] = 15309,
  [SMALL_STATE(602)] = 15320,
  [SMALL_STATE(603)] = 15331,
  [SMALL_STATE(604)] = 15342,
  [SMALL_STATE(605)] = 15353,
  [SMALL_STATE(606)] = 15362,
  [SMALL_STATE(607)] = 15373,
  [SMALL_STATE(608)] = 15384,
  [SMALL_STATE(609)] = 15395,
  [SMALL_STATE(610)] = 15406,
  [SMALL_STATE(611)] = 15417,
  [SMALL_STATE(612)] = 15428,
  [SMALL_STATE(613)] = 15436,
  [SMALL_STATE(614)] = 15444,
  [SMALL_STATE(615)] = 15452,
  [SMALL_STATE(616)] = 15460,
  [SMALL_STATE(617)] = 15468,
  [SMALL_STATE(618)] = 15476,
  [SMALL_STATE(619)] = 15484,
  [SMALL_STATE(620)] = 15492,
  [SMALL_STATE(621)] = 15500,
  [SMALL_STATE(622)] = 15508,
  [SMALL_STATE(623)] = 15516,
  [SMALL_STATE(624)] = 15524,
  [SMALL_STATE(625)] = 15532,
  [SMALL_STATE(626)] = 15540,
  [SMALL_STATE(627)] = 15548,
  [SMALL_STATE(628)] = 15556,
  [SMALL_STATE(629)] = 15564,
  [SMALL_STATE(630)] = 15572,
  [SMALL_STATE(631)] = 15580,
  [SMALL_STATE(632)] = 15588,
  [SMALL_STATE(633)] = 15596,
  [SMALL_STATE(634)] = 15604,
  [SMALL_STATE(635)] = 15612,
  [SMALL_STATE(636)] = 15620,
  [SMALL_STATE(637)] = 15628,
  [SMALL_STATE(638)] = 15636,
  [SMALL_STATE(639)] = 15644,
  [SMALL_STATE(640)] = 15652,
  [SMALL_STATE(641)] = 15660,
  [SMALL_STATE(642)] = 15668,
  [SMALL_STATE(643)] = 15676,
  [SMALL_STATE(644)] = 15684,
  [SMALL_STATE(645)] = 15692,
  [SMALL_STATE(646)] = 15700,
  [SMALL_STATE(647)] = 15708,
  [SMALL_STATE(648)] = 15716,
  [SMALL_STATE(649)] = 15724,
  [SMALL_STATE(650)] = 15732,
  [SMALL_STATE(651)] = 15740,
  [SMALL_STATE(652)] = 15748,
  [SMALL_STATE(653)] = 15756,
  [SMALL_STATE(654)] = 15764,
  [SMALL_STATE(655)] = 15772,
  [SMALL_STATE(656)] = 15780,
  [SMALL_STATE(657)] = 15788,
  [SMALL_STATE(658)] = 15796,
  [SMALL_STATE(659)] = 15804,
  [SMALL_STATE(660)] = 15812,
  [SMALL_STATE(661)] = 15820,
  [SMALL_STATE(662)] = 15828,
  [SMALL_STATE(663)] = 15836,
  [SMALL_STATE(664)] = 15844,
  [SMALL_STATE(665)] = 15852,
  [SMALL_STATE(666)] = 15860,
  [SMALL_STATE(667)] = 15868,
  [SMALL_STATE(668)] = 15876,
  [SMALL_STATE(669)] = 15884,
  [SMALL_STATE(670)] = 15892,
  [SMALL_STATE(671)] = 15900,
  [SMALL_STATE(672)] = 15908,
  [SMALL_STATE(673)] = 15916,
  [SMALL_STATE(674)] = 15924,
  [SMALL_STATE(675)] = 15932,
  [SMALL_STATE(676)] = 15940,
  [SMALL_STATE(677)] = 15948,
  [SMALL_STATE(678)] = 15956,
  [SMALL_STATE(679)] = 15964,
  [SMALL_STATE(680)] = 15972,
  [SMALL_STATE(681)] = 15980,
  [SMALL_STATE(682)] = 15988,
  [SMALL_STATE(683)] = 15996,
  [SMALL_STATE(684)] = 16004,
  [SMALL_STATE(685)] = 16012,
  [SMALL_STATE(686)] = 16020,
  [SMALL_STATE(687)] = 16028,
  [SMALL_STATE(688)] = 16036,
  [SMALL_STATE(689)] = 16044,
  [SMALL_STATE(690)] = 16052,
  [SMALL_STATE(691)] = 16060,
  [SMALL_STATE(692)] = 16068,
  [SMALL_STATE(693)] = 16076,
  [SMALL_STATE(694)] = 16084,
  [SMALL_STATE(695)] = 16092,
  [SMALL_STATE(696)] = 16100,
  [SMALL_STATE(697)] = 16108,
  [SMALL_STATE(698)] = 16116,
  [SMALL_STATE(699)] = 16124,
  [SMALL_STATE(700)] = 16132,
  [SMALL_STATE(701)] = 16140,
  [SMALL_STATE(702)] = 16148,
  [SMALL_STATE(703)] = 16156,
  [SMALL_STATE(704)] = 16164,
  [SMALL_STATE(705)] = 16172,
  [SMALL_STATE(706)] = 16180,
  [SMALL_STATE(707)] = 16188,
  [SMALL_STATE(708)] = 16196,
  [SMALL_STATE(709)] = 16204,
  [SMALL_STATE(710)] = 16212,
  [SMALL_STATE(711)] = 16220,
  [SMALL_STATE(712)] = 16228,
  [SMALL_STATE(713)] = 16236,
  [SMALL_STATE(714)] = 16244,
  [SMALL_STATE(715)] = 16252,
  [SMALL_STATE(716)] = 16260,
  [SMALL_STATE(717)] = 16268,
  [SMALL_STATE(718)] = 16276,
  [SMALL_STATE(719)] = 16284,
  [SMALL_STATE(720)] = 16292,
  [SMALL_STATE(721)] = 16300,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(100),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_in, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(33),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(713),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(31),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(31),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(42),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(97),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(99),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 2), SHIFT(98),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(100),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_in, 3),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(33),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(713),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(31),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(31),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(42),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(97),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(99),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_in, 3), SHIFT(98),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(100),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(33),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(713),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(31),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(31),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(42),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(97),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(99),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 2), SHIFT_REPEAT(98),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(214),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(214),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(559),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(590),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(61),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(36),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT(572),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__other_boolean_form_expression_in_repeat1, 1), SHIFT_REPEAT(103),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(214),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(214),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(559),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(590),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(61),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(36),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(572),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(214),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(214),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 5),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(559),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(590),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(61),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(36),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(572),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(214),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(214),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 4),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(559),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(590),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(61),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(36),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(572),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_numeric_repeat1, 2), SHIFT_REPEAT(594),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_numeric_repeat1, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_numeric_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_numeric_repeat1, 2), SHIFT_REPEAT(594),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_numeric, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_numeric, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_numeric, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_numeric, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 1, .production_id = 12), REDUCE(sym_prc_fnc_call, 1, .production_id = 13),
  [398] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 1, .production_id = 12), REDUCE(sym_prc_fnc_call, 1, .production_id = 13), SHIFT(143),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression_boolean_ref, 1, .production_id = 12), REDUCE(sym_prc_fnc_call, 1, .production_id = 13),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_number, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_number, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 3, .production_id = 14), REDUCE(sym_prc_fnc_call, 3, .production_id = 15),
  [418] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 3, .production_id = 14), REDUCE(sym_prc_fnc_call, 3, .production_id = 15), SHIFT(143),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression_boolean_ref, 3, .production_id = 14), REDUCE(sym_prc_fnc_call, 3, .production_id = 15),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_boolean, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_boolean, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_boolean, 2), SHIFT(92),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(539),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(589),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(82),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(44),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(604),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_boolean, 2), REDUCE(sym__expression_boolean, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_boolean, 3),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression_boolean, 2), REDUCE(sym__expression_boolean, 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_boolean, 3),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_boolean, 3), SHIFT(92),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_boolean, 1), REDUCE(sym__expression_boolean, 2),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression_boolean, 1), REDUCE(sym__expression_boolean, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_boolean, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_boolean, 1),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_boolean, 1), SHIFT(92),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 4, .production_id = 14), REDUCE(sym_prc_fnc_call, 4, .production_id = 15),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression_boolean_ref, 4, .production_id = 14), REDUCE(sym_prc_fnc_call, 4, .production_id = 15),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_boolean_repeat1, 2),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_boolean_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_boolean_repeat1, 2), SHIFT_REPEAT(92),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(539),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(589),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(82),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(44),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(604),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_boolean, 1), REDUCE(aux_sym__expression_boolean_repeat1, 2),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression_boolean, 1), REDUCE(aux_sym__expression_boolean_repeat1, 2),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_boolean_repeat1, 2), SHIFT(81),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_boolean_ref, 2, .production_id = 12), REDUCE(sym_prc_fnc_call, 2, .production_id = 13),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression_boolean_ref, 2, .production_id = 12), REDUCE(sym_prc_fnc_call, 2, .production_id = 13),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(539),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(589),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(82),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(44),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(604),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_like, 3),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_like, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1), REDUCE(sym_expression, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 2), SHIFT(67),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression, 1), REDUCE(sym_expression, 2),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1), SHIFT(68),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 1),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 2), REDUCE(sym_expression, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression, 2), REDUCE(sym_expression, 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_collection, 6),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_collection, 6),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_predicate, 6),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_predicate, 6),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prc_fnc_call, 5, .production_id = 15),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prc_fnc_call, 5, .production_id = 15),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prc_fnc_call, 4, .production_id = 15),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prc_fnc_call, 4, .production_id = 15),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_not_null, 3),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_not_null, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prc_fnc_call, 3, .production_id = 13),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prc_fnc_call, 3, .production_id = 13),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_named_cursor, 3),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_named_cursor, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_like, 2),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression_like, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_null, 2),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_null, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prc_fnc_call, 2, .production_id = 13),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prc_fnc_call, 2, .production_id = 13),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__other_boolean_form_expression, 2),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__other_boolean_form_expression, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_predicate, 1),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_conditional_predicate, 1), SHIFT(721),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_predicate, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_expression, 2),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_expression, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(535),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(58),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 4), SHIFT(40),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(535),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(58),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_between, 5), SHIFT(40),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(535),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(58),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__other_boolean_form_expression_relational_operation, 2), SHIFT(40),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_boolean_repeat1, 2), SHIFT_REPEAT(84),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [810] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(217),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(714),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(229),
  [819] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(236),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(236),
  [825] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(223),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_boolean, 1), SHIFT(84),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_boolean, 2), SHIFT(84),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_boolean, 3), SHIFT(84),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1), SHIFT(167),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 2), SHIFT(170),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_boolean, 1), SHIFT(81),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_boolean, 2), SHIFT(81),
  [863] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_boolean, 3), SHIFT(81),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_boolean_repeat1, 2), SHIFT_REPEAT(81),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 2), SHIFT(176),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression, 1), SHIFT(172),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(471),
  [913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(469),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compile_clause_repeat1, 2),
  [934] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compile_clause_repeat1, 2), SHIFT_REPEAT(27),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compile_clause_repeat1, 2), SHIFT_REPEAT(665),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2),
  [942] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(254),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(691),
  [948] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(583),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relational_operator, 1),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relational_operator, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 3, .production_id = 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_name, 1),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_value, 1),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 3, .production_id = 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 3, .production_id = 1),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 3, .production_id = 1),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2),
  [987] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(171),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(303),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 1),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element_named, 3),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_element_named, 3),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 2),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 5, .production_id = 2),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compiler_parameter_clause, 3, .production_id = 5),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compiler_parameter_clause, 3, .production_id = 5),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element_positional, 1),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_element_positional, 1),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 5, .production_id = 2),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 1),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_properties, 1),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element, 1),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_element, 1),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 5, .production_id = 2),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2), SHIFT_REPEAT(680),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2), SHIFT_REPEAT(605),
  [1031] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2), SHIFT_REPEAT(682),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 1),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 2),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 5, .production_id = 2),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 2),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 2),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2), SHIFT_REPEAT(680),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2), SHIFT_REPEAT(605),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2), SHIFT_REPEAT(682),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_char, 1),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_char, 1),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1),
  [1079] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 1),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element, 2),
  [1083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_element, 2),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 1),
  [1089] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_timestamp, 1),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 2),
  [1095] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 2),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_properties, 1),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nchar, 1),
  [1103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_nchar, 1),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 3, .production_id = 11),
  [1107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 3, .production_id = 11),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subtype_datatypes, 1),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__subtype_datatypes, 1),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 1),
  [1131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 1),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rowid_datatypes_urowid, 1),
  [1135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rowid_datatypes_urowid, 1),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 5),
  [1139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_interval_day, 5),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 2, .production_id = 8),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 2, .production_id = 8),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_float, 1),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_datatypes_float, 1),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 4),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_interval_day, 4),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_number, 1),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_datatypes_number, 1),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nvarchar2, 1),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_nvarchar2, 1),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_varchar2, 1),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_varchar2, 1),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size, 3),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__size, 3),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [1185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(9),
  [1188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(707),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in, 1),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_declaration_element_in, 1),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_properties_repeat1, 2),
  [1205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_properties_repeat1, 2), SHIFT_REPEAT(302),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_editionable_noneditionable, 1),
  [1210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(466),
  [1213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(465),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_properties, 1),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in, 2),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_declaration_element_in, 2),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 5),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reuse_settings, 2),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 1),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 1),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 2),
  [1252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_timestamp, 2),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessible_by_clause, 5),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_precision_scale, 5),
  [1262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__size_precision_scale, 5),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 6),
  [1266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_timestamp, 6),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_year, 5),
  [1270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_interval_year, 5),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 5),
  [1274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_timestamp, 5),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_byte_char, 4),
  [1278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__size_byte_char, 4),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 6),
  [1282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_interval_day, 6),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_collation_clause, 3),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invoker_rights_clause, 2),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_datatypes_type, 4),
  [1290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_datatypes_type, 4),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_year, 4),
  [1294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_interval_year, 4),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 4),
  [1298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datetime_datatypes_date_timestamp, 4),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_precision_scale, 3),
  [1302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__size_precision_scale, 3),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_national, 4),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_national, 4),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_byte_char, 3),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__size_byte_char, 3),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__supplied_datatypes_any_types, 3),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__supplied_datatypes_any_types, 3),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_character, 3),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_character, 3),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_national, 3),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_national, 3),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_char_nchar, 3),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_char_nchar, 3),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_datatypes_rowtype, 2),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_datatypes_rowtype, 2),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_double_precision, 2),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_double_precision, 2),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 2),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 2),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_character, 2),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_character, 2),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rowid_datatypes_urowid, 2),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rowid_datatypes_urowid, 2),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_raw, 2),
  [1352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_and_raw_datatypes_raw, 2),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 2),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 2),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_float, 2),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_datatypes_float, 2),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_number, 2),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_datatypes_number, 2),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nchar, 2),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_nchar, 2),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nvarchar2, 2),
  [1372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_nvarchar2, 2),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_varchar2, 2),
  [1376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_varchar2, 2),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_varchar, 2),
  [1380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ansi_supported_datatypes_varchar, 2),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_char, 2),
  [1384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__character_datatypes_char, 2),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 2),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 10),
  [1412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sharing_clause, 1),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 7),
  [1420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 2),
  [1424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 1),
  [1428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 6, .production_id = 1),
  [1432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 2),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 7),
  [1444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 10),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 10),
  [1452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 2),
  [1460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_obj, 2),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 1),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 3),
  [1468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_obj, 3),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_declaration, 2),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 7),
  [1480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in_out_or_out, 2),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 2),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_obj, 1),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 1),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_element, 2),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in_out_or_out, 4),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 7),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in_out_or_out, 3),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in, 3),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 11, .production_id = 10),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_element, 3),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 9),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 4, .production_id = 6),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 9),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 2),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_obj, 3),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 3, .production_id = 6),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 9),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 5, .production_id = 6),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_kind, 1),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relational_operator_compute, 1),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relational_operator_compute, 1),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__schema, 2, .production_id = 3),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1766] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_char, 1),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1912] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
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
