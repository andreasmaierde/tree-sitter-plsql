/*-----------------------------------------------------------------------------------------------
|@|description Simple Examples CREATE PACKAGE
*/-----------------------------------------------------------------------------------------------

CREATE OR REPLACE PACKAGE BODY my_package
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
RETURN BOOLEAN
/*-----------------------------------------------------------------------------------------------
|@|description This is a function description
*/-----------------------------------------------------------------------------------------------
IS
  l_variable     NUMBER;
  l_rec_abc      DSV_ABC%ROWTYPE;
BEGIN
  l_variable    := p_parameter_1;
  l_rec_abc.xyz := l_variable;
  SELECT abc
  INTO  l_variable
  FROM  dsv_abc
  WHERE x = p_parameter_1;
END my_function;


PROCEDURE my_procedure (p_parameter_1  IN     NUMBER DEFAULT 'X',
                        p_parameter_2  IN     DATE   DEFAULT sysdate,
                        p_parameter_3     OUT VARCHAR2)
/*-----------------------------------------------------------------------------------------------
|@|description This is a procedure description
*/-----------------------------------------------------------------------------------------------
IS
  l_variable     NUMBER;
  l_rec_abc      DSV_ABC%ROWTYPE;
BEGIN
  l_variable    := p_parameter_1;
  l_rec_abc.xyz := l_variable + l_variable;
  p_parameter_3 := l_rec_abc.xyz;
  FOR r_cur_abc IN (SELECT * FROM dsv_abc) LOOP
    dbms_output.put_line(r_cur_abc.xyz || r_cur_abc.xzz);
  END LOOP;
END my_procedure;


END my_package;
/
