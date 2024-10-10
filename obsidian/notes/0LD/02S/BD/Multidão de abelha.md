04- O setor financeiro da empresa precisa de um relatório que mostre o código e o nome dos produtos cujo preço são menores que 10 ou maiores que 100.
```sql
select id, name from products 
where price < 10 or price > 100
```
05- O setor financeiro precisa de um relatório sobre os fornecedores dos produtos que vendemos. Os relatórios contemplam todas as categorias, mas por algum motivo, os fornecedores dos produtos cuja categoria é a executiva, não estão no relatório.
Seu trabalho é retornar os nomes dos produtos e dos fornecedores cujo código da categoria é 6.
```sql
select p.name, f.name 
from products p, providers f, categories c
where p.id_providers = f.id
and p.id_categories = c.id
and c.id = 6
```
06- Quando os dados foram migrados de Banco de Dados, houve um pequeno mal-entendido por parte do antigo DBA.
Seu chefe precisa que você exiba o código e o nome dos produtos, cuja categoria inicie com 'super'.
```sql
select p.id, p.name
from products p, categories c
where p.id_categories = c.id
and c.name like 'super%'
```
07- Todos os meses a empresa pede um relatório das cidades que os fornecedores estão cadastrados. Dessa vez não vai ser diferente, faça uma consulta no Banco de Dados que retorne todas as cidades dos fornecedores, mas em ordem alfabética.
OBS: Você não deve mostrar cidades repetidas.
```sql
select distinct city from providers
order by city
```
08- O setor financeiro da nossa empresa, está querendo saber os menores e maiores valores dos produtos, que vendemos.
Para isso exiba somente o maior e o menor preço da tabela produtos.
```sql
select max(price), min(price) from products
```
09- Como de costume o setor de vendas está fazendo uma análise de quantos produtos temos em estoque, e você poderá ajudar eles.
Então seu trabalho será exibir o nome e a quantidade de produtos de cada uma categoria.
```sql
select c.name, sum(p.amount)
from products p, categories c
where p.id_categories = c.id
group by c.name
```
10- Na empresa que você trabalha está sendo feito um levantamento sobre os valores dos produtos que são comercializados.
Para ajudar o setor que está fazendo esse levantamento você deve calcular e exibir o valor médio do preço dos produtos.
OBS: Mostrar o valor com dois números após o ponto.
```sql
select round(avg(price),2) from products
```

11- Uma Vídeo locadora contratou seus serviços para catalogar os filmes dela. Eles precisam que você selecione o código e o nome dos filmes cuja descrição do gênero seja 'Action'.
```sql
select m.id, m.name from movies m, genres g
where g.description = 'Action'
and m.id_genres = g.id
```
13- Antigamente a locadora fez um evento em que vários filmes estavam em promoção, queremos saber que filmes eram esses.
Seu trabalho para nós ajudar é selecionar o ID e o nome dos filmes cujo preço for menor que 2.00.
```sql
select m.id, m.name
from movies m, prices p
where m.id_prices = p.id
and value < 2
```
14- A vídeo locadora está fazendo seu relatório semestral e precisa da sua ajuda. Basta você selecionar o nome dos clientes e a data de locação, das locações realizadas no mês de setembro de 2016.
``` sql
select c.name, r.rentals_date
from customers c, rentals r
where r.id_customers = c.id
and extract(month from r.rentals_date) = 9
```
15- A locadora tem objetivos de criar várias franquias espalhadas pelo Brasil. Para isso queremos saber em quais cidades nossos clientes moram.
Para você nos ajudar selecione o nome de todas as cidades onde a locadora tem clientes. Mas por favor, não repita o nome da cidade.
```sql
select distinct city from customers
```
16- A locadora pretende fazer uma promoção para os clientes que ainda não fizeram nenhuma locação.
Seu trabalho é nos entregar o ID e o nome dos clientes que não realizaram nenhuma locação. Ordene a saída por ID.
```sql
select id, name from customers 
where id not in (select id_customers from locations)
order by id
```
17- O setor financeiro encontrou alguns problemas na entrega de um dos nossos fornecedores, a entrega dos produtos não condiz com a nota fiscal.
Seu trabalho é exibir o nome dos produtos e o nome do fornecedor, para os produtos fornecidos pelo fornecedor ‘Ajax SA’.
```sql
select p.name, f.name 
from products p, providers f
where f.id = p.id_providers
and f.name = 'Ajax SA'
```
18- O setor de importação da nossa empresa precisa de um relatório sobre a importação de produtos do nosso fornecedor Sansul.
Sua tarefa é exibir o nome dos produtos, o nome do fornecedor e o nome da categoria, para os produtos fornecidos pelo fornecedor ‘Sansul SA’ e cujo nome da categoria seja 'Imported'.
```sql
select p.name, f.name, c.name
from products p, providers f, categories c
where p.id_providers = f.id
and p.id_categories = c.id
and f.name = 'Sansul SA'
and c.name = 'Imported'
```
19- A nossa empresa está querendo fazer um novo contrato para o fornecimento de novos produtos superluxuosos, e para isso precisamos de alguns dados dos nossos produtos.
Seu trabalho é exibir o nome dos produtos, nome dos fornecedores e o preço, para os produtos cujo preço seja maior que 1000 e sua categoria seja ‘Super Luxury.
```sql
select p.name, f.name, p.price
from products p, providers f, categories c
where p.id_providers = f.id
and p.id_categories = c.id
and p.price > 1000
and c.name = 'Super Luxury'
```
20- A auditoria financeira da empresa está pedindo para nós um relatório do primeiro semestre de 2016. Então exiba o nome dos clientes e o número do pedido para os clientes que fizeram pedidos no primeiro semestre de 2016.
```sql
select c.name, o.id
from customers c, orders o
where c.id = o.id_customers
and extract(month from o.orders_date) <= 6
```
21- Na hora de entregar o relatório de quantos produtos a empresa tem em estoque, uma parte do relatório ficou corrompida, por isso o responsável do estoque lhe pediu uma ajuda, ele quer que você exiba os seguintes dados para ele.
Exiba o nome dos produtos cujas quantidades estejam entre 10 e 20 e cujo nome do fornecedor inicie com a letra ‘P’.
```sql
select p.name 
from products p, providers f
where p.id_providers = f.id
and p.amount >= 10
and p.amount <= 20
and f.name like 'P%'
```
22- O setor de vendas quer fazer uma promoção para todos os clientes que são pessoas jurídicas. Para isso você deve exibir o nome dos clientes que sejam pessoa jurídica.
```sql
select name from customers
where id in (select id_customers from legal_person)
```
23- O setor de vendas precisa de um relatório para saber quais produtos estão sobrando em estoque.
Para você ajudar o setor de vendas, exiba o nome do produto e o nome da categoria, para os produtos cuja quantidade seja maior que 100 e o código da categoria seja 1,2,3,6 ou 9. Mostre essas informações em ordem crescente pelo código da categoria.
```sql
select p.name, c.name
from products p, categories c
where p.id_categories = c.id
and p.amount > 100
and c.id in (1,2,3,6,9)
order by c.id
```
38- A Universidade Tecnológica de Marte está com seu concurso aberto para Pesquisadores. Porém o computador que processava os dados dos candidatos estragou. Você deve mostrar a lista dos candidatos, contendo o nome do candidato e a sua pontuação final (com duas casas decimais após a vírgula). Lembre-se de mostrar a lista ordenada pela pontuação do candidato (maior pontuação no topo da lista).
A pontuação do candidato é o resultado da média ponderada descrita abaixo:
Avg=(math∗2)+(specific∗3)+(project_plan∗5)/10
```sql
select c.name, round(((s.math * 2) + (s.specific * 3) + (project_plan * 5))/10,2) as avg
from candidate c, score s
where c.id = s.candidate_id
order by avg desc
```