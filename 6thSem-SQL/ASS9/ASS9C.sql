SET SERVEROUTPUT ON 
DECLARE
    eno NUMBER(4):=&Empno;
    emp_name VARCHAR2(20);
BEGIN
    SELECT ename INTO emp_name FROM emp WHERE empno=eno;
    dbms_output.put_line('NAME --> '||emp_name);
EXCEPTION
    WHEN NO_DATA_FOUND 
    THEN
        dbms_output.put_line('EMPLOYEE NOT FOUND');
END;
/
