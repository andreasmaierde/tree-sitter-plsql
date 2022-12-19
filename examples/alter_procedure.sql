/*-----------------------------------------------------------------------------------------------
|@|description Simple Examples ALTER PROCEDURE
*/-----------------------------------------------------------------------------------------------

ALTER PROCEDURE myschema.mylib COMPILE;

ALTER PROCEDURE "myschema"."mylib" COMPILE;

ALTER PROCEDURE "myschema"."mylib" COMPILE DEBUG;

ALTER PROCEDURE "myschema"."mylib" COMPILE DEBUG;

ALTER PROCEDURE mylib COMPILE EDITIONABLE;

ALTER PROCEDURE "mylib" NONEDITIONABLE;

ALTER PROCEDURE "mylib" EDITIONABLE;

ALTER PROCEDURE mylib COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1;

ALTER PROCEDURE mylib COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1 REUSE SETTINGS;

ALTER PROCEDURE mylib COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1 REUSE SETTINGS;



