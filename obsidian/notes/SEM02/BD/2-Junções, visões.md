## Join
Utilizamos nas aulas o chamado join natural:
```mysql
select nome,id_curso
from aluno a, realiza r
where a.ID = r.ID
```
## Views
Usado para restringir o acesso aos dados, retorna uma tabela com dados específicos definidos na view.
```mysql
-- Criando uma view, 'or replace' pode ser usado para atualizar a view
create or replace view nome_view as
select id, nome, cidade
from usuarios
where estado = 'SP'

-- Para acessar os conteudos da view
select * 
from nome_view;

drop view nome_view;
```