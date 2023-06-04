SET SERVEROUTPUT ON
DECLARE
    CURSOR c IS SELECT acc_no,total_amt FROM acc_details;
    acc_id acc_details.acc_no%TYPE;
    new_id acc_details.acc_no%TYPE;
    old_amt acc_details.total_amt%TYPE;
    new_amt acc_details.total_amt%TYPE;

FUNCTION generate_transaction_id(z VARCHAR2)
RETURN VARCHAR2 IS
BEGIN
    RETURN CONCAT('SH',z);
END;

PROCEDURE insert_transaction_acc(x IN VARCHAR2,y IN NUMBER)
IS
BEGIN
    new_id:=generate_transaction_id(x);
    INSERT INTO transaction_acc VALUES(new_id,y);
END;
 
BEGIN
    OPEN c;
LOOP
    FETCH c INTO acc_id, old_amt;
    new_amt:=(old_amt*1.02);
    insert_transaction_acc(acc_id,new_amt);
    COMMIT;
    EXIT WHEN c%NOTFOUND;
END LOOP;
	CLOSE c;
END; 
/
SELECT * FROM acc_details;
SELECT * FROM transaction_acc;