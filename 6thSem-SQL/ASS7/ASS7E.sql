SET SERVEROUTPUT ON 
DECLARE
  year NUMBER := &year;
BEGIN
  IF MOD(year, 4)=0 AND MOD(year, 100)!=0 OR MOD(year, 400)=0 
  THEN
    dbms_output.Put_line(year || ' -> LEAP YEAR');
  ELSE
    dbms_output.Put_line(year || ' -> NOT LEAP YEAR');
  END IF;
END;
/