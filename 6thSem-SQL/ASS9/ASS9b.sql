SET SERVEROUTPUT ON 
DECLARE 
	n NUMBER(2):='&Department_Number';
	l VARCHAR2(13):='&Location';
BEGIN
	UPDATE dept set loc=l where deptno=n;
	IF sql%found
	THEN
	dbms_output.put_line('DEPARTMENT NO --> '||n||'NEW LOCATION --> '||l);
	ELSIF sql%found
	THEN
	dbms_output.put_line('NO DEPARTMENT FOUND AND UPDATED');
	END IF;
END;
/