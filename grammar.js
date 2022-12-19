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
const EQUAL = '='

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
            // $._create_statement,
            $._alter_statement,
            // $._drop_statement,
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
                seq(
                    field("schema_name",$.identifier),
                    POINT,
                )
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
                seq(
                    field("schema_name",$.identifier),
                    POINT,
                )
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
                seq(
                    field("schema_name",$.identifier),
                    POINT,
                )
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
                seq(
                    field("schema_name",$.identifier),
                    POINT,
                )
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
            field("compile_parameter_value", $.identifier),
        ),
        editionable_noneditionable: $ => choice(
            reservedWord("editionable"),
            reservedWord("noneditionable"),
        ),
        reuse_settings: $ => seq(
            reservedWord("reuse"),
            reservedWord("settings"),
        ),
        _unquoted_identifier: $ => /[a-zA-Z0-9_]+/,
        _quoted_identifier: $ => choice(
            seq('"', field("name", /(""|[^"])*/), '"'), // ANSI QUOTES
        ),
        identifier: $ => choice($._unquoted_identifier, $._quoted_identifier),
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
    },
});

