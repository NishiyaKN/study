```python
multiline = '''Line #1
Line #2'''
str1 = 'a'
str2 = 'b'
print(str1 + str2) # ab
print(5 * str1) # aaaaa

char1 = 'a'
print(ord(a)) # 97, valor do code point do caractere em ASCII ou UNICODE
print(chr(97)) # a, devolve o caractere correspondente ao valor do code point

line = "string line"
for c in line:
	print(c, end=' ') # s t r i n g   l i n e 

print(line[1:5]) # trin
print('g' in line) # True
print('f' in line) # False

line = line + "s"

print(min(line)) # retorna o caractere com menor valor ASCII, nesse caso o <space>
print(max(line)) # t eu acho
print(line.index(t)) # 1
print(list("abc")) # ['a','b','c'] crie uma lista de caracteres
print("abcabc".count("b")) # 2 conta as ocorrencias do caractere especificado

print("aBcD".capitalize()) # Abcd
print('[' + 'alpha'.center(9) + ']') # [  alpha  ]
print('[' + 'gamma'.center(20, '*') + ']') # [*******gamma********]
print("zeta".startswith("z")) # True
print("zeta".endswith("ta")) # True
print("Eta".find("ta")) # 1
print("Eta".find("mma")) # -1 if it doesn't exist, prints -1
print("tau tau tau".rfind("ta")) #8 starts from right to left

print('lambda30'.isalnum()) # True
print('30'.isalnum()) # True
print('@'.isalnum()) # False
print('o i'.isalnum()) # False pois ha um espaco

print("aaaa".isalpha()) # True
print("202".isdigit()) # True

print("Oi".islower()) # False
print("oi".islower()) # True
print(" ".isspace()) # True
print("AAAA".issupper()) # True
print(",".join(["omicron", "pi", "rho"])) # omicron,pi,rh

print("[" + " tau ".lstrip() + "]") # [tau ]
print("[" + " tau ".rstrip() + "]") # [ tau]
print("www.cisco.com".lstrip("w.")) #  cisco.com
print("[" + "   aleph   ".strip() + "]") # [aleph]

print("Apple juice".replace("Apple", "Budou")) # Budou juice
print("bom dia meu caro".split()) # ['bom','dia','meu','caro']

print("Bom Dia".swapcase()) # bOM dIA
print("eu sEila o QUE faZER".title()) # Eu Seila O Que Fazer
print("SiGmA".upper()) # SIGMA
print("SiGmA".lower()) # sigma

list2 = sorted(list1) # cria uma nova lista
list2.sort() # nao cria uma nova lista, altera a propria lista

a = str(29) # transforma em string
b = int('1') 
c = float('2.5')
```