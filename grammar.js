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

const ASSIGNMENT = ':='
const ASSOCIATION = '=>'
const CONCAT = '||'
const NOT_EQUAL_1 = '<>'
const NOT_EQUAL_2 = '!='
const NOT_EQUAL_3 = '~='
const NOT_EQUAL_4 = '^='
const LESS_THEN_EQUAL = '<='
const GREATER_THEN_EQUAL = '>='
const EXPONENT= '**'
const RANGE= '..'
const SEMICOLON = ';'
const POINT = '.'
const DOUBLE_POINT = ':'
const COMMA = ','
const PLUS = '+'
const MINUS = '-'
const MULTIPLICATION = '*'
const DIVISON= '/'
const EQUAL = '='
const LESS_THEN = '<'
const GREATER_THEN = '>'
const PERCENT = '%'
const BRACKET_LEFT = '('
const BRACKET_RIGHT = ')'
const QUOTE_SINGLE = "'"
const QUOTE_DOUBLE = '"'
const REMOTE = '@'

module.exports = grammar({
    name: 'plsql',
    conflicts: $ => [
        [$._expression_base_boolean_in],
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
        ),
        _ddl_statement: $ => choice(
             $._alter_statement,
             $._create_statement,
             $._drop_statement,
        ),
        _drop_statement: $ => choice(
            $.drop_function,
            $.drop_procedure,
            $.drop_package,
            $.drop_type,
            $.drop_type_body,
            $.drop_trigger,
            $.drop_library,
        ),
        drop_procedure: $ => seq(
            $.kw_drop,
            $.kw_procedure,
            $._referenced_element,
            SEMICOLON,
        ),
        drop_function: $ => seq(
            $.kw_drop,
            $.kw_function,
            $._referenced_element,
            SEMICOLON,
        ),
        drop_library: $ => seq(
            $.kw_drop,
            $.kw_library,
            $.identifier,
            SEMICOLON,
        ),
        drop_trigger: $ => seq(
            $.kw_drop,
            $.kw_trigger,
            $._referenced_element,
            SEMICOLON,
        ),
        drop_type: $ => seq(
            $.kw_drop,
            $.kw_type,
            $._referenced_element,
            optional(choice($.kw_force,$.kw_validate)),
            SEMICOLON,
        ),
        drop_type_body: $ => seq(
            $.kw_drop,
            $.kw_type,
            $.kw_body,
            $._referenced_element,
            SEMICOLON,
        ),
        drop_package: $ => seq(
            $.kw_drop,
            $.kw_package,
            optional($.kw_body),
            $._referenced_element,
            SEMICOLON,
        ),
        _create_statement: $ => choice(
            // TODO
            $.create_package,
        ),
        create_package: $ => seq(
            $.create_obj,
            optional($._editionable_noneditionable),
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
                $.alter_trigger,
                $.alter_package,
                $.alter_function,
                $.alter_procedure,
                $.alter_library,
                $.alter_type,
            ),
        ),
        alter_package: $ => seq(
            $.kw_alter,
            $.kw_package,
            optional($._schema),
            field("obj_name", $.identifier),
            choice(
                $.compile_clause,
                $._editionable_noneditionable,
            ),
            SEMICOLON,
        ),
        alter_procedure: $ => seq(
            $.kw_alter,
            $.kw_procedure,
            optional($._schema),
            field("obj_name", $.identifier),
            choice(
                $.compile_clause,
                $._editionable_noneditionable,
            ),
            SEMICOLON,
        ),
        alter_function: $ => seq(
            $.kw_alter,
            $.kw_function,
            optional($._schema),
            field("obj_name", $.identifier),
            choice(
                $.compile_clause,
                $._editionable_noneditionable,
            ),
            SEMICOLON,
        ),
        alter_trigger: $ => seq(
            $.kw_alter,
            $.kw_trigger,
            optional($._schema),
            field("trigger_name", $.identifier),
            choice(
                $.compile_clause,
                $._editionable_noneditionable,
                $._enable_disable,
                $.rename_to,
            ),
            SEMICOLON,
        ),
        alter_library: $ => seq(
            $.kw_alter,
            $.kw_library,
            optional($._schema),
            field("obj_name", $.identifier),
            choice(
                $.compile_clause,
                $._editionable_noneditionable,
            ),
            SEMICOLON,
        ),
        alter_type: $ => seq(
            $.kw_alter,
            $.kw_type,
            optional($._schema),
            field("type_name", $.identifier),
            choice(
                $.compile_clause,
                $._editionable_noneditionable,
                $.kw_reset,
                $._final_instantiable,
                $.alter_type_replace,
                $.alter_type_alter_x,
            ),
            SEMICOLON,
        ),
        alter_type_alter_x: $ => seq(
            choice(
                $.alter_method_spec,
                $.alter_attribute_definition,
                $.alter_collection_clause,
            ),
            optional($.dependent_handling_clause),
        ),
        alter_method_spec: $ => seq(
            $.alter_method_spec_element,
            repeat(seq(COMMA, $.alter_method_spec_element)),
        ),
        alter_method_spec_element: $ => seq(
            choice(
                $.kw_add,
                $.kw_drop,
            ),
            choice(
                $.element_spec_map_order_function_spec,
                $.element_spec_subprogram_spec,
            ),
        ),
        alter_collection_clause: $ => seq(
            $.kw_modify,
            choice(
                seq($.kw_limit, $.literal_number),
                seq($.kw_element, $.kw_type, $.datatype),
            ),
        ),
        alter_attribute_definition: $ => seq(
            choice(
                $.kw_add,
                $.kw_month,
            ),
            choice(
                $.alter_attribute_definition_add_modify,
                $.alter_attribute_definition_drop,
            ),
        ),
        alter_attribute_definition_drop: $ => seq(
            $.kw_drop,
            $.kw_attribute,
            $.alter_attribute_definition_attribute,
        ),
        alter_attribute_definition_add_modify: $ => seq(
            choice(
                $.kw_add,
                $.kw_modify,
            ),
            $.kw_attribute,
            $.alter_attribute_definition_attribute_datatype,
        ),
        alter_attribute_definition_attribute: $ => choice(
            $.identifier,
            seq(
                BRACKET_LEFT,
                $.identifier,
                repeat(seq(COMMA, $.identifier)),
                BRACKET_RIGHT,
            ),
        ),
        alter_attribute_definition_attribute_datatype: $ => choice(
            $.alter_attribute_definition_attribute_datatype_element,
            seq(
                BRACKET_LEFT,
                $.alter_attribute_definition_attribute_datatype_element,
                repeat(seq(COMMA, $.alter_attribute_definition_attribute_datatype_element)),
                BRACKET_RIGHT,
            ),
        ),
        alter_attribute_definition_attribute_datatype_element: $ => seq(
            $.identifier,
            $.datatype,
        ),
        alter_type_replace: $ => seq(
            $.kw_replace,
            repeat(
                choice(
                    $.invoker_rights_clause,
                    $.accessible_by_clause,
                ),
            ),
            $.kw_as,
            $.kw_object,
            BRACKET_LEFT,
            $.identifier,
            $.datatype,
            repeat(
                seq(COMMA, $.identifier, $.datatype),
            ),
            repeat(
                seq(COMMA, $.element_spec),
            ),
            BRACKET_RIGHT,
        ),
        element_spec: $ => seq(
            optional($.inheritance_clause),
            repeat1(
                choice(
                    $.element_spec_subprogram_spec,
                    $.element_spec_map_order_function_spec,
                    $.element_spec_constructor_spec,
                ),
            ),
        ),
        element_spec_constructor_spec: $ => seq(
            optional($.kw_final),
            optional($.kw_instantiable),
            $.kw_constructor,
            $.kw_function,
            field("name",$.identifier),
            optional(
                seq(
                    BRACKET_LEFT,
                    optional(
                        seq(
                            $.kw_self,
                            $.kw_in,
                            $.kw_out,
                            $.identifier,
                            COMMA,
                        ),
                    ),
                    $.parameter_declaration_element,
                    repeat(
                        seq(
                            COMMA,
                            $.parameter_declaration_element,
                        ),
                    ),
                    BRACKET_RIGHT,
                ),
            ),
            $.kw_return,
            $.kw_self,
            $.kw_as,
            $.kw_result,
            optional(
                $.element_spec_is_as_call_spec,
            )
        ),
        element_spec_map_order_function_spec: $ => seq(
            choice(
                $.kw_map,
                $.kw_order,
            ),
            $.kw_member,
            $.element_spec_function_spec,
        ),
        element_spec_subprogram_spec: $ => seq(
            choice(
                $.kw_member,
                $.kw_static,
            ),
            choice(
                $.element_spec_procedure_spec,
                $.element_spec_function_spec,
            ),
        ),
        element_spec_procedure_spec: $ => seq(
            $.kw_procedure,
            field("prc_name", $.identifier),
            $.parameter_declaration,
            optional($.element_spec_is_as_call_spec),
        ),
        element_spec_function_spec: $ => seq(
            $.kw_function,
            field("fnc_name", $.identifier),
            $.parameter_declaration,
            $.return_declaration,
            optional($.element_spec_is_as_call_spec),
        ),
        element_spec_is_as_call_spec: $ => seq(
            $._is_as,
            $.call_spec_ext,
        ),
        dependent_handling_clause: $ => choice(
            $.kw_invalidate,
            $.dependent_handling_clause_cascade,

        ),
        dependent_handling_clause_cascade: $ => seq(
            $.kw_cascade,
            optional(
                choice(
                    $.dependent_handling_clause_convert,
                    $.dependent_handling_clause_including,
                ),
            ),
            optional(
                seq(
                    optional($.kw_force),
                    $.exceptions_clause,
                ),
            )
        ),
        dependent_handling_clause_including: $ => seq(
            optional($.kw_not),
            $.kw_including,
            $.kw_table,
            $.kw_data,
        ),
        dependent_handling_clause_convert: $ => seq(
            $.kw_convert,
            $.kw_to,
            $.kw_substitutable,
        ),
        exceptions_clause: $ => seq(
            $.kw_exceptions,
            $.kw_into,
            $._referenced_element,
        ),
        inheritance_clause: $ => seq(
            optional($.kw_not),
            prec(2,choice(
                $.kw_instantiable,
                $.kw_final,
                $.kw_overriding,
            )),
        ),
        _final_instantiable: $ => seq(
            optional($.kw_not),
            choice(
                $.kw_instantiable,
                $.kw_final,
            ),
        ),
        call_spec_ext:$ => choice(
            $.java_declaration,
            $.c_declaration,
        ),
        java_declaration:$ => seq(
            $.kw_language,
            $.kw_java,
            $.kw_name,
            field("name",$.literal_string),
        ),
        c_declaration:$ => seq(
            choice(
                seq($.kw_language, $.kw_c),
                $.kw_external,
            ),
            choice(
                seq($.library_name, optional($.name_name)),
                seq($.name_name, optional($.library_name)),
            ),
            optional($.agent_in),
            optional($.with_context),
            optional($.external_parameters),
        ),
        library_name: $ => seq(
            $.kw_library,
            field("library",$.identifier),
        ),
        name_name: $ => seq(
            $.kw_name,
            $._quoted_identifier,
        ),
        with_context: $ => seq(
            $.kw_with,
            $.kw_context,
        ),
        agent_in: $ => seq(
            $.kw_agent,
            $.kw_in,
            BRACKET_LEFT,
            field("argument",$.identifier),
            repeat(
                seq(COMMA, field("argument",$.identifier))
            ),
            BRACKET_RIGHT,
        ),
        external_parameters: $ => seq(
            $.kw_parameters,
            BRACKET_LEFT,
            $.external_parameter,
            repeat(
                seq(COMMA, $.external_parameter)
            ),
            BRACKET_RIGHT,
        ),
        external_parameter: $ => choice(
            $.kw_context,
            $.external_parameter_self,
            $.external_parameter_param,
        ),
        external_parameter_self: $ => seq(
            $.kw_self,
            choice(
                $.kw_tdo,
                $.external_parameter_property,
            ),
        ),
        external_parameter_param: $ => seq(
            choice(
                $.kw_return,
                $.identifier,
            ),
            optional($.external_parameter_property),
            optional($.by_reference),
            optional($.identifier),
        ),
        external_parameter_property: $ => choice(
            $.kw_length,
            $.kw_duration,
            $.kw_maxlen,
            $.kw_charsetid,
            $.kw_charsetfrom,
            seq($.kw_indicator,optional(choice($.kw_struct,$.kw_tdo))),
        ),
        by_reference: $ => seq(
            $.kw_by,
            $.kw_reference,
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
        _editionable_noneditionable: $ => choice(
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
            $.accessor,
            repeat(
                seq(COMMA, $.accessor),
            ),
            BRACKET_RIGHT,
        ),
        accessor: $ => seq(
            optional($._unit_kind),
            $._referenced_element,
        ),
        _unit_kind: $ => choice(
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
        _remote: $ => seq(
            REMOTE,
            field("remote_name",$.identifier),
        ),
        _referenced_element: $ => seq(
            optional($._schema),
            choice(
                $._referenced_element_parent,
                $._referenced_element_name,
            ),
            optional($._remote),
        ),
        _referenced_element_parent: $ => prec(2,
            seq( field("ref_name_parent",$.identifier),
                POINT,
                field("ref_name",$.identifier),
            ),
        ),
        _referenced_element_name: $ => seq(
            field("ref_name",$.identifier),
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
            $._type_definition,
            $.cursor_declaration,
            $.item_declaration,
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
        item_declaration: $ => seq(
            $.identifier,
            optional($.kw_constant),
            $.datatype,
            optional($.not_null),
            optional($.default_expression),
            SEMICOLON,
        ),
        cursor_declaration: $ => seq(
            $.kw_cursor,
            $.identifier,
            optional($.cursor_declaration_parameters),
            $.kw_return,
            $._cursor_declaration_return_datatype,
            SEMICOLON
        ),
        _cursor_declaration_return_datatype: $ => choice(
            $._referenced_datatypes,
            $.identifier,
        ),
        cursor_declaration_parameters: $ => seq(
            BRACKET_LEFT,
            $.cursor_declaration_parameter,
            repeat(seq(COMMA, $.cursor_declaration_parameter)),
            BRACKET_RIGHT,
        ),
        cursor_declaration_parameter: $ => seq(
            $.identifier,
            optional($.kw_in),
            $.datatype,
            optional($.default_expression),
        ),
        _type_definition: $ => choice(
            $.type_definition_sub,
            $.type_definition_ref_cursor_return,
            $.type_definition_record,
            $.type_definition_collection,
        ),
        type_definition_collection: $ => seq(
            $.kw_type,
            field("type_collection_name", $.identifier),
            $.kw_is,
            choice(
                $.type_definition_assoc_array,
                $.type_definition_nested_table,
                $.type_definition_varray,
            ),
            SEMICOLON,
        ),
        type_definition_varray: $ => seq(
            choice(
                $.kw_varray,
                seq(
                    optional($.kw_varying),
                    $.kw_array,
                ),
            ),
            $._size,
            $.kw_of,
            $.datatype,
            optional($.not_null),
        ),
        type_definition_nested_table: $ => seq(
            $.kw_table,
            $.kw_of,
            $.datatype,
            optional($.not_null),
        ),
        type_definition_assoc_array: $ => seq(
            $.kw_table,
            $.kw_of,
            $.datatype,
            optional($.not_null),
            $.kw_index,
            $.kw_by,
            choice(
                $.kw_pls_integer,
                $.kw_binary_integer,
                $.kw_long,
                $._referenced_datatypes,
                seq(
                    choice(
                        $.kw_varchar2,
                        $.kw_varchar,
                        $.kw_string,
                    ),
                    $._size_byte_char,
                ),
            ),
        ),
        type_definition_record: $ => seq(
            $.kw_type,
            field("type_rec_name", $.identifier),
            $.kw_is,
            $.kw_record,
            BRACKET_LEFT,
            $.field_definition,
            repeat(seq(COMMA,$.field_definition)),
            BRACKET_RIGHT,
            SEMICOLON,
        ),
        field_definition: $ => seq(
            $.identifier,
            $.datatype,
            optional($.not_null),
            optional($.default_expression),
        ),
        type_definition_ref_cursor: $ => seq(
            $.kw_type,
            field("ref_cursor_name", $.identifier),
            $.kw_is,
            $.kw_ref,
            $.kw_cursor,
            optional($.type_definition_ref_cursor_return),
            SEMICOLON,
        ),
        type_definition_ref_cursor_return: $ => seq(
            $.kw_return,
            choice(
                $._referenced_datatypes,
                $._referenced_element,
            ),
        ),
        type_definition_sub: $ => seq(
            $.kw_subtype,
            field("subtype_name", $.identifier),
            $.kw_is,
            $.datatype,
            repeat(
                choice(
                    $.type_range,
                    $.character_set,
                ),
            ),
            optional($.not_null),
            SEMICOLON,
        ),
        character_set: $ => seq(
            $.kw_character,
            $.kw_set,
            $.literal_string,
        ),
        type_range: $ => seq(
            $.kw_range,
            $.literal_number,
            RANGE,
            $.literal_number,
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
        not_null: $ => seq(
            $.kw_not,
            $.kw_null,
        ),
        expression: $ => choice(
            $._expression_element,
            seq(
                BRACKET_LEFT,
                $.expression,
                BRACKET_RIGHT,
            ),
        ),
        _expression_element: $ => choice(
            $._expression_base_elements,
            $._expression_base_operator_not_boolean,
            $._expression_base_boolean,
            $._expression_base_case,
        ),
        _expression_base_elements: $ => choice(
            $._literal,
            $.literal_list,
            $._referenced_element,
            $.ref_call,
            $.placeholder,
            seq($._sign_pos_neg, $.literal_number),
        ),
        _expression_base_operator_not_boolean: $ => seq(
            $._expression_base_elements,
            repeat1(
                seq(
                    $.expression_operator_not_boolean,
                    $._expression_base_elements,
                ),
            ),
        ),
        _expression_base_case: $ => choice(
           $.expression_base_case_search,
           $.expression_base_case_simple,
        ),
        expression_base_case_search: $ => seq(
            $.kw_case,
            repeat1(
                seq($.kw_when, $.expression, $.kw_then, $.expression),
            ),
            optional(
                seq($.kw_else, $.expression),
            ),
            $.kw_end,
        ),
        expression_base_case_simple: $ => seq(
            $.kw_case,
            $._referenced_element,
            repeat1(
                seq($.kw_when, $.expression, $.kw_then, $.expression),
            ),
            optional(
                seq($.kw_else, $.expression),
            ),
            $.kw_end,
        ),
        _expression_base_boolean: $ => prec.left(
            seq(
                optional($.kw_not),
                $._expression_base_boolean_elements,
                repeat($._expression_base_boolean_repeat),
            ),
        ),
        _expression_base_boolean_elements: $ => choice(
            seq(
                $._expression_base_elements,
                choice(
                    $._expression_base_boolean_operator,
                    $._expression_base_boolean_between,
                    $._expression_base_boolean_in,
                    $._expression_base_boolean_like,
                    $._is_null_or_is_not_null,
                ),
            ),
            $.conditional_predicate,
        ),
        _expression_base_boolean_repeat: $ => seq(
            choice(
                $.kw_and,
                $.kw_or,
            ),
            $._expression_base_boolean,
        ),
        _expression_base_boolean_operator: $ => seq(
            $.expression_operator_boolean,
            $._expression_base_elements
        ),
        _expression_base_boolean_in: $ => seq(
            optional($.kw_not),
            $.kw_in,
            $.expression,
            repeat(
                 seq(COMMA, $.expression),
            ),
            optional(BRACKET_RIGHT),
        ),
        _expression_base_boolean_like: $ => seq(
            optional($.kw_not),
            $.kw_like,
            choice(
                $.identifier,
                $.literal_string,
            ),
        ),
        _expression_base_boolean_between: $ => seq(
            optional($.kw_not),
            $.kw_between,
            $.expression,
            $.kw_and,
            $.expression,
        ),
        _expression_referenced_percent: $ => seq(
            $._referenced_element,
            PERCENT,
            choice(
                $.kw_rowcount,
                $.kw_found,
                $.kw_isopen,
                $.kw_notfound,
            ),
        ),
        _expression_referenced_point: $ => seq(
            $._referenced_element,
            POINT,
            choice(
                $.kw_count,
                $.kw_first,
                $.kw_last,
                $.kw_limit,
                $.kw_next,
                $.kw_prior,
                $.kw_exists,
            ),
            optional($._index),
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
            $._other_datatypes,
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
            $._referenced_element,
            $.kw_datatype_type,
        ),
        _referenced_datatypes_rowtype: $ => seq(
            $._referenced_element,
            $.kw_datatype_rowtype,
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
        _other_datatypes: $ => choice(
            $.kw_exception,
        ),
        ref_call: $ => seq(
            $._referenced_element,
            $.parameter,
        ),
        parameter_declaration: $ => seq(
            BRACKET_LEFT,
            $.parameter_declaration_element,
            repeat(
                seq(
                    COMMA,
                    $.parameter_declaration_element,
                ),
            ),
            BRACKET_RIGHT,
        ),
        parameter_declaration_element: $ => seq(
            $.identifier,
            choice(
                $._parameter_declaration_element_in,
                $._parameter_declaration_element_in_out_or_out,
            ),
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
            $.parameter_element,
            repeat(
                seq(
                    COMMA,
                    $.parameter_element,
                ),
            ),
            BRACKET_RIGHT,
        ),
        parameter_element: $ => seq(
            choice(
                $.parameter_element_positional,
                $.parameter_element_named,
            ),
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
        _index: $ => seq(
            BRACKET_LEFT,
            $._number,
            BRACKET_RIGHT,
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
        _sign_pos_neg: $ => choice(
            PLUS,
            MINUS,
        ),
        _enable_disable: $ => choice(
            $.kw_enable,
            $.kw_disable,
        ),
        rename_to: $ => seq(
            $.kw_rename,
            $.kw_to,
            $.identifier,
        ),
        expression_operator_boolean: $ => choice(
            NOT_EQUAL_1,
            NOT_EQUAL_2,
            NOT_EQUAL_3,
            NOT_EQUAL_4,
            LESS_THEN_EQUAL,
            GREATER_THEN_EQUAL,
            LESS_THEN,
            GREATER_THEN,
            EQUAL,
        ),
        expression_operator_not_boolean: $ => choice(
            CONCAT,
            EXPONENT,
            PLUS,
            MINUS,
            MULTIPLICATION,
            DIVISON,
        ),
        placeholder: $ => prec.right(
            seq(
                $.host_variable,
                optional($.indicator_variable),
            ),
        ),
        indicator_variable: $ => seq(
            DOUBLE_POINT,
            $.identifier,
        ),
        host_variable: $ => seq(
            DOUBLE_POINT,
            $.identifier,
        ),
        identifier: $ => choice(
            $._unquoted_identifier,
            $._quoted_identifier
        ),
        _unquoted_identifier: $ => /[a-zA-Z][a-zA-Z0-9_$#]*/,
        _quoted_identifier: $ => choice(
            seq('"', field("name", /(""|[^"])*/), '"'), // ANSI QUOTES
        ),
        literal_list: $ => seq(
            BRACKET_LEFT,
            $._literal,
            repeat1(
                seq(COMMA, $._literal),
            ),
            BRACKET_RIGHT,
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
        kw_subtype: _ => reservedWord("subtype"),
        kw_datatype_type: _ => reservedWord("%type"),
        kw_datatype_rowtype: _ => reservedWord("%rowtype"),
        kw_library: _ => reservedWord("library"),
        kw_true: _ => reservedWord("true"),
        kw_false: _ => reservedWord("false"),
        kw_null: _ => reservedWord("null"),
        kw_not: _ => reservedWord("not"),
        kw_case: _ => reservedWord("case"),
        kw_when: _ => reservedWord("when"),
        kw_then: _ => reservedWord("then"),
        kw_if: _ => reservedWord("if"),
        kw_else: _ => reservedWord("else"),
        kw_row: _ => reservedWord("row"),
        kw_count: _ => reservedWord("count"),
        kw_first: _ => reservedWord("first"),
        kw_last: _ => reservedWord("last"),
        kw_limit: _ => reservedWord("limit"),
        kw_next: _ => reservedWord("next"),
        kw_prior: _ => reservedWord("prior"),
        kw_rowcount: _ => reservedWord("rowcount"),
        kw_bulk_rowcount: _ => reservedWord("bulk_rowcount"),
        kw_compile: _ => reservedWord("compile"),
        kw_debug: _ => reservedWord("debug"),
        kw_specification: _ => reservedWord("specification"),
        kw_body: _ => reservedWord("body"),
        kw_declare: _ => reservedWord("declare"),
        kw_begin: _ => reservedWord("begin"),
        kw_exception: _ => reservedWord("exception"),
        kw_exceptions: _ => reservedWord("exceptions"),
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
        kw_reset: _ => reservedWord("reset"),
        kw_final: _ => reservedWord("final"),
        kw_overriding: _ => reservedWord("overriding"),
        kw_instantiable: _ => reservedWord("instantiable"),
        kw_member: _ => reservedWord("member"),
        kw_static: _ => reservedWord("static"),
        kw_settings: _ => reservedWord("settings"),
        kw_byte: _ => reservedWord("byte"),
        kw_char: _ => reservedWord("char"),
        kw_is: _ => reservedWord("is"),
        kw_as: _ => reservedWord("as"),
        kw_ref: _ => reservedWord("ref"),
        kw_table: _ => reservedWord("table"),
        kw_of: _ => reservedWord("of"),
        kw_index: _ => reservedWord("index"),
        kw_by: _ => reservedWord("by"),
        kw_varray: _ => reservedWord("varray"),
        kw_array: _ => reservedWord("array"),
        kw_cursor: _ => reservedWord("cursor"),
        kw_record: _ => reservedWord("record"),
        kw_deterministic: _ => reservedWord("deterministic"),
        kw_pipelined: _ => reservedWord("pipelined"),
        kw_parallel_enable: _ => reservedWord("parallel_enable"),
        kw_enable: _ => reservedWord("enable"),
        kw_disable: _ => reservedWord("disable"),
        kw_rename: _ => reservedWord("rename"),
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
        kw_range: _ => reservedWord("range"),
        kw_inserting: _ => reservedWord("inserting"),
        kw_deleting: _ => reservedWord("deleting"),
        kw_updating: _ => reservedWord("updating"),
        kw_return: _ => reservedWord("return"),
        kw_string: _ => reservedWord("string"),
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
        kw_context: _ => reservedWord("context"),
        kw_self: _ => reservedWord("self"),
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
        kw_set: _ => reservedWord("set"),
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
        kw_constant: _ => reservedWord("constant"),
        kw_json_element_t: _ => reservedWord("json_element_t"),
        kw_json_array_t: _ => reservedWord("json_array_t"),
        kw_json_object_t: _ => reservedWord("json_object_t"),
        kw_json_scalar_t: _ => reservedWord("json_scalar_t"),
        kw_json_key_list: _ => reservedWord("json_key_list"),
        kw_language: _ => reservedWord("language"),
        kw_java: _ => reservedWord("java"),
        kw_name: _ => reservedWord("name"),
        kw_c: _ => reservedWord("c"),
        kw_external: _ => reservedWord("external"),
        kw_agent: _ => reservedWord("agent"),
        kw_parameters: _ => reservedWord("parameters"),
        kw_tdo: _ => reservedWord("tdo"),
        kw_indicator: _ => reservedWord("indicator"),
        kw_length: _ => reservedWord("length"),
        kw_duration: _ => reservedWord("duration"),
        kw_maxlen: _ => reservedWord("maxlen"),
        kw_charsetid: _ => reservedWord("charsetid"),
        kw_charsetfrom: _ => reservedWord("charsetfrom"),
        kw_struct: _ => reservedWord("struct"),
        kw_reference: _ => reservedWord("reference"),
        kw_object: _ => reservedWord("object"),
        kw_map: _ => reservedWord("map"),
        kw_order: _ => reservedWord("order"),
        kw_constructor: _ => reservedWord("constructor"),
        kw_result: _ => reservedWord("result"),
        kw_invalidate: _ => reservedWord("invalidate"),
        kw_cascade: _ => reservedWord("cascade"),
        kw_convert: _ => reservedWord("convert"),
        kw_substitutable: _ => reservedWord("substitutable"),
        kw_including: _ => reservedWord("including"),
        kw_data: _ => reservedWord("data"),
        kw_force: _ => reservedWord("force"),
        kw_into: _ => reservedWord("into"),
        kw_add: _ => reservedWord("add"),
        kw_drop: _ => reservedWord("drop"),
        kw_modify: _ => reservedWord("modify"),
        kw_attribute: _ => reservedWord("attribute"),
        kw_element: _ => reservedWord("element"),
        kw_validate: _ => reservedWord("validate"),
    },
});

