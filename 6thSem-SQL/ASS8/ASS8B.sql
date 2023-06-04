SET SERVEROUTPUT ON
DECLARE
    eid NUMBER(4) := &eid;
    sal NUMBER;
    col NUMBER;
    amt NUMBER(7,2);
BEGIN
    SELECT sysdate-hiredate INTO col FROM emp WHERE empno=eid;
    IF (col IS NULL)
    THEN
        dbms_output.put_line('INVALID DATA');
    ELSE
        IF (col > 365)
        THEN
            SELECT sal INTO sal FROM emp WHERE empno=eid;
            amt:=sal+(sal*0.05);
            dbms_output.put_line(eid ||' :(EID) SALARY AFTER INCREMENT --> '||amt);
        ELSE
            dbms_output.put_line('CAN NOT BE INCREMENTED'); 
        END IF;
    END IF;
END;
/