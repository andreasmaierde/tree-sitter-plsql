/*-----------------------------------------------------------------------------------------------
|@|description Simple Examples ALTER TRIGGER
*/-----------------------------------------------------------------------------------------------

ALTER TRIGGER myschema.mytrigger COMPILE;

ALTER TRIGGER "myschema"."mytrigger" COMPILE;

ALTER TRIGGER "myschema"."mytrigger" COMPILE DEBUG PLSCOPE_SETTINGS = 'IDENTIFIERS:ALL';

ALTER TRIGGER "myschema"."mytrigger" RENAME TO mytrigger_xy;

ALTER TRIGGER mytrigger EDITIONABLE;

ALTER TRIGGER "mytrigger" NONEDITIONABLE;

ALTER TRIGGER "mytrigger" EDITIONABLE;

ALTER TRIGGER mytrigger COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1;

ALTER TRIGGER mytrigger COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL=1 REUSE SETTINGS;

ALTER TRIGGER mytigger COMPILE DEBUG PLSQL_OPTIMIZE_LEVEL = 1 PLSCOPE_SETTINGS = 'IDENTIFIERS:ALL' REUSE SETTINGS;



