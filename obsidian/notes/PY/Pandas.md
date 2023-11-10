O principal ponto do pandas está em sua estrutura de dados: 
- DataFrame - grupo de dados retangulares, tambḿe chamados de dados tabulares
- Series - array unidimensional indexado por um índice

```python
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
df.to_csv("autores.csv") # cria um csv a partir dos dados da dataframe
autores = pd.read_csv('autores.csv', index_col=0) # le os dados do csv
print(autores.head()) # mesmo resultado do de cima mas sem precisar passar index_col=0
print(autores.info()) # size, qtd de entradas, n de colunas e seus tipos de dados
print(autores.columns()) # somente as colunas que definem os dados
print(autores.index()) # somente os indexes
print(autores.info())
```