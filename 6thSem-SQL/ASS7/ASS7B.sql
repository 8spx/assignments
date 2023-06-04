SET SERVEROUTPUT ON
DECLARE
    num NUMBER := &num; 
    rev NUMBER; 
BEGIN
    rev := 0; 
    WHILE num > 0 
    LOOP 
        rev := (rev*10) + mod(num,10); 
        num := floor(num/10); 
    END LOOP;
    dbms_output.put_line('REVERSE OF NUMBER -> ' || rev); 
END; 
/                         