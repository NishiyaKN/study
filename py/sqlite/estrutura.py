import pandas as pd

Autor = ['Sun Tzu', 'Fernando Pesosa', 'Thomas Mann', 'Joao Guimaraes Rosa']
Livro = ['A Arte da Guerra', 'Poesias Selecionadas', 'A Montanha Magica', 'Primeiras Estorias']
Ano = [2000, 2004, 2015, 2017]

dados = {
        'Autor': Autor,
        'Livro': Livro,
        'Ano': Ano
        }

df = pd.DataFrame(dados)
# df.to_csv("autores.csv") # cria um csv a partir dos dados da dataframe
autores = pd.read_csv('autores.csv', index_col=0)
print(autores)

print(autores.index)
