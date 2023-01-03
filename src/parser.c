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
#define STATE_COUNT 673
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 346
#define ALIAS_COUNT 0
#define TOKEN_COUNT 186
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 32

enum {
  anon_sym_SEMI = 1,
  anon_sym_SLASH = 2,
  anon_sym_EQ = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_DOT = 7,
  anon_sym_AT = 8,
  anon_sym_DOT_DOT = 9,
  anon_sym_PERCENT = 10,
  anon_sym_SQUOTE = 11,
  anon_sym_COLON_EQ = 12,
  anon_sym_EQ_GT = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_LT_GT = 16,
  anon_sym_BANG_EQ = 17,
  anon_sym_TILDE_EQ = 18,
  anon_sym_CARET_EQ = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_LT = 22,
  anon_sym_GT = 23,
  anon_sym_PIPE_PIPE = 24,
  anon_sym_STAR_STAR = 25,
  anon_sym_STAR = 26,
  anon_sym_COLON = 27,
  sym__unquoted_identifier = 28,
  anon_sym_DQUOTE = 29,
  aux_sym__quoted_identifier_token1 = 30,
  sym__single_quote_string = 31,
  sym__number = 32,
  sym__float = 33,
  sym_comment_ml = 34,
  sym_comment_sl = 35,
  sym_kw_create = 36,
  sym_kw_alter = 37,
  sym_kw_package = 38,
  sym_kw_function = 39,
  sym_kw_procedure = 40,
  sym_kw_trigger = 41,
  sym_kw_type = 42,
  sym_kw_subtype = 43,
  sym_kw_datatype_type = 44,
  sym_kw_datatype_rowtype = 45,
  sym_kw_library = 46,
  sym_kw_true = 47,
  sym_kw_false = 48,
  sym_kw_null = 49,
  sym_kw_not = 50,
  sym_kw_case = 51,
  sym_kw_when = 52,
  sym_kw_then = 53,
  sym_kw_if = 54,
  sym_kw_else = 55,
  sym_kw_row = 56,
  sym_kw_count = 57,
  sym_kw_first = 58,
  sym_kw_last = 59,
  sym_kw_limit = 60,
  sym_kw_next = 61,
  sym_kw_prior = 62,
  sym_kw_rowcount = 63,
  sym_kw_bulk_rowcount = 64,
  sym_kw_compile = 65,
  sym_kw_debug = 66,
  sym_kw_specification = 67,
  sym_kw_body = 68,
  sym_kw_declare = 69,
  sym_kw_begin = 70,
  sym_kw_exception = 71,
  sym_kw_end = 72,
  sym_kw_or = 73,
  sym_kw_and = 74,
  sym_kw_replace = 75,
  sym_kw_editionable = 76,
  sym_kw_noneditionable = 77,
  sym_kw_metadata = 78,
  sym_kw_none = 79,
  sym_kw_default = 80,
  sym_kw_collation = 81,
  sym_kw_using_nls_comp = 82,
  sym_kw_authid = 83,
  sym_kw_current_user = 84,
  sym_kw_definer = 85,
  sym_kw_accessible = 86,
  sym_kw_by = 87,
  sym_kw_reuse = 88,
  sym_kw_settings = 89,
  sym_kw_byte = 90,
  sym_kw_char = 91,
  sym_kw_is = 92,
  sym_kw_as = 93,
  sym_kw_ref = 94,
  sym_kw_table = 95,
  sym_kw_of = 96,
  sym_kw_index = 97,
  sym_kw_varray = 98,
  sym_kw_array = 99,
  sym_kw_cursor = 100,
  sym_kw_record = 101,
  sym_kw_deterministic = 102,
  sym_kw_pipelined = 103,
  sym_kw_parallel_enable = 104,
  sym_kw_result_cache = 105,
  sym_kw_exists = 106,
  sym_kw_between = 107,
  sym_kw_found = 108,
  sym_kw_in = 109,
  sym_kw_out = 110,
  sym_kw_nocopy = 111,
  sym_kw_like = 112,
  sym_kw_range = 113,
  sym_kw_inserting = 114,
  sym_kw_deleting = 115,
  sym_kw_updating = 116,
  sym_kw_return = 117,
  sym_kw_string = 118,
  sym_kw_varchar = 119,
  sym_kw_varchar2 = 120,
  sym_kw_nvarchar2 = 121,
  sym_kw_nchar = 122,
  sym_kw_int = 123,
  sym_kw_smallint = 124,
  sym_kw_real = 125,
  sym_kw_binary_float = 126,
  sym_kw_binary_double = 127,
  sym_kw_simple_float = 128,
  sym_kw_simple_double = 129,
  sym_kw_binary_integer = 130,
  sym_kw_pls_integer = 131,
  sym_kw_natural = 132,
  sym_kw_naturaln = 133,
  sym_kw_positive = 134,
  sym_kw_positiven = 135,
  sym_kw_signtype = 136,
  sym_kw_simple_integer = 137,
  sym_kw_integer = 138,
  sym_kw_number = 139,
  sym_kw_float = 140,
  sym_kw_long = 141,
  sym_kw_raw = 142,
  sym_kw_date = 143,
  sym_kw_timestamp = 144,
  sym_kw_with = 145,
  sym_kw_local = 146,
  sym_kw_time = 147,
  sym_kw_zone = 148,
  sym_kw_interval = 149,
  sym_kw_year = 150,
  sym_kw_month = 151,
  sym_kw_day = 152,
  sym_kw_minute = 153,
  sym_kw_second = 154,
  sym_kw_to = 155,
  sym_kw_blob = 156,
  sym_kw_clob = 157,
  sym_kw_nclob = 158,
  sym_kw_bfile = 159,
  sym_kw_rowid = 160,
  sym_kw_urowid = 161,
  sym_kw_boolean = 162,
  sym_kw_character = 163,
  sym_kw_set = 164,
  sym_kw_varying = 165,
  sym_kw_numeric = 166,
  sym_kw_decimal = 167,
  sym_kw_dec = 168,
  sym_kw_double = 169,
  sym_kw_precision = 170,
  sym_kw_sys = 171,
  sym_kw_anydata = 172,
  sym_kw_anytype = 173,
  sym_kw_anydataset = 174,
  sym_kw_xmltype = 175,
  sym_kw_uritype = 176,
  sym_kw_sdo_geometry = 177,
  sym_kw_sdo_topo_geometry = 178,
  sym_kw_sdo_georaster = 179,
  sym_kw_constant = 180,
  sym_kw_json_element_t = 181,
  sym_kw_json_array_t = 182,
  sym_kw_json_object_t = 183,
  sym_kw_json_scalar_t = 184,
  sym_kw_json_key_list = 185,
  sym_source_file = 186,
  sym__element = 187,
  sym_sql_statement = 188,
  sym__ddl_statement = 189,
  sym__create_statement = 190,
  sym_create_package = 191,
  sym_package_properties = 192,
  sym__package_property_element = 193,
  sym__alter_statement = 194,
  sym_alter_package = 195,
  sym_alter_procedure = 196,
  sym_alter_function = 197,
  sym_alter_library = 198,
  sym_compile_clause = 199,
  sym_compiler_parameter_clause = 200,
  sym_editionable_noneditionable = 201,
  sym_sharing_clause = 202,
  sym_default_collation_clause = 203,
  sym_invoker_rights_clause = 204,
  sym_accessible_by_clause = 205,
  sym_accessor = 206,
  sym__unit_kind = 207,
  sym_reuse_settings = 208,
  sym__schema = 209,
  sym__remote = 210,
  sym__referenced_element = 211,
  sym__referenced_element_parent = 212,
  sym__referenced_element_name = 213,
  sym_byte_char = 214,
  sym__is_as = 215,
  sym_end_obj = 216,
  sym__package_item_list = 217,
  sym_create_obj = 218,
  sym_procedure_declaration = 219,
  sym_procedure_properties = 220,
  sym__procedure_property_element = 221,
  sym_function_declaration = 222,
  sym_function_properties = 223,
  sym__function_property_element = 224,
  sym_item_declaration = 225,
  sym_cursor_declaration = 226,
  sym__cursor_declaration_return_datatype = 227,
  sym_cursor_declaration_parameters = 228,
  sym_cursor_declaration_parameter = 229,
  sym__type_definition = 230,
  sym_type_definition_collection = 231,
  sym_type_definition_varray = 232,
  sym_type_definition_nested_table = 233,
  sym_type_definition_assoc_array = 234,
  sym_type_definition_record = 235,
  sym_field_definition = 236,
  sym_type_definition_ref_cursor_return = 237,
  sym_type_definition_sub = 238,
  sym_character_set = 239,
  sym_type_range = 240,
  sym__is_null_or_is_not_null = 241,
  sym_is_null = 242,
  sym_is_not_null = 243,
  sym_not_null = 244,
  sym_expression = 245,
  sym__expression_element = 246,
  sym__expression_base_elements = 247,
  sym__expression_base_operator_not_boolean = 248,
  sym__expression_base_case = 249,
  sym_expression_base_case_search = 250,
  sym_expression_base_case_simple = 251,
  sym__expression_base_boolean = 252,
  sym__expression_base_boolean_elements = 253,
  sym__expression_base_boolean_repeat = 254,
  sym__expression_base_boolean_operator = 255,
  sym__expression_base_boolean_in = 256,
  sym__expression_base_boolean_like = 257,
  sym__expression_base_boolean_between = 258,
  sym_conditional_predicate = 259,
  sym_return_declaration = 260,
  sym_datatype = 261,
  sym__character_datatypes = 262,
  sym__character_datatypes_char = 263,
  sym__character_datatypes_varchar2 = 264,
  sym__character_datatypes_nchar = 265,
  sym__character_datatypes_nvarchar2 = 266,
  sym__number_datatypes = 267,
  sym__number_datatypes_keyword = 268,
  sym__number_datatypes_number = 269,
  sym__number_datatypes_float = 270,
  sym__long_and_raw_datatypes = 271,
  sym__long_and_raw_datatypes_long_raw = 272,
  sym__long_and_raw_datatypes_raw = 273,
  sym__datetime_datatypes = 274,
  sym__datetime_datatypes_keyword = 275,
  sym__datetime_datatypes_date_timestamp = 276,
  sym__datetime_datatypes_date_interval_year = 277,
  sym__datetime_datatypes_date_interval_day = 278,
  sym__large_object_datatypes = 279,
  sym__rowid_datatypes = 280,
  sym__referenced_datatypes = 281,
  sym__referenced_datatypes_type = 282,
  sym__referenced_datatypes_rowtype = 283,
  sym__logical_datatypes = 284,
  sym__subtype_datatypes = 285,
  sym__rowid_datatypes_urowid = 286,
  sym__ansi_supported_datatypes_character = 287,
  sym__ansi_supported_datatypes_char_nchar = 288,
  sym__ansi_supported_datatypes_varchar = 289,
  sym__ansi_supported_datatypes_national = 290,
  sym__ansi_supported_datatypes_numeric_decimal_dec = 291,
  sym__ansi_supported_datatypes_double_precision = 292,
  sym__supplied_datatypes_any_types = 293,
  sym__supplied_datatypes_xml_types = 294,
  sym__supplied_datatypes_spatial_types = 295,
  sym__object_datatypes = 296,
  sym__other_datatypes = 297,
  sym_ref_call = 298,
  sym_parameter_declaration = 299,
  sym_parameter_declaration_element = 300,
  sym__parameter_declaration_element_in = 301,
  sym__parameter_declaration_element_in_out_or_out = 302,
  sym_default_expression = 303,
  sym_parameter = 304,
  sym_parameter_element = 305,
  sym_parameter_element_positional = 306,
  sym_parameter_element_named = 307,
  sym_parameter_name = 308,
  sym_parameter_value = 309,
  sym__size = 310,
  sym__size_byte_char = 311,
  sym__size_precision_scale = 312,
  sym__precision = 313,
  sym__scale = 314,
  sym__sign_pos_neg = 315,
  sym_expression_operator_boolean = 316,
  sym_expression_operator_not_boolean = 317,
  sym_placeholder = 318,
  sym_indicator_variable = 319,
  sym_host_variable = 320,
  sym_identifier = 321,
  sym__quoted_identifier = 322,
  sym_literal_list = 323,
  sym__literal = 324,
  sym__literal_boolean = 325,
  sym_literal_number = 326,
  sym_literal_string = 327,
  aux_sym_source_file_repeat1 = 328,
  aux_sym_create_package_repeat1 = 329,
  aux_sym_package_properties_repeat1 = 330,
  aux_sym_alter_package_repeat1 = 331,
  aux_sym_compile_clause_repeat1 = 332,
  aux_sym_accessible_by_clause_repeat1 = 333,
  aux_sym_procedure_properties_repeat1 = 334,
  aux_sym_function_properties_repeat1 = 335,
  aux_sym_cursor_declaration_parameters_repeat1 = 336,
  aux_sym_type_definition_record_repeat1 = 337,
  aux_sym_type_definition_sub_repeat1 = 338,
  aux_sym__expression_base_operator_not_boolean_repeat1 = 339,
  aux_sym_expression_base_case_search_repeat1 = 340,
  aux_sym__expression_base_boolean_repeat1 = 341,
  aux_sym__expression_base_boolean_in_repeat1 = 342,
  aux_sym_parameter_declaration_repeat1 = 343,
  aux_sym_parameter_repeat1 = 344,
  aux_sym_literal_list_repeat1 = 345,
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
  [anon_sym_DOT_DOT] = "..",
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
  [sym_kw_subtype] = "kw_subtype",
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
  [sym_kw_exception] = "kw_exception",
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
  [sym_kw_ref] = "kw_ref",
  [sym_kw_table] = "kw_table",
  [sym_kw_of] = "kw_of",
  [sym_kw_index] = "kw_index",
  [sym_kw_varray] = "kw_varray",
  [sym_kw_array] = "kw_array",
  [sym_kw_cursor] = "kw_cursor",
  [sym_kw_record] = "kw_record",
  [sym_kw_deterministic] = "kw_deterministic",
  [sym_kw_pipelined] = "kw_pipelined",
  [sym_kw_parallel_enable] = "kw_parallel_enable",
  [sym_kw_result_cache] = "kw_result_cache",
  [sym_kw_exists] = "kw_exists",
  [sym_kw_between] = "kw_between",
  [sym_kw_found] = "kw_found",
  [sym_kw_in] = "kw_in",
  [sym_kw_out] = "kw_out",
  [sym_kw_nocopy] = "kw_nocopy",
  [sym_kw_like] = "kw_like",
  [sym_kw_range] = "kw_range",
  [sym_kw_inserting] = "kw_inserting",
  [sym_kw_deleting] = "kw_deleting",
  [sym_kw_updating] = "kw_updating",
  [sym_kw_return] = "kw_return",
  [sym_kw_string] = "kw_string",
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
  [sym_kw_set] = "kw_set",
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
  [sym_kw_constant] = "kw_constant",
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
  [sym_item_declaration] = "item_declaration",
  [sym_cursor_declaration] = "cursor_declaration",
  [sym__cursor_declaration_return_datatype] = "_cursor_declaration_return_datatype",
  [sym_cursor_declaration_parameters] = "cursor_declaration_parameters",
  [sym_cursor_declaration_parameter] = "cursor_declaration_parameter",
  [sym__type_definition] = "_type_definition",
  [sym_type_definition_collection] = "type_definition_collection",
  [sym_type_definition_varray] = "type_definition_varray",
  [sym_type_definition_nested_table] = "type_definition_nested_table",
  [sym_type_definition_assoc_array] = "type_definition_assoc_array",
  [sym_type_definition_record] = "type_definition_record",
  [sym_field_definition] = "field_definition",
  [sym_type_definition_ref_cursor_return] = "type_definition_ref_cursor_return",
  [sym_type_definition_sub] = "type_definition_sub",
  [sym_character_set] = "character_set",
  [sym_type_range] = "type_range",
  [sym__is_null_or_is_not_null] = "_is_null_or_is_not_null",
  [sym_is_null] = "is_null",
  [sym_is_not_null] = "is_not_null",
  [sym_not_null] = "not_null",
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
  [sym__other_datatypes] = "_other_datatypes",
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
  [aux_sym_cursor_declaration_parameters_repeat1] = "cursor_declaration_parameters_repeat1",
  [aux_sym_type_definition_record_repeat1] = "type_definition_record_repeat1",
  [aux_sym_type_definition_sub_repeat1] = "type_definition_sub_repeat1",
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
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
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
  [sym_kw_subtype] = sym_kw_subtype,
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
  [sym_kw_exception] = sym_kw_exception,
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
  [sym_kw_ref] = sym_kw_ref,
  [sym_kw_table] = sym_kw_table,
  [sym_kw_of] = sym_kw_of,
  [sym_kw_index] = sym_kw_index,
  [sym_kw_varray] = sym_kw_varray,
  [sym_kw_array] = sym_kw_array,
  [sym_kw_cursor] = sym_kw_cursor,
  [sym_kw_record] = sym_kw_record,
  [sym_kw_deterministic] = sym_kw_deterministic,
  [sym_kw_pipelined] = sym_kw_pipelined,
  [sym_kw_parallel_enable] = sym_kw_parallel_enable,
  [sym_kw_result_cache] = sym_kw_result_cache,
  [sym_kw_exists] = sym_kw_exists,
  [sym_kw_between] = sym_kw_between,
  [sym_kw_found] = sym_kw_found,
  [sym_kw_in] = sym_kw_in,
  [sym_kw_out] = sym_kw_out,
  [sym_kw_nocopy] = sym_kw_nocopy,
  [sym_kw_like] = sym_kw_like,
  [sym_kw_range] = sym_kw_range,
  [sym_kw_inserting] = sym_kw_inserting,
  [sym_kw_deleting] = sym_kw_deleting,
  [sym_kw_updating] = sym_kw_updating,
  [sym_kw_return] = sym_kw_return,
  [sym_kw_string] = sym_kw_string,
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
  [sym_kw_set] = sym_kw_set,
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
  [sym_kw_constant] = sym_kw_constant,
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
  [sym_item_declaration] = sym_item_declaration,
  [sym_cursor_declaration] = sym_cursor_declaration,
  [sym__cursor_declaration_return_datatype] = sym__cursor_declaration_return_datatype,
  [sym_cursor_declaration_parameters] = sym_cursor_declaration_parameters,
  [sym_cursor_declaration_parameter] = sym_cursor_declaration_parameter,
  [sym__type_definition] = sym__type_definition,
  [sym_type_definition_collection] = sym_type_definition_collection,
  [sym_type_definition_varray] = sym_type_definition_varray,
  [sym_type_definition_nested_table] = sym_type_definition_nested_table,
  [sym_type_definition_assoc_array] = sym_type_definition_assoc_array,
  [sym_type_definition_record] = sym_type_definition_record,
  [sym_field_definition] = sym_field_definition,
  [sym_type_definition_ref_cursor_return] = sym_type_definition_ref_cursor_return,
  [sym_type_definition_sub] = sym_type_definition_sub,
  [sym_character_set] = sym_character_set,
  [sym_type_range] = sym_type_range,
  [sym__is_null_or_is_not_null] = sym__is_null_or_is_not_null,
  [sym_is_null] = sym_is_null,
  [sym_is_not_null] = sym_is_not_null,
  [sym_not_null] = sym_not_null,
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
  [sym__other_datatypes] = sym__other_datatypes,
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
  [aux_sym_cursor_declaration_parameters_repeat1] = aux_sym_cursor_declaration_parameters_repeat1,
  [aux_sym_type_definition_record_repeat1] = aux_sym_type_definition_record_repeat1,
  [aux_sym_type_definition_sub_repeat1] = aux_sym_type_definition_sub_repeat1,
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
  [anon_sym_DOT_DOT] = {
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
  [sym_kw_subtype] = {
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
  [sym_kw_exception] = {
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
  [sym_kw_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_table] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_of] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_index] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_varray] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_array] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_cursor] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_record] = {
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
  [sym_kw_range] = {
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
  [sym_kw_string] = {
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
  [sym_kw_set] = {
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
  [sym_kw_constant] = {
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
  [sym_item_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_cursor_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__cursor_declaration_return_datatype] = {
    .visible = false,
    .named = true,
  },
  [sym_cursor_declaration_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_cursor_declaration_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__type_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_type_definition_collection] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition_varray] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition_nested_table] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition_assoc_array] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition_record] = {
    .visible = true,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition_ref_cursor_return] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_character_set] = {
    .visible = true,
    .named = true,
  },
  [sym_type_range] = {
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
  [sym_not_null] = {
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
  [sym__other_datatypes] = {
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
  [aux_sym_cursor_declaration_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_definition_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_definition_sub_repeat1] = {
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
  field_subtype_name = 11,
  field_type_collection_name = 12,
  field_type_rec_name = 13,
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
  [field_subtype_name] = "subtype_name",
  [field_type_collection_name] = "type_collection_name",
  [field_type_rec_name] = "type_rec_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 4},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 4},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 1},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 3},
  [15] = {.index = 28, .length = 2},
  [16] = {.index = 30, .length = 1},
  [17] = {.index = 31, .length = 1},
  [18] = {.index = 32, .length = 4},
  [19] = {.index = 36, .length = 3},
  [20] = {.index = 39, .length = 1},
  [21] = {.index = 40, .length = 2},
  [22] = {.index = 42, .length = 2},
  [23] = {.index = 44, .length = 1},
  [24] = {.index = 45, .length = 1},
  [25] = {.index = 46, .length = 4},
  [26] = {.index = 50, .length = 8},
  [27] = {.index = 58, .length = 4},
  [28] = {.index = 62, .length = 8},
  [29] = {.index = 70, .length = 1},
  [30] = {.index = 71, .length = 4},
  [31] = {.index = 75, .length = 4},
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
    {field_ref_name, 1, .inherited = true},
    {field_ref_name_parent, 1, .inherited = true},
    {field_remote_name, 1, .inherited = true},
    {field_schema_name, 1, .inherited = true},
  [9] =
    {field_ref_name, 0, .inherited = true},
    {field_ref_name_parent, 0, .inherited = true},
  [11] =
    {field_ref_name, 0, .inherited = true},
  [12] =
    {field_ref_name, 0, .inherited = true},
    {field_ref_name_parent, 0, .inherited = true},
    {field_remote_name, 0, .inherited = true},
    {field_schema_name, 0, .inherited = true},
  [16] =
    {field_ref_name, 0},
  [17] =
    {field_compile_parameter_name, 0},
    {field_compile_parameter_value, 2},
  [19] =
    {field_prc_name, 1},
  [20] =
    {field_ref_name, 1, .inherited = true},
    {field_ref_name_parent, 1, .inherited = true},
    {field_schema_name, 0, .inherited = true},
  [23] =
    {field_ref_name, 1, .inherited = true},
    {field_schema_name, 0, .inherited = true},
  [25] =
    {field_ref_name, 0, .inherited = true},
    {field_ref_name_parent, 0, .inherited = true},
    {field_remote_name, 1, .inherited = true},
  [28] =
    {field_ref_name, 0, .inherited = true},
    {field_remote_name, 1, .inherited = true},
  [30] =
    {field_obj_name, 3},
  [31] =
    {field_fnc_name, 1},
  [32] =
    {field_ref_name, 1, .inherited = true},
    {field_ref_name_parent, 1, .inherited = true},
    {field_remote_name, 2, .inherited = true},
    {field_schema_name, 0, .inherited = true},
  [36] =
    {field_ref_name, 1, .inherited = true},
    {field_remote_name, 2, .inherited = true},
    {field_schema_name, 0, .inherited = true},
  [39] =
    {field_remote_name, 1},
  [40] =
    {field_ref_name, 2},
    {field_ref_name_parent, 0},
  [42] =
    {field_obj_name, 4},
    {field_schema_name, 3, .inherited = true},
  [44] =
    {field_type_collection_name, 1},
  [45] =
    {field_subtype_name, 1},
  [46] =
    {field_ref_name, 3, .inherited = true},
    {field_ref_name_parent, 3, .inherited = true},
    {field_remote_name, 3, .inherited = true},
    {field_schema_name, 3, .inherited = true},
  [50] =
    {field_ref_name, 0, .inherited = true},
    {field_ref_name, 1, .inherited = true},
    {field_ref_name_parent, 0, .inherited = true},
    {field_ref_name_parent, 1, .inherited = true},
    {field_remote_name, 0, .inherited = true},
    {field_remote_name, 1, .inherited = true},
    {field_schema_name, 0, .inherited = true},
    {field_schema_name, 1, .inherited = true},
  [58] =
    {field_ref_name, 4, .inherited = true},
    {field_ref_name_parent, 4, .inherited = true},
    {field_remote_name, 4, .inherited = true},
    {field_schema_name, 4, .inherited = true},
  [62] =
    {field_ref_name, 1, .inherited = true},
    {field_ref_name, 2, .inherited = true},
    {field_ref_name_parent, 1, .inherited = true},
    {field_ref_name_parent, 2, .inherited = true},
    {field_remote_name, 1, .inherited = true},
    {field_remote_name, 2, .inherited = true},
    {field_schema_name, 1, .inherited = true},
    {field_schema_name, 2, .inherited = true},
  [70] =
    {field_type_rec_name, 1},
  [71] =
    {field_ref_name, 5, .inherited = true},
    {field_ref_name_parent, 5, .inherited = true},
    {field_remote_name, 5, .inherited = true},
    {field_schema_name, 5, .inherited = true},
  [75] =
    {field_ref_name, 6, .inherited = true},
    {field_ref_name_parent, 6, .inherited = true},
    {field_remote_name, 6, .inherited = true},
    {field_schema_name, 6, .inherited = true},
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
  [20] = 18,
  [21] = 19,
  [22] = 18,
  [23] = 19,
  [24] = 19,
  [25] = 18,
  [26] = 18,
  [27] = 19,
  [28] = 28,
  [29] = 29,
  [30] = 28,
  [31] = 31,
  [32] = 32,
  [33] = 29,
  [34] = 32,
  [35] = 35,
  [36] = 36,
  [37] = 32,
  [38] = 31,
  [39] = 39,
  [40] = 29,
  [41] = 39,
  [42] = 42,
  [43] = 43,
  [44] = 35,
  [45] = 36,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 35,
  [50] = 36,
  [51] = 51,
  [52] = 28,
  [53] = 39,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 56,
  [58] = 56,
  [59] = 59,
  [60] = 59,
  [61] = 59,
  [62] = 59,
  [63] = 59,
  [64] = 59,
  [65] = 59,
  [66] = 54,
  [67] = 54,
  [68] = 68,
  [69] = 69,
  [70] = 54,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 54,
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
  [95] = 94,
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
  [113] = 112,
  [114] = 114,
  [115] = 112,
  [116] = 78,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 81,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 85,
  [131] = 83,
  [132] = 132,
  [133] = 133,
  [134] = 86,
  [135] = 82,
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
  [151] = 72,
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
  [163] = 71,
  [164] = 69,
  [165] = 73,
  [166] = 68,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 75,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 18,
  [183] = 183,
  [184] = 184,
  [185] = 71,
  [186] = 186,
  [187] = 73,
  [188] = 68,
  [189] = 75,
  [190] = 72,
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
  [216] = 19,
  [217] = 69,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 219,
  [225] = 142,
  [226] = 196,
  [227] = 198,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 220,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 141,
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
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 79,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 257,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 254,
  [265] = 265,
  [266] = 266,
  [267] = 266,
  [268] = 250,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 74,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 244,
  [286] = 286,
  [287] = 245,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 244,
  [294] = 240,
  [295] = 247,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 247,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 243,
  [308] = 245,
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
  [320] = 243,
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
  [342] = 19,
  [343] = 343,
  [344] = 344,
  [345] = 18,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 19,
  [350] = 350,
  [351] = 351,
  [352] = 18,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 245,
  [363] = 363,
  [364] = 364,
  [365] = 244,
  [366] = 366,
  [367] = 367,
  [368] = 247,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 369,
  [374] = 369,
  [375] = 243,
  [376] = 376,
  [377] = 377,
  [378] = 244,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 247,
  [385] = 243,
  [386] = 245,
  [387] = 244,
  [388] = 388,
  [389] = 245,
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
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 254,
  [416] = 416,
  [417] = 417,
  [418] = 257,
  [419] = 240,
  [420] = 250,
  [421] = 421,
  [422] = 422,
  [423] = 243,
  [424] = 424,
  [425] = 247,
  [426] = 426,
  [427] = 427,
  [428] = 266,
  [429] = 245,
  [430] = 430,
  [431] = 243,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 247,
  [438] = 438,
  [439] = 244,
  [440] = 440,
  [441] = 441,
  [442] = 433,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 445,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 433,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 454,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 445,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 454,
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
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 496,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 496,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
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
  [563] = 563,
  [564] = 564,
  [565] = 538,
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
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 589,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 589,
  [610] = 589,
  [611] = 589,
  [612] = 589,
  [613] = 589,
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
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 614,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 614,
  [640] = 640,
  [641] = 614,
  [642] = 642,
  [643] = 614,
  [644] = 644,
  [645] = 614,
  [646] = 614,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 602,
  [664] = 625,
  [665] = 665,
  [666] = 589,
  [667] = 602,
  [668] = 625,
  [669] = 614,
  [670] = 670,
  [671] = 356,
  [672] = 672,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(402);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '%') ADVANCE(414);
      if (lookahead == '\'') ADVANCE(415);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(409);
      if (lookahead == '*') ADVANCE(430);
      if (lookahead == '+') ADVANCE(418);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == ':') ADVANCE(432);
      if (lookahead == ';') ADVANCE(403);
      if (lookahead == '<') ADVANCE(426);
      if (lookahead == '=') ADVANCE(406);
      if (lookahead == '>') ADVANCE(427);
      if (lookahead == '@') ADVANCE(412);
      if (lookahead == '\\') SKIP(389)
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead == '~') ADVANCE(71);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(585);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(457);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(452);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(574);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(459);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(673);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(983);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(462);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(622);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(464);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(674);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(453);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(576);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(461);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(904);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(468);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(703);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(801);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(659);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(870);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('G' <= lookahead && lookahead <= 'Q') ||
          ('g' <= lookahead && lookahead <= 'q')) ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1119);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(43)
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
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(59)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(59)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\r') SKIP(31)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(50)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') SKIP(33)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '\r') SKIP(35)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(56)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\r') SKIP(37)
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '%') ADVANCE(319);
      if (lookahead == '\'') ADVANCE(415);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(409);
      if (lookahead == '*') ADVANCE(430);
      if (lookahead == '+') ADVANCE(418);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == ':') ADVANCE(432);
      if (lookahead == ';') ADVANCE(403);
      if (lookahead == '<') ADVANCE(426);
      if (lookahead == '=') ADVANCE(406);
      if (lookahead == '>') ADVANCE(427);
      if (lookahead == '@') ADVANCE(412);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead == '~') ADVANCE(71);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(175);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(369);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(179);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(295);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(336);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(87);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(215);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(197);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == ')') ADVANCE(409);
      if (lookahead == '*') ADVANCE(430);
      if (lookahead == '+') ADVANCE(418);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == ';') ADVANCE(403);
      if (lookahead == '<') ADVANCE(426);
      if (lookahead == '=') ADVANCE(405);
      if (lookahead == '>') ADVANCE(427);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead == '~') ADVANCE(71);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(173);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(300);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '%') ADVANCE(319);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == ')') ADVANCE(409);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ';') ADVANCE(403);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '@') ADVANCE(412);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(672);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(702);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(506);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1088);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(762);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(812);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(983);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(889);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(466);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1061);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(763);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(919);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(516);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(801);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(41)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '%') ADVANCE(319);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(409);
      if (lookahead == '*') ADVANCE(430);
      if (lookahead == '+') ADVANCE(418);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == ';') ADVANCE(403);
      if (lookahead == '@') ADVANCE(412);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '|') ADVANCE(78);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1066);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(811);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1059);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(952);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(656);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1058);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1099);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(42)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '+') ADVANCE(418);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(431);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(458);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(663);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(460);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(858);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(890);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(950);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(905);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '+') ADVANCE(418);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(431);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(663);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(460);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(858);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(890);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(950);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(905);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(44)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '+') ADVANCE(418);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(431);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(663);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(460);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(858);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1065);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(950);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(905);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '+') ADVANCE(418);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(431);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(460);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1065);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(950);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ';') ADVANCE(403);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '=') ADVANCE(405);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(672);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(701);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(506);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1088);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(762);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(849);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(983);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(889);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(466);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(763);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(919);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(516);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(801);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(672);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(702);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(506);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1088);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(762);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(849);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(983);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(889);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(763);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(919);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(516);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(801);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') SKIP(34)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(672);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(702);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(506);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1088);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(762);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(812);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(983);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(889);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(466);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(763);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(919);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(516);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(801);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(672);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(702);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(506);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1088);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(762);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(849);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(983);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(889);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(466);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1061);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(763);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(919);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(516);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(801);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1066);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1059);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(952);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(656);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1058);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1099);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(745);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(889);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(764);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1018);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1059);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(483);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(954);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') SKIP(32)
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(704);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(55)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(672);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(702);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(506);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1088);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(762);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(849);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(983);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(889);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(466);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(763);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(919);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(516);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(801);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(1114);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(1116);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == '%') ADVANCE(319);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(409);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == ';') ADVANCE(403);
      if (lookahead == '@') ADVANCE(412);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(300);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(199);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(105);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(98);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(59)
      END_STATE();
    case 60:
      if (lookahead == '\'') ADVANCE(1118);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == '\'') ADVANCE(1117);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '/') ADVANCE(1122);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(63);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(1124);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(413);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1121);
      END_STATE();
    case 68:
      if (lookahead == '=') ADVANCE(421);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(416);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(423);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(422);
      END_STATE();
    case 72:
      if (lookahead == '>') ADVANCE(417);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(373);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(126);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(280);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(129);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(196);
      END_STATE();
    case 78:
      if (lookahead == '|') ADVANCE(428);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1167);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1247);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1266);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(374);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 113:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(250);
      END_STATE();
    case 114:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(334);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(149);
      END_STATE();
    case 115:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(252);
      END_STATE();
    case 116:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(253);
      END_STATE();
    case 117:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 118:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      END_STATE();
    case 119:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1192);
      END_STATE();
    case 120:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1183);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 121:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 122:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(239);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 123:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 124:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 125:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(299);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(248);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 126:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 127:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 130:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 132:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 133:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(298);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1256);
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1163);
      END_STATE();
    case 136:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1163);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 137:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1161);
      END_STATE();
    case 138:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1172);
      END_STATE();
    case 139:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1191);
      END_STATE();
    case 140:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1246);
      END_STATE();
    case 141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1193);
      END_STATE();
    case 142:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      END_STATE();
    case 143:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(236);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 144:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 145:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 146:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 147:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1144);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1203);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1168);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1240);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1133);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1204);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1185);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1268);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1154);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1127);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1164);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1129);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1175);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1165);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1195);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1194);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1134);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1179);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1238);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1166);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1176);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(356);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 199:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1186);
      END_STATE();
    case 200:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1186);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1162);
      END_STATE();
    case 201:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(108);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 202:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 203:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 204:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1258);
      END_STATE();
    case 205:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 206:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(335);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 209:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1236);
      END_STATE();
    case 210:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1243);
      END_STATE();
    case 211:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(220);
      END_STATE();
    case 212:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(181);
      END_STATE();
    case 213:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 214:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(91);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(243);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(184);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(99);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(261);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 239:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(101);
      END_STATE();
    case 240:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(149);
      END_STATE();
    case 241:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1237);
      END_STATE();
    case 242:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 243:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 244:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 245:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(364);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 260:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 261:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 262:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 263:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 264:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1142);
      END_STATE();
    case 265:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1141);
      END_STATE();
    case 266:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1208);
      END_STATE();
    case 267:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1197);
      END_STATE();
    case 268:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1128);
      END_STATE();
    case 269:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1170);
      END_STATE();
    case 270:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1264);
      END_STATE();
    case 271:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1199);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1182);
      END_STATE();
    case 272:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 273:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1233);
      END_STATE();
    case 274:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 275:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 276:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 277:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 278:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 279:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 280:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 281:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 282:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 283:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 284:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1139);
      END_STATE();
    case 285:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 286:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 287:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1139);
      END_STATE();
    case 289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 293:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1247);
      END_STATE();
    case 294:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 295:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 296:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 297:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 298:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 299:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 300:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 301:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 302:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 303:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 304:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 305:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 306:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 307:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 308:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1171);
      END_STATE();
    case 309:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 310:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 311:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 312:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 313:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1162);
      END_STATE();
    case 314:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1242);
      END_STATE();
    case 315:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1126);
      END_STATE();
    case 316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1174);
      END_STATE();
    case 317:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1255);
      END_STATE();
    case 318:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1173);
      END_STATE();
    case 319:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      END_STATE();
    case 320:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 321:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1181);
      END_STATE();
    case 322:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 323:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 324:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 325:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 327:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 328:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 329:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 330:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 331:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 332:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(224);
      END_STATE();
    case 333:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 334:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 335:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1178);
      END_STATE();
    case 336:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(222);
      END_STATE();
    case 337:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(370);
      END_STATE();
    case 338:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      END_STATE();
    case 339:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 340:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 341:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(357);
      END_STATE();
    case 342:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      END_STATE();
    case 343:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 344:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(232);
      END_STATE();
    case 345:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1139);
      END_STATE();
    case 346:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1169);
      END_STATE();
    case 347:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1269);
      END_STATE();
    case 348:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      END_STATE();
    case 349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 350:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      END_STATE();
    case 351:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 353:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(192);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(226);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(383);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 368:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      END_STATE();
    case 369:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 370:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 371:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 372:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 373:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 374:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 375:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(365);
      END_STATE();
    case 376:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(198);
      END_STATE();
    case 377:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1187);
      END_STATE();
    case 378:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(307);
      END_STATE();
    case 379:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1244);
      END_STATE();
    case 380:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1189);
      END_STATE();
    case 381:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1188);
      END_STATE();
    case 382:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1135);
      END_STATE();
    case 383:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(309);
      END_STATE();
    case 384:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(224);
      END_STATE();
    case 385:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(312);
      END_STATE();
    case 386:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1121);
      END_STATE();
    case 387:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(60);
      END_STATE();
    case 388:
      if (eof) ADVANCE(402);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 389:
      if (eof) ADVANCE(402);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(388)
      END_STATE();
    case 390:
      if (eof) ADVANCE(402);
      if (lookahead == '\n') SKIP(398)
      END_STATE();
    case 391:
      if (eof) ADVANCE(402);
      if (lookahead == '\n') SKIP(398)
      if (lookahead == '\r') SKIP(390)
      END_STATE();
    case 392:
      if (eof) ADVANCE(402);
      if (lookahead == '\n') SKIP(399)
      END_STATE();
    case 393:
      if (eof) ADVANCE(402);
      if (lookahead == '\n') SKIP(399)
      if (lookahead == '\r') SKIP(392)
      END_STATE();
    case 394:
      if (eof) ADVANCE(402);
      if (lookahead == '\n') SKIP(400)
      END_STATE();
    case 395:
      if (eof) ADVANCE(402);
      if (lookahead == '\n') SKIP(400)
      if (lookahead == '\r') SKIP(394)
      END_STATE();
    case 396:
      if (eof) ADVANCE(402);
      if (lookahead == '\n') SKIP(401)
      END_STATE();
    case 397:
      if (eof) ADVANCE(402);
      if (lookahead == '\n') SKIP(401)
      if (lookahead == '\r') SKIP(396)
      END_STATE();
    case 398:
      if (eof) ADVANCE(402);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(409);
      if (lookahead == '*') ADVANCE(430);
      if (lookahead == '+') ADVANCE(418);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == ':') ADVANCE(431);
      if (lookahead == ';') ADVANCE(403);
      if (lookahead == '<') ADVANCE(426);
      if (lookahead == '=') ADVANCE(405);
      if (lookahead == '>') ADVANCE(427);
      if (lookahead == '@') ADVANCE(412);
      if (lookahead == '\\') SKIP(391)
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead == '~') ADVANCE(71);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(174);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(217);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(398)
      END_STATE();
    case 399:
      if (eof) ADVANCE(402);
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ';') ADVANCE(403);
      if (lookahead == '\\') SKIP(393)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(754);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(879);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(875);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(627);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(896);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(484);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(664);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(906);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(399)
      if (('F' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 400:
      if (eof) ADVANCE(402);
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ';') ADVANCE(403);
      if (lookahead == '\\') SKIP(395)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(754);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(879);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(875);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(896);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(484);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(664);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(906);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(400)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 401:
      if (eof) ADVANCE(402);
      if (lookahead == '"') ADVANCE(1107);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ';') ADVANCE(403);
      if (lookahead == '\\') SKIP(397)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(754);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(875);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(896);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(664);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(401)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(64);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(417);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1121);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(378);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1124);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(424);
      if (lookahead == '>') ADVANCE(420);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(425);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(429);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(416);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '2') ADVANCE(1212);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(492);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(579);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(686);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(551);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(1073);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(550);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(946);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(795);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(843);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(1009);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(1013);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(1014);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(1015);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(688);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(724);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(583);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '_') ADVANCE(750);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1025);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1076);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(909);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(968);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(986);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(621);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(826);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1082);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1267);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1167);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(972);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(470);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(868);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(765);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(623);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(920);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(972);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(788);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(962);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(869);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1062);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(825);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(788);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(525);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(628);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(804);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1247);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(910);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(974);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(555);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1090);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(705);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1087);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(543);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(766);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(472);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(705);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(544);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(799);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(472);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1020);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(705);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(799);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(472);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(802);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(921);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1081);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1086);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(922);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1092);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(942);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(757);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(881);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1184);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(768);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1068);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1064);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(980);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(757);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(923);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(796);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(943);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(758);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(790);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(991);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(925);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(759);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(891);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(760);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1001);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(761);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(819);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(955);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(793);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(945);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(965);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(780);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(657);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(520);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(557);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(932);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(933);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1008);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(961);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1010);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(951);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1035);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(582);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(545);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(554);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1031);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1026);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1076);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1034);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(845);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1071);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(854);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1044);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1050);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(529);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1054);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(532);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(533);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(967);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1248);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1249);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1250);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(751);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1060);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1262);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(509);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(636);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(635);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1060);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(964);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(589);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(726);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1047);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(775);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(776);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(640);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(947);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(781);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(782);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(783);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(784);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(785);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(786);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(542);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1022);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(940);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1183);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(993);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1259);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1192);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1261);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(753);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(479);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(753);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(706);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(471);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(727);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(706);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(626);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(872);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1139);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(872);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(700);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(720);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(708);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(624);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(977);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(624);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(893);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(501);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(625);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1040);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(607);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(478);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(676);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(878);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1257);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(490);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1043);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(707);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1048);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(898);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(513);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1163);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(578);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1089);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(787);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1089);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1161);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1198);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1252);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1172);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1191);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1246);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1253);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1193);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(716);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(975);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(566);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(548);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(716);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(865);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(691);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(476);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(655);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(959);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(524);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(969);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(865);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(691);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(476);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(969);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1100);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(899);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(860);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(510);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1069);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(507);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(900);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(797);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(862);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(749);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(712);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(866);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(564);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(755);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1176);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1140);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1234);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1144);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1203);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1168);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1239);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1136);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1131);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1240);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1251);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1137);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1204);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1177);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1185);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1125);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1263);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1245);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1268);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1154);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1158);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1127);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1164);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1132);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1271);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1270);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1225);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1227);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1129);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1175);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1165);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1195);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1218);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1220);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1194);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1166);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(880);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1021);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(828);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(835);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(918);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(973);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(864);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(924);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(941);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1042);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(791);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(770);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(818);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(928);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(929);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(930);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1007);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1037);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(931);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(934);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(935);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(937);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(938);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(939);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(966);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(547);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1023);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1097);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1038);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(857);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(769);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1072);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(988);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(859);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(712);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(866);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(871);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1143);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1200);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1182);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1186);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1162);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(996);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(717);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1232);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1155);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1209);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1258);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1206);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1207);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1205);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(442);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(971);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(597);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(629);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(874);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(606);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(634);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(693);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(721);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1084);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(863);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(916);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(642);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1080);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(645);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(647);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(650);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(651);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1236);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1243);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(714);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(616);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(470);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(868);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(852);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(470);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(868);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(632);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1016);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(632);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(481);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(873);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(493);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(494);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(675);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1079);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(592);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(568);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(535);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1019);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(562);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(830);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(572);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(992);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(816);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(536);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(831);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(853);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(832);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1002);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(834);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1029);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(836);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(837);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(840);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(838);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(850);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(883);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(805);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(884);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(981);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(778);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(982);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(886);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(887);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(888);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(856);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(528);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1049);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1085);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(901);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1057);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(860);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(654);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(440);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(503);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1022);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(752);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1138);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1216);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1237);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1260);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1223);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1241);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(869);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(968);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(986);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(968);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(789);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(917);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(984);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(839);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(756);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(527);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(756);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(502);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(636);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(449);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(985);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1024);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(595);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1003);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(599);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(601);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(670);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(604);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(638);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(653);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(614);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(615);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(617);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(618);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(619);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(620);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(630);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(979);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(511);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(779);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(733);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(742);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(496);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(895);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(740);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(792);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(897);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1051);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(527);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(917);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(798);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(902);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(903);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(591);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(666);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(644);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(480);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(482);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(658);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(731);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(662);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(566);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1200);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(676);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1142);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1141);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1159);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1208);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1197);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1254);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1128);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1170);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1160);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1264);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1156);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(560);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(685);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1233);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(567);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1070);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(434);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(683);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(678);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(684);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(571);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(679);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1017);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(681);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(682);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(999);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(737);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(512);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(594);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(771);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1027);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1004);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1005);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1006);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1011);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(994);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(633);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(671);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(984);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1039);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(641);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(477);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1041);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(990);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(514);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1055);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(515);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1056);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1053);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(806);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1083);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(842);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(787);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(907);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(519);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(908);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(623);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(829);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(447);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(833);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(565);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(926);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(944);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(927);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(841);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(820);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(821);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(822);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(823);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(824);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(813);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(995);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(767);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1074);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(803);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(808);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(851);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(497);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1075);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1077);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1078);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(861);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1235);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1171);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(580);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(747);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(718);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(580);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(655);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1091);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(877);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(637);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(593);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(603);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(608);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(609);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(610);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(612);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(777);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(738);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1052);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(747);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(960);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1180);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1242);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1126);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1213);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1151);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1190);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1230);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1174);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1229);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1130);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1210);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(433);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1255);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1222);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1173);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1274);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1221);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1228);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(463);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(809);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1096);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(570);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1093);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(867);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(715);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1094);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1095);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1063);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1105);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(891);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(817);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(711);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(910);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(605);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(613);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(987);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(505);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(723);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(661);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(882);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(978);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(485);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(491);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(958);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1046);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(541);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(448);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1265);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1196);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1178);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(586);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(976);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(997);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(588);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(746);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1028);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1000);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(596);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(598);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1033);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1012);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(876);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1030);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(439);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(728);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(882);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1032);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(648);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(652);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1045);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(743);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(699);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1214);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1139);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1201);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1148);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1150);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1146);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1147);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1231);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1149);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1169);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1275);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1152);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1215);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1269);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1217);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1277);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1219);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1153);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1280);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1278);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1279);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1276);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(697);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(698);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(959);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1067);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(500);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(631);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1064);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(437);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(587);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1244);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(587);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(970);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(709);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(508);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(456);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(948);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(949);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(665);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(444);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(446);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(729);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(646);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(649);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1101);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(736);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1102);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(739);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1103);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(741);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1104);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(744);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(667);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(668);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(748);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(524);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(825);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(677);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(996);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(827);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(592);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(953);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(767);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(957);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(963);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(772);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(956);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1036);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(774);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(980);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(989);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(846);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(848);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(526);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(530);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(531);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(611);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(487);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1233);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1145);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(561);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(660);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(719);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(713);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(998);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(549);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1157);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1189);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1202);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1188);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1135);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1272);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1273);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(435);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(441);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(443);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(910);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(911);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(912);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(913);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(914);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(915);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(451);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == '#' ||
          lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1106);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '\r') ADVANCE(1109);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead != 0) ADVANCE(1114);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead != 0) ADVANCE(1114);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\n') ADVANCE(1114);
      if (lookahead == '"') ADVANCE(1123);
      if (lookahead != 0) ADVANCE(1110);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '*') ADVANCE(1116);
      if (lookahead != 0) ADVANCE(1114);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '-') ADVANCE(1113);
      if (lookahead == '/') ADVANCE(1111);
      if (lookahead == '\\') ADVANCE(1108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1112);
      if (lookahead != 0) ADVANCE(1114);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '-') ADVANCE(1110);
      if (lookahead != 0) ADVANCE(1114);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead != 0) ADVANCE(1114);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '*') ADVANCE(1115);
      if (lookahead == '/') ADVANCE(1114);
      if (lookahead != 0) ADVANCE(1116);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '*') ADVANCE(1115);
      if (lookahead != 0) ADVANCE(1116);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(60);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__single_quote_string);
      if (lookahead == '\'') ADVANCE(387);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1119);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1120);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1121);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_comment_ml);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_comment_sl);
      if (lookahead == '"') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_comment_sl);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_kw_create);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_kw_alter);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_kw_package);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_kw_function);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_kw_procedure);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_kw_trigger);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_kw_type);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_kw_subtype);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_kw_datatype_type);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_kw_datatype_rowtype);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_kw_library);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_kw_true);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_kw_false);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_kw_null);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_kw_not);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_kw_case);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_kw_when);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_kw_then);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_kw_if);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_kw_else);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_kw_row);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(892);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_kw_count);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_kw_first);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_kw_last);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_kw_limit);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_kw_next);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_kw_prior);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_kw_rowcount);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_kw_bulk_rowcount);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_kw_compile);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_kw_debug);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_kw_specification);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_kw_body);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_kw_declare);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_kw_begin);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_kw_exception);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_kw_end);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_kw_or);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_kw_and);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_kw_replace);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_kw_editionable);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_kw_noneditionable);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_kw_metadata);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_kw_none);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_kw_default);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_kw_collation);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_kw_using_nls_comp);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_kw_authid);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_kw_current_user);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_kw_definer);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_kw_accessible);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_kw_by);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_kw_reuse);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_kw_settings);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_kw_byte);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_kw_char);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_kw_char);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_kw_is);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_kw_as);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_kw_ref);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_kw_table);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_kw_of);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_kw_index);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_kw_varray);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_kw_array);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_kw_cursor);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_kw_record);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_kw_deterministic);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_kw_pipelined);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_kw_parallel_enable);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_kw_result_cache);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_kw_exists);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_kw_between);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_kw_found);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_kw_in);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_kw_in);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1214);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_kw_out);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_kw_nocopy);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_kw_like);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_kw_range);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_kw_inserting);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_kw_deleting);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_kw_updating);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_kw_return);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_kw_string);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_kw_varchar);
      if (lookahead == '2') ADVANCE(1211);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_kw_varchar2);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_kw_nvarchar2);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_kw_nchar);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_kw_int);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_kw_smallint);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_kw_real);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_kw_binary_float);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_kw_binary_double);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_kw_simple_float);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_kw_simple_double);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_kw_binary_integer);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_kw_pls_integer);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_kw_natural);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1224);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_kw_naturaln);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_kw_positive);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1226);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_kw_positiven);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_kw_signtype);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_kw_simple_integer);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_kw_integer);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_kw_number);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_kw_float);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_kw_long);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_kw_raw);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_kw_date);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_kw_timestamp);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_kw_with);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_kw_local);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_kw_time);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_kw_time);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1032);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_kw_zone);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_kw_interval);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_kw_year);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_kw_month);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_kw_day);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_kw_minute);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_kw_second);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_kw_to);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_kw_blob);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_kw_clob);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_kw_nclob);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_kw_bfile);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_kw_rowid);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_kw_urowid);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_kw_boolean);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_kw_character);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_kw_set);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_kw_set);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(725);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_kw_varying);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_kw_numeric);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_kw_decimal);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_kw_dec);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_kw_dec);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_kw_double);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_kw_precision);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_kw_sys);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_kw_anydata);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_kw_anydata);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(643);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_kw_anytype);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_kw_anydataset);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_kw_xmltype);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_kw_uritype);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_kw_sdo_geometry);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_kw_sdo_topo_geometry);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_kw_sdo_georaster);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_kw_constant);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_kw_json_element_t);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_kw_json_array_t);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_kw_json_object_t);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_kw_json_scalar_t);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_kw_json_key_list);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 51},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 56},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 56},
  [17] = {.lex_state = 56},
  [18] = {.lex_state = 41},
  [19] = {.lex_state = 41},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 56},
  [25] = {.lex_state = 56},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 43},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 43},
  [34] = {.lex_state = 43},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 43},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 43},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 398},
  [55] = {.lex_state = 398},
  [56] = {.lex_state = 44},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 44},
  [59] = {.lex_state = 45},
  [60] = {.lex_state = 45},
  [61] = {.lex_state = 45},
  [62] = {.lex_state = 45},
  [63] = {.lex_state = 45},
  [64] = {.lex_state = 45},
  [65] = {.lex_state = 45},
  [66] = {.lex_state = 398},
  [67] = {.lex_state = 398},
  [68] = {.lex_state = 398},
  [69] = {.lex_state = 398},
  [70] = {.lex_state = 398},
  [71] = {.lex_state = 398},
  [72] = {.lex_state = 398},
  [73] = {.lex_state = 398},
  [74] = {.lex_state = 40},
  [75] = {.lex_state = 398},
  [76] = {.lex_state = 398},
  [77] = {.lex_state = 398},
  [78] = {.lex_state = 398},
  [79] = {.lex_state = 398},
  [80] = {.lex_state = 398},
  [81] = {.lex_state = 398},
  [82] = {.lex_state = 398},
  [83] = {.lex_state = 398},
  [84] = {.lex_state = 398},
  [85] = {.lex_state = 398},
  [86] = {.lex_state = 398},
  [87] = {.lex_state = 398},
  [88] = {.lex_state = 398},
  [89] = {.lex_state = 398},
  [90] = {.lex_state = 398},
  [91] = {.lex_state = 398},
  [92] = {.lex_state = 398},
  [93] = {.lex_state = 398},
  [94] = {.lex_state = 46},
  [95] = {.lex_state = 46},
  [96] = {.lex_state = 46},
  [97] = {.lex_state = 42},
  [98] = {.lex_state = 42},
  [99] = {.lex_state = 42},
  [100] = {.lex_state = 42},
  [101] = {.lex_state = 42},
  [102] = {.lex_state = 42},
  [103] = {.lex_state = 42},
  [104] = {.lex_state = 42},
  [105] = {.lex_state = 42},
  [106] = {.lex_state = 398},
  [107] = {.lex_state = 42},
  [108] = {.lex_state = 42},
  [109] = {.lex_state = 42},
  [110] = {.lex_state = 42},
  [111] = {.lex_state = 42},
  [112] = {.lex_state = 398},
  [113] = {.lex_state = 398},
  [114] = {.lex_state = 42},
  [115] = {.lex_state = 398},
  [116] = {.lex_state = 42},
  [117] = {.lex_state = 52},
  [118] = {.lex_state = 52},
  [119] = {.lex_state = 52},
  [120] = {.lex_state = 52},
  [121] = {.lex_state = 52},
  [122] = {.lex_state = 42},
  [123] = {.lex_state = 52},
  [124] = {.lex_state = 52},
  [125] = {.lex_state = 52},
  [126] = {.lex_state = 52},
  [127] = {.lex_state = 52},
  [128] = {.lex_state = 52},
  [129] = {.lex_state = 52},
  [130] = {.lex_state = 42},
  [131] = {.lex_state = 42},
  [132] = {.lex_state = 52},
  [133] = {.lex_state = 52},
  [134] = {.lex_state = 42},
  [135] = {.lex_state = 42},
  [136] = {.lex_state = 46},
  [137] = {.lex_state = 399},
  [138] = {.lex_state = 46},
  [139] = {.lex_state = 400},
  [140] = {.lex_state = 59},
  [141] = {.lex_state = 39},
  [142] = {.lex_state = 39},
  [143] = {.lex_state = 53},
  [144] = {.lex_state = 53},
  [145] = {.lex_state = 59},
  [146] = {.lex_state = 39},
  [147] = {.lex_state = 59},
  [148] = {.lex_state = 39},
  [149] = {.lex_state = 59},
  [150] = {.lex_state = 59},
  [151] = {.lex_state = 39},
  [152] = {.lex_state = 59},
  [153] = {.lex_state = 59},
  [154] = {.lex_state = 401},
  [155] = {.lex_state = 401},
  [156] = {.lex_state = 39},
  [157] = {.lex_state = 401},
  [158] = {.lex_state = 401},
  [159] = {.lex_state = 46},
  [160] = {.lex_state = 54},
  [161] = {.lex_state = 59},
  [162] = {.lex_state = 39},
  [163] = {.lex_state = 39},
  [164] = {.lex_state = 39},
  [165] = {.lex_state = 39},
  [166] = {.lex_state = 39},
  [167] = {.lex_state = 59},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 59},
  [170] = {.lex_state = 59},
  [171] = {.lex_state = 39},
  [172] = {.lex_state = 401},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 39},
  [175] = {.lex_state = 59},
  [176] = {.lex_state = 59},
  [177] = {.lex_state = 54},
  [178] = {.lex_state = 59},
  [179] = {.lex_state = 59},
  [180] = {.lex_state = 401},
  [181] = {.lex_state = 59},
  [182] = {.lex_state = 42},
  [183] = {.lex_state = 59},
  [184] = {.lex_state = 59},
  [185] = {.lex_state = 42},
  [186] = {.lex_state = 59},
  [187] = {.lex_state = 42},
  [188] = {.lex_state = 42},
  [189] = {.lex_state = 42},
  [190] = {.lex_state = 42},
  [191] = {.lex_state = 59},
  [192] = {.lex_state = 59},
  [193] = {.lex_state = 59},
  [194] = {.lex_state = 59},
  [195] = {.lex_state = 59},
  [196] = {.lex_state = 59},
  [197] = {.lex_state = 59},
  [198] = {.lex_state = 59},
  [199] = {.lex_state = 59},
  [200] = {.lex_state = 59},
  [201] = {.lex_state = 59},
  [202] = {.lex_state = 59},
  [203] = {.lex_state = 59},
  [204] = {.lex_state = 59},
  [205] = {.lex_state = 59},
  [206] = {.lex_state = 59},
  [207] = {.lex_state = 59},
  [208] = {.lex_state = 59},
  [209] = {.lex_state = 59},
  [210] = {.lex_state = 59},
  [211] = {.lex_state = 59},
  [212] = {.lex_state = 59},
  [213] = {.lex_state = 59},
  [214] = {.lex_state = 59},
  [215] = {.lex_state = 59},
  [216] = {.lex_state = 42},
  [217] = {.lex_state = 42},
  [218] = {.lex_state = 59},
  [219] = {.lex_state = 59},
  [220] = {.lex_state = 59},
  [221] = {.lex_state = 59},
  [222] = {.lex_state = 59},
  [223] = {.lex_state = 59},
  [224] = {.lex_state = 42},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 42},
  [227] = {.lex_state = 42},
  [228] = {.lex_state = 47},
  [229] = {.lex_state = 39},
  [230] = {.lex_state = 47},
  [231] = {.lex_state = 39},
  [232] = {.lex_state = 42},
  [233] = {.lex_state = 39},
  [234] = {.lex_state = 46},
  [235] = {.lex_state = 39},
  [236] = {.lex_state = 46},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 39},
  [239] = {.lex_state = 398},
  [240] = {.lex_state = 39},
  [241] = {.lex_state = 47},
  [242] = {.lex_state = 42},
  [243] = {.lex_state = 39},
  [244] = {.lex_state = 39},
  [245] = {.lex_state = 39},
  [246] = {.lex_state = 398},
  [247] = {.lex_state = 39},
  [248] = {.lex_state = 398},
  [249] = {.lex_state = 398},
  [250] = {.lex_state = 39},
  [251] = {.lex_state = 401},
  [252] = {.lex_state = 398},
  [253] = {.lex_state = 398},
  [254] = {.lex_state = 39},
  [255] = {.lex_state = 401},
  [256] = {.lex_state = 398},
  [257] = {.lex_state = 39},
  [258] = {.lex_state = 398},
  [259] = {.lex_state = 398},
  [260] = {.lex_state = 39},
  [261] = {.lex_state = 398},
  [262] = {.lex_state = 398},
  [263] = {.lex_state = 39},
  [264] = {.lex_state = 39},
  [265] = {.lex_state = 39},
  [266] = {.lex_state = 39},
  [267] = {.lex_state = 39},
  [268] = {.lex_state = 39},
  [269] = {.lex_state = 398},
  [270] = {.lex_state = 43},
  [271] = {.lex_state = 398},
  [272] = {.lex_state = 401},
  [273] = {.lex_state = 39},
  [274] = {.lex_state = 43},
  [275] = {.lex_state = 43},
  [276] = {.lex_state = 39},
  [277] = {.lex_state = 398},
  [278] = {.lex_state = 398},
  [279] = {.lex_state = 398},
  [280] = {.lex_state = 55},
  [281] = {.lex_state = 398},
  [282] = {.lex_state = 39},
  [283] = {.lex_state = 42},
  [284] = {.lex_state = 42},
  [285] = {.lex_state = 39},
  [286] = {.lex_state = 39},
  [287] = {.lex_state = 39},
  [288] = {.lex_state = 42},
  [289] = {.lex_state = 39},
  [290] = {.lex_state = 39},
  [291] = {.lex_state = 39},
  [292] = {.lex_state = 39},
  [293] = {.lex_state = 39},
  [294] = {.lex_state = 39},
  [295] = {.lex_state = 39},
  [296] = {.lex_state = 42},
  [297] = {.lex_state = 39},
  [298] = {.lex_state = 42},
  [299] = {.lex_state = 39},
  [300] = {.lex_state = 42},
  [301] = {.lex_state = 39},
  [302] = {.lex_state = 39},
  [303] = {.lex_state = 39},
  [304] = {.lex_state = 39},
  [305] = {.lex_state = 39},
  [306] = {.lex_state = 42},
  [307] = {.lex_state = 39},
  [308] = {.lex_state = 39},
  [309] = {.lex_state = 42},
  [310] = {.lex_state = 39},
  [311] = {.lex_state = 42},
  [312] = {.lex_state = 42},
  [313] = {.lex_state = 42},
  [314] = {.lex_state = 39},
  [315] = {.lex_state = 42},
  [316] = {.lex_state = 39},
  [317] = {.lex_state = 39},
  [318] = {.lex_state = 42},
  [319] = {.lex_state = 42},
  [320] = {.lex_state = 39},
  [321] = {.lex_state = 39},
  [322] = {.lex_state = 39},
  [323] = {.lex_state = 42},
  [324] = {.lex_state = 42},
  [325] = {.lex_state = 42},
  [326] = {.lex_state = 39},
  [327] = {.lex_state = 39},
  [328] = {.lex_state = 39},
  [329] = {.lex_state = 39},
  [330] = {.lex_state = 39},
  [331] = {.lex_state = 39},
  [332] = {.lex_state = 39},
  [333] = {.lex_state = 39},
  [334] = {.lex_state = 42},
  [335] = {.lex_state = 39},
  [336] = {.lex_state = 39},
  [337] = {.lex_state = 39},
  [338] = {.lex_state = 39},
  [339] = {.lex_state = 39},
  [340] = {.lex_state = 42},
  [341] = {.lex_state = 39},
  [342] = {.lex_state = 398},
  [343] = {.lex_state = 47},
  [344] = {.lex_state = 39},
  [345] = {.lex_state = 398},
  [346] = {.lex_state = 39},
  [347] = {.lex_state = 39},
  [348] = {.lex_state = 39},
  [349] = {.lex_state = 59},
  [350] = {.lex_state = 398},
  [351] = {.lex_state = 398},
  [352] = {.lex_state = 59},
  [353] = {.lex_state = 39},
  [354] = {.lex_state = 40},
  [355] = {.lex_state = 398},
  [356] = {.lex_state = 398},
  [357] = {.lex_state = 398},
  [358] = {.lex_state = 39},
  [359] = {.lex_state = 39},
  [360] = {.lex_state = 398},
  [361] = {.lex_state = 39},
  [362] = {.lex_state = 39},
  [363] = {.lex_state = 59},
  [364] = {.lex_state = 40},
  [365] = {.lex_state = 39},
  [366] = {.lex_state = 39},
  [367] = {.lex_state = 39},
  [368] = {.lex_state = 39},
  [369] = {.lex_state = 47},
  [370] = {.lex_state = 39},
  [371] = {.lex_state = 47},
  [372] = {.lex_state = 40},
  [373] = {.lex_state = 47},
  [374] = {.lex_state = 47},
  [375] = {.lex_state = 39},
  [376] = {.lex_state = 47},
  [377] = {.lex_state = 47},
  [378] = {.lex_state = 39},
  [379] = {.lex_state = 40},
  [380] = {.lex_state = 47},
  [381] = {.lex_state = 47},
  [382] = {.lex_state = 47},
  [383] = {.lex_state = 47},
  [384] = {.lex_state = 39},
  [385] = {.lex_state = 39},
  [386] = {.lex_state = 39},
  [387] = {.lex_state = 39},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 39},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 47},
  [397] = {.lex_state = 39},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 40},
  [400] = {.lex_state = 47},
  [401] = {.lex_state = 47},
  [402] = {.lex_state = 40},
  [403] = {.lex_state = 47},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 47},
  [410] = {.lex_state = 40},
  [411] = {.lex_state = 47},
  [412] = {.lex_state = 39},
  [413] = {.lex_state = 39},
  [414] = {.lex_state = 40},
  [415] = {.lex_state = 39},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 39},
  [418] = {.lex_state = 39},
  [419] = {.lex_state = 39},
  [420] = {.lex_state = 39},
  [421] = {.lex_state = 47},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 39},
  [424] = {.lex_state = 47},
  [425] = {.lex_state = 39},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 41},
  [428] = {.lex_state = 39},
  [429] = {.lex_state = 39},
  [430] = {.lex_state = 47},
  [431] = {.lex_state = 39},
  [432] = {.lex_state = 39},
  [433] = {.lex_state = 47},
  [434] = {.lex_state = 39},
  [435] = {.lex_state = 47},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 39},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 39},
  [440] = {.lex_state = 39},
  [441] = {.lex_state = 39},
  [442] = {.lex_state = 47},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 47},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 47},
  [449] = {.lex_state = 40},
  [450] = {.lex_state = 47},
  [451] = {.lex_state = 398},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 47},
  [454] = {.lex_state = 47},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 47},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 39},
  [461] = {.lex_state = 47},
  [462] = {.lex_state = 47},
  [463] = {.lex_state = 47},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 47},
  [466] = {.lex_state = 59},
  [467] = {.lex_state = 398},
  [468] = {.lex_state = 47},
  [469] = {.lex_state = 47},
  [470] = {.lex_state = 47},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 39},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 40},
  [477] = {.lex_state = 39},
  [478] = {.lex_state = 47},
  [479] = {.lex_state = 47},
  [480] = {.lex_state = 47},
  [481] = {.lex_state = 47},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 47},
  [484] = {.lex_state = 47},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 39},
  [487] = {.lex_state = 39},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 39},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 39},
  [492] = {.lex_state = 39},
  [493] = {.lex_state = 39},
  [494] = {.lex_state = 398},
  [495] = {.lex_state = 39},
  [496] = {.lex_state = 39},
  [497] = {.lex_state = 39},
  [498] = {.lex_state = 48},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 39},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 41},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 39},
  [512] = {.lex_state = 39},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 48},
  [516] = {.lex_state = 48},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 39},
  [519] = {.lex_state = 39},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 39},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 39},
  [525] = {.lex_state = 39},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 39},
  [531] = {.lex_state = 47},
  [532] = {.lex_state = 39},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 39},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 41},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 41},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 59},
  [556] = {.lex_state = 39},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 41},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 41},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 41},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 39},
  [576] = {.lex_state = 48},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 39},
  [585] = {.lex_state = 39},
  [586] = {.lex_state = 39},
  [587] = {.lex_state = 39},
  [588] = {.lex_state = 39},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 39},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 39},
  [597] = {.lex_state = 41},
  [598] = {.lex_state = 39},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 39},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 39},
  [605] = {.lex_state = 39},
  [606] = {.lex_state = 39},
  [607] = {.lex_state = 39},
  [608] = {.lex_state = 398},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 1112},
  [615] = {.lex_state = 39},
  [616] = {.lex_state = 39},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 39},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 39},
  [626] = {.lex_state = 39},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 398},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 1112},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 41},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 1112},
  [640] = {.lex_state = 41},
  [641] = {.lex_state = 1112},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 1112},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 1112},
  [646] = {.lex_state = 1112},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 41},
  [651] = {.lex_state = 39},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 39},
  [655] = {.lex_state = 39},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 39},
  [658] = {.lex_state = 48},
  [659] = {.lex_state = 398},
  [660] = {.lex_state = 398},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 39},
  [663] = {.lex_state = 39},
  [664] = {.lex_state = 39},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 39},
  [668] = {.lex_state = 39},
  [669] = {.lex_state = 1112},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 39},
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
    [anon_sym_DOT_DOT] = ACTIONS(1),
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
    [sym_kw_subtype] = ACTIONS(1),
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
    [sym_kw_exception] = ACTIONS(1),
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
    [sym_kw_char] = ACTIONS(1),
    [sym_kw_is] = ACTIONS(1),
    [sym_kw_as] = ACTIONS(1),
    [sym_kw_ref] = ACTIONS(1),
    [sym_kw_table] = ACTIONS(1),
    [sym_kw_of] = ACTIONS(1),
    [sym_kw_varray] = ACTIONS(1),
    [sym_kw_array] = ACTIONS(1),
    [sym_kw_cursor] = ACTIONS(1),
    [sym_kw_record] = ACTIONS(1),
    [sym_kw_deterministic] = ACTIONS(1),
    [sym_kw_pipelined] = ACTIONS(1),
    [sym_kw_parallel_enable] = ACTIONS(1),
    [sym_kw_result_cache] = ACTIONS(1),
    [sym_kw_exists] = ACTIONS(1),
    [sym_kw_between] = ACTIONS(1),
    [sym_kw_found] = ACTIONS(1),
    [sym_kw_in] = ACTIONS(1),
    [sym_kw_out] = ACTIONS(1),
    [sym_kw_nocopy] = ACTIONS(1),
    [sym_kw_like] = ACTIONS(1),
    [sym_kw_range] = ACTIONS(1),
    [sym_kw_deleting] = ACTIONS(1),
    [sym_kw_updating] = ACTIONS(1),
    [sym_kw_return] = ACTIONS(1),
    [sym_kw_string] = ACTIONS(1),
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
    [sym_kw_set] = ACTIONS(1),
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
    [sym_kw_constant] = ACTIONS(1),
    [sym_kw_json_element_t] = ACTIONS(1),
    [sym_kw_json_array_t] = ACTIONS(1),
    [sym_kw_json_object_t] = ACTIONS(1),
    [sym_kw_json_scalar_t] = ACTIONS(1),
    [sym_kw_json_key_list] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(648),
    [sym__element] = STATE(168),
    [sym_sql_statement] = STATE(168),
    [sym__ddl_statement] = STATE(447),
    [sym__create_statement] = STATE(447),
    [sym_create_package] = STATE(447),
    [sym__alter_statement] = STATE(447),
    [sym_alter_package] = STATE(447),
    [sym_alter_procedure] = STATE(447),
    [sym_alter_function] = STATE(447),
    [sym_alter_library] = STATE(447),
    [sym_create_obj] = STATE(451),
    [aux_sym_source_file_repeat1] = STATE(168),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment_ml] = ACTIONS(7),
    [sym_comment_sl] = ACTIONS(7),
    [sym_kw_create] = ACTIONS(9),
    [sym_kw_alter] = ACTIONS(11),
  },
  [2] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(538),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(410),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(196),
    [sym__referenced_datatypes_rowtype] = STATE(198),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym__parameter_declaration_element_in] = STATE(560),
    [sym__parameter_declaration_element_in_out_or_out] = STATE(560),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_in] = ACTIONS(21),
    [sym_kw_out] = ACTIONS(23),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [3] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(538),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(364),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(196),
    [sym__referenced_datatypes_rowtype] = STATE(198),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_constant] = ACTIONS(59),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [4] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(565),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(558),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(226),
    [sym__referenced_datatypes_rowtype] = STATE(227),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_nocopy] = ACTIONS(61),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [5] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(538),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(379),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(196),
    [sym__referenced_datatypes_rowtype] = STATE(198),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_in] = ACTIONS(63),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [6] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(538),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(399),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(196),
    [sym__referenced_datatypes_rowtype] = STATE(198),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_out] = ACTIONS(65),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [7] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(565),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(572),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(226),
    [sym__referenced_datatypes_rowtype] = STATE(227),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_nocopy] = ACTIONS(67),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [8] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(565),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(558),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(226),
    [sym__referenced_datatypes_rowtype] = STATE(227),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [9] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(538),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(414),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(196),
    [sym__referenced_datatypes_rowtype] = STATE(198),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [10] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(538),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(466),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(196),
    [sym__referenced_datatypes_rowtype] = STATE(198),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(349),
    [sym__unquoted_identifier] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [11] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(538),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(413),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(196),
    [sym__referenced_datatypes_rowtype] = STATE(198),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [12] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(538),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(347),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(196),
    [sym__referenced_datatypes_rowtype] = STATE(198),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [13] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(538),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(509),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(196),
    [sym__referenced_datatypes_rowtype] = STATE(198),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [14] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(538),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(503),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(196),
    [sym__referenced_datatypes_rowtype] = STATE(198),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [15] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(538),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(354),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(196),
    [sym__referenced_datatypes_rowtype] = STATE(198),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [16] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(538),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(372),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(196),
    [sym__referenced_datatypes_rowtype] = STATE(198),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
  [17] = {
    [sym__schema] = STATE(373),
    [sym__referenced_element] = STATE(565),
    [sym__referenced_element_parent] = STATE(151),
    [sym__referenced_element_name] = STATE(163),
    [sym_datatype] = STATE(548),
    [sym__character_datatypes] = STATE(218),
    [sym__character_datatypes_char] = STATE(218),
    [sym__character_datatypes_varchar2] = STATE(218),
    [sym__character_datatypes_nchar] = STATE(218),
    [sym__character_datatypes_nvarchar2] = STATE(218),
    [sym__number_datatypes] = STATE(218),
    [sym__number_datatypes_keyword] = STATE(218),
    [sym__number_datatypes_number] = STATE(218),
    [sym__number_datatypes_float] = STATE(218),
    [sym__long_and_raw_datatypes] = STATE(218),
    [sym__long_and_raw_datatypes_long_raw] = STATE(218),
    [sym__long_and_raw_datatypes_raw] = STATE(218),
    [sym__datetime_datatypes] = STATE(218),
    [sym__datetime_datatypes_keyword] = STATE(218),
    [sym__datetime_datatypes_date_timestamp] = STATE(218),
    [sym__datetime_datatypes_date_interval_year] = STATE(218),
    [sym__datetime_datatypes_date_interval_day] = STATE(218),
    [sym__large_object_datatypes] = STATE(218),
    [sym__rowid_datatypes] = STATE(218),
    [sym__referenced_datatypes] = STATE(212),
    [sym__referenced_datatypes_type] = STATE(226),
    [sym__referenced_datatypes_rowtype] = STATE(227),
    [sym__logical_datatypes] = STATE(218),
    [sym__subtype_datatypes] = STATE(218),
    [sym__rowid_datatypes_urowid] = STATE(218),
    [sym__ansi_supported_datatypes_character] = STATE(218),
    [sym__ansi_supported_datatypes_char_nchar] = STATE(218),
    [sym__ansi_supported_datatypes_varchar] = STATE(218),
    [sym__ansi_supported_datatypes_national] = STATE(218),
    [sym__ansi_supported_datatypes_numeric_decimal_dec] = STATE(218),
    [sym__ansi_supported_datatypes_double_precision] = STATE(218),
    [sym__supplied_datatypes_any_types] = STATE(218),
    [sym__supplied_datatypes_xml_types] = STATE(218),
    [sym__supplied_datatypes_spatial_types] = STATE(218),
    [sym__object_datatypes] = STATE(218),
    [sym__other_datatypes] = STATE(218),
    [sym_identifier] = STATE(140),
    [sym__quoted_identifier] = STATE(27),
    [sym__unquoted_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment_ml] = ACTIONS(3),
    [sym_comment_sl] = ACTIONS(3),
    [sym_kw_exception] = ACTIONS(17),
    [sym_kw_char] = ACTIONS(19),
    [sym_kw_varchar] = ACTIONS(25),
    [sym_kw_varchar2] = ACTIONS(27),
    [sym_kw_nvarchar2] = ACTIONS(29),
    [sym_kw_nchar] = ACTIONS(31),
    [sym_kw_int] = ACTIONS(33),
    [sym_kw_smallint] = ACTIONS(17),
    [sym_kw_real] = ACTIONS(17),
    [sym_kw_binary_float] = ACTIONS(17),
    [sym_kw_binary_double] = ACTIONS(17),
    [sym_kw_simple_float] = ACTIONS(17),
    [sym_kw_simple_double] = ACTIONS(17),
    [sym_kw_binary_integer] = ACTIONS(17),
    [sym_kw_pls_integer] = ACTIONS(17),
    [sym_kw_natural] = ACTIONS(33),
    [sym_kw_naturaln] = ACTIONS(17),
    [sym_kw_positive] = ACTIONS(33),
    [sym_kw_positiven] = ACTIONS(17),
    [sym_kw_signtype] = ACTIONS(17),
    [sym_kw_simple_integer] = ACTIONS(17),
    [sym_kw_integer] = ACTIONS(17),
    [sym_kw_number] = ACTIONS(35),
    [sym_kw_float] = ACTIONS(37),
    [sym_kw_long] = ACTIONS(39),
    [sym_kw_raw] = ACTIONS(41),
    [sym_kw_date] = ACTIONS(17),
    [sym_kw_timestamp] = ACTIONS(43),
    [sym_kw_interval] = ACTIONS(45),
    [sym_kw_blob] = ACTIONS(17),
    [sym_kw_clob] = ACTIONS(17),
    [sym_kw_nclob] = ACTIONS(17),
    [sym_kw_bfile] = ACTIONS(17),
    [sym_kw_rowid] = ACTIONS(17),
    [sym_kw_urowid] = ACTIONS(47),
    [sym_kw_boolean] = ACTIONS(17),
    [sym_kw_character] = ACTIONS(49),
    [sym_kw_numeric] = ACTIONS(51),
    [sym_kw_decimal] = ACTIONS(51),
    [sym_kw_dec] = ACTIONS(53),
    [sym_kw_double] = ACTIONS(55),
    [sym_kw_sys] = ACTIONS(57),
    [sym_kw_xmltype] = ACTIONS(17),
    [sym_kw_uritype] = ACTIONS(17),
    [sym_kw_sdo_geometry] = ACTIONS(17),
    [sym_kw_sdo_topo_geometry] = ACTIONS(17),
    [sym_kw_sdo_georaster] = ACTIONS(17),
    [sym_kw_json_element_t] = ACTIONS(17),
    [sym_kw_json_array_t] = ACTIONS(17),
    [sym_kw_json_object_t] = ACTIONS(17),
    [sym_kw_json_scalar_t] = ACTIONS(17),
    [sym_kw_json_key_list] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(73), 8,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_in,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(75), 48,
      anon_sym_DQUOTE,
      sym_kw_exception,
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
  [65] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(77), 8,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_in,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(79), 48,
      anon_sym_DQUOTE,
      sym_kw_exception,
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
  [130] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(73), 8,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_in,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(75), 47,
      anon_sym_DQUOTE,
      sym_kw_exception,
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
  [194] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(77), 8,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_in,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(79), 47,
      anon_sym_DQUOTE,
      sym_kw_exception,
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
  [258] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(73), 7,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(75), 48,
      anon_sym_DQUOTE,
      sym_kw_exception,
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
      sym_kw_constant,
      sym_kw_json_element_t,
      sym_kw_json_array_t,
      sym_kw_json_object_t,
      sym_kw_json_scalar_t,
      sym_kw_json_key_list,
  [322] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(77), 7,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(79), 48,
      anon_sym_DQUOTE,
      sym_kw_exception,
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
      sym_kw_constant,
      sym_kw_json_element_t,
      sym_kw_json_array_t,
      sym_kw_json_object_t,
      sym_kw_json_scalar_t,
      sym_kw_json_key_list,
  [386] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(77), 7,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(79), 47,
      anon_sym_DQUOTE,
      sym_kw_exception,
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
  [449] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(73), 7,
      sym__unquoted_identifier,
      sym_kw_char,
      sym_kw_varchar,
      sym_kw_int,
      sym_kw_natural,
      sym_kw_positive,
      sym_kw_dec,
    ACTIONS(75), 47,
      anon_sym_DQUOTE,
      sym_kw_exception,
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
  [512] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(73), 7,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_COLON,
    ACTIONS(75), 44,
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
      sym_kw_range,
      sym_kw_return,
      sym_kw_character,
  [572] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(77), 7,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_COLON,
    ACTIONS(79), 44,
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
      sym_kw_range,
      sym_kw_return,
      sym_kw_character,
  [632] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(97), 1,
      sym_kw_not,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(267), 1,
      sym_expression,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(244), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(95), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(54), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [735] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(107), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    STATE(664), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(439), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(105), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(55), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [838] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(97), 1,
      sym_kw_not,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(428), 1,
      sym_expression,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(244), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(95), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(54), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [941] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(111), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(485), 1,
      sym_expression,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(293), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(109), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(67), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1044] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(113), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(328), 1,
      sym_expression,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(285), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(105), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(55), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1147] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(107), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    STATE(668), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(439), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(105), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(55), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1250] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(97), 1,
      sym_kw_not,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(328), 1,
      sym_expression,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(244), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(95), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(54), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1353] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(107), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    STATE(667), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(439), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(105), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(55), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1456] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(117), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(326), 1,
      sym_expression,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(378), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(115), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(66), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1559] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(117), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(328), 1,
      sym_expression,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(378), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(115), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(66), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1662] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(121), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(485), 1,
      sym_expression,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(365), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(119), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(70), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1765] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(97), 1,
      sym_kw_not,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(268), 1,
      sym_expression,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(244), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(95), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(54), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1868] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(107), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    STATE(625), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(439), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(105), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(55), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [1971] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(97), 1,
      sym_kw_not,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(420), 1,
      sym_expression,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(244), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(95), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(54), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2074] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(111), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    STATE(618), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(293), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(109), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(67), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2177] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(97), 1,
      sym_kw_not,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(329), 1,
      sym_expression,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(244), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(95), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(54), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2280] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(107), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    STATE(663), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(439), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(105), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(55), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2383] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(97), 1,
      sym_kw_not,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(326), 1,
      sym_expression,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(244), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(95), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(54), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2486] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(111), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(511), 1,
      sym_expression,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(293), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(105), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(55), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2589] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(111), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    STATE(635), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(293), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(109), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(67), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2692] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(111), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    STATE(591), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(293), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(105), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(55), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2795] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(107), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    STATE(602), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(439), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(105), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(55), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [2898] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(113), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(326), 1,
      sym_expression,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(285), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(105), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(55), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3001] = 30,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(125), 1,
      sym_kw_not,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    STATE(582), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(387), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(123), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(76), 4,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
    STATE(106), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
  [3106] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(97), 1,
      sym_kw_not,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(266), 1,
      sym_expression,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(244), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(95), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(54), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3209] = 29,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(97), 1,
      sym_kw_not,
    ACTIONS(99), 1,
      sym_kw_case,
    ACTIONS(103), 1,
      sym_kw_updating,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(250), 1,
      sym_expression,
    STATE(291), 1,
      sym__expression_base_operator_not_boolean,
    STATE(292), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(244), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(95), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(289), 4,
      sym__expression_element,
      sym__expression_base_case,
      sym_expression_base_case_search,
      sym_expression_base_case_simple,
    STATE(54), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3312] = 19,
    ACTIONS(137), 1,
      sym_kw_not,
    ACTIONS(139), 1,
      sym_kw_is,
    ACTIONS(141), 1,
      sym_kw_between,
    ACTIONS(143), 1,
      sym_kw_in,
    ACTIONS(145), 1,
      sym_kw_like,
    STATE(94), 1,
      sym_expression_operator_not_boolean,
    STATE(96), 1,
      sym_expression_operator_boolean,
    STATE(142), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    STATE(335), 1,
      sym__expression_base_boolean_operator,
    STATE(337), 1,
      sym__expression_base_boolean_in,
    STATE(338), 1,
      sym__expression_base_boolean_like,
    STATE(339), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(133), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    STATE(333), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(131), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(127), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [3392] = 19,
    ACTIONS(139), 1,
      sym_kw_is,
    ACTIONS(145), 1,
      sym_kw_like,
    ACTIONS(147), 1,
      sym_kw_not,
    ACTIONS(149), 1,
      sym_kw_between,
    ACTIONS(151), 1,
      sym_kw_in,
    STATE(94), 1,
      sym_expression_operator_not_boolean,
    STATE(96), 1,
      sym_expression_operator_boolean,
    STATE(142), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    STATE(335), 1,
      sym__expression_base_boolean_operator,
    STATE(337), 1,
      sym__expression_base_boolean_in,
    STATE(338), 1,
      sym__expression_base_boolean_like,
    STATE(339), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(133), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    STATE(333), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(127), 7,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(131), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3470] = 25,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(97), 1,
      sym_kw_not,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(290), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(244), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(155), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(112), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3558] = 25,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(113), 1,
      sym_kw_not,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(290), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(285), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(157), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(115), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3646] = 25,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(117), 1,
      sym_kw_not,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(290), 1,
      sym__expression_base_boolean,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(378), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(159), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(113), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3734] = 23,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(389), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(159), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(113), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3816] = 23,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(245), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(155), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(112), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3898] = 23,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(362), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(155), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(112), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [3980] = 23,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(386), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(159), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(113), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [4062] = 23,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(429), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(157), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(115), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [4144] = 23,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(308), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(157), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(115), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [4226] = 23,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(103), 1,
      sym_kw_updating,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(101), 2,
      sym_kw_inserting,
      sym_kw_deleting,
    STATE(287), 2,
      sym__expression_base_boolean_elements,
      sym_conditional_predicate,
    ACTIONS(157), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(115), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [4308] = 19,
    ACTIONS(139), 1,
      sym_kw_is,
    ACTIONS(145), 1,
      sym_kw_like,
    ACTIONS(161), 1,
      sym_kw_not,
    ACTIONS(163), 1,
      sym_kw_between,
    ACTIONS(165), 1,
      sym_kw_in,
    STATE(94), 1,
      sym_expression_operator_not_boolean,
    STATE(96), 1,
      sym_expression_operator_boolean,
    STATE(142), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    STATE(335), 1,
      sym__expression_base_boolean_operator,
    STATE(337), 1,
      sym__expression_base_boolean_in,
    STATE(338), 1,
      sym__expression_base_boolean_like,
    STATE(339), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 3,
      anon_sym_RPAREN,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(129), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(133), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    STATE(333), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(131), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4382] = 19,
    ACTIONS(139), 1,
      sym_kw_is,
    ACTIONS(145), 1,
      sym_kw_like,
    ACTIONS(147), 1,
      sym_kw_not,
    ACTIONS(149), 1,
      sym_kw_between,
    ACTIONS(151), 1,
      sym_kw_in,
    STATE(95), 1,
      sym_expression_operator_not_boolean,
    STATE(96), 1,
      sym_expression_operator_boolean,
    STATE(225), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    STATE(335), 1,
      sym__expression_base_boolean_operator,
    STATE(337), 1,
      sym__expression_base_boolean_in,
    STATE(338), 1,
      sym__expression_base_boolean_like,
    STATE(339), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(127), 2,
      anon_sym_SEMI,
      sym_kw_end,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(133), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    STATE(333), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(131), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4455] = 5,
    ACTIONS(171), 1,
      anon_sym_AT,
    STATE(83), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(169), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(167), 25,
      anon_sym_SEMI,
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
  [4500] = 4,
    ACTIONS(177), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(175), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(173), 26,
      anon_sym_SEMI,
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
  [4543] = 19,
    ACTIONS(137), 1,
      sym_kw_not,
    ACTIONS(139), 1,
      sym_kw_is,
    ACTIONS(141), 1,
      sym_kw_between,
    ACTIONS(143), 1,
      sym_kw_in,
    ACTIONS(145), 1,
      sym_kw_like,
    STATE(95), 1,
      sym_expression_operator_not_boolean,
    STATE(96), 1,
      sym_expression_operator_boolean,
    STATE(225), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    STATE(335), 1,
      sym__expression_base_boolean_operator,
    STATE(337), 1,
      sym__expression_base_boolean_in,
    STATE(338), 1,
      sym__expression_base_boolean_like,
    STATE(339), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(133), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    STATE(333), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(131), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4616] = 5,
    ACTIONS(171), 1,
      anon_sym_AT,
    STATE(82), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(181), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(179), 25,
      anon_sym_SEMI,
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
  [4661] = 5,
    ACTIONS(171), 1,
      anon_sym_AT,
    STATE(86), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(185), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(183), 25,
      anon_sym_SEMI,
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
  [4706] = 5,
    ACTIONS(171), 1,
      anon_sym_AT,
    STATE(85), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(189), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(187), 25,
      anon_sym_SEMI,
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
    ACTIONS(193), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(191), 27,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
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
      sym_kw_range,
      sym_kw_character,
  [4792] = 4,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(175), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(173), 26,
      anon_sym_SEMI,
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
  [4835] = 19,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      sym_kw_is,
    ACTIONS(145), 1,
      sym_kw_like,
    ACTIONS(161), 1,
      sym_kw_not,
    ACTIONS(163), 1,
      sym_kw_between,
    ACTIONS(165), 1,
      sym_kw_in,
    STATE(95), 1,
      sym_expression_operator_not_boolean,
    STATE(96), 1,
      sym_expression_operator_boolean,
    STATE(225), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    STATE(335), 1,
      sym__expression_base_boolean_operator,
    STATE(337), 1,
      sym__expression_base_boolean_in,
    STATE(338), 1,
      sym__expression_base_boolean_like,
    STATE(339), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(133), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    STATE(333), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(131), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4907] = 5,
    ACTIONS(201), 1,
      anon_sym_COLON,
    STATE(87), 1,
      sym_indicator_variable,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(199), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(197), 24,
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
  [4951] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(205), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(203), 26,
      anon_sym_SEMI,
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
  [4991] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(209), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(207), 26,
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
      sym_kw_range,
      sym_kw_character,
  [5031] = 5,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(213), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(211), 24,
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
  [5075] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(219), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(217), 25,
      anon_sym_SEMI,
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
  [5114] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(223), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(221), 25,
      anon_sym_SEMI,
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
  [5153] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(225), 25,
      anon_sym_SEMI,
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
  [5192] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(231), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(229), 25,
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
  [5231] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(235), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(233), 25,
      anon_sym_SEMI,
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
  [5270] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(239), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(237), 25,
      anon_sym_SEMI,
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
  [5309] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(243), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(241), 24,
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
  [5347] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(247), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(245), 24,
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
  [5385] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(251), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(249), 24,
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
  [5423] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(255), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(253), 24,
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
  [5461] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(259), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(257), 24,
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
  [5499] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(263), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(261), 24,
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
  [5537] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(267), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(265), 24,
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
  [5575] = 20,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(269), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(171), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [5646] = 20,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(151), 1,
      sym__referenced_element_parent,
    STATE(163), 1,
      sym__referenced_element_name,
    STATE(164), 1,
      sym_identifier,
    STATE(373), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(269), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(171), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [5717] = 20,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_PLUS,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(77), 1,
      sym_host_variable,
    STATE(80), 1,
      sym__referenced_element,
    STATE(374), 1,
      sym__schema,
    STATE(516), 1,
      sym__sign_pos_neg,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(271), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(316), 8,
      sym__expression_base_elements,
      sym_ref_call,
      sym_placeholder,
      sym_literal_list,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [5788] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(422), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [5842] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(404), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [5896] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(393), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [5950] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(390), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6004] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(391), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6058] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(392), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6112] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(407), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6166] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(395), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6220] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(394), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6274] = 5,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    STATE(523), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(291), 5,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
    ACTIONS(293), 16,
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
  [6310] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(398), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6364] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(406), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6418] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(426), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6472] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(405), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6526] = 14,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(285), 1,
      sym_kw_end,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    STATE(408), 1,
      sym_end_obj,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6580] = 14,
    ACTIONS(137), 1,
      sym_kw_not,
    ACTIONS(139), 1,
      sym_kw_is,
    ACTIONS(141), 1,
      sym_kw_between,
    ACTIONS(143), 1,
      sym_kw_in,
    ACTIONS(145), 1,
      sym_kw_like,
    STATE(96), 1,
      sym_expression_operator_boolean,
    STATE(335), 1,
      sym__expression_base_boolean_operator,
    STATE(337), 1,
      sym__expression_base_boolean_in,
    STATE(338), 1,
      sym__expression_base_boolean_like,
    STATE(339), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(333), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(131), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6633] = 14,
    ACTIONS(139), 1,
      sym_kw_is,
    ACTIONS(145), 1,
      sym_kw_like,
    ACTIONS(161), 1,
      sym_kw_not,
    ACTIONS(163), 1,
      sym_kw_between,
    ACTIONS(165), 1,
      sym_kw_in,
    STATE(96), 1,
      sym_expression_operator_boolean,
    STATE(335), 1,
      sym__expression_base_boolean_operator,
    STATE(337), 1,
      sym__expression_base_boolean_in,
    STATE(338), 1,
      sym__expression_base_boolean_like,
    STATE(339), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(333), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(131), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6686] = 13,
    ACTIONS(297), 1,
      sym__unquoted_identifier,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_kw_function,
    ACTIONS(306), 1,
      sym_kw_procedure,
    ACTIONS(309), 1,
      sym_kw_type,
    ACTIONS(312), 1,
      sym_kw_subtype,
    ACTIONS(315), 1,
      sym_kw_end,
    ACTIONS(317), 1,
      sym_kw_cursor,
    ACTIONS(320), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(114), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6737] = 14,
    ACTIONS(139), 1,
      sym_kw_is,
    ACTIONS(145), 1,
      sym_kw_like,
    ACTIONS(147), 1,
      sym_kw_not,
    ACTIONS(149), 1,
      sym_kw_between,
    ACTIONS(151), 1,
      sym_kw_in,
    STATE(96), 1,
      sym_expression_operator_boolean,
    STATE(335), 1,
      sym__expression_base_boolean_operator,
    STATE(337), 1,
      sym__expression_base_boolean_in,
    STATE(338), 1,
      sym__expression_base_boolean_like,
    STATE(339), 1,
      sym__expression_base_boolean_between,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(333), 3,
      sym__is_null_or_is_not_null,
      sym_is_null,
      sym_is_not_null,
    ACTIONS(131), 7,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6790] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(205), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      sym__unquoted_identifier,
    ACTIONS(203), 18,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [6821] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(111), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6869] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(97), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6917] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(101), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [6965] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(99), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [7013] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(104), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [7061] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(219), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      sym__unquoted_identifier,
    ACTIONS(217), 17,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [7091] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(98), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [7139] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(109), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [7187] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(105), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [7235] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(102), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [7283] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(100), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [7331] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(110), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [7379] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(108), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [7427] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(235), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      sym__unquoted_identifier,
    ACTIONS(233), 17,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [7457] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(227), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      sym__unquoted_identifier,
    ACTIONS(225), 17,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [7487] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(103), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [7535] = 12,
    ACTIONS(273), 1,
      sym__unquoted_identifier,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_kw_function,
    ACTIONS(279), 1,
      sym_kw_procedure,
    ACTIONS(281), 1,
      sym_kw_type,
    ACTIONS(283), 1,
      sym_kw_subtype,
    ACTIONS(287), 1,
      sym_kw_cursor,
    ACTIONS(289), 1,
      sym_kw_return,
    STATE(3), 1,
      sym_identifier,
    STATE(23), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(107), 11,
      sym__package_item_list,
      sym_procedure_declaration,
      sym_function_declaration,
      sym_item_declaration,
      sym_cursor_declaration,
      sym__type_definition,
      sym_type_definition_collection,
      sym_type_definition_record,
      sym_type_definition_ref_cursor_return,
      sym_type_definition_sub,
      aux_sym_create_package_repeat1,
  [7583] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(239), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      sym__unquoted_identifier,
    ACTIONS(237), 17,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [7613] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(223), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
      sym__unquoted_identifier,
    ACTIONS(221), 17,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [7643] = 14,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(507), 1,
      sym_identifier,
    STATE(541), 1,
      sym_parameter_element,
    STATE(562), 1,
      sym_parameter_value,
    STATE(597), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(564), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(323), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(561), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [7693] = 10,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      sym_kw_debug,
    ACTIONS(331), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(351), 1,
      sym_reuse_settings,
    STATE(658), 1,
      sym_identifier,
    STATE(154), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(327), 3,
      sym_kw_package,
      sym_kw_specification,
      sym_kw_body,
    ACTIONS(325), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [7735] = 14,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(507), 1,
      sym_identifier,
    STATE(527), 1,
      sym_parameter_element,
    STATE(562), 1,
      sym_parameter_value,
    STATE(597), 1,
      sym_parameter_name,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(564), 2,
      sym_parameter_element_positional,
      sym_parameter_element_named,
    ACTIONS(323), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(561), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [7785] = 9,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(357), 1,
      sym_reuse_settings,
    STATE(658), 1,
      sym_identifier,
    STATE(157), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(335), 3,
      sym_kw_package,
      sym_kw_specification,
      sym_kw_body,
    ACTIONS(333), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [7824] = 4,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(173), 3,
      anon_sym_AT,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
    ACTIONS(337), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [7852] = 6,
    STATE(94), 1,
      sym_expression_operator_not_boolean,
    STATE(141), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(343), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(346), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    ACTIONS(341), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [7884] = 6,
    STATE(94), 1,
      sym_expression_operator_not_boolean,
    STATE(141), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(129), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(133), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    ACTIONS(349), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [7916] = 15,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      sym_kw_varchar,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(151), 1,
      sym__referenced_element_parent,
    STATE(163), 1,
      sym__referenced_element_name,
    STATE(164), 1,
      sym_identifier,
    STATE(226), 1,
      sym__referenced_datatypes_type,
    STATE(227), 1,
      sym__referenced_datatypes_rowtype,
    STATE(373), 1,
      sym__schema,
    STATE(565), 1,
      sym__referenced_element,
    STATE(649), 1,
      sym__referenced_datatypes,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(351), 2,
      sym_kw_string,
      sym_kw_varchar2,
    ACTIONS(355), 3,
      sym_kw_binary_integer,
      sym_kw_pls_integer,
      sym_kw_long,
  [7966] = 15,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      sym_kw_varchar,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(151), 1,
      sym__referenced_element_parent,
    STATE(163), 1,
      sym__referenced_element_name,
    STATE(164), 1,
      sym_identifier,
    STATE(226), 1,
      sym__referenced_datatypes_type,
    STATE(227), 1,
      sym__referenced_datatypes_rowtype,
    STATE(373), 1,
      sym__schema,
    STATE(565), 1,
      sym__referenced_element,
    STATE(653), 1,
      sym__referenced_datatypes,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(357), 2,
      sym_kw_string,
      sym_kw_varchar2,
    ACTIONS(361), 3,
      sym_kw_binary_integer,
      sym_kw_pls_integer,
      sym_kw_long,
  [8016] = 5,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      sym_kw_varying,
    STATE(197), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(363), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [8045] = 11,
    ACTIONS(369), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      sym_kw_default,
    ACTIONS(375), 1,
      sym_kw_authid,
    ACTIONS(377), 1,
      sym_kw_accessible,
    STATE(119), 1,
      sym__is_as,
    STATE(233), 1,
      sym_sharing_clause,
    STATE(521), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(371), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(379), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(273), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [8086] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(381), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_of,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_with,
      sym_kw_to,
      sym_kw_character,
  [8109] = 11,
    ACTIONS(369), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      sym_kw_default,
    ACTIONS(375), 1,
      sym_kw_authid,
    ACTIONS(377), 1,
      sym_kw_accessible,
    STATE(123), 1,
      sym__is_as,
    STATE(238), 1,
      sym_sharing_clause,
    STATE(504), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(371), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(383), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(273), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [8150] = 5,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_kw_with,
    STATE(179), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(385), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [8179] = 5,
    ACTIONS(367), 1,
      sym_kw_varying,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(391), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [8208] = 5,
    ACTIONS(393), 1,
      anon_sym_AT,
    STATE(134), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(185), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(183), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
  [8236] = 4,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(395), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [8262] = 4,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(204), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(397), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [8288] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(357), 1,
      sym_reuse_settings,
    STATE(658), 1,
      sym_identifier,
    STATE(180), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(333), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [8322] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(350), 1,
      sym_reuse_settings,
    STATE(658), 1,
      sym_identifier,
    STATE(180), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(399), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [8356] = 10,
    ACTIONS(373), 1,
      sym_kw_default,
    ACTIONS(375), 1,
      sym_kw_authid,
    ACTIONS(377), 1,
      sym_kw_accessible,
    STATE(132), 1,
      sym__is_as,
    STATE(231), 1,
      sym_sharing_clause,
    STATE(519), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(371), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(401), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(273), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [8394] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(355), 1,
      sym_reuse_settings,
    STATE(658), 1,
      sym_identifier,
    STATE(180), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(403), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [8428] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(355), 1,
      sym_reuse_settings,
    STATE(658), 1,
      sym_identifier,
    STATE(155), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(403), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [8462] = 10,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(534), 1,
      sym_parameter_value,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(323), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(561), 5,
      sym_identifier,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [8500] = 12,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(151), 1,
      sym__referenced_element_parent,
    STATE(163), 1,
      sym__referenced_element_name,
    STATE(164), 1,
      sym_identifier,
    STATE(343), 1,
      sym__unit_kind,
    STATE(373), 1,
      sym__schema,
    STATE(528), 1,
      sym_accessor,
    STATE(550), 1,
      sym__referenced_element,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(405), 5,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [8542] = 4,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(223), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(407), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [8568] = 10,
    ACTIONS(373), 1,
      sym_kw_default,
    ACTIONS(375), 1,
      sym_kw_authid,
    ACTIONS(377), 1,
      sym_kw_accessible,
    STATE(118), 1,
      sym__is_as,
    STATE(229), 1,
      sym_sharing_clause,
    STATE(491), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(371), 2,
      sym_kw_metadata,
      sym_kw_none,
    ACTIONS(409), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(273), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [8606] = 5,
    ACTIONS(393), 1,
      anon_sym_AT,
    STATE(135), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(181), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(179), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
  [8634] = 4,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(175), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(173), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
  [8660] = 5,
    ACTIONS(393), 1,
      anon_sym_AT,
    STATE(130), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(189), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(187), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
  [8688] = 5,
    ACTIONS(393), 1,
      anon_sym_AT,
    STATE(131), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(169), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(167), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
  [8716] = 4,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(211), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(411), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [8742] = 7,
    ACTIONS(9), 1,
      sym_kw_create,
    ACTIONS(11), 1,
      sym_kw_alter,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    STATE(451), 1,
      sym_create_obj,
    ACTIONS(415), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(173), 3,
      sym__element,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
    STATE(447), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [8774] = 4,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(202), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(417), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [8800] = 4,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(419), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [8826] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(425), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(423), 12,
      anon_sym_SEMI,
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
  [8850] = 8,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      sym_kw_reuse,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(357), 1,
      sym_reuse_settings,
    STATE(658), 1,
      sym_identifier,
    STATE(157), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(333), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [8884] = 7,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(432), 1,
      sym_kw_create,
    ACTIONS(435), 1,
      sym_kw_alter,
    STATE(451), 1,
      sym_create_obj,
    ACTIONS(429), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(173), 3,
      sym__element,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
    STATE(447), 8,
      sym__ddl_statement,
      sym__create_statement,
      sym_create_package,
      sym__alter_statement,
      sym_alter_package,
      sym_alter_procedure,
      sym_alter_function,
      sym_alter_library,
  [8916] = 4,
    ACTIONS(438), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(175), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(173), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
  [8942] = 4,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(201), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(440), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [8968] = 4,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    STATE(213), 1,
      sym__size_precision_scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(442), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [8994] = 12,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(151), 1,
      sym__referenced_element_parent,
    STATE(163), 1,
      sym__referenced_element_name,
    STATE(164), 1,
      sym_identifier,
    STATE(343), 1,
      sym__unit_kind,
    STATE(373), 1,
      sym__schema,
    STATE(550), 1,
      sym__referenced_element,
    STATE(559), 1,
      sym_accessor,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(405), 5,
      sym_kw_package,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_trigger,
      sym_kw_type,
  [9036] = 3,
    ACTIONS(446), 1,
      sym_kw_raw,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(444), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9059] = 3,
    ACTIONS(450), 1,
      sym_kw_with,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(448), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9082] = 6,
    ACTIONS(454), 1,
      sym__unquoted_identifier,
    ACTIONS(457), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(658), 1,
      sym_identifier,
    STATE(180), 2,
      sym_compiler_parameter_clause,
      aux_sym_compile_clause_repeat1,
    ACTIONS(452), 10,
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
  [9111] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(460), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9131] = 3,
    ACTIONS(73), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(75), 12,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [9153] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(462), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9173] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(464), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9193] = 5,
    ACTIONS(181), 1,
      sym__unquoted_identifier,
    ACTIONS(466), 1,
      anon_sym_AT,
    STATE(135), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(179), 10,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [9219] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(468), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9239] = 5,
    ACTIONS(189), 1,
      sym__unquoted_identifier,
    ACTIONS(466), 1,
      anon_sym_AT,
    STATE(130), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(187), 10,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [9265] = 5,
    ACTIONS(169), 1,
      sym__unquoted_identifier,
    ACTIONS(466), 1,
      anon_sym_AT,
    STATE(131), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(167), 10,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [9291] = 4,
    ACTIONS(175), 1,
      sym__unquoted_identifier,
    ACTIONS(470), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(173), 11,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [9315] = 5,
    ACTIONS(185), 1,
      sym__unquoted_identifier,
    ACTIONS(466), 1,
      anon_sym_AT,
    STATE(134), 1,
      sym__remote,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(183), 10,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [9341] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(472), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9361] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(474), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9381] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(476), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9401] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(478), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9421] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(480), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9441] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(482), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9461] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(484), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9481] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(482), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9501] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(486), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9521] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(488), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9541] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(490), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9561] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(492), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9581] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(494), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9601] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(407), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9621] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(496), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9641] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(498), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9661] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(500), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9681] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(502), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9701] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(504), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9721] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(506), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9741] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(508), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9761] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(510), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9781] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(512), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9801] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(514), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9821] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(516), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9841] = 3,
    ACTIONS(77), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(79), 12,
      anon_sym_DOT,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [9863] = 4,
    ACTIONS(175), 1,
      sym__unquoted_identifier,
    ACTIONS(518), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(173), 11,
      anon_sym_AT,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [9887] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(520), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9907] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(522), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9927] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(524), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9947] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(526), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9967] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(528), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [9987] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(530), 13,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_not,
      sym_kw_default,
      sym_kw_index,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
      sym_kw_range,
      sym_kw_character,
  [10007] = 3,
    ACTIONS(532), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(522), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [10028] = 6,
    STATE(95), 1,
      sym_expression_operator_not_boolean,
    STATE(237), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(129), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(133), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    ACTIONS(349), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_end,
  [10055] = 3,
    ACTIONS(534), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(482), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [10076] = 3,
    ACTIONS(534), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(482), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [10097] = 13,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(151), 1,
      sym__referenced_element_parent,
    STATE(163), 1,
      sym__referenced_element_name,
    STATE(226), 1,
      sym__referenced_datatypes_type,
    STATE(227), 1,
      sym__referenced_datatypes_rowtype,
    STATE(373), 1,
      sym__schema,
    STATE(427), 1,
      sym_identifier,
    STATE(565), 1,
      sym__referenced_element,
    STATE(593), 1,
      sym__cursor_declaration_return_datatype,
    STATE(620), 1,
      sym__referenced_datatypes,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10138] = 8,
    ACTIONS(373), 1,
      sym_kw_default,
    ACTIONS(375), 1,
      sym_kw_authid,
    ACTIONS(377), 1,
      sym_kw_accessible,
    STATE(133), 1,
      sym__is_as,
    STATE(512), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(538), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(273), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [10169] = 13,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(151), 1,
      sym__referenced_element_parent,
    STATE(163), 1,
      sym__referenced_element_name,
    STATE(226), 1,
      sym__referenced_datatypes_type,
    STATE(227), 1,
      sym__referenced_datatypes_rowtype,
    STATE(373), 1,
      sym__schema,
    STATE(427), 1,
      sym_identifier,
    STATE(565), 1,
      sym__referenced_element,
    STATE(620), 1,
      sym__referenced_datatypes,
    STATE(621), 1,
      sym__cursor_declaration_return_datatype,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10210] = 8,
    ACTIONS(373), 1,
      sym_kw_default,
    ACTIONS(375), 1,
      sym_kw_authid,
    ACTIONS(377), 1,
      sym_kw_accessible,
    STATE(126), 1,
      sym__is_as,
    STATE(487), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(540), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(273), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [10241] = 3,
    ACTIONS(542), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(524), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [10262] = 8,
    ACTIONS(373), 1,
      sym_kw_default,
    ACTIONS(375), 1,
      sym_kw_authid,
    ACTIONS(377), 1,
      sym_kw_accessible,
    STATE(129), 1,
      sym__is_as,
    STATE(525), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(544), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(273), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [10293] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(548), 3,
      anon_sym_DASH,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(546), 9,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [10314] = 9,
    ACTIONS(373), 1,
      sym_kw_default,
    ACTIONS(375), 1,
      sym_kw_authid,
    ACTIONS(377), 1,
      sym_kw_accessible,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    STATE(263), 1,
      sym_parameter_declaration,
    STATE(644), 1,
      sym_procedure_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(330), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [10347] = 3,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(556), 3,
      anon_sym_DASH,
      sym__unquoted_identifier,
      sym__number,
    ACTIONS(554), 9,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      sym__single_quote_string,
      sym__float,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
  [10368] = 6,
    STATE(95), 1,
      sym_expression_operator_not_boolean,
    STATE(237), 1,
      aux_sym__expression_base_operator_not_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(343), 3,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(346), 3,
      anon_sym_PLUS,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
    ACTIONS(341), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_end,
  [10395] = 8,
    ACTIONS(373), 1,
      sym_kw_default,
    ACTIONS(375), 1,
      sym_kw_authid,
    ACTIONS(377), 1,
      sym_kw_accessible,
    STATE(120), 1,
      sym__is_as,
    STATE(497), 1,
      sym_package_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(558), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(273), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [10426] = 5,
    ACTIONS(369), 1,
      anon_sym_DOT,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(278), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(560), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10450] = 5,
    STATE(240), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(568), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(566), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
  [10474] = 12,
    ACTIONS(571), 1,
      sym__unquoted_identifier,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym__referenced_element_name,
    STATE(190), 1,
      sym__referenced_element_parent,
    STATE(216), 1,
      sym__quoted_identifier,
    STATE(217), 1,
      sym_identifier,
    STATE(226), 1,
      sym__referenced_datatypes_type,
    STATE(227), 1,
      sym__referenced_datatypes_rowtype,
    STATE(242), 1,
      sym__referenced_element,
    STATE(340), 1,
      sym__referenced_datatypes,
    STATE(369), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [10512] = 5,
    ACTIONS(575), 1,
      sym__unquoted_identifier,
    ACTIONS(579), 1,
      sym_kw_datatype_type,
    ACTIONS(581), 1,
      sym_kw_datatype_rowtype,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(577), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [10536] = 4,
    STATE(240), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(583), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [10558] = 4,
    STATE(247), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(585), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [10580] = 4,
    STATE(243), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(587), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [10602] = 5,
    ACTIONS(369), 1,
      anon_sym_DOT,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(256), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(589), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10626] = 4,
    STATE(240), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(591), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [10648] = 5,
    ACTIONS(369), 1,
      anon_sym_DOT,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(259), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(593), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10672] = 5,
    ACTIONS(369), 1,
      anon_sym_DOT,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(252), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(595), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10696] = 5,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(597), 7,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [10719] = 2,
    ACTIONS(607), 1,
      sym__unquoted_identifier,
    ACTIONS(605), 11,
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
  [10736] = 4,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(261), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(609), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10757] = 4,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(269), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(611), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10778] = 5,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(613), 7,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [10801] = 2,
    ACTIONS(209), 1,
      sym__unquoted_identifier,
    ACTIONS(207), 11,
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
  [10818] = 4,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(261), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(619), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10839] = 5,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(597), 7,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [10862] = 4,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(271), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(623), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10883] = 4,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(261), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(625), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10904] = 5,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(597), 7,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [10927] = 4,
    ACTIONS(629), 1,
      sym_kw_compile,
    ACTIONS(632), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(261), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(627), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10948] = 4,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(261), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(635), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [10969] = 7,
    ACTIONS(373), 1,
      sym_kw_default,
    ACTIONS(375), 1,
      sym_kw_authid,
    ACTIONS(377), 1,
      sym_kw_accessible,
    ACTIONS(637), 1,
      anon_sym_SEMI,
    STATE(627), 1,
      sym_procedure_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(330), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [10996] = 5,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(613), 7,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11019] = 6,
    ACTIONS(645), 1,
      sym_kw_default,
    ACTIONS(648), 1,
      sym_kw_authid,
    ACTIONS(651), 1,
      sym_kw_accessible,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(654), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(265), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [11044] = 5,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(656), 7,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11067] = 5,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(656), 7,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11090] = 5,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(597), 7,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11113] = 4,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(261), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(666), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [11134] = 6,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(668), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(552), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [11159] = 4,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(261), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(670), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [11180] = 2,
    ACTIONS(193), 1,
      sym__unquoted_identifier,
    ACTIONS(191), 11,
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
  [11197] = 6,
    ACTIONS(373), 1,
      sym_kw_default,
    ACTIONS(375), 1,
      sym_kw_authid,
    ACTIONS(377), 1,
      sym_kw_accessible,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(672), 2,
      sym_kw_is,
      sym_kw_as,
    STATE(265), 5,
      sym__package_property_element,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      aux_sym_package_properties_repeat1,
  [11222] = 6,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(674), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(566), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [11247] = 6,
    ACTIONS(676), 1,
      sym__single_quote_string,
    ACTIONS(678), 1,
      sym__number,
    ACTIONS(680), 1,
      sym__float,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(682), 3,
      sym_kw_true,
      sym_kw_false,
      sym_kw_null,
    STATE(251), 4,
      sym__literal,
      sym__literal_boolean,
      sym_literal_number,
      sym_literal_string,
  [11272] = 4,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(684), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11293] = 4,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(261), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(689), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [11314] = 4,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(261), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(691), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [11335] = 4,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(262), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(693), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [11356] = 11,
    ACTIONS(13), 1,
      sym__unquoted_identifier,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(695), 1,
      sym_kw_when,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(71), 1,
      sym__referenced_element_name,
    STATE(72), 1,
      sym__referenced_element_parent,
    STATE(374), 1,
      sym__schema,
    STATE(477), 1,
      aux_sym_expression_base_case_search_repeat1,
    STATE(568), 1,
      sym__referenced_element,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [11391] = 4,
    ACTIONS(562), 1,
      sym_kw_compile,
    ACTIONS(564), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
    STATE(277), 3,
      sym_compile_clause,
      sym_editionable_noneditionable,
      aux_sym_alter_package_repeat1,
    ACTIONS(697), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [11412] = 3,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(699), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11431] = 3,
    ACTIONS(703), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(705), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [11449] = 3,
    ACTIONS(707), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(709), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [11467] = 4,
    STATE(295), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(585), 7,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11487] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(699), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11503] = 4,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(307), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(587), 7,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11523] = 3,
    ACTIONS(711), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(713), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [11541] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(715), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11557] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(717), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11573] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(127), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11589] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(127), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11605] = 5,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(302), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(719), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(585), 5,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
  [11627] = 5,
    STATE(294), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(721), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(566), 5,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
  [11649] = 4,
    STATE(294), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(591), 7,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11669] = 3,
    ACTIONS(724), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(726), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [11687] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(728), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11703] = 3,
    ACTIONS(730), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(732), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [11721] = 6,
    ACTIONS(734), 1,
      anon_sym_SEMI,
    ACTIONS(736), 1,
      sym_kw_default,
    ACTIONS(739), 1,
      sym_kw_authid,
    ACTIONS(742), 1,
      sym_kw_accessible,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(299), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [11745] = 3,
    ACTIONS(745), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(747), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [11763] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(749), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11779] = 5,
    STATE(294), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(719), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(591), 5,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
  [11801] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(751), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11817] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(753), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11833] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(613), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11849] = 3,
    ACTIONS(755), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(757), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [11867] = 4,
    STATE(294), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(583), 7,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11887] = 5,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(320), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(719), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(587), 5,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
  [11909] = 3,
    ACTIONS(759), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(761), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [11927] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(763), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [11943] = 3,
    ACTIONS(765), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(767), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [11961] = 3,
    ACTIONS(769), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(771), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [11979] = 3,
    ACTIONS(773), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(775), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [11997] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(777), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12013] = 3,
    ACTIONS(779), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(781), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [12031] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(783), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12047] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(785), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12063] = 3,
    ACTIONS(787), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(789), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [12081] = 3,
    ACTIONS(791), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(793), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [12099] = 5,
    STATE(294), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(719), 2,
      sym_kw_or,
      sym_kw_and,
    ACTIONS(583), 5,
      anon_sym_SEMI,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
  [12121] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(795), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12137] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(797), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12153] = 3,
    ACTIONS(799), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(801), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [12171] = 3,
    ACTIONS(803), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(805), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [12189] = 3,
    ACTIONS(807), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(809), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [12207] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(811), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12223] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(813), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12239] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(815), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12255] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(684), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12271] = 6,
    ACTIONS(373), 1,
      sym_kw_default,
    ACTIONS(375), 1,
      sym_kw_authid,
    ACTIONS(377), 1,
      sym_kw_accessible,
    ACTIONS(817), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(299), 5,
      sym_default_collation_clause,
      sym_invoker_rights_clause,
      sym_accessible_by_clause,
      sym__procedure_property_element,
      aux_sym_procedure_properties_repeat1,
  [12295] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(819), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12311] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(821), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12327] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(823), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12343] = 3,
    ACTIONS(825), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(827), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [12361] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(829), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12377] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(597), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12393] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(823), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12409] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(823), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12425] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(823), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_kw_when,
      sym_kw_then,
      sym_kw_else,
      sym_kw_end,
      sym_kw_or,
      sym_kw_and,
  [12441] = 3,
    ACTIONS(575), 1,
      sym__unquoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(577), 8,
      anon_sym_DQUOTE,
      sym_kw_function,
      sym_kw_procedure,
      sym_kw_type,
      sym_kw_subtype,
      sym_kw_end,
      sym_kw_cursor,
      sym_kw_return,
  [12459] = 7,
    ACTIONS(831), 1,
      anon_sym_SEMI,
    ACTIONS(833), 1,
      sym_kw_not,
    ACTIONS(835), 1,
      sym_kw_range,
    ACTIONS(837), 1,
      sym_kw_character,
    STATE(577), 1,
      sym_not_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(359), 3,
      sym_character_set,
      sym_type_range,
      aux_sym_type_definition_sub_repeat1,
  [12484] = 1,
    ACTIONS(79), 10,
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
  [12497] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(151), 1,
      sym__referenced_element_parent,
    STATE(163), 1,
      sym__referenced_element_name,
    STATE(164), 1,
      sym_identifier,
    STATE(373), 1,
      sym__schema,
    STATE(547), 1,
      sym__referenced_element,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12526] = 5,
    ACTIONS(839), 1,
      anon_sym_SEMI,
    STATE(599), 1,
      sym_function_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(353), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(841), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12547] = 1,
    ACTIONS(75), 10,
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
  [12560] = 6,
    ACTIONS(843), 1,
      sym_kw_table,
    ACTIONS(847), 1,
      sym_kw_record,
    ACTIONS(849), 1,
      sym_kw_varying,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(845), 2,
      sym_kw_varray,
      sym_kw_array,
    STATE(622), 3,
      sym_type_definition_varray,
      sym_type_definition_nested_table,
      sym_type_definition_assoc_array,
  [12583] = 7,
    ACTIONS(833), 1,
      sym_kw_not,
    ACTIONS(835), 1,
      sym_kw_range,
    ACTIONS(837), 1,
      sym_kw_character,
    ACTIONS(851), 1,
      anon_sym_SEMI,
    STATE(595), 1,
      sym_not_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(341), 3,
      sym_character_set,
      sym_type_range,
      aux_sym_type_definition_sub_repeat1,
  [12608] = 5,
    ACTIONS(853), 1,
      anon_sym_SEMI,
    STATE(628), 1,
      sym_function_properties,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(353), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(841), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12629] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(79), 7,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_AT,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_not,
      sym_kw_index,
  [12643] = 1,
    ACTIONS(855), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [12655] = 1,
    ACTIONS(333), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [12667] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(75), 7,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_AT,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
      sym_kw_not,
      sym_kw_index,
  [12681] = 4,
    ACTIONS(857), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(358), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(859), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12699] = 6,
    ACTIONS(833), 1,
      sym_kw_not,
    STATE(402), 1,
      sym_not_null,
    STATE(544), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(861), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(863), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
  [12721] = 1,
    ACTIONS(399), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [12733] = 1,
    ACTIONS(865), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [12745] = 1,
    ACTIONS(403), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [12757] = 4,
    ACTIONS(867), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(358), 2,
      sym__function_property_element,
      aux_sym_function_properties_repeat1,
    ACTIONS(869), 4,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [12775] = 5,
    ACTIONS(874), 1,
      sym_kw_range,
    ACTIONS(877), 1,
      sym_kw_character,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(872), 2,
      anon_sym_SEMI,
      sym_kw_not,
    STATE(359), 3,
      sym_character_set,
      sym_type_range,
      aux_sym_type_definition_sub_repeat1,
  [12795] = 1,
    ACTIONS(880), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
      sym_kw_compile,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [12807] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(882), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [12820] = 5,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(375), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(884), 2,
      sym_kw_or,
      sym_kw_and,
  [12839] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(886), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_EQ,
      sym_kw_default,
      sym_kw_index,
  [12852] = 6,
    ACTIONS(833), 1,
      sym_kw_not,
    ACTIONS(888), 1,
      anon_sym_SEMI,
    STATE(476), 1,
      sym_not_null,
    STATE(632), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(890), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
  [12873] = 5,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(368), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(585), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(884), 2,
      sym_kw_or,
      sym_kw_and,
  [12892] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(892), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [12905] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(894), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [12918] = 5,
    STATE(240), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(591), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(884), 2,
      sym_kw_or,
      sym_kw_and,
  [12937] = 7,
    ACTIONS(571), 1,
      sym__unquoted_identifier,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      sym__referenced_element_parent,
    STATE(188), 1,
      sym__referenced_element_name,
    STATE(189), 1,
      sym_identifier,
    STATE(216), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [12960] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(896), 6,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [12973] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(304), 2,
      sym_identifier,
      sym_literal_string,
  [12994] = 6,
    ACTIONS(833), 1,
      sym_kw_not,
    ACTIONS(898), 1,
      anon_sym_SEMI,
    STATE(449), 1,
      sym_not_null,
    STATE(603), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(890), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
  [13015] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(165), 1,
      sym__referenced_element_parent,
    STATE(166), 1,
      sym__referenced_element_name,
    STATE(174), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13038] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(68), 1,
      sym__referenced_element_name,
    STATE(73), 1,
      sym__referenced_element_parent,
    STATE(75), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13061] = 5,
    STATE(240), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(583), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(884), 2,
      sym_kw_or,
      sym_kw_and,
  [13080] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__single_quote_string,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    STATE(321), 2,
      sym_identifier,
      sym_literal_string,
  [13101] = 6,
    ACTIONS(900), 1,
      sym__unquoted_identifier,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
    STATE(249), 1,
      sym_identifier,
    STATE(342), 1,
      sym__quoted_identifier,
    STATE(484), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13121] = 4,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(384), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(585), 3,
      anon_sym_RPAREN,
      sym_kw_or,
      sym_kw_and,
  [13137] = 4,
    STATE(569), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(863), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
    ACTIONS(904), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13153] = 6,
    ACTIONS(900), 1,
      sym__unquoted_identifier,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
    STATE(246), 1,
      sym_identifier,
    STATE(342), 1,
      sym__quoted_identifier,
    STATE(481), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13173] = 6,
    ACTIONS(900), 1,
      sym__unquoted_identifier,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
    STATE(248), 1,
      sym_identifier,
    STATE(342), 1,
      sym__quoted_identifier,
    STATE(478), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13193] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(148), 1,
      sym_identifier,
    STATE(470), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13213] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    ACTIONS(906), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(630), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13233] = 4,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(419), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(591), 3,
      anon_sym_RPAREN,
      sym_kw_or,
      sym_kw_and,
  [13249] = 4,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(419), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(583), 3,
      anon_sym_RPAREN,
      sym_kw_or,
      sym_kw_and,
  [13265] = 4,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(385), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(587), 3,
      anon_sym_RPAREN,
      sym_kw_or,
      sym_kw_and,
  [13281] = 5,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(425), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(908), 2,
      sym_kw_or,
      sym_kw_and,
  [13299] = 2,
    ACTIONS(912), 1,
      anon_sym_SLASH,
    ACTIONS(910), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13311] = 5,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(423), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(908), 2,
      sym_kw_or,
      sym_kw_and,
  [13329] = 2,
    ACTIONS(916), 1,
      anon_sym_SLASH,
    ACTIONS(914), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13341] = 2,
    ACTIONS(920), 1,
      anon_sym_SLASH,
    ACTIONS(918), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13353] = 2,
    ACTIONS(922), 1,
      anon_sym_SLASH,
    ACTIONS(914), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13365] = 2,
    ACTIONS(926), 1,
      anon_sym_SLASH,
    ACTIONS(924), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13377] = 2,
    ACTIONS(930), 1,
      anon_sym_SLASH,
    ACTIONS(928), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13389] = 2,
    ACTIONS(934), 1,
      anon_sym_SLASH,
    ACTIONS(932), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13401] = 6,
    ACTIONS(936), 1,
      sym__unquoted_identifier,
    ACTIONS(938), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_identifier,
    STATE(21), 1,
      sym__quoted_identifier,
    STATE(571), 1,
      sym_cursor_declaration_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13421] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(940), 5,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_return,
  [13433] = 2,
    ACTIONS(942), 1,
      anon_sym_SLASH,
    ACTIONS(928), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13445] = 4,
    STATE(557), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(863), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
    ACTIONS(944), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13461] = 6,
    ACTIONS(946), 1,
      sym__unquoted_identifier,
    ACTIONS(948), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_identifier,
    STATE(24), 1,
      sym__quoted_identifier,
    STATE(529), 1,
      sym_field_definition,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13481] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(146), 1,
      sym_identifier,
    STATE(479), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13501] = 4,
    STATE(543), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(863), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
    ACTIONS(950), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13517] = 6,
    ACTIONS(900), 1,
      sym__unquoted_identifier,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      sym_identifier,
    STATE(342), 1,
      sym__quoted_identifier,
    STATE(480), 1,
      sym__schema,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13537] = 2,
    ACTIONS(954), 1,
      anon_sym_SLASH,
    ACTIONS(952), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13549] = 2,
    ACTIONS(958), 1,
      anon_sym_SLASH,
    ACTIONS(956), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13561] = 2,
    ACTIONS(962), 1,
      anon_sym_SLASH,
    ACTIONS(960), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13573] = 2,
    ACTIONS(966), 1,
      anon_sym_SLASH,
    ACTIONS(964), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13585] = 2,
    ACTIONS(970), 1,
      anon_sym_SLASH,
    ACTIONS(968), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13597] = 6,
    ACTIONS(946), 1,
      sym__unquoted_identifier,
    ACTIONS(948), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_identifier,
    STATE(24), 1,
      sym__quoted_identifier,
    STATE(488), 1,
      sym_field_definition,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13617] = 4,
    STATE(574), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(863), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
    ACTIONS(972), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13633] = 6,
    ACTIONS(936), 1,
      sym__unquoted_identifier,
    ACTIONS(938), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_identifier,
    STATE(21), 1,
      sym__quoted_identifier,
    STATE(520), 1,
      sym_cursor_declaration_parameter,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13653] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(974), 5,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_is,
      sym_kw_as,
  [13665] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(976), 5,
      anon_sym_SEMI,
      sym_kw_deterministic,
      sym_kw_pipelined,
      sym_kw_parallel_enable,
      sym_kw_result_cache,
  [13677] = 4,
    STATE(553), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(863), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
    ACTIONS(978), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13693] = 5,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(613), 2,
      sym_kw_or,
      sym_kw_and,
  [13711] = 2,
    ACTIONS(982), 1,
      anon_sym_SLASH,
    ACTIONS(980), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13723] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(984), 5,
      anon_sym_SEMI,
      sym_kw_default,
      sym_kw_authid,
      sym_kw_accessible,
      sym_kw_return,
  [13735] = 5,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(597), 2,
      sym_kw_or,
      sym_kw_and,
  [13753] = 5,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(419), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(986), 2,
      sym_kw_or,
      sym_kw_and,
  [13771] = 5,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(415), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(597), 2,
      sym_kw_or,
      sym_kw_and,
  [13789] = 6,
    ACTIONS(989), 1,
      sym__unquoted_identifier,
    ACTIONS(991), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_identifier,
    STATE(19), 1,
      sym__quoted_identifier,
    STATE(545), 1,
      sym_parameter_declaration_element,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13809] = 2,
    ACTIONS(995), 1,
      anon_sym_SLASH,
    ACTIONS(993), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13821] = 5,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(419), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(908), 2,
      sym_kw_or,
      sym_kw_and,
  [13839] = 6,
    ACTIONS(989), 1,
      sym__unquoted_identifier,
    ACTIONS(991), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_identifier,
    STATE(19), 1,
      sym__quoted_identifier,
    STATE(514), 1,
      sym_parameter_declaration_element,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13859] = 5,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(419), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(908), 2,
      sym_kw_or,
      sym_kw_and,
  [13877] = 2,
    ACTIONS(999), 1,
      anon_sym_SLASH,
    ACTIONS(997), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [13889] = 4,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(1001), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(173), 3,
      anon_sym_AT,
      sym_kw_datatype_type,
      sym_kw_datatype_rowtype,
  [13905] = 5,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      aux_sym__expression_base_boolean_in_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(656), 2,
      sym_kw_or,
      sym_kw_and,
  [13923] = 5,
    ACTIONS(587), 1,
      sym_kw_and,
    ACTIONS(719), 1,
      sym_kw_or,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(431), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13940] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(655), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13957] = 5,
    ACTIONS(583), 1,
      sym_kw_and,
    ACTIONS(719), 1,
      sym_kw_or,
    STATE(294), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13974] = 5,
    ACTIONS(695), 1,
      sym_kw_when,
    ACTIONS(1003), 1,
      sym_kw_else,
    ACTIONS(1005), 1,
      sym_kw_end,
    STATE(434), 1,
      aux_sym_expression_base_case_search_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [13991] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14008] = 4,
    ACTIONS(1007), 1,
      sym_kw_when,
    STATE(434), 1,
      aux_sym_expression_base_case_search_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1010), 2,
      sym_kw_else,
      sym_kw_end,
  [14023] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(619), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14040] = 1,
    ACTIONS(997), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14049] = 5,
    ACTIONS(591), 1,
      sym_kw_and,
    ACTIONS(719), 1,
      sym_kw_or,
    STATE(294), 1,
      aux_sym__expression_base_boolean_repeat1,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14066] = 1,
    ACTIONS(960), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14075] = 5,
    ACTIONS(585), 1,
      sym_kw_and,
    ACTIONS(719), 1,
      sym_kw_or,
    STATE(301), 1,
      sym__expression_base_boolean_repeat,
    STATE(437), 1,
      aux_sym__expression_base_boolean_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14092] = 5,
    ACTIONS(1012), 1,
      sym_kw_package,
    ACTIONS(1014), 1,
      sym_kw_function,
    ACTIONS(1016), 1,
      sym_kw_procedure,
    ACTIONS(1018), 1,
      sym_kw_library,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14109] = 4,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      sym_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1022), 2,
      sym_kw_byte,
      sym_kw_char,
  [14124] = 5,
    ACTIONS(571), 1,
      sym__unquoted_identifier,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_identifier,
    STATE(216), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14141] = 1,
    ACTIONS(997), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14150] = 1,
    ACTIONS(1024), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14159] = 5,
    ACTIONS(571), 1,
      sym__unquoted_identifier,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    STATE(122), 1,
      sym_identifier,
    STATE(216), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14176] = 5,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(1026), 1,
      sym_kw_char,
    ACTIONS(1028), 1,
      sym_kw_character,
    STATE(200), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14193] = 2,
    ACTIONS(1032), 1,
      anon_sym_SEMI,
    ACTIONS(1030), 5,
      ts_builtin_sym_end,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14204] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(81), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14221] = 4,
    ACTIONS(1034), 1,
      anon_sym_SEMI,
    STATE(583), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(890), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
  [14236] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(84), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14253] = 4,
    ACTIONS(1036), 1,
      sym_kw_package,
    STATE(670), 1,
      sym_editionable_noneditionable,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1038), 2,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [14268] = 5,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(1040), 1,
      sym_kw_return,
    STATE(348), 1,
      sym_return_declaration,
    STATE(539), 1,
      sym_parameter_declaration,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14285] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(116), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14302] = 5,
    ACTIONS(571), 1,
      sym__unquoted_identifier,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_identifier,
    STATE(216), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14319] = 1,
    ACTIONS(968), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14328] = 1,
    ACTIONS(956), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14337] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(116), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14354] = 1,
    ACTIONS(956), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14363] = 1,
    ACTIONS(1042), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14372] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1044), 4,
      anon_sym_SEMI,
      sym_kw_not,
      sym_kw_range,
      sym_kw_character,
  [14383] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(122), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14400] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(490), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14417] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(654), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14434] = 1,
    ACTIONS(928), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14443] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(78), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14460] = 5,
    ACTIONS(833), 1,
      sym_kw_not,
    ACTIONS(1046), 1,
      anon_sym_SEMI,
    ACTIONS(1048), 1,
      sym_kw_index,
    STATE(555), 1,
      sym_not_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14477] = 3,
    ACTIONS(1052), 1,
      sym_kw_or,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1050), 3,
      sym_kw_package,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [14490] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(235), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14507] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(452), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14524] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(162), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14541] = 1,
    ACTIONS(1054), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14550] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1056), 4,
      anon_sym_SEMI,
      sym_kw_not,
      sym_kw_range,
      sym_kw_character,
  [14561] = 1,
    ACTIONS(1058), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14570] = 1,
    ACTIONS(932), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14579] = 1,
    ACTIONS(914), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14588] = 4,
    ACTIONS(898), 1,
      anon_sym_SEMI,
    STATE(603), 1,
      sym_default_expression,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(890), 2,
      anon_sym_COLON_EQ,
      sym_kw_default,
  [14603] = 5,
    ACTIONS(695), 1,
      sym_kw_when,
    ACTIONS(1060), 1,
      sym_kw_else,
    ACTIONS(1062), 1,
      sym_kw_end,
    STATE(434), 1,
      aux_sym_expression_base_case_search_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14620] = 5,
    ACTIONS(900), 1,
      sym__unquoted_identifier,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
    STATE(258), 1,
      sym_identifier,
    STATE(342), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14637] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(156), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14654] = 5,
    ACTIONS(900), 1,
      sym__unquoted_identifier,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
    STATE(281), 1,
      sym_identifier,
    STATE(342), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14671] = 5,
    ACTIONS(900), 1,
      sym__unquoted_identifier,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
    STATE(253), 1,
      sym_identifier,
    STATE(342), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14688] = 1,
    ACTIONS(924), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14697] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym__unquoted_identifier,
    STATE(27), 1,
      sym__quoted_identifier,
    STATE(91), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14714] = 5,
    ACTIONS(900), 1,
      sym__unquoted_identifier,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
    STATE(279), 1,
      sym_identifier,
    STATE(342), 1,
      sym__quoted_identifier,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14731] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1064), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14741] = 4,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(1066), 1,
      sym_kw_varying,
    STATE(183), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14755] = 3,
    STATE(128), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1068), 2,
      sym_kw_is,
      sym_kw_as,
  [14767] = 4,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
    STATE(502), 1,
      aux_sym_type_definition_record_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14781] = 4,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(1074), 1,
      sym_kw_varying,
    STATE(181), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14795] = 4,
    ACTIONS(1076), 1,
      anon_sym_LPAREN,
    ACTIONS(1078), 1,
      sym_kw_return,
    STATE(642), 1,
      sym_cursor_declaration_parameters,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14809] = 3,
    STATE(125), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1080), 2,
      sym_kw_is,
      sym_kw_as,
  [14821] = 3,
    ACTIONS(1082), 1,
      sym_kw_anydata,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1084), 2,
      sym_kw_anytype,
      sym_kw_anydataset,
  [14833] = 4,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(1086), 1,
      sym_kw_to,
    STATE(604), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14847] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1088), 3,
      sym_kw_package,
      sym_kw_editionable,
      sym_kw_noneditionable,
  [14857] = 4,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(1090), 1,
      sym_kw_to,
    STATE(606), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14871] = 4,
    ACTIONS(1092), 1,
      sym_kw_between,
    ACTIONS(1094), 1,
      sym_kw_in,
    ACTIONS(1096), 1,
      sym_kw_like,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14885] = 3,
    STATE(117), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1098), 2,
      sym_kw_is,
      sym_kw_as,
  [14897] = 4,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    STATE(460), 1,
      sym_literal_number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14911] = 4,
    ACTIONS(1100), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(499), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14925] = 1,
    ACTIONS(1105), 5,
      ts_builtin_sym_end,
      sym_comment_ml,
      sym_comment_sl,
      sym_kw_create,
      sym_kw_alter,
  [14933] = 4,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      aux_sym_type_definition_record_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14947] = 4,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      aux_sym_type_definition_record_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14961] = 4,
    ACTIONS(833), 1,
      sym_kw_not,
    ACTIONS(1114), 1,
      anon_sym_SEMI,
    STATE(634), 1,
      sym_not_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [14975] = 3,
    STATE(120), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(558), 2,
      sym_kw_is,
      sym_kw_as,
  [14987] = 4,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(517), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15001] = 4,
    ACTIONS(1120), 1,
      anon_sym_COMMA,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    STATE(506), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15015] = 3,
    ACTIONS(1127), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1125), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15027] = 4,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      aux_sym_cursor_declaration_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15041] = 4,
    ACTIONS(833), 1,
      sym_kw_not,
    ACTIONS(1133), 1,
      anon_sym_SEMI,
    STATE(665), 1,
      sym_not_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15055] = 4,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    STATE(526), 1,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15069] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1139), 3,
      sym_kw_when,
      sym_kw_else,
      sym_kw_end,
  [15079] = 3,
    STATE(124), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1141), 2,
      sym_kw_is,
      sym_kw_as,
  [15091] = 4,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      aux_sym_cursor_declaration_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15105] = 4,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(522), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15119] = 4,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    STATE(576), 1,
      sym_literal_number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15133] = 4,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(93), 1,
      sym__float,
    STATE(93), 1,
      sym_literal_number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15147] = 4,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
    STATE(517), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15161] = 4,
    ACTIONS(1096), 1,
      sym_kw_like,
    ACTIONS(1157), 1,
      sym_kw_between,
    ACTIONS(1159), 1,
      sym_kw_in,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15175] = 3,
    STATE(127), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1161), 2,
      sym_kw_is,
      sym_kw_as,
  [15187] = 4,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    STATE(508), 1,
      aux_sym_cursor_declaration_parameters_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15201] = 3,
    STATE(129), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(544), 2,
      sym_kw_is,
      sym_kw_as,
  [15213] = 4,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
    STATE(499), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15227] = 4,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    STATE(506), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15241] = 4,
    ACTIONS(1096), 1,
      sym_kw_like,
    ACTIONS(1169), 1,
      sym_kw_between,
    ACTIONS(1171), 1,
      sym_kw_in,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15255] = 3,
    STATE(121), 1,
      sym__is_as,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1173), 2,
      sym_kw_is,
      sym_kw_as,
  [15267] = 4,
    ACTIONS(1175), 1,
      anon_sym_COMMA,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    STATE(526), 1,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15281] = 4,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      aux_sym_parameter_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15295] = 4,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1182), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      aux_sym_accessible_by_clause_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15309] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1110), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15318] = 3,
    ACTIONS(1184), 1,
      sym_kw_local,
    ACTIONS(1186), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15329] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1188), 2,
      sym__unquoted_identifier,
      anon_sym_DQUOTE,
  [15338] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1190), 2,
      sym_kw_current_user,
      sym_kw_definer,
  [15347] = 3,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15358] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1192), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15367] = 3,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(652), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15378] = 3,
    ACTIONS(1194), 1,
      sym_kw_year,
    ACTIONS(1196), 1,
      sym_kw_day,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15389] = 3,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(647), 1,
      sym__size_byte_char,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15400] = 3,
    ACTIONS(1198), 1,
      sym_kw_datatype_type,
    ACTIONS(1200), 1,
      sym_kw_datatype_rowtype,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15411] = 3,
    ACTIONS(1040), 1,
      sym_kw_return,
    STATE(344), 1,
      sym_return_declaration,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15422] = 3,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15433] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1155), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15442] = 3,
    ACTIONS(1202), 1,
      sym__number,
    STATE(554), 1,
      sym__precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15453] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1204), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15462] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(950), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15471] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1103), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15480] = 3,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15491] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1206), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15500] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1208), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15509] = 3,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(598), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15520] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1210), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15529] = 3,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15540] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1123), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15549] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1212), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15558] = 3,
    ACTIONS(1214), 1,
      anon_sym_COMMA,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15569] = 3,
    ACTIONS(1218), 1,
      anon_sym_SEMI,
    ACTIONS(1220), 1,
      sym_kw_index,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15580] = 3,
    ACTIONS(1222), 1,
      sym_kw_local,
    ACTIONS(1224), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15591] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1226), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15600] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1228), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15609] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1178), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15618] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1230), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15627] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1125), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15636] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1232), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15645] = 3,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(575), 1,
      sym__size,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15656] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1234), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15665] = 3,
    ACTIONS(579), 1,
      sym_kw_datatype_type,
    ACTIONS(581), 1,
      sym_kw_datatype_rowtype,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15676] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    STATE(523), 1,
      aux_sym_literal_list_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15687] = 3,
    ACTIONS(1236), 1,
      sym__number,
    STATE(581), 1,
      sym__scale,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15698] = 3,
    ACTIONS(695), 1,
      sym_kw_when,
    STATE(432), 1,
      aux_sym_expression_base_case_search_repeat1,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15709] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(978), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15718] = 3,
    ACTIONS(1238), 1,
      sym_kw_null,
    ACTIONS(1240), 1,
      sym_kw_not,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15729] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1146), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15738] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(1242), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15747] = 3,
    ACTIONS(89), 1,
      sym__single_quote_string,
    STATE(472), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15758] = 2,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
    ACTIONS(944), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15767] = 2,
    ACTIONS(1244), 1,
      sym_kw_of,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15775] = 2,
    ACTIONS(1246), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15783] = 2,
    ACTIONS(1248), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15791] = 2,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15799] = 2,
    ACTIONS(1252), 1,
      sym_kw_return,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15807] = 2,
    ACTIONS(1254), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15815] = 2,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15823] = 2,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15831] = 2,
    ACTIONS(1260), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15839] = 2,
    ACTIONS(1262), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15847] = 2,
    ACTIONS(1264), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15855] = 2,
    ACTIONS(1266), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15863] = 2,
    ACTIONS(1268), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15871] = 2,
    ACTIONS(1270), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15879] = 2,
    ACTIONS(1272), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15887] = 2,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15895] = 2,
    ACTIONS(1276), 1,
      sym_kw_then,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15903] = 2,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15911] = 2,
    ACTIONS(1280), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15919] = 2,
    ACTIONS(1282), 1,
      sym_kw_return,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15927] = 2,
    ACTIONS(831), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15935] = 2,
    ACTIONS(1284), 1,
      sym_kw_set,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15943] = 2,
    ACTIONS(1286), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15951] = 2,
    ACTIONS(1288), 1,
      sym_kw_of,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15959] = 2,
    ACTIONS(1290), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15967] = 2,
    ACTIONS(1292), 1,
      sym_kw_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15975] = 2,
    ACTIONS(1294), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15983] = 2,
    ACTIONS(1296), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15991] = 2,
    ACTIONS(1034), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [15999] = 2,
    ACTIONS(1298), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16007] = 2,
    ACTIONS(1300), 1,
      sym_kw_second,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16015] = 2,
    ACTIONS(1302), 1,
      sym_kw_to,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16023] = 2,
    ACTIONS(1304), 1,
      sym_kw_month,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16031] = 2,
    ACTIONS(1306), 1,
      sym_kw_by,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16039] = 2,
    ACTIONS(1308), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16047] = 2,
    ACTIONS(1310), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16055] = 2,
    ACTIONS(1312), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16063] = 2,
    ACTIONS(1314), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16071] = 2,
    ACTIONS(1316), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16079] = 2,
    ACTIONS(1318), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1320), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16087] = 2,
    ACTIONS(1322), 1,
      sym_kw_zone,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16095] = 2,
    ACTIONS(1224), 1,
      sym_kw_time,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16103] = 2,
    ACTIONS(1324), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16111] = 2,
    ACTIONS(1326), 1,
      sym_kw_end,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16119] = 2,
    ACTIONS(1328), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16127] = 2,
    ACTIONS(1330), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16135] = 2,
    ACTIONS(1332), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16143] = 2,
    ACTIONS(1334), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16151] = 2,
    ACTIONS(1336), 1,
      sym_kw_array,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16159] = 2,
    ACTIONS(1338), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16167] = 2,
    ACTIONS(1340), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16175] = 2,
    ACTIONS(1342), 1,
      sym_kw_of,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16183] = 2,
    ACTIONS(1344), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16191] = 2,
    ACTIONS(839), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16199] = 2,
    ACTIONS(1346), 1,
      sym_kw_by,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16207] = 2,
    ACTIONS(1348), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16215] = 2,
    ACTIONS(1350), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1320), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16223] = 2,
    ACTIONS(898), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16231] = 2,
    ACTIONS(1352), 1,
      sym_kw_null,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16239] = 2,
    ACTIONS(1133), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16247] = 2,
    ACTIONS(1354), 1,
      sym_kw_end,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16255] = 2,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16263] = 2,
    ACTIONS(1358), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16271] = 2,
    ACTIONS(1360), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16279] = 2,
    ACTIONS(1362), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1320), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16287] = 2,
    ACTIONS(1364), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16295] = 2,
    ACTIONS(1366), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1320), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16303] = 2,
    ACTIONS(1368), 1,
      sym_kw_return,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16311] = 2,
    ACTIONS(1370), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1320), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16319] = 2,
    ACTIONS(637), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16327] = 2,
    ACTIONS(1372), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1320), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16335] = 2,
    ACTIONS(1374), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1320), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16343] = 2,
    ACTIONS(1376), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16351] = 2,
    ACTIONS(1378), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16359] = 2,
    ACTIONS(1380), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16367] = 2,
    ACTIONS(1382), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16375] = 2,
    ACTIONS(1384), 1,
      sym_kw_precision,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16383] = 2,
    ACTIONS(1386), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16391] = 2,
    ACTIONS(1388), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16399] = 2,
    ACTIONS(1390), 1,
      sym_kw_is,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16407] = 2,
    ACTIONS(1392), 1,
      sym_kw_is,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16415] = 2,
    ACTIONS(1394), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16423] = 2,
    ACTIONS(1396), 1,
      sym_kw_using_nls_comp,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16431] = 2,
    ACTIONS(1398), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16439] = 2,
    ACTIONS(1400), 1,
      sym_kw_settings,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16447] = 2,
    ACTIONS(1402), 1,
      sym_kw_by,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16455] = 2,
    ACTIONS(1404), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16463] = 2,
    ACTIONS(1406), 1,
      sym_kw_collation,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16471] = 2,
    ACTIONS(1408), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16479] = 2,
    ACTIONS(1410), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16487] = 2,
    ACTIONS(1412), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16495] = 2,
    ACTIONS(1414), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16503] = 2,
    ACTIONS(1416), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16511] = 2,
    ACTIONS(1418), 1,
      sym_kw_and,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16519] = 2,
    ACTIONS(1420), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(1320), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16527] = 2,
    ACTIONS(1422), 1,
      sym_kw_package,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16535] = 2,
    ACTIONS(865), 1,
      sym_kw_package,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
  [16543] = 2,
    ACTIONS(1424), 1,
      sym_kw_replace,
    ACTIONS(3), 2,
      sym_comment_ml,
      sym_comment_sl,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 65,
  [SMALL_STATE(20)] = 130,
  [SMALL_STATE(21)] = 194,
  [SMALL_STATE(22)] = 258,
  [SMALL_STATE(23)] = 322,
  [SMALL_STATE(24)] = 386,
  [SMALL_STATE(25)] = 449,
  [SMALL_STATE(26)] = 512,
  [SMALL_STATE(27)] = 572,
  [SMALL_STATE(28)] = 632,
  [SMALL_STATE(29)] = 735,
  [SMALL_STATE(30)] = 838,
  [SMALL_STATE(31)] = 941,
  [SMALL_STATE(32)] = 1044,
  [SMALL_STATE(33)] = 1147,
  [SMALL_STATE(34)] = 1250,
  [SMALL_STATE(35)] = 1353,
  [SMALL_STATE(36)] = 1456,
  [SMALL_STATE(37)] = 1559,
  [SMALL_STATE(38)] = 1662,
  [SMALL_STATE(39)] = 1765,
  [SMALL_STATE(40)] = 1868,
  [SMALL_STATE(41)] = 1971,
  [SMALL_STATE(42)] = 2074,
  [SMALL_STATE(43)] = 2177,
  [SMALL_STATE(44)] = 2280,
  [SMALL_STATE(45)] = 2383,
  [SMALL_STATE(46)] = 2486,
  [SMALL_STATE(47)] = 2589,
  [SMALL_STATE(48)] = 2692,
  [SMALL_STATE(49)] = 2795,
  [SMALL_STATE(50)] = 2898,
  [SMALL_STATE(51)] = 3001,
  [SMALL_STATE(52)] = 3106,
  [SMALL_STATE(53)] = 3209,
  [SMALL_STATE(54)] = 3312,
  [SMALL_STATE(55)] = 3392,
  [SMALL_STATE(56)] = 3470,
  [SMALL_STATE(57)] = 3558,
  [SMALL_STATE(58)] = 3646,
  [SMALL_STATE(59)] = 3734,
  [SMALL_STATE(60)] = 3816,
  [SMALL_STATE(61)] = 3898,
  [SMALL_STATE(62)] = 3980,
  [SMALL_STATE(63)] = 4062,
  [SMALL_STATE(64)] = 4144,
  [SMALL_STATE(65)] = 4226,
  [SMALL_STATE(66)] = 4308,
  [SMALL_STATE(67)] = 4382,
  [SMALL_STATE(68)] = 4455,
  [SMALL_STATE(69)] = 4500,
  [SMALL_STATE(70)] = 4543,
  [SMALL_STATE(71)] = 4616,
  [SMALL_STATE(72)] = 4661,
  [SMALL_STATE(73)] = 4706,
  [SMALL_STATE(74)] = 4751,
  [SMALL_STATE(75)] = 4792,
  [SMALL_STATE(76)] = 4835,
  [SMALL_STATE(77)] = 4907,
  [SMALL_STATE(78)] = 4951,
  [SMALL_STATE(79)] = 4991,
  [SMALL_STATE(80)] = 5031,
  [SMALL_STATE(81)] = 5075,
  [SMALL_STATE(82)] = 5114,
  [SMALL_STATE(83)] = 5153,
  [SMALL_STATE(84)] = 5192,
  [SMALL_STATE(85)] = 5231,
  [SMALL_STATE(86)] = 5270,
  [SMALL_STATE(87)] = 5309,
  [SMALL_STATE(88)] = 5347,
  [SMALL_STATE(89)] = 5385,
  [SMALL_STATE(90)] = 5423,
  [SMALL_STATE(91)] = 5461,
  [SMALL_STATE(92)] = 5499,
  [SMALL_STATE(93)] = 5537,
  [SMALL_STATE(94)] = 5575,
  [SMALL_STATE(95)] = 5646,
  [SMALL_STATE(96)] = 5717,
  [SMALL_STATE(97)] = 5788,
  [SMALL_STATE(98)] = 5842,
  [SMALL_STATE(99)] = 5896,
  [SMALL_STATE(100)] = 5950,
  [SMALL_STATE(101)] = 6004,
  [SMALL_STATE(102)] = 6058,
  [SMALL_STATE(103)] = 6112,
  [SMALL_STATE(104)] = 6166,
  [SMALL_STATE(105)] = 6220,
  [SMALL_STATE(106)] = 6274,
  [SMALL_STATE(107)] = 6310,
  [SMALL_STATE(108)] = 6364,
  [SMALL_STATE(109)] = 6418,
  [SMALL_STATE(110)] = 6472,
  [SMALL_STATE(111)] = 6526,
  [SMALL_STATE(112)] = 6580,
  [SMALL_STATE(113)] = 6633,
  [SMALL_STATE(114)] = 6686,
  [SMALL_STATE(115)] = 6737,
  [SMALL_STATE(116)] = 6790,
  [SMALL_STATE(117)] = 6821,
  [SMALL_STATE(118)] = 6869,
  [SMALL_STATE(119)] = 6917,
  [SMALL_STATE(120)] = 6965,
  [SMALL_STATE(121)] = 7013,
  [SMALL_STATE(122)] = 7061,
  [SMALL_STATE(123)] = 7091,
  [SMALL_STATE(124)] = 7139,
  [SMALL_STATE(125)] = 7187,
  [SMALL_STATE(126)] = 7235,
  [SMALL_STATE(127)] = 7283,
  [SMALL_STATE(128)] = 7331,
  [SMALL_STATE(129)] = 7379,
  [SMALL_STATE(130)] = 7427,
  [SMALL_STATE(131)] = 7457,
  [SMALL_STATE(132)] = 7487,
  [SMALL_STATE(133)] = 7535,
  [SMALL_STATE(134)] = 7583,
  [SMALL_STATE(135)] = 7613,
  [SMALL_STATE(136)] = 7643,
  [SMALL_STATE(137)] = 7693,
  [SMALL_STATE(138)] = 7735,
  [SMALL_STATE(139)] = 7785,
  [SMALL_STATE(140)] = 7824,
  [SMALL_STATE(141)] = 7852,
  [SMALL_STATE(142)] = 7884,
  [SMALL_STATE(143)] = 7916,
  [SMALL_STATE(144)] = 7966,
  [SMALL_STATE(145)] = 8016,
  [SMALL_STATE(146)] = 8045,
  [SMALL_STATE(147)] = 8086,
  [SMALL_STATE(148)] = 8109,
  [SMALL_STATE(149)] = 8150,
  [SMALL_STATE(150)] = 8179,
  [SMALL_STATE(151)] = 8208,
  [SMALL_STATE(152)] = 8236,
  [SMALL_STATE(153)] = 8262,
  [SMALL_STATE(154)] = 8288,
  [SMALL_STATE(155)] = 8322,
  [SMALL_STATE(156)] = 8356,
  [SMALL_STATE(157)] = 8394,
  [SMALL_STATE(158)] = 8428,
  [SMALL_STATE(159)] = 8462,
  [SMALL_STATE(160)] = 8500,
  [SMALL_STATE(161)] = 8542,
  [SMALL_STATE(162)] = 8568,
  [SMALL_STATE(163)] = 8606,
  [SMALL_STATE(164)] = 8634,
  [SMALL_STATE(165)] = 8660,
  [SMALL_STATE(166)] = 8688,
  [SMALL_STATE(167)] = 8716,
  [SMALL_STATE(168)] = 8742,
  [SMALL_STATE(169)] = 8774,
  [SMALL_STATE(170)] = 8800,
  [SMALL_STATE(171)] = 8826,
  [SMALL_STATE(172)] = 8850,
  [SMALL_STATE(173)] = 8884,
  [SMALL_STATE(174)] = 8916,
  [SMALL_STATE(175)] = 8942,
  [SMALL_STATE(176)] = 8968,
  [SMALL_STATE(177)] = 8994,
  [SMALL_STATE(178)] = 9036,
  [SMALL_STATE(179)] = 9059,
  [SMALL_STATE(180)] = 9082,
  [SMALL_STATE(181)] = 9111,
  [SMALL_STATE(182)] = 9131,
  [SMALL_STATE(183)] = 9153,
  [SMALL_STATE(184)] = 9173,
  [SMALL_STATE(185)] = 9193,
  [SMALL_STATE(186)] = 9219,
  [SMALL_STATE(187)] = 9239,
  [SMALL_STATE(188)] = 9265,
  [SMALL_STATE(189)] = 9291,
  [SMALL_STATE(190)] = 9315,
  [SMALL_STATE(191)] = 9341,
  [SMALL_STATE(192)] = 9361,
  [SMALL_STATE(193)] = 9381,
  [SMALL_STATE(194)] = 9401,
  [SMALL_STATE(195)] = 9421,
  [SMALL_STATE(196)] = 9441,
  [SMALL_STATE(197)] = 9461,
  [SMALL_STATE(198)] = 9481,
  [SMALL_STATE(199)] = 9501,
  [SMALL_STATE(200)] = 9521,
  [SMALL_STATE(201)] = 9541,
  [SMALL_STATE(202)] = 9561,
  [SMALL_STATE(203)] = 9581,
  [SMALL_STATE(204)] = 9601,
  [SMALL_STATE(205)] = 9621,
  [SMALL_STATE(206)] = 9641,
  [SMALL_STATE(207)] = 9661,
  [SMALL_STATE(208)] = 9681,
  [SMALL_STATE(209)] = 9701,
  [SMALL_STATE(210)] = 9721,
  [SMALL_STATE(211)] = 9741,
  [SMALL_STATE(212)] = 9761,
  [SMALL_STATE(213)] = 9781,
  [SMALL_STATE(214)] = 9801,
  [SMALL_STATE(215)] = 9821,
  [SMALL_STATE(216)] = 9841,
  [SMALL_STATE(217)] = 9863,
  [SMALL_STATE(218)] = 9887,
  [SMALL_STATE(219)] = 9907,
  [SMALL_STATE(220)] = 9927,
  [SMALL_STATE(221)] = 9947,
  [SMALL_STATE(222)] = 9967,
  [SMALL_STATE(223)] = 9987,
  [SMALL_STATE(224)] = 10007,
  [SMALL_STATE(225)] = 10028,
  [SMALL_STATE(226)] = 10055,
  [SMALL_STATE(227)] = 10076,
  [SMALL_STATE(228)] = 10097,
  [SMALL_STATE(229)] = 10138,
  [SMALL_STATE(230)] = 10169,
  [SMALL_STATE(231)] = 10210,
  [SMALL_STATE(232)] = 10241,
  [SMALL_STATE(233)] = 10262,
  [SMALL_STATE(234)] = 10293,
  [SMALL_STATE(235)] = 10314,
  [SMALL_STATE(236)] = 10347,
  [SMALL_STATE(237)] = 10368,
  [SMALL_STATE(238)] = 10395,
  [SMALL_STATE(239)] = 10426,
  [SMALL_STATE(240)] = 10450,
  [SMALL_STATE(241)] = 10474,
  [SMALL_STATE(242)] = 10512,
  [SMALL_STATE(243)] = 10536,
  [SMALL_STATE(244)] = 10558,
  [SMALL_STATE(245)] = 10580,
  [SMALL_STATE(246)] = 10602,
  [SMALL_STATE(247)] = 10626,
  [SMALL_STATE(248)] = 10648,
  [SMALL_STATE(249)] = 10672,
  [SMALL_STATE(250)] = 10696,
  [SMALL_STATE(251)] = 10719,
  [SMALL_STATE(252)] = 10736,
  [SMALL_STATE(253)] = 10757,
  [SMALL_STATE(254)] = 10778,
  [SMALL_STATE(255)] = 10801,
  [SMALL_STATE(256)] = 10818,
  [SMALL_STATE(257)] = 10839,
  [SMALL_STATE(258)] = 10862,
  [SMALL_STATE(259)] = 10883,
  [SMALL_STATE(260)] = 10904,
  [SMALL_STATE(261)] = 10927,
  [SMALL_STATE(262)] = 10948,
  [SMALL_STATE(263)] = 10969,
  [SMALL_STATE(264)] = 10996,
  [SMALL_STATE(265)] = 11019,
  [SMALL_STATE(266)] = 11044,
  [SMALL_STATE(267)] = 11067,
  [SMALL_STATE(268)] = 11090,
  [SMALL_STATE(269)] = 11113,
  [SMALL_STATE(270)] = 11134,
  [SMALL_STATE(271)] = 11159,
  [SMALL_STATE(272)] = 11180,
  [SMALL_STATE(273)] = 11197,
  [SMALL_STATE(274)] = 11222,
  [SMALL_STATE(275)] = 11247,
  [SMALL_STATE(276)] = 11272,
  [SMALL_STATE(277)] = 11293,
  [SMALL_STATE(278)] = 11314,
  [SMALL_STATE(279)] = 11335,
  [SMALL_STATE(280)] = 11356,
  [SMALL_STATE(281)] = 11391,
  [SMALL_STATE(282)] = 11412,
  [SMALL_STATE(283)] = 11431,
  [SMALL_STATE(284)] = 11449,
  [SMALL_STATE(285)] = 11467,
  [SMALL_STATE(286)] = 11487,
  [SMALL_STATE(287)] = 11503,
  [SMALL_STATE(288)] = 11523,
  [SMALL_STATE(289)] = 11541,
  [SMALL_STATE(290)] = 11557,
  [SMALL_STATE(291)] = 11573,
  [SMALL_STATE(292)] = 11589,
  [SMALL_STATE(293)] = 11605,
  [SMALL_STATE(294)] = 11627,
  [SMALL_STATE(295)] = 11649,
  [SMALL_STATE(296)] = 11669,
  [SMALL_STATE(297)] = 11687,
  [SMALL_STATE(298)] = 11703,
  [SMALL_STATE(299)] = 11721,
  [SMALL_STATE(300)] = 11745,
  [SMALL_STATE(301)] = 11763,
  [SMALL_STATE(302)] = 11779,
  [SMALL_STATE(303)] = 11801,
  [SMALL_STATE(304)] = 11817,
  [SMALL_STATE(305)] = 11833,
  [SMALL_STATE(306)] = 11849,
  [SMALL_STATE(307)] = 11867,
  [SMALL_STATE(308)] = 11887,
  [SMALL_STATE(309)] = 11909,
  [SMALL_STATE(310)] = 11927,
  [SMALL_STATE(311)] = 11943,
  [SMALL_STATE(312)] = 11961,
  [SMALL_STATE(313)] = 11979,
  [SMALL_STATE(314)] = 11997,
  [SMALL_STATE(315)] = 12013,
  [SMALL_STATE(316)] = 12031,
  [SMALL_STATE(317)] = 12047,
  [SMALL_STATE(318)] = 12063,
  [SMALL_STATE(319)] = 12081,
  [SMALL_STATE(320)] = 12099,
  [SMALL_STATE(321)] = 12121,
  [SMALL_STATE(322)] = 12137,
  [SMALL_STATE(323)] = 12153,
  [SMALL_STATE(324)] = 12171,
  [SMALL_STATE(325)] = 12189,
  [SMALL_STATE(326)] = 12207,
  [SMALL_STATE(327)] = 12223,
  [SMALL_STATE(328)] = 12239,
  [SMALL_STATE(329)] = 12255,
  [SMALL_STATE(330)] = 12271,
  [SMALL_STATE(331)] = 12295,
  [SMALL_STATE(332)] = 12311,
  [SMALL_STATE(333)] = 12327,
  [SMALL_STATE(334)] = 12343,
  [SMALL_STATE(335)] = 12361,
  [SMALL_STATE(336)] = 12377,
  [SMALL_STATE(337)] = 12393,
  [SMALL_STATE(338)] = 12409,
  [SMALL_STATE(339)] = 12425,
  [SMALL_STATE(340)] = 12441,
  [SMALL_STATE(341)] = 12459,
  [SMALL_STATE(342)] = 12484,
  [SMALL_STATE(343)] = 12497,
  [SMALL_STATE(344)] = 12526,
  [SMALL_STATE(345)] = 12547,
  [SMALL_STATE(346)] = 12560,
  [SMALL_STATE(347)] = 12583,
  [SMALL_STATE(348)] = 12608,
  [SMALL_STATE(349)] = 12629,
  [SMALL_STATE(350)] = 12643,
  [SMALL_STATE(351)] = 12655,
  [SMALL_STATE(352)] = 12667,
  [SMALL_STATE(353)] = 12681,
  [SMALL_STATE(354)] = 12699,
  [SMALL_STATE(355)] = 12721,
  [SMALL_STATE(356)] = 12733,
  [SMALL_STATE(357)] = 12745,
  [SMALL_STATE(358)] = 12757,
  [SMALL_STATE(359)] = 12775,
  [SMALL_STATE(360)] = 12795,
  [SMALL_STATE(361)] = 12807,
  [SMALL_STATE(362)] = 12820,
  [SMALL_STATE(363)] = 12839,
  [SMALL_STATE(364)] = 12852,
  [SMALL_STATE(365)] = 12873,
  [SMALL_STATE(366)] = 12892,
  [SMALL_STATE(367)] = 12905,
  [SMALL_STATE(368)] = 12918,
  [SMALL_STATE(369)] = 12937,
  [SMALL_STATE(370)] = 12960,
  [SMALL_STATE(371)] = 12973,
  [SMALL_STATE(372)] = 12994,
  [SMALL_STATE(373)] = 13015,
  [SMALL_STATE(374)] = 13038,
  [SMALL_STATE(375)] = 13061,
  [SMALL_STATE(376)] = 13080,
  [SMALL_STATE(377)] = 13101,
  [SMALL_STATE(378)] = 13121,
  [SMALL_STATE(379)] = 13137,
  [SMALL_STATE(380)] = 13153,
  [SMALL_STATE(381)] = 13173,
  [SMALL_STATE(382)] = 13193,
  [SMALL_STATE(383)] = 13213,
  [SMALL_STATE(384)] = 13233,
  [SMALL_STATE(385)] = 13249,
  [SMALL_STATE(386)] = 13265,
  [SMALL_STATE(387)] = 13281,
  [SMALL_STATE(388)] = 13299,
  [SMALL_STATE(389)] = 13311,
  [SMALL_STATE(390)] = 13329,
  [SMALL_STATE(391)] = 13341,
  [SMALL_STATE(392)] = 13353,
  [SMALL_STATE(393)] = 13365,
  [SMALL_STATE(394)] = 13377,
  [SMALL_STATE(395)] = 13389,
  [SMALL_STATE(396)] = 13401,
  [SMALL_STATE(397)] = 13421,
  [SMALL_STATE(398)] = 13433,
  [SMALL_STATE(399)] = 13445,
  [SMALL_STATE(400)] = 13461,
  [SMALL_STATE(401)] = 13481,
  [SMALL_STATE(402)] = 13501,
  [SMALL_STATE(403)] = 13517,
  [SMALL_STATE(404)] = 13537,
  [SMALL_STATE(405)] = 13549,
  [SMALL_STATE(406)] = 13561,
  [SMALL_STATE(407)] = 13573,
  [SMALL_STATE(408)] = 13585,
  [SMALL_STATE(409)] = 13597,
  [SMALL_STATE(410)] = 13617,
  [SMALL_STATE(411)] = 13633,
  [SMALL_STATE(412)] = 13653,
  [SMALL_STATE(413)] = 13665,
  [SMALL_STATE(414)] = 13677,
  [SMALL_STATE(415)] = 13693,
  [SMALL_STATE(416)] = 13711,
  [SMALL_STATE(417)] = 13723,
  [SMALL_STATE(418)] = 13735,
  [SMALL_STATE(419)] = 13753,
  [SMALL_STATE(420)] = 13771,
  [SMALL_STATE(421)] = 13789,
  [SMALL_STATE(422)] = 13809,
  [SMALL_STATE(423)] = 13821,
  [SMALL_STATE(424)] = 13839,
  [SMALL_STATE(425)] = 13859,
  [SMALL_STATE(426)] = 13877,
  [SMALL_STATE(427)] = 13889,
  [SMALL_STATE(428)] = 13905,
  [SMALL_STATE(429)] = 13923,
  [SMALL_STATE(430)] = 13940,
  [SMALL_STATE(431)] = 13957,
  [SMALL_STATE(432)] = 13974,
  [SMALL_STATE(433)] = 13991,
  [SMALL_STATE(434)] = 14008,
  [SMALL_STATE(435)] = 14023,
  [SMALL_STATE(436)] = 14040,
  [SMALL_STATE(437)] = 14049,
  [SMALL_STATE(438)] = 14066,
  [SMALL_STATE(439)] = 14075,
  [SMALL_STATE(440)] = 14092,
  [SMALL_STATE(441)] = 14109,
  [SMALL_STATE(442)] = 14124,
  [SMALL_STATE(443)] = 14141,
  [SMALL_STATE(444)] = 14150,
  [SMALL_STATE(445)] = 14159,
  [SMALL_STATE(446)] = 14176,
  [SMALL_STATE(447)] = 14193,
  [SMALL_STATE(448)] = 14204,
  [SMALL_STATE(449)] = 14221,
  [SMALL_STATE(450)] = 14236,
  [SMALL_STATE(451)] = 14253,
  [SMALL_STATE(452)] = 14268,
  [SMALL_STATE(453)] = 14285,
  [SMALL_STATE(454)] = 14302,
  [SMALL_STATE(455)] = 14319,
  [SMALL_STATE(456)] = 14328,
  [SMALL_STATE(457)] = 14337,
  [SMALL_STATE(458)] = 14354,
  [SMALL_STATE(459)] = 14363,
  [SMALL_STATE(460)] = 14372,
  [SMALL_STATE(461)] = 14383,
  [SMALL_STATE(462)] = 14400,
  [SMALL_STATE(463)] = 14417,
  [SMALL_STATE(464)] = 14434,
  [SMALL_STATE(465)] = 14443,
  [SMALL_STATE(466)] = 14460,
  [SMALL_STATE(467)] = 14477,
  [SMALL_STATE(468)] = 14490,
  [SMALL_STATE(469)] = 14507,
  [SMALL_STATE(470)] = 14524,
  [SMALL_STATE(471)] = 14541,
  [SMALL_STATE(472)] = 14550,
  [SMALL_STATE(473)] = 14561,
  [SMALL_STATE(474)] = 14570,
  [SMALL_STATE(475)] = 14579,
  [SMALL_STATE(476)] = 14588,
  [SMALL_STATE(477)] = 14603,
  [SMALL_STATE(478)] = 14620,
  [SMALL_STATE(479)] = 14637,
  [SMALL_STATE(480)] = 14654,
  [SMALL_STATE(481)] = 14671,
  [SMALL_STATE(482)] = 14688,
  [SMALL_STATE(483)] = 14697,
  [SMALL_STATE(484)] = 14714,
  [SMALL_STATE(485)] = 14731,
  [SMALL_STATE(486)] = 14741,
  [SMALL_STATE(487)] = 14755,
  [SMALL_STATE(488)] = 14767,
  [SMALL_STATE(489)] = 14781,
  [SMALL_STATE(490)] = 14795,
  [SMALL_STATE(491)] = 14809,
  [SMALL_STATE(492)] = 14821,
  [SMALL_STATE(493)] = 14833,
  [SMALL_STATE(494)] = 14847,
  [SMALL_STATE(495)] = 14857,
  [SMALL_STATE(496)] = 14871,
  [SMALL_STATE(497)] = 14885,
  [SMALL_STATE(498)] = 14897,
  [SMALL_STATE(499)] = 14911,
  [SMALL_STATE(500)] = 14925,
  [SMALL_STATE(501)] = 14933,
  [SMALL_STATE(502)] = 14947,
  [SMALL_STATE(503)] = 14961,
  [SMALL_STATE(504)] = 14975,
  [SMALL_STATE(505)] = 14987,
  [SMALL_STATE(506)] = 15001,
  [SMALL_STATE(507)] = 15015,
  [SMALL_STATE(508)] = 15027,
  [SMALL_STATE(509)] = 15041,
  [SMALL_STATE(510)] = 15055,
  [SMALL_STATE(511)] = 15069,
  [SMALL_STATE(512)] = 15079,
  [SMALL_STATE(513)] = 15091,
  [SMALL_STATE(514)] = 15105,
  [SMALL_STATE(515)] = 15119,
  [SMALL_STATE(516)] = 15133,
  [SMALL_STATE(517)] = 15147,
  [SMALL_STATE(518)] = 15161,
  [SMALL_STATE(519)] = 15175,
  [SMALL_STATE(520)] = 15187,
  [SMALL_STATE(521)] = 15201,
  [SMALL_STATE(522)] = 15213,
  [SMALL_STATE(523)] = 15227,
  [SMALL_STATE(524)] = 15241,
  [SMALL_STATE(525)] = 15255,
  [SMALL_STATE(526)] = 15267,
  [SMALL_STATE(527)] = 15281,
  [SMALL_STATE(528)] = 15295,
  [SMALL_STATE(529)] = 15309,
  [SMALL_STATE(530)] = 15318,
  [SMALL_STATE(531)] = 15329,
  [SMALL_STATE(532)] = 15338,
  [SMALL_STATE(533)] = 15347,
  [SMALL_STATE(534)] = 15358,
  [SMALL_STATE(535)] = 15367,
  [SMALL_STATE(536)] = 15378,
  [SMALL_STATE(537)] = 15389,
  [SMALL_STATE(538)] = 15400,
  [SMALL_STATE(539)] = 15411,
  [SMALL_STATE(540)] = 15422,
  [SMALL_STATE(541)] = 15433,
  [SMALL_STATE(542)] = 15442,
  [SMALL_STATE(543)] = 15453,
  [SMALL_STATE(544)] = 15462,
  [SMALL_STATE(545)] = 15471,
  [SMALL_STATE(546)] = 15480,
  [SMALL_STATE(547)] = 15491,
  [SMALL_STATE(548)] = 15500,
  [SMALL_STATE(549)] = 15509,
  [SMALL_STATE(550)] = 15520,
  [SMALL_STATE(551)] = 15529,
  [SMALL_STATE(552)] = 15540,
  [SMALL_STATE(553)] = 15549,
  [SMALL_STATE(554)] = 15558,
  [SMALL_STATE(555)] = 15569,
  [SMALL_STATE(556)] = 15580,
  [SMALL_STATE(557)] = 15591,
  [SMALL_STATE(558)] = 15600,
  [SMALL_STATE(559)] = 15609,
  [SMALL_STATE(560)] = 15618,
  [SMALL_STATE(561)] = 15627,
  [SMALL_STATE(562)] = 15636,
  [SMALL_STATE(563)] = 15645,
  [SMALL_STATE(564)] = 15656,
  [SMALL_STATE(565)] = 15665,
  [SMALL_STATE(566)] = 15676,
  [SMALL_STATE(567)] = 15687,
  [SMALL_STATE(568)] = 15698,
  [SMALL_STATE(569)] = 15709,
  [SMALL_STATE(570)] = 15718,
  [SMALL_STATE(571)] = 15729,
  [SMALL_STATE(572)] = 15738,
  [SMALL_STATE(573)] = 15747,
  [SMALL_STATE(574)] = 15758,
  [SMALL_STATE(575)] = 15767,
  [SMALL_STATE(576)] = 15775,
  [SMALL_STATE(577)] = 15783,
  [SMALL_STATE(578)] = 15791,
  [SMALL_STATE(579)] = 15799,
  [SMALL_STATE(580)] = 15807,
  [SMALL_STATE(581)] = 15815,
  [SMALL_STATE(582)] = 15823,
  [SMALL_STATE(583)] = 15831,
  [SMALL_STATE(584)] = 15839,
  [SMALL_STATE(585)] = 15847,
  [SMALL_STATE(586)] = 15855,
  [SMALL_STATE(587)] = 15863,
  [SMALL_STATE(588)] = 15871,
  [SMALL_STATE(589)] = 15879,
  [SMALL_STATE(590)] = 15887,
  [SMALL_STATE(591)] = 15895,
  [SMALL_STATE(592)] = 15903,
  [SMALL_STATE(593)] = 15911,
  [SMALL_STATE(594)] = 15919,
  [SMALL_STATE(595)] = 15927,
  [SMALL_STATE(596)] = 15935,
  [SMALL_STATE(597)] = 15943,
  [SMALL_STATE(598)] = 15951,
  [SMALL_STATE(599)] = 15959,
  [SMALL_STATE(600)] = 15967,
  [SMALL_STATE(601)] = 15975,
  [SMALL_STATE(602)] = 15983,
  [SMALL_STATE(603)] = 15991,
  [SMALL_STATE(604)] = 15999,
  [SMALL_STATE(605)] = 16007,
  [SMALL_STATE(606)] = 16015,
  [SMALL_STATE(607)] = 16023,
  [SMALL_STATE(608)] = 16031,
  [SMALL_STATE(609)] = 16039,
  [SMALL_STATE(610)] = 16047,
  [SMALL_STATE(611)] = 16055,
  [SMALL_STATE(612)] = 16063,
  [SMALL_STATE(613)] = 16071,
  [SMALL_STATE(614)] = 16079,
  [SMALL_STATE(615)] = 16087,
  [SMALL_STATE(616)] = 16095,
  [SMALL_STATE(617)] = 16103,
  [SMALL_STATE(618)] = 16111,
  [SMALL_STATE(619)] = 16119,
  [SMALL_STATE(620)] = 16127,
  [SMALL_STATE(621)] = 16135,
  [SMALL_STATE(622)] = 16143,
  [SMALL_STATE(623)] = 16151,
  [SMALL_STATE(624)] = 16159,
  [SMALL_STATE(625)] = 16167,
  [SMALL_STATE(626)] = 16175,
  [SMALL_STATE(627)] = 16183,
  [SMALL_STATE(628)] = 16191,
  [SMALL_STATE(629)] = 16199,
  [SMALL_STATE(630)] = 16207,
  [SMALL_STATE(631)] = 16215,
  [SMALL_STATE(632)] = 16223,
  [SMALL_STATE(633)] = 16231,
  [SMALL_STATE(634)] = 16239,
  [SMALL_STATE(635)] = 16247,
  [SMALL_STATE(636)] = 16255,
  [SMALL_STATE(637)] = 16263,
  [SMALL_STATE(638)] = 16271,
  [SMALL_STATE(639)] = 16279,
  [SMALL_STATE(640)] = 16287,
  [SMALL_STATE(641)] = 16295,
  [SMALL_STATE(642)] = 16303,
  [SMALL_STATE(643)] = 16311,
  [SMALL_STATE(644)] = 16319,
  [SMALL_STATE(645)] = 16327,
  [SMALL_STATE(646)] = 16335,
  [SMALL_STATE(647)] = 16343,
  [SMALL_STATE(648)] = 16351,
  [SMALL_STATE(649)] = 16359,
  [SMALL_STATE(650)] = 16367,
  [SMALL_STATE(651)] = 16375,
  [SMALL_STATE(652)] = 16383,
  [SMALL_STATE(653)] = 16391,
  [SMALL_STATE(654)] = 16399,
  [SMALL_STATE(655)] = 16407,
  [SMALL_STATE(656)] = 16415,
  [SMALL_STATE(657)] = 16423,
  [SMALL_STATE(658)] = 16431,
  [SMALL_STATE(659)] = 16439,
  [SMALL_STATE(660)] = 16447,
  [SMALL_STATE(661)] = 16455,
  [SMALL_STATE(662)] = 16463,
  [SMALL_STATE(663)] = 16471,
  [SMALL_STATE(664)] = 16479,
  [SMALL_STATE(665)] = 16487,
  [SMALL_STATE(666)] = 16495,
  [SMALL_STATE(667)] = 16503,
  [SMALL_STATE(668)] = 16511,
  [SMALL_STATE(669)] = 16519,
  [SMALL_STATE(670)] = 16527,
  [SMALL_STATE(671)] = 16535,
  [SMALL_STATE(672)] = 16543,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 3, .production_id = 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_element, 1, .production_id = 8),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 2, .production_id = 13),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 2, .production_id = 13),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element_name, 1, .production_id = 9),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element_name, 1, .production_id = 9),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 1, .production_id = 7),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 1, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 1, .production_id = 6),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 1, .production_id = 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 2, .production_id = 12),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 2, .production_id = 12),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_number, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_number, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element_parent, 3, .production_id = 21),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element_parent, 3, .production_id = 21),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_elements, 1, .production_id = 8),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_base_elements, 1, .production_id = 8),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__remote, 2, .production_id = 20),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__remote, 2, .production_id = 20),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 2, .production_id = 15),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 2, .production_id = 15),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 3, .production_id = 19),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 3, .production_id = 19),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_variable, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_variable, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 3, .production_id = 18),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 3, .production_id = 18),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_element, 2, .production_id = 14),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_element, 2, .production_id = 14),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_call, 2, .production_id = 8),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_call, 2, .production_id = 8),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indicator_variable, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indicator_variable, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_list, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_list, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_elements, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_base_elements, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_base_elements, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_elements, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(23),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(631),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(469),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(468),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(430),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(463),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(462),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_package_repeat1, 2), SHIFT_REPEAT(241),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subtype_datatypes, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 26),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 26), SHIFT_REPEAT(234),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 26), SHIFT_REPEAT(234),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_operator_not_boolean, 2, .production_id = 26),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_char, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nchar, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_float, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rowid_datatypes_urowid, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nvarchar2, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_number, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_base_operator_not_boolean_repeat1, 2, .production_id = 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(467),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(440),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_varchar2, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compile_clause_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compile_clause_repeat1, 2), SHIFT_REPEAT(27),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compile_clause_repeat1, 2), SHIFT_REPEAT(614),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_character, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_national, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_year, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_char_nchar, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_character, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_precision_scale, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_national, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__supplied_datatypes_any_types, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_datatypes, 1, .production_id = 8),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_char, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_byte_char, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_varchar, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_varchar2, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nvarchar2, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__character_datatypes_nchar, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_number, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_datatypes_float, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_long_raw, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_and_raw_datatypes_raw, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_year, 5),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 5),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rowid_datatypes_urowid, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1, .production_id = 8),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_numeric_decimal_dec, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ansi_supported_datatypes_double_precision, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_byte_char, 4),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_datatypes_rowtype, 2, .production_id = 8),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__referenced_datatypes_type, 2, .production_id = 8),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__size_precision_scale, 5),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_timestamp, 6),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datetime_datatypes_date_interval_day, 6),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_datatypes_rowtype, 2, .production_id = 8),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_datatypes, 1, .production_id = 8),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__referenced_datatypes_type, 2, .production_id = 8),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_operator_not_boolean, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_operator_not_boolean, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_operator_boolean, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_operator_boolean, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 3, .production_id = 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_repeat1, 2, .production_id = 26),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_repeat1, 2, .production_id = 26), SHIFT_REPEAT(56),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_ref_cursor_return, 2, .production_id = 5),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_ref_cursor_return, 2, .production_id = 5),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean, 3, .production_id = 28),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean, 1, .production_id = 8),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean, 2, .production_id = 5),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 3, .production_id = 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean, 2, .production_id = 26),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 3, .production_id = 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 3, .production_id = 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 3),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 3), SHIFT(43),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 3), SHIFT(305),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compiler_parameter_clause, 3, .production_id = 10),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compiler_parameter_clause, 3, .production_id = 10),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 4, .production_id = 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 4, .production_id = 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(137),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alter_package_repeat1, 2), SHIFT_REPEAT(356),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 5, .production_id = 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 4), SHIFT(43),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 4), SHIFT(327),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2), SHIFT_REPEAT(662),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2), SHIFT_REPEAT(532),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2), SHIFT_REPEAT(660),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_package_properties_repeat1, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 2),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 2), SHIFT(43),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 2), SHIFT(336),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_procedure, 5, .production_id = 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_library, 5, .production_id = 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_properties, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_in_repeat1, 2),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_in_repeat1, 2), SHIFT_REPEAT(43),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 5, .production_id = 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_function, 4, .production_id = 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alter_package, 4, .production_id = 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_predicate, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_sub, 7, .production_id = 24),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_sub, 7, .production_id = 24),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_declaration, 4, .production_id = 11),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 4, .production_id = 11),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 17),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 17),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, .production_id = 8),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_repeat, 2, .production_id = 5),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_repeat1, 2, .production_id = 26), SHIFT_REPEAT(57),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cursor_declaration, 6, .production_id = 27),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cursor_declaration, 6, .production_id = 27),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_predicate, 6),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_sub, 6, .production_id = 24),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_sub, 6, .production_id = 24),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2), SHIFT_REPEAT(662),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2), SHIFT_REPEAT(532),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_properties_repeat1, 2), SHIFT_REPEAT(660),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_declaration, 5),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_declaration, 5),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_repeat1, 1, .production_id = 8),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_null, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_like, 2),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_declaration, 6),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_declaration, 6),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 17),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 17),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_base_case_simple, 4, .production_id = 5),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_declaration, 4),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_declaration, 4),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_record, 9, .production_id = 29),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_record, 9, .production_id = 29),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item_declaration, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_declaration, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_base_case_search, 5),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 17),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 17),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_operator, 2, .production_id = 5),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_declaration, 5, .production_id = 11),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 5, .production_id = 11),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_record, 8, .production_id = 29),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_record, 8, .production_id = 29),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_like, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_base_case_simple, 6, .production_id = 5),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_collection, 5, .production_id = 23),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_collection, 5, .production_id = 23),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition_sub, 5, .production_id = 24),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_sub, 5, .production_id = 24),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_declaration, 3, .production_id = 11),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaration, 3, .production_id = 11),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_between, 4),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_in, 5),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_between, 5),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_properties, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_base_case_search, 3),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_not_null, 3),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_elements, 2, .production_id = 8),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cursor_declaration, 5, .production_id = 25),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cursor_declaration, 5, .production_id = 25),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_base_boolean_elements, 2, .production_id = 26),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compile_clause, 5),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_properties, 1),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_editionable_noneditionable, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_properties_repeat1, 2),
  [869] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_properties_repeat1, 2), SHIFT_REPEAT(358),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_sub_repeat1, 2),
  [874] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_sub_repeat1, 2), SHIFT_REPEAT(515),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_sub_repeat1, 2), SHIFT_REPEAT(596),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reuse_settings, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_collation_clause, 3),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_null, 2),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessible_by_clause, 5),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessible_by_clause, 6),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invoker_rights_clause, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cursor_declaration_parameter, 2),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 2),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_obj, 2),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 22),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 16),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 1),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 2),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 16),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 4),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 6, .production_id = 1),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 22),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 16),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 22),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 8, .production_id = 1),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in, 1),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sharing_clause, 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_declaration, 2),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cursor_declaration_parameter, 3),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_obj, 3),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_obj, 3),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_base_boolean_repeat1, 2, .production_id = 26), SHIFT_REPEAT(58),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 7, .production_id = 2),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 2),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cursor_declaration_return_datatype, 1),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_base_case_search_repeat1, 2), SHIFT_REPEAT(48),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_base_case_search_repeat1, 2),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 9, .production_id = 1),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 16),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_range, 4),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_nested_table, 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_obj, 1),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 11, .production_id = 22),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character_set, 3),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_package, 10, .production_id = 2),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_expression, 2),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_obj, 3),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(421),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 2),
  [1107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_record_repeat1, 2), SHIFT_REPEAT(400),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_record_repeat1, 2),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_varray, 4),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2), SHIFT_REPEAT(270),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_list_repeat1, 2),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 1),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_name, 1),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_varray, 5),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_base_case_search_repeat1, 4),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cursor_declaration_parameters_repeat1, 2), SHIFT_REPEAT(396),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cursor_declaration_parameters_repeat1, 2),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(136),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2), SHIFT_REPEAT(177),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accessible_by_clause_repeat1, 2),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__schema, 2, .production_id = 3),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element_named, 3),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 2, .production_id = 5),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in_out_or_out, 4),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1, .production_id = 8),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cursor_declaration_parameter, 4),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_nested_table, 4),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in, 3),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in_out_or_out, 3),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration_element, 2),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element_positional, 1),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_element, 1),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_declaration_element_in_out_or_out, 2),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cursor_declaration_parameters, 4),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_char, 1),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cursor_declaration_parameters, 3),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cursor_declaration_return_datatype, 1, .production_id = 8),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_assoc_array, 8),
  [1378] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_assoc_array, 7, .production_id = 31),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_assoc_array, 7),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_assoc_array, 6, .production_id = 30),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_assoc_array, 6),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition_varray, 6),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
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
