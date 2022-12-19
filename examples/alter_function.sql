/*-----------------------------------------------------------------------------------------------
|@|description Simple Examples ALTER FUNCTION
*/-----------------------------------------------------------------------------------------------

ALTER FUNCTION myschema.mylib COMPILE;

ALTER FUNCTION "myschema"."mylib" COMPILE;

ALTER FUNCTION "myschema"."mylib" COMPILE DEBUG;

ALTER FUNCTION "myschema"."mylib" COMPILE DEBUG;

ALTER FUNCTION mylib COMPILE EDITIONABLE;

ALTER FUNCTION "mylib" NONEDITIONABLE;

ALTER FUNCTION "mylib" EDITIONABLE;

ALTER FUNCTION mylib COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1;

ALTER FUNCTION mylib COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1 REUSE SETTINGS;

ALTER FUNCTION mylib COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1 REUSE SETTINGS;


