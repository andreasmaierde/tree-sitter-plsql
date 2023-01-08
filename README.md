# tree-sitter-plsql
Oracle pl/sql grammar for tree-sitter

# Status
Inital development - many changes will be made and things will very likely break in future.

This Oracle statements are at the moment implemented:

Statements for Stored PL/SQL Units
- alter [package|function|procedure|library|type|trigger]
- create [package]
- drop [package|function|procedure|library|type|type_body|trigger]

The next step is to parse the code in function/procedure. This will take some time ...
