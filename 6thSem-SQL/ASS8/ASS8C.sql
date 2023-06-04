DROP TABLE transcation_acc;
DROP TABLE acc_details;

CREATE TABLE acc_details(
    acc_no VARCHAR2(8) primary key,
    name VARCHAR2(20) not null,
    address VARCHAR2(20) not null,
    dob date not null,
    sex char(1) check(sex in('M','F')),
    contact_no number(10) not null,
    last_from_date date not null,
    total_amt number(12,4) not null,
    acc_status char(1) check(acc_status in('A','I'))
);

CREATE TABLE transcation_acc(
    transaction_id number(8) primary key,
    acc_no VARCHAR2(8) references acc_details on DELETE CASCADE,
    deposit_amt number(12,4) not null,
    withdraw_amt number(12,4) not null,
    mode_trans char(5),
    cheque_no number(6) default 0,
    trans_date date not null
);


INSERT INTO acc_details VALUES(001,'A','A-12','12-JAN-1964','M','1234567890','13-JUN-2021',120000,'A');
INSERT INTO acc_details VALUES(002,'D','BD-12','21-FEB-1998','M','9012345678','13-JUN-2021',12065,'A');
INSERT INTO acc_details VALUES(003,'G','P-12','21-APR-1978','M','9012387654','13-JUN-2021',1500000,'A');


INSERT INTO transcation_acc VALUES(021,001,12000,5000,'A',0,'10-JUN-2021');
INSERT INTO transcation_acc VALUES(022,002,20000,0,'A',0,'10-JUN-2021');
INSERT INTO transcation_acc VALUES(023,001,0,5000,'A',0,'11-JUN-2021');
INSERT INTO transcation_acc VALUES(024,003,2000,5000,'A',0,'11-JUN-2021');
INSERT INTO transcation_acc VALUES(025,002,0,25000,'A',0,'11-JUN-2021');
INSERT INTO transcation_acc VALUES(026,001,0,2000,'A',0,'12-JUN-2021');

DELETE FROM acc_details WHERE acc_no=002;
SELECT * FROM acc_details;