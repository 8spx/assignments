SET SERVEROUTPUT ON
DROP TABLE area;
CREATE TABLE area(radius NUMBER(2), area NUMBER(14,2));
DECLARE
    radius NUMBER(5);
    area NUMBER(14,2);
    pi CONSTANT NUMBER(4,2):=3.14;
BEGIN
    radius:=6;
    WHILE radius<=10
    LOOP
        area:=pi*power(radius,2);
        INSERT INTO area VALUES(radius,area);
        radius:=radius+1;
    END LOOP;
END;
/
SELECT * FROM area;