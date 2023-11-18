### LIFO (Last In - First Out) - exemplo para desmonstrar OOP
Nome dado a um stack (empilhamento de dados, onde para se retirar o que estiver no fundo do stack deverá retirar todos os que estiverem acima dele)
- push - colocar um novo dado
- pop - retirar o ultimo dado

Exemplo em python usando objetos
```python
class Stack:
	def __init__(self): # constructor, self indica que referencia o objeto que sera criado
		self.__stack_list = [] # lista como propriedade, __nome para ficar como private
	def push(self, val):
		self.__stack_list.append(val)
	def pop(self):
		val = self.__stack_list[-1]
		del self.__stack_list[-1]
		return val
	def show(self):
		print(self.__stack_list)

stack_obj = Stack()

stack_obj.push(3)
stack_obj.push(2)
stack_obj.push(1)
stack_obj.show() # [1,2,3]

print(stack_object.pop())
print(stack_object.pop())
print(stack_object.pop())
stack_obj.show() # []
```
**NOTA: para os metodos das classes, é necessário passar self como primeiro argumento, sempre**
### Subclass
Quando for criar o construtor de uma subclasse, **obrigatoriamente** deve-se **invocar o construtor da superclasse**
```python
class AddingStack(Stack): # recebe todos os componentes da classe Stack
	def __init__(self):
		Stack.__init__(self) # construtor da superclass
		self.__sum = 0
	def push(self, val): # override de metodo
	    self.__sum += val
	    Stack.push(self, val) # deve-se especificar o nome da superclasse obrigatoriamente
	def pop(self):
	    val = Stack.pop(self)
	    self.__sum -= val
	    return val
	def get_sum(self):
		return self.__sum
		```
### Codigo completo do exemplo
```python 
class Stack:
    def __init__(self):
        self.__stack_list = []

    def push(self, val):
        self.__stack_list.append(val)

    def pop(self):
        val = self.__stack_list[-1]
        del self.__stack_list[-1]
        return val


class AddingStack(Stack):
    def __init__(self):
        Stack.__init__(self)
        self.__sum = 0

    def get_sum(self):
        return self.__sum

    def push(self, val):
        self.__sum += val
        Stack.push(self, val)

    def pop(self):
        val = Stack.pop(self)
        self.__sum -= val
        return val

stack_object = AddingStack()

for i in range(5):
    stack_object.push(i)
print(stack_object.get_sum())

for i in range(5):
    print(stack_object.pop())
```

3.3.1.1