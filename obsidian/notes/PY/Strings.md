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
```