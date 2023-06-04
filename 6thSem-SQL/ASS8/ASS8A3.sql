-- C
SET SERVEROUTPUT ON 
DECLARE
    num NUMBER:=&num;
    c NUMBER;
    val NUMBER;

FUNCTION CHK_PRIME_TABLE(x NUMBER)
RETURN NUMBER IS 
BEGIN
    SELECT num_id INTO val FROM prime_entry WHERE prime_num=x;
    IF val IS NOT NULL
    THEN
        RETURN 1;
    END IF;
END;


BEGIN
    c:=CHK_PRIME_TABLE(num);
    IF c=1
    THEN
        dbms_output.put_line('NUMBER ALREADY EXISTS IN DATABSE');
    END IF;
EXCEPTION
    WHEN NO_DATA_FOUND 
    THEN
        dbms_output.put_line('NUMBER DOES NOT EXIST IN DATABSE');
END;
/