1. Procedimento que, dados o título e o nome da editora, realiza o cadastro de um novo livro ao acervo;
2. Procedimento que, dado o nome do cliente (ou parte do nome), busca todos os empréstimos de livros desse cliente

Escreva uma stored procedure que recebe os dados de um novo livro e o inclui no
acervo. Sua stored procedure deve receber como parâmetros o título do livro,
nome da editora e telefone da editora. Caso a editora não esteja cadastrada no
banco, sua procedure deve cadastrá-la.

Escreva uma stored procedure que cadastra um novo usuário para a biblioteca.
Sua função deve receber o nome, o endereço e o telefone do usuário. Caso o
usuário já esteja cadastrado, sua função não deve cadastrá-lo novamente.


















Exercícios de Laboratório - 04/09/2023

  

Usando o banco de dados de biblioteca (anexo) neste exercício, desenvolva as seguintes stored procedures em MySQL:

  

1. Procedimento que, dados o título e o nome da editora, realiza o cadastro de um novo livro ao acervo;
    

  

delimiter $$

create procedure sp_cadastrar(IN tit varchar(100), IN edi varchar(100))

begin

    declare id int;

declare num_livros int;

select count(idLivro) into num_livros from LIVRO;

if num_livros > 0 then

    select max(idLivro) into id from LIVRO;

     set id = id + 1;

    else

    set id = 1;

    end if;

    insert into LIVRO values (id,tit,edi);

end $$

  

2. Procedimento que, dado o nome do cliente (ou parte do nome), busca todos os empréstimos de livros desse cliente (veja exemplo no código Java da última aula)
    

  

delimiter $$

create procedure sp_buscarEmprestimos(IN nome varchar(100))

begin

  

select l.Titulo from LIVROS_EMPRESTADOS le, LIVRO l, USUARIO u

where le.IdLivro = l.IdLivro

and le.NoCartao = u.NoCartao

and u.Nome like concat("%",nome,"%");

  

end $$