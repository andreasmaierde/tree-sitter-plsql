/*-----------------------------------------------------------------------------------------------
|@|description Simple Examples CREATE PACKAGE
*/-----------------------------------------------------------------------------------------------

CREATE OR REPLACE PACKAGE my_package
/*-----------------------------------------------------------------------------------------------
|@|description This is a package description
*/-----------------------------------------------------------------------------------------------
IS

FUNCTION my_function (p_parameter_1  IN   NUMBER)
RETURN BOOLEAN;
/*-----------------------------------------------------------------------------------------------
|@|description This is a function description
*/-----------------------------------------------------------------------------------------------

FUNCTION my_function (p_parameter_1  IN   VARCHAR2,
                      p_parameter_2  IN   BOOLEAN DEFAULT TRUE)
RETURN BOOLEAN;
/*-----------------------------------------------------------------------------------------------
|@|description This is a function description
*/-----------------------------------------------------------------------------------------------

FUNCTION my_function (p_parameter_1  IN   VARCHAR2,
                      p_parameter_2  IN   BOOLEAN DEFAULT TRUE,
                      p_parameter_2  IN   DATE DEFAULT sysdate)
RETURN BOOLEAN;
/*-----------------------------------------------------------------------------------------------
|@|description This is a function description
*/-----------------------------------------------------------------------------------------------

FUNCTION my_function (p_parameter_1  IN   NUMBER DEFAULT (1 + 1.5))
RETURN BOOLEAN;
/*-----------------------------------------------------------------------------------------------
|@|description This is a function description
*/-----------------------------------------------------------------------------------------------

FUNCTION my_function (p_parameter_1  IN   BOOLEAN DEFAULT  2 >= 1.5)
RETURN BOOLEAN;
/*-----------------------------------------------------------------------------------------------
|@|description This is a function description
*/-----------------------------------------------------------------------------------------------

FUNCTION my_function (p_parameter_1  IN   BOOLEAN := TRUE)
RETURN BOOLEAN;
/*-----------------------------------------------------------------------------------------------
|@|description This is a function description
*/-----------------------------------------------------------------------------------------------

FUNCTION my_function (p_parameter_1  IN   NUMBER dsv_abc.abc_id%TYPE)
RETURN BOOLEAN;
/*-----------------------------------------------------------------------------------------------
|@|description This is a function description
*/-----------------------------------------------------------------------------------------------

FUNCTION my_function (p_parameter_1 IN     NUMBER,
                      p_parameter_2 IN OUT DATE,
                      p_parameter_3    OUT VARCHAR2)
RETURN BOOLEAN result_cache pipelined;
/*-----------------------------------------------------------------------------------------------
|@|description This is a function description
*/-----------------------------------------------------------------------------------------------

procedure my_procedure (p_parameter_1  IN   NUMBER);
/*-----------------------------------------------------------------------------------------------
|@|description This is a procedure description
*/-----------------------------------------------------------------------------------------------

procedure my_procedure (p_parameter_1  IN      BOOLEAN DEFAULT false,
                        p_parameter_2  IN OUT  DATE,
                        p_parameter_3     OUT  NUMBER);
/*-----------------------------------------------------------------------------------------------
|@|description This is a procedure description
*/-----------------------------------------------------------------------------------------------

procedure my_procedure (p_parameter_1  IN      dsv_abc.abc%TYPE DEFAULT false,
                        p_parameter_2  IN OUT  dsv_abc%ROWTYPE,
                        p_parameter_3     OUT  NUMBER);
/*-----------------------------------------------------------------------------------------------
|@|description This is a procedure description
*/-----------------------------------------------------------------------------------------------

procedure my_procedure (p_parameter_1  IN      dsv_abc.abc%TYPE DEFAULT my_function(1,true),
                        p_parameter_2  IN OUT  dsv_abc%ROWTYPE,
                        p_parameter_3     OUT  NUMBER);
/*-----------------------------------------------------------------------------------------------
|@|description This is a procedure description
*/-----------------------------------------------------------------------------------------------

procedure my_procedure (p_parameter_1  IN      dsv_abc.abc%TYPE DEFAULT my_package.my_function(1,true),
                        p_parameter_2  IN OUT  dsv_abc%ROWTYPE,
                        p_parameter_3     OUT  NUMBER);
/*-----------------------------------------------------------------------------------------------
|@|description This is a procedure description
*/-----------------------------------------------------------------------------------------------

procedure my_procedure (p_parameter_1  IN      dsv_abc.abc%TYPE,
                        p_parameter_3     OUT  NUMBER)
ACCESSIBLE BY (PACKAGE my_schema.my_package_1, FUNCTION my_function, my_procedure)
AUTHID CURRENT_USER;
/*-----------------------------------------------------------------------------------------------
|@|description This is a procedure description
*/-----------------------------------------------------------------------------------------------

END my_package;
/
