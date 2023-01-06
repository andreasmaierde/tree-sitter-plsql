/*-----------------------------------------------------------------------------------------------
|@|description Simple Examples of ALTER TYPE
*/-----------------------------------------------------------------------------------------------
ALTER TYPE mytype
   ADD MEMBER FUNCTION myfnc(myparam DATE)
   RETURN CHAR CASCADE;

ALTER TYPE mytype
   ADD ATTRIBUTE (myattribute VARCHAR2) CASCADE;

ALTER TYPE mytpye
  MODIFY LIMIT 20 CASCADE;

ALTER TYPE mytype
  MODIFY ELEMENT TYPE VARCHAR(32) CASCADE;

ALTER TYPE mytype COMPILE;

ALTER TYPE mytype COMPILE SPECIFICATION;

ALTER TYPE mytype COMPILE BODY;

ALTER TYPE mytype ADD ATTRIBUTE (myattribute NUMBER) INVALIDATE;

ALTER TYPE mytype NOT FINAL CASCADE;
