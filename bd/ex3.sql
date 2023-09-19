delimiter $$
create procedure ex3(in titulo_livro varchar(200),
					 in filial varchar(200),
                     in copias int,
					 out output varchar(200))
begin
	declare livro_existe int;
    declare filial_existe int;
    declare update_sucesso int;
    
    declare livro_id int;
    declare filial_id int;
    
    select count(*) into livro_existe from LIVRO where Titulo = titulo_livro;
    if livro_existe = 0 then
		set output = "Livro nao cadastrado";
	else 
		select count(*) into filial_existe from FILIAL_BIBLIOTECA where NomeFilial = filial;
		if filial_existe = 0 then
			set output = "Filial nao existente";
		else
			select IdLivro into livro_id from LIVRO where Titulo = titulo_livro limit 1;
			select IdFilial into filial_id from FILIAL_BIBLIOTECA where NomeFilial = filial limit 1;
    
			update COPIAS_LIVRO set No_De_Copias = copias where IdLivro = livro_id and IdFilial = filial_id;
			set output = "Cadastro realizado com sucesso";
		end if;	
	end if;
    
end $$
delimiter ;