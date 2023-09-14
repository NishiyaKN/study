delimiter $$
create procedure ex2(IN nomeU varchar(200),
					 IN endereco varchar(200),
					 IN telefone varchar(11))
begin
	declare id int;
    declare num_user int;
    declare user_existe int;
    
    select count(NoCartao) into num_user from USUARIO;
    if num_user > 0 then
		select max(NoCartao) into id from USUARIO;
        set id = id + 1;
	else
		set id = 1;
	end if;
    
    select count(Nome) into user_existe from USUARIO where Nome=nomeU;
    if user_existe = 0 then
		insert into USUARIO values(id,nomeU,endereco,telefone);
	end if;
end $$
delimiter ;
                     
                        