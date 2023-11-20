- Variáveis são endereços de memória, são representados por objetos
- Concatenação por vírgula: `print("bom","dia")` ou por + (nesse caso deve-se converter os valores não strings para string com `str(variable)`)
- Podemos exibir variáveis como em C:
```python
print("Codigo: %d"%codigo)
```
### Listas
```python
num = [1,2,3,4,5]
print(len(num))
del num[0] # [2,3,4,5]

print(num[-1]) # 5
print(num[-2]) # 4

num.append(5) # [1,2,3,4,5]
num.insert(0,0) # [0,1,2,3,4,5]
num.sort
num.reverse
```
- Splice
```python
list_1 = [1,2,3,4,5]
list_2 = list_1[:] # Copia o array inteiro
list_3 = list_2[1:3] # [2,3]
list_4 = list_1[1:-1] # [2,3,4]
list_5 = list_1[:3] # [1,2,3]

del list_2[1:3] # [1,4,5]
del list_2[] # []
del list_2 # error, list_2 is not defined
```
- In e not in
```python
list [1,2,3,4,5]
print(5 in list) # True
print(5 not in list) # False
print(0 in list) # False
```
### Function
```python
def imprime(msg):
	print(msg)

imprime("ola")

def introduction(fname, lname = "Smith"):
	print(fname,lname) # se nao tiver input em lname, usa o valor padrao pre definido
	return 0
```
### None
```python
value = None
if value is None:
	print("None")
```
## Tuple
Tuples são heterogêneas e **imutáveis** e pode ter duplicatas
```python
tuple = (1,2,3,4) # (1,2,3,4)
tuple2 = 1., .5, .25, .125 # (1.0, 0.5, 0.25, 0.125)

t1 = tuple + (6,7) # (1,2,3,4,6,7)
t2 = tuple * 2 # (1,2,3,4,1,2,3,4)
```
## Dictionary
Não é uma lista, mas é mutável. Conjunto de pares de **key-values**
- Cada chave é única, pode ser qualquer tipo de dado imutável, menos uma lista
- Procura uma **key** a partir de um **value**
- Não é bidirecional
- Case sensitive
```python
dict = {"cat": "chat", "dog": "chien ", "horse": "cheval"}
print(dict['cat']) # chat

# Mudar o value de uma key
dict['cat'] = 'minou'

# Adicionar novo par tem duas maneiras
dict['sway'] = 'cygne'
dict.update({"duck": "canard"})

# Deletar usa a key
del dict['dog']
# Deletar o ulimo par do dictionary
dict.popitem()

for key in dict.keys():
	print(key, "->", dict[key])

# .items devolve uma tuple
for eng, fre in dict.items():
	print(eng, "->", fre)

for fre in dict.values():
	print(fre) # cheval chien chat
```

