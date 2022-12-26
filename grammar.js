/*-----------------------------------------------------------------------------------------------
    |@|description grammar file for Oracle pl/sql
-----------------------------------------------------------------------------------------------*/

function reservedWord(word) {
    return alias(reserved(caseInsensitive(word)), word)
}

function reserved(regex) {
    return token(prec(1, new RegExp(regex)))
}

function caseInsensitive(word) {
    return word.split('')
        .map(letter => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
        .join('')
}

const SEMICOLON = ';'
const POINT = '.'
const COMMA = ','
const MINUS = '-'
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
    ],
    extras: $ => [
        $.comment,
        /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/,
    ],
    rules: {
        source_file: $ => repeat($._element),
        _element: $ => choice(
            $.sql_statement,
            $.comment,
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
            reservedWord("create"),
            optional(
                seq(
                    reservedWord("or"),
                    reservedWord("replace"),
                ),
            ),
            optional($.editionable_noneditionable),
            reservedWord("package"),
            optional($._schema),
            field("obj_name", $.identifier),
            optional($.sharing_clause),
            repeat(
                choice(
                    $.default_collation_clause,
                    $.invoker_rights_clause,
                    $.accessible_by_clause,
                ),
            ),
            $.is_as,
            repeat1(
                $.package_item_list,
            ),
            $.end_obj,
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
            reservedWord("alter"),
            reservedWord("package"),
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
            reservedWord("alter"),
            reservedWord("procedure"),
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
            reservedWord("alter"),
            reservedWord("function"),
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
            reservedWord("alter"),
            reservedWord("library"),
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
            reservedWord("compile"),
            optional(reservedWord("debug")),
            optional(
                choice(
                    reservedWord("package"),
                    reservedWord("specification"),
                    reservedWord("body"),
                ),
            ),
            repeat($._compiler_parameter_clause),
            optional($.reuse_settings),
        ),
        _compiler_parameter_clause: $ => seq(
            field("compile_parameter_name", $.identifier),
            EQUAL,
            field("compile_parameter_value", $._literal),
        ),
        editionable_noneditionable: $ => choice(
            reservedWord("editionable"),
            reservedWord("noneditionable"),
        ),
        sharing_clause: $ => choice(
            reservedWord("metadata"),
            reservedWord("none"),
        ),
        default_collation_clause: $ => seq(
            reservedWord("default"),
            reservedWord("collation"),
            choice(
                reservedWord("using_nls_comp"),
            )
        ),
        invoker_rights_clause: $ => seq(
            reservedWord("authid"),
            choice(
                reservedWord("current_user"),
                reservedWord("definer"),
            )
        ),
        accessible_by_clause: $ => seq(
            reservedWord("accessible"),
            reservedWord("by"),
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
            reservedWord("function"),
            reservedWord("procedure"),
            reservedWord("package"),
            reservedWord("trigger"),
            reservedWord("type"),
        ),
        reuse_settings: $ => seq(
            reservedWord("reuse"),
            reservedWord("settings"),
        ),
        _schema: $ => seq(
            field("schema_name",$.identifier),
            POINT,
        ),
        byte_char: $ => choice(
            reservedWord("byte"),
            reservedWord("char"),
        ),
        is_as: $ => choice(
            reservedWord("is"),
            reservedWord("as"),
        ),
        end_obj: $ => seq(
            reservedWord("end"),
            optional($.identifier),
            SEMICOLON,
        ),
        package_item_list: $ => choice(
            //$.package_function_declaration,
            //$.package_procedure_declaration,
            //$.cursor_declaration,
            //$.type_definition,
            //$.item_declaration,
        ),
        _is_null_or_is_not_null: $ => choice(
            $.is_null,
            $.is_not_null,
        ),
        is_null: $ => seq(
            reservedWord("is"),
            reservedWord("null"),
        ),
        is_not_null: $ => seq(
            reservedWord("is"),
            reservedWord("not"),
            reservedWord("null"),
        ),
        expression: $ => seq(
            optional(BRACKET_LEFT),
            $._expression_elements,
            optional(BRACKET_RIGHT),
        ),
        _expression_elements: $ => seq(
            $._expression_boolean,
        ),
        _expression_boolean: $ => seq(
            reservedWord("todo"),
            //optional(reservedWord("not")),
            //$.expression_boolean_elements,
        ),
        datatype: $ => choice(
            $.character_datatypes,
            $.number_datatypes,
            $.long_and_raw_datatypes,
            $.datetime_datatypes,
            $.large_object_datatypes,
            $.rowid_datatypes,
            $.logical_datatypes,
            $.referenced_datatypes,
            $.supplied_datatypes_any_types,
            $.supplied_datatypes_xml_types,
            $.supplied_datatypes_spatial_types,
            $.object_datatypes,
            $.subtype_datatypes,
            // TODO user_defined_types
        ),
        character_datatypes: $ => choice(
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
            reservedWord("char"),
            optional($._size_byte_char),
        ),
        _character_datatypes_varchar2: $ => seq(
            reservedWord("varchar2"),
            $._size_byte_char,
        ),
        _character_datatypes_nchar: $ => seq(
            reservedWord("nchar"),
            optional($._size),
        ),
        _character_datatypes_nvarchar2: $ => seq(
            reservedWord("nvarchar2"),
            $._size,
        ),
        number_datatypes: $ => choice(
            $._number_datatypes_number,
            $._number_datatypes_float,
            $._number_datatypes_keyword,
            $._ansi_supported_datatypes_numeric_decimal_dec,
            $._ansi_supported_datatypes_double_precision,
        ),
        _number_datatypes_keyword: $ => choice(
            reservedWord("int"),
            reservedWord("smallint"),
            reservedWord("real"),
            reservedWord("binary_float"),
            reservedWord("binary_double"),
            reservedWord("simple_float"),
            reservedWord("simple_double"),
            reservedWord("binary_interger"),
            reservedWord("pls_interger"),
            reservedWord("natural"),
            reservedWord("naturaln"),
            reservedWord("positive"),
            reservedWord("positiven"),
            reservedWord("signtype"),
            reservedWord("simple_interger"),
            reservedWord("integer"),
        ),
        _number_datatypes_number: $ => seq(
            reservedWord("number"),
            optional($._size_precision_scale),
        ),
        _number_datatypes_float: $ => seq(
            reservedWord("float"),
            optional($._size),
        ),
        long_and_raw_datatypes: $ => choice(
            $._long_and_raw_datatypes_long_raw,
            $._long_and_raw_datatypes_raw,
        ),
        _long_and_raw_datatypes_long_raw: $ => seq(
            reservedWord("long"),
            optional(reservedWord("raw")),
        ),
        _long_and_raw_datatypes_raw: $ => seq(
            reservedWord("raw"),
            $._size,
        ),
        datetime_datatypes: $ => choice(
            $._datetime_datatypes_keyword,
            $._datetime_datatypes_date_timestamp,
            $._datetime_datatypes_date_interval_year,
            $._datetime_datatypes_date_interval_day,
        ),
        _datetime_datatypes_keyword: $ => choice(
            reservedWord("date"),
        ),
        _datetime_datatypes_date_timestamp: $ => seq(
            reservedWord("timestamp"),
            optional($._size),
            optional(
                seq(
                    reservedWord("with"),
                    optional(
                        reservedWord("local"),
                    ),
                    reservedWord("time"),
                    reservedWord("zone"),
                ),
            ),
        ),
        _datetime_datatypes_date_interval_year: $ => seq(
            reservedWord("interval"),
            reservedWord("year"),
            optional($._size),
            reservedWord("to"),
            reservedWord("month"),
        ),
        _datetime_datatypes_date_interval_day: $ => seq(
            reservedWord("interval"),
            reservedWord("day"),
            optional($._size),
            reservedWord("to"),
            reservedWord("second"),
            optional($._size),
        ),
        large_object_datatypes: $ => choice(
            reservedWord("blob"),
            reservedWord("clob"),
            reservedWord("nclob"),
            reservedWord("bfile"),
        ),
        rowid_datatypes: $ => choice(
            reservedWord("rowid"),
            $._rowid_datatypes_urowid,
        ),
        referenced_datatypes: $ => choice(
            $._referenced_datatypes_type,
            $._referenced_datatypes_rowtype,
        ),
        _referenced_datatypes_type: $ => seq(
            $.identifier,
            optional(
                seq(
                    POINT,
                    $.identifier,),
            ),
            PERCENT,
            reservedWord("type"),
        ),
        _referenced_datatypes_rowtype: $ => seq(
            $.identifier,
            PERCENT,
            reservedWord("rowtype"),
        ),
        logical_datatypes: $ => choice(
            reservedWord("boolean"),
        ),
        subtype_datatypes: $ => choice(
            $.identifier,
        ),
        _rowid_datatypes_urowid: $ => seq(
            reservedWord("urowid"),
            optional($._size),
        ),
        _ansi_supported_datatypes_character: $ => seq(
            reservedWord("character"),
            optional(reservedWord("varying")),
            $._size,
        ),
        _ansi_supported_datatypes_char_nchar: $ => seq(
            choice(
                reservedWord("char"),
                reservedWord("nchar"),
            ),
            reservedWord("varying"),
            $._size,
        ),
        _ansi_supported_datatypes_varchar: $ => seq(
            reservedWord("varchar"),
            $._size,
        ),
        _ansi_supported_datatypes_national: $ => seq(
            reservedWord("varchar"),
            choice(
                reservedWord("character"),
                reservedWord("char"),
            ),
            optional(reservedWord("varying")),
            $._size,
        ),
        _ansi_supported_datatypes_numeric_decimal_dec: $ => seq(
            choice(
                reservedWord("numeric"),
                reservedWord("decimal"),
                reservedWord("dec"),
            ),
            optional($._size_precision_scale),
        ),
        _ansi_supported_datatypes_float: $ => seq(
            reservedWord("float"),
            optional($._size),
        ),
        _ansi_supported_datatypes_double_precision: $ => seq(
            reservedWord("double"),
            reservedWord("precision"),
        ),
        supplied_datatypes_any_types: $ => seq(
            reservedWord("sys"),
            POINT,
            choice(
                reservedWord("anydata"),
                reservedWord("anytype"),
                reservedWord("anydataset"),
            ),
        ),
        supplied_datatypes_xml_types: $ => choice(
            reservedWord("xmltype"),
            reservedWord("uritype"),
        ),
        supplied_datatypes_spatial_types: $ => choice(
            reservedWord("sdo_geometry"),
            reservedWord("sdo_topo_geometry"),
            reservedWord("sdo_georaster"),
        ),
        object_datatypes: $ => choice(
            reservedWord("json_element_t"),
            reservedWord("json_array_t"),
            reservedWord("json_object_t"),
            reservedWord("json_scalar_t"),
            reservedWord("json_key_list"),
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
            SEMICOLON,
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
            $.literal_boolean,
        ),
        literal_boolean: $ => choice(
            reservedWord("true"),
            reservedWord("false"),
            reservedWord("null"),
        ),
        literal_number: $ => choice(
            $._number,
        ),
        literal_string: $ => choice(
            $._single_quote_string,
        ),
        _single_quote_string: $ => /'([^']''|''[^']|[^'])*'/,
        _number: $ => /\d+/,
        comment: $ => choice(
            $.comment_ml,
            $.comment_sl,
        ),
        comment_ml: $ => token(
            seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
        ),
        comment_sl: $ => token(
            seq("--", /.*/)
        ),
    },
});

