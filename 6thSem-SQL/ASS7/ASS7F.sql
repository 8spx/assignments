SET SERVEROUTPUT ON 
DECLARE
    a NUMBER:=&NUMBER;
    b NUMBER:=&NUMBER;
    c NUMBER:=&NUMBER;
BEGIN
    IF a>b AND a>c 
    THEN
        dbms_output.put_line('A IS GREATEST');
    ELSE IF b>a AND b>c THEN
        dbms_output.put_line('B IS GREATEST');
    ELSE
        dbms_output.put_line('C is GREATEST');
    END IF;
    END IF;
END;
/