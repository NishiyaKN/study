import pandas as pd

# duas listas, primeiro a de chaves e a outra de valores
cidades = ['Maringa', 'Itabira', 'Uberlandia', 'Salvador', 'Fortaleza']
populacao = [403.063, 120.904, 699.097, 2.886698, 2.686612]

# cria um dicionario a partir de ambas
populacao_cidades = dict(zip(cidades,populacao))
print(populacao_cidades)
print(type(populacao_cidades)) # verifica que realmente tem a tipagem de um dicionario

print(populacao_cidades['Maringa']) # printa o valor respectiov
print('Sao Paulo' in populacao_cidades) # verifica que nao existe sao paulo como chave

populacao_cidades['Sao Paulo'] = 12331.325 # adiciona novo par
del populacao_cidades['Fortaleza'] # exclui um par
