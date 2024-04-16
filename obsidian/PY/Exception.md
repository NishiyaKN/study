### Raise
```python
def fun():
	raise DivisionByZero # intencionalmente envia uma exception

try:
	fun()
except:
	print("erro")

```
### Assert
Serve para levantar uma exception, usado para verificar dados
Levanta a exception caso o resultado seja `False`, `None`, `0` ou uma string vazia
```python
import math

x = float(input("Enter a number: "))
assert x >= 0.0

x = math.sqrt(x)
print(x)
```