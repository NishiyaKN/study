## Tipos de dados
- integer | smallint
- decimal
- double precision | float | real
- char(n) - tamanho fixo de exatamente n caracteres
- varchar(n) - tamanho variavel de até n caracteres
- blob - binary large object
- date | time | timestamp
___
## Comandos DDL
```mysql
create schema nome_db;

create table nome_tb(
	id int not null,
	nome varchar(100),
	sobrenome varchar(100),
	datanasc date
	primary key(id)
	);

alter table nome_tb add email varchar(100);
alter table nome_tb drop sobrenome;
drop table nome_tb;
drop schema nome_db;
```
___
## Comandos DML
```mysql
insert into nome_tb values(1,'john','smith','02-05-1996');
update nome_tb set nome = 'John', sobrenome = 'Smith' where id = 1;
delete from nome_tb where id = 1;
```
___
## Consultas básicas
Sintaxe:
```mysql
select [distinct] <atributos>
from <tabelas>
[where <condições]
[group by atributo]
[having <condições>]
[order by atributo]
```
distinct trabalha em cima do resultado
___
## Nulos
Verificamos se um valor é nulo a partir dos comandos **IS NULL** e **IS NOT NULL**:
```mysql
-- Recupere os nomes de todos os empregados que não possuem supervisores.
select pnome, snome
from empregado
where cpfsuper is null;
```
___
## Ordenação
A ordem padrão é ascendente (1->9, a->z), sendo possível usar **DESC** para reverter isso.
```mysql
-- Recuperar a lista de empregados e dos projetos em que eles trabalhem, ordenados pelo departamento do empregado e cada departamento ordenado alfabeticamente pelo sobrenome do empregado.
select d.nome, e.snome, e.pnome, p.pnome
from departamento d, empregado e, trabalha-em w, projeto p
where d.dnumero = e.dnum
and e.cpf = w.ecpf
and w.pno = p.pnumero
order by d.dnome, e.snome;
```
___
## Funções agregadas
- count
- sum
- max
- min
- avg
```mysql
select max(salario), min(salario), avg(salario)
from empregados;

select count(*) from empregado, departamento 
where dnum = dnumber and dnome = 'Pesquisa'
```
#### Having
É uma cláusula usada para recuperar valores de funções agregadas com certas condições:
```mysql
-- Para cada projeto em que trabalhem mais de dois empregados, recupere o número do projeto, o nome do projeto e o número de empregados que trabalham no projeto.
select pnumero, pnome, count(*)
from projeto, trabalha-para
where pnumero = pno
group by pnumero, pnome
having count(*) > 2;
```
#### Substring
Podemos fazer uma query que procura por uma string por meio do comando **LIKE** e com os wildcard `%` e `_`
O primeiro substitui qualquer numero de caracters, o segundo apenas um caracter. 
```mysql
select nome
from usuarios
where media > 6
and nome like "Jo%"
```
___
## Grupos
```mysql
-- Para cada departamento, recuperar o seu numero, a quantidade de empregados que possui e a sua media salarial
select dnum, count(*), avg(salario)
from empregado
group by dnum;
-- Para cada projeto, recuperar o numero do projeto, seu nome e o numero de empregados que trabalham no projeto
select pnumero, pnome, count(*)
from projeto, trabalha-em
where pnumero = pno
group by pnumero, pnome;
```
Normalmente trabalha com funções agregadas, com quantidades de algo `count()`
Se houver select em elementos não oriundos de funções agregadas, coloque todos eles no group by
___
## Consultas aninhadas
É uma consulta especificada dentro da cláusula **WHERE** de uma outra consulta:
```mysql
-- Recupere o nome e endereço de todos os empregados que trabalham para o departamento de Pesquisa.
select pnome,snome,endereco
from empregado
where dnum in (select dnumero
			  from departamento
			  where dnome='Pesquisa');
```
Podemos usar **IN** para verificar se os dados  de uma tabela estão presentes em outra tabela ou **NOT IN** para verificar o oposto.

Se a condição WHERE de uma consulta aninhada referenciar um atributo de uma relação declarada na consulta externa, as consultas estarão correlacionadas.
```mysql
-- Recupere o nome de cada empregado que tenha um dependente com o mesmo nome do empregado
select e.pnome, e.snome
from empregado as e
where e.cpf in (select ecpf
			   from dependente
			   where ecpf=e.cpf e p.nome = nomedependente)
```
Na consulta anterior, a consulta aninhada tinha um resultado diferente para cada tupla da consulta externa. 
Ela poderia ser escrita como:
```mysql
select e.pnome, e.snome
from empregado as e, dependente as d
where e.cpf = d.ecpf and e.pnome = d.nomedependente;
```