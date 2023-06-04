DROP TABLE Emp_sal_inc;

CREATE TABLE Emp_sal_inc (
    Emp_id VARCHAR2(2),
    Cur_sal NUMBER(4),
    Inc_date DATE
);

INSERT INTO Emp_sal_inc VALUES('CS',7500,'27-Jan-96');
INSERT INTO Emp_sal_inc VALUES('EE',8500,'19-Jan-98');
INSERT INTO Emp_sal_inc VALUES('CS',9500,'10-Feb-99');