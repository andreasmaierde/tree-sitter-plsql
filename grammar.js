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
const BRACKET_LEFT = '('
const BRACKET_RIGHT = ')'

module.exports = grammar({
    name: 'plsql',
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
            optional(
                SEMICOLON
            ),
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
                seq(reservedWord("or"),
                    reservedWord("replace"),
                ),
            ),
            optional(
                $.editionable_noneditionable
            ),
            reservedWord("package"),
            optional(
                $._schema,
            ),
            field("obj_name", $.identifier),
            optional(
                $.sharing_clause,
            ),
            repeat(
                choice(
                    $.default_collation_clause,
                    $.invoker_rights_clause,
                    $.accessible_by_clause,
                )
            ),
            $.is_as,
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
            optional(
                $._schema,
            ),
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
            optional(
                $._schema,
            ),
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
            optional(
                $._schema,
            ),
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
            optional(
                $._schema,
            ),
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
            optional(
                seq(
                    optional(reservedWord("debug")),
                    optional(
                        choice(
                            reservedWord("package"),
                            reservedWord("specification"),
                            reservedWord("body"),
                        )
                    ),
                    optional($._compiler_parameter_clause),
                    optional($.reuse_settings),
                ),
            ),
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
        package_item_list: $ => repeat(
            choice(
                // TODO
                //$.package_function_declaration,
                //$.package_procedure_declaration,
                //$.cursor_declaration,
                //$.type_definition,
                //$.item_declaration,
            ),
        ),
        cursor_declaration: $ => seq(
            // TODO
            reservedWord("cursor"),
            $.identifier,
            optional(
                seq(
                    BRACKET_LEFT,
                ),
            ),
        ),
        cursor_parameter_dec: $ => seq(
            $.identifier,
            optional(
                reservedWord("in"),
            ),
            $.datatype,
        ),
        datatype: $ => choice(
            $._oracle_built_in_datatypes,
            $._ansi_supported_datatypes,
            $._oracle_supplied_types,
            // TODO user_defined_types
        ),
        _oracle_built_in_datatypes: $ => choice(
            $._character_datatypes,
            $._number_datatypes,
            $._long_and_raw_datatypes,
            $._datetime_datatypes,
            $._large_object_datatypes,
            $._rowid_datatypes,
        ),
        _character_datatypes: $ => choice(
            $._character_datatypes_char,
            $._character_datatypes_varchar2,
            $._character_datatypes_nchar,
            $._character_datatypes_nvarchar2,
        ),
        _character_datatypes_char: $ => seq(
            reservedWord("char"),
            optional(
                $._size_byte_char,
            ),
        ),
        _character_datatypes_varchar2: $ => seq(
            reservedWord("varchar2"),
            $._size_byte_char,
        ),
        _character_datatypes_nchar: $ => seq(
            reservedWord("nchar"),
            optional(
                $._size,
            ),
        ),
        _character_datatypes_nvarchar2: $ => seq(
            reservedWord("nvarchar2"),
            $._size,
        ),
        _number_datatypes: $ => choice(
            $._number_datatypes_number,
            $._number_datatypes_float,
            reservedWord("binary_float"),
            reservedWord("binary_double"),
        ),
        _number_datatypes_number: $ => seq(
            reservedWord("number"),
            optional(
                $._size_precision_scale,
            ),
        ),
        _number_datatypes_float: $ => seq(
            reservedWord("float"),
            optional(
                $._size,
            ),
        ),
        _long_and_raw_datatypes: $ => choice(
            $._long_and_raw_datatypes_long_raw,
            $._long_and_raw_datatypes_raw,
        ),
        _long_and_raw_datatypes_long_raw: $ => seq(
            reservedWord("long"),
            optional(
                reservedWord("raw"),
            ),
        ),
        _long_and_raw_datatypes_raw: $ => seq(
            reservedWord("raw"),
            $._size,
        ),
        _datetime_datatypes: $ => choice(
            reservedWord("date"),
            $._datetime_datatypes_date_timestamp,
            $._datetime_datatypes_date_interval_year,
            $._datetime_datatypes_date_interval_day,
        ),
        _datetime_datatypes_date_timestamp: $ => seq(
            reservedWord("timestamp"),
            optional(
                $._size,
            ),
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
            optional(
                $._size,
            ),
            reservedWord("to"),
            reservedWord("month"),
        ),
        _datetime_datatypes_date_interval_day: $ => seq(
            reservedWord("interval"),
            reservedWord("day"),
            optional(
                $._size,
            ),
            reservedWord("to"),
            reservedWord("second"),
            optional(
                $._size,
            ),
        ),
        _large_object_datatypes: $ => choice(
            reservedWord("blob"),
            reservedWord("clob"),
            reservedWord("nclob"),
            reservedWord("bfile"),
        ),
        _rowid_datatypes: $ => choice(
            reservedWord("rowid"),
            $._rowid_datatypes_urowid,
        ),
        _rowid_datatypes_urowid: $ => seq(
            reservedWord("urowid"),
            optional(
                $._size,
            ),
        ),
        _ansi_supported_datatypes: $ => choice(
            $._ansi_supported_datatypes_character,
            $._ansi_supported_datatypes_char_nchar,
            $._ansi_supported_datatypes_varchar,
            $._ansi_supported_datatypes_national,
            $._ansi_supported_datatypes_numeric_decimal_dec,
            $._ansi_supported_datatypes_double_precision,
            reservedWord("integer"),
            reservedWord("int"),
            reservedWord("smallint"),
            reservedWord("real"),
        ),
        _ansi_supported_datatypes_character: $ => seq(
            reservedWord("character"),
            optional(
                reservedWord("varying"),
            ),
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
            optional(
                reservedWord("varying"),
            ),
            $._size,
        ),
        _ansi_supported_datatypes_numeric_decimal_dec: $ => seq(
            choice(
                reservedWord("numeric"),
                reservedWord("decimal"),
                reservedWord("dec"),
            ),
            optional(
                $._size_precision_scale,
            ),
        ),
        _ansi_supported_datatypes_float: $ => seq(
            reservedWord("float"),
            optional(
                $._size,
            ),
        ),
        _ansi_supported_datatypes_double_precision: $ => seq(
            reservedWord("double"),
            reservedWord("precision"),
        ),
        _oracle_supplied_types: $ => choice(
            $._oracle_supplied_types_any_types,
            $._oracle_supplied_types_xml_types,
            $._oracle_supplied_types_spatial_types,
        ),
        _oracle_supplied_types_any_types: $ => seq(
            reservedWord("sys"),
            POINT,
            choice(
                reservedWord("anydata"),
                reservedWord("anytype"),
                reservedWord("anydataset"),
            ),
        ),
        _oracle_supplied_types_xml_types: $ => choice(
            reservedWord("xmltype"),
            reservedWord("uritype"),
        ),
        _oracle_supplied_types_spatial_types: $ => choice(
            reservedWord("sdo_geometry"),
            reservedWord("sdo_topo_geometry"),
            reservedWord("sdo_georaster"),
        ),
        _size: $ => seq(
            BRACKET_LEFT,
            $._number,
            BRACKET_RIGHT,
        ),
        _size_byte_char: $ => seq(
            BRACKET_LEFT,
            $._number,
            optional(
                $.byte_char,
            ),
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
            $._number_minus,
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
            $.keyword_true,
            $.keyword_false,
            $.keyword_null,
        ),
        literal_string: $ => choice(
            $._single_quote_string,
        ),
        _single_quote_string: _ => /'([^']''|''[^']|[^'])*'/,
        literal_number: $ => choice(
            $._number,
        ),
        _number: _ => /\d+/,
        _number_minus: _ => /-\d+/,
        comment: $ => choice(
            $._comment_ml,
            $._comment_sl,
        ),
        _comment_ml: $ => token(
            seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
        ),
        _comment_sl: $ => token(
            seq("--", /.*/)
        ),
        keyword_null: $ => reservedWord("null"),
        keyword_true: $ => reservedWord("true"),
        keyword_false: $ => reservedWord("false"),
    },
});

