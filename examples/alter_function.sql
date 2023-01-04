/*-----------------------------------------------------------------------------------------------
|@|description Simple Examples ALTER FUNCTION
*/-----------------------------------------------------------------------------------------------

ALTER FUNCTION myschema.mylib COMPILE;

ALTER FUNCTION "myschema"."myfunction" COMPILE;

ALTER FUNCTION "myschema"."myfunction" COMPILE DEBUG PLSCOPE_SETTINGS = 'IDENTIFIERS:ALL';

ALTER FUNCTION "myschema"."myfunction" COMPILE DEBUG;

ALTER FUNCTION myfunction EDITIONABLE;

ALTER FUNCTION "myschema"."myfunction" NONEDITIONABLE;

ALTER FUNCTION "myfunction" EDITIONABLE;

ALTER FUNCTION myfunction COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1;

ALTER FUNCTION myfunction COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1 PLSCOPE_SETTINGS = 'IDENTIFIERS:ALL' REUSE SETTINGS;

ALTER FUNCTION myfunction COMPILE PLSQL_OPTIMIZE_LEVEL = 1 REUSE SETTINGS;


