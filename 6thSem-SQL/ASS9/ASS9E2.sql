SET SERVEROUTPUT ON
DECLARE 
    CURSOR c IS SELECT emp_id, cur_sal FROM emp_sal_inc;
	id emp_sal_inc.emp_id%TYPE;
	old_sal emp_sal_inc.cur_sal%TYPE; 
    new_sal emp_sal_inc.cur_sal%TYPE;
BEGIN  
	OPEN c;
LOOP
	FETCH c INTO id,old_sal;
	IF id = 'CS'
	THEN
		new_sal:=(old_sal*1.02);
		UPDATE emp_sal_inc SET cur_sal=new_sal WHERE emp_id=id AND cur_sal=old_sal;
		--dbms_output.put_line(new_sal);
	END IF;
	EXIT WHEN c%NOTFOUND;
END LOOP;
	CLOSE c;
END; 
/
SELECT * FROM EMP_SAL_INC;

