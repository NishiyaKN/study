delimiter $$
create procedure ex4(IN idL int,
					 IN idF int,
                     IN copias int)
begin
	start transaction;
		update COPIAS_LIVRO set No_De_Copias = copias
		where idL = IdLivro
		and idF = IdFilial;
	commit;
end $$
delimiter ;