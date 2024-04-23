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
#### Codigo completo do exemplo
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
### Variaveis de instancia
Todo objeto possui a variavel `__dict__` que contem os nomes e valores de todas as variaveis que o objeto possui no momento.

```python
class ExampleClass:
    def __init__(self, val = 1):
        self.first = val

example_object_1 = ExampleClass()
example_object_2 = ExampleClass(2)

print(example_object_1.__dict__) # {'first:' 1}
print(example_object_2.__dict__) # {'first:' 2}
```
No codigo acima, ao inicializar a classe podemos passar um valor padrao inicial `val = 1`, que podera ser sobrescrita na criacao de um objeto `e = ExampleClass(2)`

### Variaveis de classe
Existe uma variavel de classe numa copia, mesmo que nao haja objetos na classe.
```python
class ExampleClass:
    counter = 0
    def __init__(self, val = 1):
        self.__first = val
        ExampleClass.counter += 1

example_object_1 = ExampleClass()
example_object_2 = ExampleClass(2)
example_object_3 = ExampleClass(4)

print(example_object_1.__dict__, example_object_1.counter) # {'_ExampleClass__first': 1} 3
print(example_object_2.__dict__, example_object_2.counter) # {'_ExampleClass__first': 2} 3
print(example_object_3.__dict__, example_object_3.counter) # {'_ExampleClass__first': 4} 3
```
**uma variável de classe apresenta sempre o mesmo valor em todas as instâncias de classe (objetos)**
### hasattr
Uma funcao usada para verificar se algum objeto/classe contem uma propriedade especifica.
Passa como argumento o objeto ou classe e depois o atributo que deseja verificar.
```python
class ExampleClass:
    def __init__(self, val):
        if val % 2 != 0:
            self.a = 1
        else:
            self.b = 1

example_object = ExampleClass(1)
print(example_object.a)

if hasattr(example_object, 'b'):
    print(example_object.b)
```
---
### Self
E usado para invocar outros metodos de dentro da classe
```python
class Classy:
    def other(self):
        print("other")

    def method(self):
        print("method")
        self.other()

obj = Classy()
obj.method()
```
### Heranca
```python
issubclass(ClassOne, ClassTwo) 
```
Devolve True se `ClassOne` for uma subclasse de `ClassTwo`. 

```python
isinstance(objectName, className) 
```
Devolve True se `objectName` for uma instancia de `className`. 

#### Heranca multipla
```python
class SuperA:
    var_a = 10
    def fun_a(self):
        return 11

class SuperB:
    var_b = 20
    def fun_b(self):
        return 21

class Sub(SuperA, SuperB):
    pass

obj = Sub()

print(obj.var_a, obj.fun_a())
print(obj.var_b, obj.fun_b())
```
**A classe Sub tem duas superclasses: SuperA e SuperB. Isto significa que a classe Sub herda todos os bens oferecidos por ambos SuperA e SuperB.**


Um método chamado __str__() é responsável pela conversão do conteúdo de um objeto numa string (mais ou menos) legível. Pode redefini-la se quiser que o seu objeto se possa apresentar de uma forma mais elegante.

- MRO
- Criar sua propria excecao
- super()