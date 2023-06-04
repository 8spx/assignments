SET SERVEROUTPUT ON;
DECLARE 
	clientno VARCHAR2(5):='&client_no';
	balance client_master.balance_due % TYPE;
	i NUMBER;
BEGIN
	SELECT balance_due INTO balance FROM client_master WHERE client_no=clientno;
	IF balance >= 6000 
	THEN
		i:=balance+1000;
		dbms_output.put_line('NEW BALANCE: '|| (balance + 1000));
	ELSE
		dbms_output.put_line('NEW BALANCE: '|| balance);
	END IF;
END;
/