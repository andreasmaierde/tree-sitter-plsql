
function reservedWord(word) {
    return alias(reserved(caseInsensitive(word)), word)
}

function reserved(regex) {
    return token(prec(1, new RegExp(regex)))
}

function caseInsensitive(word) {
    return word.split('')
        .map(letter => `[${letter}${letter.toUpperCase()}]`)
        .join('')
}

module.exports = grammar({
    name: 'plsql',

    rules: {
        source_file: $ => repeat($._element),



        _unquoted_identifier: $ => /[a-zA-Z0-9_]+/,
        _quoted_identifier: $ => choice(
            seq('"', field("name", /(""|[^"])*/), '"'), // ANSI QUOTES
        ),
        identifier: $ => choice($._unquoted_identifier, $._quoted_identifier),
    }
});

