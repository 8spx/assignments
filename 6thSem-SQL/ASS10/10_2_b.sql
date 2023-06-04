set serveroutput on;

	drop trigger trig;

	create or replace trigger trig after
	update or delete on emp
	for each row
declare
	status varchar2(20);	
begin
	if updating then
		status:='update';
	end if;
	if deleting then
		status:='delete';
	end if;
	insert into emp_audit values(:old.empno,:old.deptno,status,:old.sal,sysdate);
end;
/
select * from emp_audit;