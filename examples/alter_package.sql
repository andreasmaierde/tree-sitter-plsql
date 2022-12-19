/*-----------------------------------------------------------------------------------------------
|@|description Simple Examples ALTER PACKAGE
*/-----------------------------------------------------------------------------------------------

ALTER PACKAGE myschema.mylib COMPILE;

ALTER PACKAGE "myschema"."mylib" COMPILE;

ALTER PACKAGE "myschema"."mylib" COMPILE DEBUG;

ALTER PACKAGE "myschema"."mylib" COMPILE DEBUG BODY;

ALTER PACKAGE "myschema"."mylib" COMPILE DEBUG specification;

ALTER PACKAGE "myschema"."mylib" COMPILE DEBUG PACKAGE;

ALTER PACKAGE mylib COMPILE EDITIONABLE;

ALTER PACKAGE "mylib" NONEDITIONABLE;

ALTER PACKAGE "mylib" EDITIONABLE;

ALTER PACKAGE mylib COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1;

ALTER PACKAGE mylib COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1 REUSE SETTINGS;

ALTER PACKAGE mylib COMPILE DEBUG BODY PLSQL_OPTIMIZE_LEVEL=1 REUSE SETTINGS;

