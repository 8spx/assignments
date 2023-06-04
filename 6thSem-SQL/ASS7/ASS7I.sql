DECLARE
	name VARCHAR2(6):='ALLEN';
	salary emp.sal % TYPE;
BEGIN
	SELECT sal INTO salary FROM emp WHERE ename=name;
	IF salary > 5000 
	THEN
		dbms_output.put_line('MONEY RECEIVED'||salary);
	ELSE
		dbms_output.put_line('SALARY IS LESS THAN Rs.5000');
	END IF;
END;
/