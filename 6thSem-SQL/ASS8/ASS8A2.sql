-- B
SET SERVEROUTPUT ON 
DECLARE
    i NUMBER:=2;
    num NUMBER:=&num;
    col NUMBER;

BEGIN
    WHILE i <= num/2
    LOOP
        EXIT WHEN MOD(num,i)=0;
        IF MOD(num,i)!=0 AND i=FLOOR(num/2)
        THEN
            SELECT MAX(num_id) INTO col FROM prime_entry;
            IF col IS NULL
            THEN
                col:=1;
            ELSE
                col:=col+1;
            END IF;
            dbms_output.put_line(col);
            INSERT INTO prime_entry VALUES(col,num);
            dbms_output.put_line('TABLE UPDATED SUCCESSFULLY.');
        END IF;
    i:=i+1;
    END LOOP;
END;
/