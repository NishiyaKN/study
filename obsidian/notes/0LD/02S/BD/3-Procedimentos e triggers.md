Também chamado de Stored Procedures, ele armazena tarefas repetidas e aceita parâmetros de entrada e saída. Procedures fornecem melhor **segurança** e **consistência** à comunicação entre o sistema e o SGBD, pois **não permite visualização direta à estrutura de tabelas**. 
- Vantagens:
	- Reduz o tráfego de rede
	- Melhora desempenho do BD
	- Minimiza exposição do BD
	- Permite agendamento de tarefas
	- Encapsula operações complexas em SQL
- Desvantagens:
	- As linguagens dos SGBD não são padronizadas

Podemos declarar uma variável com **DECLARE** e setar o seu valor com **SET**.
```mysql
-- exemplo basico 
delimiter $$
create procedure teste()
begin
	declare id int;
	declare nome varchar(40);
 
	set id = 1;
 
	select titulo into nome from livro;
end $$
delimiter ;
```
Uma procedure pode receber e retornar vários valores usando os parâmetros **IN**, **OUT** e **INOUT**
Podemos utilizar expressões condicionais com **IF**, **THEN**, **ELSE**, **ELSEIF**, **END IF**
```mysql
delimiter $$
create procedure insereLivro(
							in titulo varchar(200),
							in editora varchar(200))
begin
	declare id int;
	declare num_livros int;

	select count(idLivro) into num_livros from Livro;

	if num_livros > 0 then
		select max(idLivro) into id from Livro
		set id = id + 1;
	else
		set id = 1;
	end if;

	insert into Livro values(id,titulo,editora);
 end $$
 delimiter ;
```
## Falta ainda switch case e loops
___
## Triggers
Podem ser executados antes ou depois das operações de **INSERT**, **UPDATE** e **DELETE**. Usamos os operadores **NEW** e **OLD** para acessar registros novos e velhos.
```mysql
create trigger nome [before | after] [insert | update | delete]
on tabela
for each row
begin
-- codigo
end
```
Exemplo: 
Um banco de dados de controle de estoque e venda
``` mysql
CREATE TABLE Produtos
(
	IdProduto	int PRIMARY KEY,
	Descricao	VARCHAR(50) UNIQUE,
	Estoque	INT NOT NULL DEFAULT 0
);

CREATE TABLE ItensVenda
(
	IdVenda		INT,
	ProdutoCod	INT, 
	Quantidade	INT
);

create trigger ItensVendaInsert after insert
on ItensVenda
for each row
begin
	update Produtos set Estoque = Estoque - NEW.Quantidade
	where IdProduto = NEW.ProdutoCod;
end

create trigger ItensVendaDelete after delete
on ItensVenda
for each row
begin
	update Produtos set Estoque = Estoque + OLD.Quantidade
where IdProduto = OLD.Produto
end
```
No código acima, temos que após a inserir um novo registro de venda, a tabela de Produtos será atualizada, tendo o seu estoque reduzido de acordo com a quantidade de items que foram vendidos, e o oposto para a deleção de registros de venda.
Para acionar essa trigger:
```mysql
insert into ItensVenda values(1, 3, 1) -- IdVenda=1, ProdutoCod=3, Quantidade=1
insert into ItensVenda values(2, 6, 4) -- IdVenda=2, ProdutoCod=6, Quantidade=4
delete from ItensVenda where IdVenda = 1
```
Temos também os comandos `SHOW TRIGGERS` e `DROP TRIGGER [nome]`