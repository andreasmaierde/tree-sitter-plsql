/*-----------------------------------------------------------------------------------------------
|@|description Simple Examples CREATE PACKAGE
*/-----------------------------------------------------------------------------------------------

CREATE OR REPLACE PACKAGE my_package
/*-----------------------------------------------------------------------------------------------
|@|description This is a package description
*/-----------------------------------------------------------------------------------------------
IS

SUBTYPE Balance_1   IS NUMBER;
SUBTYPE Balance_2   IS NUMBER(8,2);
SUBTYPE Under_100   IS PLS_INTEGER RANGE 0..99;
SUBTYPE Text        IS VARCHAR2(15);

TYPE t_rec_abc IS RECORD(
  mya    NUMBER NOT NULL,
  myb    VARCHAR2(100),
  myc    DATE DEFAULT sysdate
);

TYPE t_tab_abc IS TABLE OF my_table;

TYPE t_tab_abc IS TABLE OF my_table INDEX BY PLS_INTEGER;

TYPE t_var_abc IS VARRAY(50) OF NUMBER NOT NULL;

gc_abc  CONSTANT   NUMBER := 0.4;
gv_abc             NUMBER;
gv_init_date       DATE := sysdate;
gv_init_abc        varchar2(200) := my_func('A',true);

exc_abc           exception;

FUNCTION my_function (p_parameter_1  IN   NUMBER)
RETURN BOOLEAN;
/*-----------------------------------------------------------------------------------------------
|@|description This is a function description
*/-----------------------------------------------------------------------------------------------

FUNCTION my_function (p_parameter_1  IN   VARCHAR2,
                      p_parameter_2  IN   BOOLEAN DEFAULT 3)
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

FUNCTION my_function (p_parameter_1  IN   BOOLEAN DEFAULT (2 >= 1.5 AND 3 > 4))
RETURN BOOLEAN;
/*-----------------------------------------------------------------------------------------------
|@|description This is a function description
*/-----------------------------------------------------------------------------------------------

FUNCTION my_function (p_parameter_1  IN   BOOLEAN := TRUE)
RETURN BOOLEAN;
/*-----------------------------------------------------------------------------------------------
|@|description This is a function description
*/-----------------------------------------------------------------------------------------------

FUNCTION my_function (p_parameter_1  IN   dsv_abc.abc_id%TYPE DEFAULT x between 1 and 3)
RETURN BOOLEAN;
/*-----------------------------------------------------------------------------------------------
|@|description This is a function description
*/-----------------------------------------------------------------------------------------------

FUNCTION my_function (p_parameter_1 IN     NUMBER,
                      p_parameter_2 IN     DATE DEFAULT to_date('01.01.2022','dd.mm.yyyy'),
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
                        p_parameter_2  IN      DATE,
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

procedure my_procedure (p_parameter_1  IN      dsv_abc.abc%TYPE DEFAULT my_package.my_function('X'),
                        p_parameter_2  IN OUT  dsv_abc%ROWTYPE,
                        p_parameter_3     OUT  NUMBER);
/*-----------------------------------------------------------------------------------------------
|@|description This is a procedure description
*/-----------------------------------------------------------------------------------------------


procedure my_procedure (p_parameter_1  IN      dsv_abc.abc%TYPE,
                        p_parameter_3     OUT  NUMBER)
ACCESSIBLE BY (PACKAGE my_schema, FUNCTION my_function, my_procedure)
AUTHID CURRENT_USER;
/*-----------------------------------------------------------------------------------------------
|@|description This is a procedure description
*/-----------------------------------------------------------------------------------------------

procedure my_procedure (p_parameter_1  IN      dsv_abc.abc_date%TYPE := sysdate + 1,
                        p_parameter_2  IN      DATE DEFAULT '2',
                        p_parameter_3  IN      BOOLEAN DEFAULT 2 IS NOT NULL,
                        p_parameter_4     OUT  NUMBER);
/*-----------------------------------------------------------------------------------------------
|@|description This is a procedure description
*/-----------------------------------------------------------------------------------------------

procedure my_procedure (p_parameter_1  IN      dsv_abc.abc_date%TYPE := sysdate + 1,
                        p_parameter_2  IN      DATE DEFAULT 2 between 1 and 3,
                        p_parameter_3  IN      BOOLEAN DEFAULT 2 IN (1,2,3,true),
                        p_parameter_4  IN      BOOLEAN DEFAULT test(1234, 'Test',true, null, 234),
                        p_parameter_5     OUT  NUMBER);
/*-----------------------------------------------------------------------------------------------
|@|description This is a procedure description
*/-----------------------------------------------------------------------------------------------

procedure my_procedure (p_parameter_1  IN      dsv_abc.abc_date%TYPE := sysdate + 1,
                        p_parameter_2  IN      DATE DEFAULT 2 between 1 and 3,
                        p_parameter_3  IN      BOOLEAN DEFAULT 2 IN (1,2,3,true),
                        p_parameter_4  IN      BOOLEAN DEFAULT test(1234, 'Test',true, null, 234),
                        p_parameter_5  IN      VARCHAR2 DEFAULT CASE x WHEN 'A' THEN 'a' WHEN 'B' THEN 'b' ELSE NULL END);
/*-----------------------------------------------------------------------------------------------
|@|description This is a procedure description
*/-----------------------------------------------------------------------------------------------

END my_package;
/
