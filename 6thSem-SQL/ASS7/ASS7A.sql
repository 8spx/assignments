SET SERVEROUTPUT ON
DECLARE
   fact NUMBER := 1;
   n NUMBER := &n;
BEGIN
   WHILE n > 0 
   LOOP
      fact := n * fact;
      n := n - 1;
   END LOOP;
   dbms_output.put_line('THE FACTORIAL -> ' || fact);
END;
/