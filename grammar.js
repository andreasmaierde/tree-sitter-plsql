/*-----------------------------------------------------------------------------------------------
    |@|description grammar file for Oracle pl/sql
-----------------------------------------------------------------------------------------------*/

function reservedWord(word) {
     return reserved(caseInsensitive(word.toLowerCase()))
}

function reserved(regex) {
    return token(prec(1, new RegExp(regex)))
}

function caseInsensitive(word) {
    return word.split('')
        .map(letter => `[${letter}${letter.toUpperCase()}]`)
        .join('')
}

const SEMICOLON = ';'
const POINT = '.'
const COMMA = ','
const PLUS = '+'
const MINUS = '-'
const MULTIPLICATION = '*'
const DIVISON= '/'
const EQUAL = '='
const NOT_EQUAL_1 = '<>'
const NOT_EQUAL_2 = '!='
const NOT_EQUAL_3 = '~='
const NOT_EQUAL_4 = '^='
const LESS_THEN = '<'
const LESS_THEN_EQUAL = '<='
const GREATER_THEN = '>'
const GREATER_THEN_EQUAL = '>='
const ASSIGNMENT = ':='
const ASSOCIATION = '=>'
const PERCENT = '%'
const BRACKET_LEFT = '('
const BRACKET_RIGHT = ')'
const QUOTE_SINGLE = "'"
const QUOTE_DOUBLE = '"'

module.exports = grammar({
    name: 'plsql',
    conflicts: $ => [
        [$.expression],
        [$._expression_boolean],
        [$.expression_boolean_ref],
        [$.expression_boolean_ref,$.prc_fnc_call],
        [$._other_boolean_form_expression_in],
        [$._other_boolean_form_expression_between],
        [$._other_boolean_form_expression,$._other_boolean_form_expression_in],
        [$._other_boolean_form_expression,$._other_boolean_form_expression_relational_operation],
        [$._other_boolean_form_expression,$._other_boolean_form_expression_between],
        [$.conditional_predicate],
    ],
    extras: $ => [
        $.comment_sl,
        $.comment_ml,
        /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/,
    ],
    rules: {
        source_file: $ => repeat($._element),
        _element: $ => choice(
            $.sql_statement,
            $.comment_ml,
            $.comment_sl,
        ),
        sql_statement: $ => seq(
            choice(
                $._ddl_statement,
                // $._dml_statement,
            ),
            optional(SEMICOLON),
        ),
        _ddl_statement: $ => choice(
             $._alter_statement,
             $._create_statement,
            // $._drop_statement,
        ),
        _create_statement: $ => seq(
            choice(
                // $.create_table,
                $.create_package,
            ),
        ),
        create_package: $ => seq(
            $.create_obj,
            optional($.editionable_noneditionable),
            $.kw_package,
            optional($._schema),
            field("obj_name", $.identifier),
            optional($.sharing_clause),
            optional($.package_properties),
            $._is_as,
            repeat1($._package_item_list),
            $.end_obj,
            optional(DIVISON),
        ),
        package_properties: $ => repeat1(
            $._package_property_element,
        ),
        _package_property_element: $ => choice(
            $.default_collation_clause,
            $.invoker_rights_clause,
            $.accessible_by_clause,
        ),
        _alter_statement: $ => seq(
            choice(
                // $.alter_table,
                // $.alter_view,
                $.alter_package,
                $.alter_function,
                $.alter_procedure,
                $.alter_library,
            ),
        ),
        alter_package: $ => seq(
            $.kw_alter,
            $.kw_package,
            optional($._schema),
            field("obj_name", $.identifier),
            repeat(
                choice(
                    $.compile_clause,
                    $.editionable_noneditionable,
                ),
            ),
        ),
        alter_procedure: $ => seq(
            $.kw_alter,
            $.kw_procedure,
            optional($._schema),
            field("obj_name", $.identifier),
            repeat(
                choice(
                    $.compile_clause,
                    $.editionable_noneditionable,
                ),
            ),
        ),
        alter_function: $ => seq(
            $.kw_alter,
            $.kw_function,
            optional($._schema),
            field("obj_name", $.identifier),
            repeat(
                choice(
                    $.compile_clause,
                    $.editionable_noneditionable,
                ),
            ),
        ),
        alter_library: $ => seq(
            $.kw_alter,
            $.kw_library,
            optional($._schema),
            field("obj_name", $.identifier),
            repeat(
                choice(
                    $.compile_clause,
                    $.editionable_noneditionable,
                ),
            ),

        ),
        compile_clause: $ => seq(
            $.kw_compile,
            optional($.kw_debug),
            optional(
                choice(
                    $.kw_package,
                    $.kw_specification,
                    $.kw_body,
                ),
            ),
            repeat($.compiler_parameter_clause),
            optional($.reuse_settings),
        ),
        compiler_parameter_clause: $ => seq(
            field("compile_parameter_name", $.identifier),
            EQUAL,
            field("compile_parameter_value", $._literal),
        ),
        editionable_noneditionable: $ => choice(
            $.kw_editionable,
            $.kw_noneditionable,
        ),
        sharing_clause: $ => choice(
            $.kw_metadata,
            $.kw_none,
        ),
        default_collation_clause: $ => seq(
            $.kw_default,
            $.kw_collation,
            choice(
                $.kw_using_nls_comp,
            )
        ),
        invoker_rights_clause: $ => seq(
            $.kw_authid,
            choice(
                $.kw_current_user,
                $.kw_definer,
            )
        ),
        accessible_by_clause: $ => seq(
            $.kw_accessible,
            $.kw_by,
            BRACKET_LEFT,
            repeat1(
                $.accessor,
            ),
            BRACKET_RIGHT,
        ),
        accessor: $ => seq(
            optional($.unit_kind),
            optional($._schema),
            $.identifier,
        ),
        unit_kind: $ => choice(
            $.kw_function,
            $.kw_procedure,
            $.kw_package,
            $.kw_trigger,
            $.kw_type,
        ),
        reuse_settings: $ => seq(
            $.kw_reuse,
            $.kw_settings,
        ),
        _schema: $ => seq(
            field("schema_name",$.identifier),
            POINT,
        ),
        byte_char: $ => choice(
            $.kw_byte,
            $.kw_char,
        ),
        _is_as: $ => choice(
            $.kw_is,
            $.kw_as,
        ),
        end_obj: $ => seq(
            $.kw_end,
            optional($.identifier),
            SEMICOLON,
        ),
        _package_item_list: $ => choice(
            $.function_declaration,
            $.procedure_declaration,
            //$.cursor_declaration,
            //$.type_definition,
            //$.item_declaration,
        ),
        create_obj: $ => seq(
            $.kw_create,
            optional(
                seq(
                    $.kw_or,
                    $.kw_replace,
                ),
            ),
        ),
        procedure_declaration: $ => seq(
            $.kw_procedure,
            field("prc_name", $.identifier),
            optional($.parameter_declaration),
            optional($.procedure_properties),
            SEMICOLON,
        ),
        procedure_properties: $ => repeat1(
            $._procedure_property_element,
        ),
        _procedure_property_element: $ => choice(
            $.default_collation_clause,
            $.invoker_rights_clause,
            $.accessible_by_clause,
        ),
        function_declaration: $ => seq(
            $.kw_function,
            field("fnc_name", $.identifier),
            optional($.parameter_declaration),
            $.return_declaration,
            optional($.function_properties),
            SEMICOLON,
        ),
        function_properties: $ => repeat1(
            $._function_property_element,
        ),
        _function_property_element: $ => choice(
            $.kw_deterministic,
            $.kw_pipelined,
            $.kw_parallel_enable,
            $.kw_result_cache,
        ),
        _is_null_or_is_not_null: $ => choice(
            $.is_null,
            $.is_not_null,
        ),
        is_null: $ => seq(
            $.kw_is,
            $.kw_null,
        ),
        is_not_null: $ => seq(
            $.kw_is,
            $.kw_not,
            $.kw_null,
        ),
        expression: $ => seq(
            optional(BRACKET_LEFT),
            $._expression_elements,
            optional(BRACKET_RIGHT),
        ),
        _expression_elements: $ => choice(
            $._expression_boolean,
            $._expression_numeric,
        ),
        _expression_character: $ => seq(
           //TODO
        ),
        _expression_numeric: $ => seq(
          $._expression_numeric_sub,
          repeat(
              seq(
                  $.relational_operator_compute,
                  $._expression_numeric_sub,
              ),
          ),
        ),
        _expression_numeric_sub: $ => seq(
            choice(
                $.literal_number,
            ),
        ),
        _expression_boolean: $ => seq(
            optional($.kw_not),
            $._expression_boolean_elements,
            repeat(
                seq(
                    choice(
                        $.kw_and,
                        $.kw_or,
                    ),
                    $._expression_boolean_elements,
                ),
            ),
        ),
        _expression_boolean_elements: $ => choice(
            $._literal_boolean,
            $.expression_boolean_ref,
            $.conditional_predicate,
            $.prc_fnc_call,
            $._other_boolean_form,
        ),
        expression_boolean_ref: $ => seq(
            optional(
                seq(
                    field("ref_obj_name",$.identifier),
                    POINT,
                ),
            ),
            field("ref_element_name",$.identifier),
            optional($.parameter),
        ),
        _other_boolean_form: $ => choice(
            $._other_boolean_form_collection,
            $._other_boolean_form_expression,
            $._other_boolean_form_named_cursor,
        ),
        _other_boolean_form_collection: $ => seq(
            $.identifier,
            POINT,
            $.kw_exists,
            BRACKET_LEFT,
            $._number,
            BRACKET_RIGHT,
        ),
        _other_boolean_form_expression: $ => seq(
            $.expression,
            choice(
                $._other_boolean_form_expression_is,
                $._other_boolean_form_expression_between,
                $._other_boolean_form_expression_in,
                $._other_boolean_form_expression_like,
                $._other_boolean_form_expression_relational_operation,
            ),
        ),
        _other_boolean_form_named_cursor: $ => seq(
            $.identifier,
            PERCENT,
            choice(
                $.kw_found,
                $.kw_isopen,
                $.kw_notfound,
            ),
        ),
        _other_boolean_form_expression_is: $ => choice(
            $._is_null_or_is_not_null,
        ),
        _other_boolean_form_expression_between: $ => seq(
            optional(
                $.kw_not,
            ),
            $.kw_between,
            $.expression,
            $.kw_and,
            $.expression,
        ),
        _other_boolean_form_expression_in: $ => seq(
            optional(
                $.kw_not,
            ),
            $.kw_in,
            repeat1(
                seq(
                    $.expression,
                    optional(
                        COMMA,
                    ),
                ),
            ),
        ),
        _other_boolean_form_expression_like: $ => seq(
            optional(
                $.kw_not,
            ),
            $.kw_like,
            $.literal_string,
        ),
        _other_boolean_form_expression_relational_operation: $ => seq(
            $.relational_operator,
            $.expression,
        ),
        conditional_predicate: $ => choice(
            $.kw_inserting,
            $.kw_deleting,
            seq(
                $.kw_updating,
                optional(
                    seq(
                        BRACKET_LEFT,
                        QUOTE_SINGLE,
                        $.identifier,
                        QUOTE_SINGLE,
                        BRACKET_RIGHT,
                    ),
                ),
            ),
        ),
        return_declaration: $ => seq(
            $.kw_return,
            $.datatype,
        ),
        datatype: $ => choice(
            $._character_datatypes,
            $._number_datatypes,
            $._long_and_raw_datatypes,
            $._datetime_datatypes,
            $._large_object_datatypes,
            $._rowid_datatypes,
            $._logical_datatypes,
            $._referenced_datatypes,
            $._supplied_datatypes_any_types,
            $._supplied_datatypes_xml_types,
            $._supplied_datatypes_spatial_types,
            $._object_datatypes,
            $._subtype_datatypes,
            // TODO user_defined_types
        ),
        _character_datatypes: $ => choice(
            $._character_datatypes_char,
            $._character_datatypes_varchar2,
            $._character_datatypes_nchar,
            $._character_datatypes_nvarchar2,
            $._ansi_supported_datatypes_character,
            $._ansi_supported_datatypes_char_nchar,
            $._ansi_supported_datatypes_varchar,
            $._ansi_supported_datatypes_national,
        ),
        _character_datatypes_char: $ => seq(
            $.kw_char,
            optional($._size_byte_char),
        ),
        _character_datatypes_varchar2: $ => seq(
            $.kw_varchar2,
            optional($._size_byte_char),
        ),
        _character_datatypes_nchar: $ => seq(
            $.kw_nchar,
            optional($._size),
        ),
        _character_datatypes_nvarchar2: $ => seq(
            $.kw_nvarchar2,
            optional($._size),
        ),
        _number_datatypes: $ => choice(
            $._number_datatypes_number,
            $._number_datatypes_float,
            $._number_datatypes_keyword,
            $._ansi_supported_datatypes_numeric_decimal_dec,
            $._ansi_supported_datatypes_double_precision,
        ),
        _number_datatypes_keyword: $ => choice(
            $.kw_int,
            $.kw_smallint,
            $.kw_real,
            $.kw_binary_float,
            $.kw_binary_double,
            $.kw_simple_float,
            $.kw_simple_double,
            $.kw_binary_integer,
            $.kw_pls_integer,
            $.kw_natural,
            $.kw_naturaln,
            $.kw_positive,
            $.kw_positiven,
            $.kw_signtype,
            $.kw_simple_integer,
            $.kw_integer,
        ),
        _number_datatypes_number: $ => seq(
            $.kw_number,
            optional($._size_precision_scale),
        ),
        _number_datatypes_float: $ => seq(
            $.kw_float,
            optional($._size),
        ),
        _long_and_raw_datatypes: $ => choice(
            $._long_and_raw_datatypes_long_raw,
            $._long_and_raw_datatypes_raw,
        ),
        _long_and_raw_datatypes_long_raw: $ => seq(
            $.kw_long,
            optional($.kw_raw),
        ),
        _long_and_raw_datatypes_raw: $ => seq(
            $.kw_raw,
            $._size,
        ),
        _datetime_datatypes: $ => choice(
            $._datetime_datatypes_keyword,
            $._datetime_datatypes_date_timestamp,
            $._datetime_datatypes_date_interval_year,
            $._datetime_datatypes_date_interval_day,
        ),
        _datetime_datatypes_keyword: $ => choice(
            $.kw_date,
        ),
        _datetime_datatypes_date_timestamp: $ => seq(
            $.kw_timestamp,
            optional($._size),
            optional(
                seq(
                    $.kw_with,
                    optional(
                        $.kw_local,
                    ),
                    $.kw_time,
                    $.kw_zone,
                ),
            ),
        ),
        _datetime_datatypes_date_interval_year: $ => seq(
            $.kw_interval,
            $.kw_year,
            optional($._size),
            $.kw_to,
            $.kw_month,
        ),
        _datetime_datatypes_date_interval_day: $ => seq(
            $.kw_interval,
            $.kw_day,
            optional($._size),
            $.kw_to,
            $.kw_second,
            optional($._size),
        ),
        _large_object_datatypes: $ => choice(
            $.kw_blob,
            $.kw_clob,
            $.kw_nclob,
            $.kw_bfile,
        ),
        _rowid_datatypes: $ => choice(
            $.kw_rowid,
            $._rowid_datatypes_urowid,
        ),
        _referenced_datatypes: $ => choice(
            $._referenced_datatypes_type,
            $._referenced_datatypes_rowtype,
        ),
        _referenced_datatypes_type: $ => seq(
            $.identifier,
            POINT,
            $.identifier,
            $.kw_datatype_type,
            // PERCENT,
            // $.kw_type,
        ),
        _referenced_datatypes_rowtype: $ => seq(
            $.identifier,
            $.kw_datatype_type,
        ),
        _logical_datatypes: $ => choice(
            $.kw_boolean,
        ),
        _subtype_datatypes: $ => choice(
            $.identifier,
        ),
        _rowid_datatypes_urowid: $ => seq(
            $.kw_urowid,
            optional($._size),
        ),
        _ansi_supported_datatypes_character: $ => seq(
            $.kw_character,
            optional($.kw_varying),
            $._size,
        ),
        _ansi_supported_datatypes_char_nchar: $ => seq(
            choice(
                $.kw_char,
                $.kw_nchar,
            ),
            $.kw_varying,
            $._size,
        ),
        _ansi_supported_datatypes_varchar: $ => seq(
            $.kw_varchar,
            $._size,
        ),
        _ansi_supported_datatypes_national: $ => seq(
            $.kw_varchar,
            choice(
                $.kw_char,
                $.kw_character,
            ),
            optional($.kw_varying),
            $._size,
        ),
        _ansi_supported_datatypes_numeric_decimal_dec: $ => seq(
            choice(
                $.kw_numeric,
                $.kw_decimal,
                $.kw_dec,
            ),
            optional($._size_precision_scale),
        ),
        _ansi_supported_datatypes_float: $ => seq(
            $.kw_float,
            optional($._size),
        ),
        _ansi_supported_datatypes_double_precision: $ => seq(
            $.kw_double,
            $.kw_precision,
        ),
        _supplied_datatypes_any_types: $ => seq(
            $.kw_sys,
            POINT,
            choice(
                $.kw_anydata,
                $.kw_anytype,
                $.kw_anydataset,
            ),
        ),
        _supplied_datatypes_xml_types: $ => choice(
            $.kw_xmltype,
            $.kw_uritype,
        ),
        _supplied_datatypes_spatial_types: $ => choice(
            $.kw_sdo_geometry,
            $.kw_sdo_topo_geometry,
            $.kw_sdo_georaster,
        ),
        _object_datatypes: $ => choice(
            $.kw_json_element_t,
            $.kw_json_array_t,
            $.kw_json_object_t,
            $.kw_json_scalar_t,
            $.kw_json_key_list,
        ),
        prc_fnc_call: $ => seq(
            optional(
                seq(
                    field("package_name",$.identifier),
                    POINT,
                ),
            ),
            field("prc_fnc_name",$.identifier),
            optional($.parameter),
            optional(SEMICOLON),
        ),
        parameter_declaration: $ => seq(
            BRACKET_LEFT,
            repeat($.parameter_declaration_element),
            BRACKET_RIGHT,
        ),
        parameter_declaration_element: $ => seq(
            $.identifier,
            choice(
                $._parameter_declaration_element_in,
                $._parameter_declaration_element_in_out_or_out,
            ),
            optional(COMMA),
        ),
        _parameter_declaration_element_in: $ => seq(
            optional($.kw_in),
            $.datatype,
            optional($.default_expression),
        ),
        _parameter_declaration_element_in_out_or_out: $ => seq(
            optional($.kw_in),
            $.kw_out,
            optional($.kw_nocopy),
            $.datatype,
        ),
        default_expression: $ => seq(
            choice(
                $.kw_default,
                ASSIGNMENT,
            ),
            $.expression,
        ),
        parameter: $ => seq(
            BRACKET_LEFT,
            repeat($.parameter_element),
            BRACKET_RIGHT,
        ),
        parameter_element: $ => seq(
            choice(
                $.parameter_element_positional,
                $.parameter_element_named,
            ),
            optional(COMMA),
        ),
        parameter_element_positional: $ => seq(
            $.parameter_value,
        ),
        parameter_element_named: $ => seq(
            $.parameter_name,
            ASSOCIATION,
            $.parameter_value,
        ),
        parameter_name: $ => choice(
            $.identifier,
        ),
        parameter_value: $ => choice(
            $.identifier,
            $._literal,
        ),
        _size: $ => seq(
            BRACKET_LEFT,
            $._number,
            BRACKET_RIGHT,
        ),
        _size_byte_char: $ => seq(
            BRACKET_LEFT,
            $._number,
            optional($.byte_char),
            BRACKET_RIGHT,
        ),
        _size_precision_scale: $ => seq(
            BRACKET_LEFT,
            $._precision,
            optional(
                seq(
                    COMMA,
                    $._scale,
                ),

            ),
            BRACKET_RIGHT,
        ),
        _precision: $ => seq(
            $._number,
        ),
        _scale: $ => choice(
            $._number,
        ),
        relational_operator: $ => choice(
            EQUAL,
            LESS_THEN,
            LESS_THEN_EQUAL,
            GREATER_THEN,
            GREATER_THEN_EQUAL,
            $._relational_operator_not_equal,
        ),
        _relational_operator_not_equal: $ => choice(
            NOT_EQUAL_1,
            NOT_EQUAL_2,
            NOT_EQUAL_3,
            NOT_EQUAL_4,
        ),
        _sign_pos_neg: $ => choice(
            PLUS,
            MINUS,
        ),
        relational_operator_compute: $ => choice(
            PLUS,
            MINUS,
            MULTIPLICATION,
            DIVISON,
        ),
        identifier: $ => choice(
            $._unquoted_identifier,
            $._quoted_identifier
        ),
        _unquoted_identifier: $ => /[a-zA-Z][a-zA-Z0-9_$#]*/,
        _quoted_identifier: $ => choice(
            seq('"', field("name", /(""|[^"])*/), '"'), // ANSI QUOTES
        ),
        _literal: $ => choice(
            $.literal_number,
            $.literal_string,
            $._literal_boolean,
        ),
        _literal_boolean: $ => choice(
            $.kw_true,
            $.kw_false,
            $.kw_null,
        ),
        literal_number: $ => choice(
            $._number,
            $._float,
        ),
        literal_string: $ => choice(
            $._single_quote_string,
        ),
        _single_quote_string: $ => /'([^']''|''[^']|[^'])*'/,
        _number: $ => /\d+/,
        _float: $ => /\d*[.]\d+/,
        comment_ml: $ => token(
            seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
        ),
        comment_sl: $ => token(
            seq("--", /.*/)
        ),
        kw_create: _ => reservedWord("create"),
        kw_alter: _ => reservedWord("alter"),
        kw_package: _ => reservedWord("package"),
        kw_function: _ => reservedWord("function"),
        kw_procedure: _ => reservedWord("procedure"),
        kw_trigger: _ => reservedWord("trigger"),
        kw_type: _ => reservedWord("type"),
        kw_datatype_type: _ => reservedWord("%type"),
        kw_datatype_rowtype: _ => reservedWord("%rowtype"),
        kw_library: _ => reservedWord("library"),
        kw_true: _ => reservedWord("true"),
        kw_false: _ => reservedWord("false"),
        kw_null: _ => reservedWord("null"),
        kw_not: _ => reservedWord("not"),
        kw_row: _ => reservedWord("row"),
        kw_compile: _ => reservedWord("compile"),
        kw_debug: _ => reservedWord("debug"),
        kw_specification: _ => reservedWord("specification"),
        kw_body: _ => reservedWord("body"),
        kw_declare: _ => reservedWord("declare"),
        kw_begin: _ => reservedWord("begin"),
        kw_end: _ => reservedWord("end"),
        kw_or: _ => reservedWord("or"),
        kw_and: _ => reservedWord("and"),
        kw_replace: _ => reservedWord("replace"),
        kw_editionable: _ => reservedWord("editionable"),
        kw_noneditionable: _ => reservedWord("noneditionable"),
        kw_metadata: _ => reservedWord("metadata"),
        kw_none: _ => reservedWord("none"),
        kw_default: _ => reservedWord("default"),
        kw_collation: _ => reservedWord("collation"),
        kw_using_nls_comp: _ => reservedWord("using_nls_comp"),
        kw_authid: _ => reservedWord("authid"),
        kw_current_user: _ => reservedWord("current_user"),
        kw_definer: _ => reservedWord("definer"),
        kw_accessible: _ => reservedWord("accessible"),
        kw_by: _ => reservedWord("by"),
        kw_reuse: _ => reservedWord("reuse"),
        kw_settings: _ => reservedWord("settings"),
        kw_byte: _ => reservedWord("byte"),
        kw_char: _ => reservedWord("char"),
        kw_is: _ => reservedWord("is"),
        kw_as: _ => reservedWord("as"),
        kw_deterministic: _ => reservedWord("deterministic"),
        kw_pipelined: _ => reservedWord("pipelined"),
        kw_parallel_enable: _ => reservedWord("parallel_enable"),
        kw_result_cache: _ => reservedWord("result_cache"),
        kw_exists: _ => reservedWord("exists"),
        kw_between: _ => reservedWord("between"),
        kw_found: _ => reservedWord("found"),
        kw_isopen: _ => reservedWord("isopen"),
        kw_notfound: _ => reservedWord("notfound"),
        kw_in: _ => reservedWord("in"),
        kw_out: _ => reservedWord("out"),
        kw_nocopy: _ => reservedWord("nocopy"),
        kw_like: _ => reservedWord("like"),
        kw_inserting: _ => reservedWord("inserting"),
        kw_deleting: _ => reservedWord("deleting"),
        kw_updating: _ => reservedWord("updating"),
        kw_return: _ => reservedWord("return"),
        kw_varchar: _ => reservedWord("varchar"),
        kw_varchar2: _ => reservedWord("varchar2"),
        kw_nvarchar2: _ => reservedWord("nvarchar2"),
        kw_nchar: _ => reservedWord("nchar"),
        kw_int: _ => reservedWord("int"),
        kw_smallint: _ => reservedWord("smallint"),
        kw_real: _ => reservedWord("real"),
        kw_binary_float: _ => reservedWord("binary_float"),
        kw_binary_double: _ => reservedWord("binary_double"),
        kw_simple_float: _ => reservedWord("simple_float"),
        kw_simple_double: _ => reservedWord("simple_double"),
        kw_binary_integer: _ => reservedWord("binary_integer"),
        kw_pls_integer: _ => reservedWord("pls_integer"),
        kw_natural: _ => reservedWord("natural"),
        kw_naturaln: _ => reservedWord("naturaln"),
        kw_positive: _ => reservedWord("positive"),
        kw_positiven: _ => reservedWord("positiven"),
        kw_signtype: _ => reservedWord("signtype"),
        kw_simple_integer: _ => reservedWord("simple_integer"),
        kw_integer: _ => reservedWord("integer"),
        kw_number: _ => reservedWord("number"),
        kw_float: _ => reservedWord("float"),
        kw_long: _ => reservedWord("long"),
        kw_raw: _ => reservedWord("raw"),
        kw_date: _ => reservedWord("date"),
        kw_timestamp: _ => reservedWord("timestamp"),
        kw_with: _ => reservedWord("with"),
        kw_local: _ => reservedWord("local"),
        kw_time: _ => reservedWord("time"),
        kw_zone: _ => reservedWord("zone"),
        kw_interval: _ => reservedWord("interval"),
        kw_year: _ => reservedWord("year"),
        kw_month: _ => reservedWord("month"),
        kw_day: _ => reservedWord("day"),
        kw_minute: _ => reservedWord("minute"),
        kw_second: _ => reservedWord("second"),
        kw_to: _ => reservedWord("to"),
        kw_blob: _ => reservedWord("blob"),
        kw_clob: _ => reservedWord("clob"),
        kw_nclob: _ => reservedWord("nclob"),
        kw_bfile: _ => reservedWord("bfile"),
        kw_rowid: _ => reservedWord("rowid"),
        kw_urowid: _ => reservedWord("urowid"),
        kw_boolean: _ => reservedWord("boolean"),
        kw_character: _ => reservedWord("character"),
        kw_varying: _ => reservedWord("varying"),
        kw_numeric: _ => reservedWord("numeric"),
        kw_decimal: _ => reservedWord("decimal"),
        kw_dec: _ => reservedWord("dec"),
        kw_double: _ => reservedWord("double"),
        kw_precision: _ => reservedWord("precision"),
        kw_sys: _ => reservedWord("sys"),
        kw_anydata: _ => reservedWord("anydata"),
        kw_anytype: _ => reservedWord("anytype"),
        kw_anydataset: _ => reservedWord("anydataset"),
        kw_xmltype: _ => reservedWord("xmltype"),
        kw_uritype: _ => reservedWord("uritype"),
        kw_sdo_geometry: _ => reservedWord("sdo_geometry"),
        kw_sdo_topo_geometry: _ => reservedWord("sdo_topo_geometry"),
        kw_sdo_georaster: _ => reservedWord("sdo_georaster"),
        kw_json_element_t: _ => reservedWord("json_element_t"),
        kw_json_array_t: _ => reservedWord("json_array_t"),
        kw_json_object_t: _ => reservedWord("json_object_t"),
        kw_json_scalar_t: _ => reservedWord("json_scalar_t"),
        kw_json_key_list: _ => reservedWord("json_key_list"),
    },
});

