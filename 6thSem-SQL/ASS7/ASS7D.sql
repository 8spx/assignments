SET SERVEROUTPUT ON 
DECLARE
    first NUMBER := 0; 
    second NUMBER := 1; 
    temp NUMBER; 
    n NUMBER :=& NUMBER; 
    i NUMBER; 
BEGIN
    dbms_output.put_line('FIBONACCI SERIES:'); 
    dbms_output.put_line(first); 
    dbms_output.put_line(second); 
    FOR i IN 3..n 
    LOOP 
        temp := first + second; 
        first := second; 
        second := temp; 
        dbms_output.put_line(temp); 
    END LOOP; 
END; 
/