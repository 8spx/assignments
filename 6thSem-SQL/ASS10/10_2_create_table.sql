SET SERVEROUTPUT ON;

drop table emp_audit;


create table emp_audit 
(emp_no number(4) not null references emp,
dept_no number(4) not null references dept,
status varchar2(8),
salary number(8,2) not null,
audit_date date not null);

