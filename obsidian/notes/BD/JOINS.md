select Titulo, NomeEditora, Nome, Fone from LIVRO L, EDITORA E **where** L.NomeEditora = E.nome

INNER JOIN (preseva aquilo que e igual)
select Titulo, NomeEditora, Nome, Fone from LIVRO L **join** EDITORA E on (L.NomeEditora = E.Nome)

OUTER JOIN (quer saber tambem que e diferente)
select Titulo, NomeEditora, Nome, Fone from LIVRO L **right** join EDITORA E on (L.NomeEditora = E.Nome)

**right join** totalidade do que estiver no lado direito, nesse caso da editora