-- select user();
-- select current_date();
-- select current_time();


delimiter //

create trigger registra_emprestimo
after insert on LIVROS_EMPRESTADOS
for each row 
begin
declare id int;

if not exists (select 1 from AUDIT) then
    set id = 0;
else
	select max(idAudit) into id from audit;
end if;

set id = id + 1;

insert into AUDIT values (id, 'emprestimo', user(), curdate(), 
                          current_time());

end //

delimiter ;
