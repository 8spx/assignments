SET SERVEROUTPUT ON 
DECLARE
    n NUMBER := &n;
    res NUMBER := 0;
    --val NUMBER;
BEGIN
    FOR i IN 1..n 
    LOOP
        res := res + i;
    END LOOP;
    dbms_output.put_line('SUM -> ' || res);
END;
/