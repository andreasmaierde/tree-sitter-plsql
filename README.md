# tree-sitter-plsql
Oracle pl/sql grammar for tree-sitter

As oracle database developer you very often switch between pl/sql and sql elements. This grammar try to support the (most used) language elements from both worlds.
A few sqlplus commands will probably also be supported


[[https://github.com/AndreasMaierDe/tree-sitter-plsql/img/screenshot_pks.png|alt="nvim syntax highlighting"]]

# Status
It's in development and some (or many - oracle syntax is huge) statements are missing or must optimized, but I use it at my daily job for syntax highlighting in nvim and it works in most files realy good.

This Oracle statements are at the moment implemented:

Statements for Stored PL/SQL Units
- alter [package|function|procedure|library|type|trigger]
- create [package|procedure|function|trigger]
- drop [package|function|procedure|library|type|type_body|trigger]

Statements for Stored SQL
- [SELECT|UPDATE|DELETE|INSERT|MERGE]

# Known Issues
The expression rule must be rewritten and also the combination of the select and expression rule.

# References
[Database PL/SQL Language Reference](https://docs.oracle.com/en/database/oracle/oracle-database/21/lnpls/index.html)
[SQL Language Reference](https://docs.oracle.com/en/database/oracle/oracle-database/21/lnpls/index.html)
