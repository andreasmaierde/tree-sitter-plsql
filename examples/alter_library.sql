/*-----------------------------------------------------------------------------------------------
|@|description Simple Examples ALTER LIBRARY
*/-----------------------------------------------------------------------------------------------

ALTER LIBRARY myschema.mylib COMPILE;

ALTER LIBRARY "myschema"."mylib" COMPILE;

ALTER LIBRARY "myschema"."mylib" COMPILE DEBUG;

ALTER LIBRARY mylib COMPILE EDITIONABLE;

ALTER LIBRARY "mylib" NONEDITIONABLE;

ALTER LIBRARY "mylib" EDITIONABLE;

ALTER LIBRARY mylib COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1;

ALTER LIBRARY mylib COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1 REUSE SETTINGS;
