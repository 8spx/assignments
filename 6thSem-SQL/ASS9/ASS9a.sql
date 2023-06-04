SET SERVEROUTPUT ON 
DECLARE
     n NUMBER(20):=&n;
     t NUMBER(20);
     amt NUMBER:=500;

BEGIN
     UPDATE acc_details SET total_amt=total_amt-amt WHERE acc_no=n;
     COMMIT;
     SAVEPOINT s;
     UPDATE acc_details SET total_amt=total_amt-amt WHERE acc_no=n;
     SELECT total_amt INTO t FROM Acc_details WHERE acc_no=n;

     IF(t<1000) 
     THEN
          dbms_output.put_line('BALANCE AFTER TRANSACTION --> '||t);
          dbms_output.put_line('INSUFFICIENT BALANCE --> ');
          ROLLBACK TO SAVEPOINT s;
          SELECT total_amt INTO t FROM Acc_details WHERE acc_no=n;
          dbms_output.put_line('BALANCE AFTER ROLLBACK --> '||t);
     ELSE
          COMMIT;
          SELECT total_amt INTO t FROM Acc_details WHERE acc_no=n;
          dbms_output.put_line('BALANCE AFTER COMMIT --> '||t);
     END IF;
END;
/