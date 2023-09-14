delimiter $$
create procedure ex1(IN titulo varchar(200),
					 IN nome_ed varchar(200),
                     IN fone_ed varchar(11))
begin
	declare idL int;
    declare num_livros int;
    
    declare editora_existe int;
    
    select count(IdLivro) into num_livros from LIVRO;
    if num_livros > 0 then
		select max(IdLivro) into idL from LIVRO;
        set idL = idL + 1;
	else 
		set idL = 1;
	end if;
    
    select count(Nome) into editora_existe from EDITORA where Nome = nome_ed;
    if editora_existe = 0 then
		insert into EDITORA values (nome_ed,null,fone_ed);
    end if;
    
    insert into LIVRO values (idL,titulo,nome_ed);
end $$
delimiter ;