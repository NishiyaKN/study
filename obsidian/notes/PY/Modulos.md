### Import
```python
import math
print(math.pi)
#########################
from math import pi
print(pi)
#########################
from math import *
#########################
import math as m
print(m.pi)
#########################
from math import pi as PI, sin as sine
print(PI)
```
### Random
```python
from random import random, randrange, randint
print(random()) # float entre 0 e 1
print(randrange(0,10)) # int entre 0 a 9
print(randint(0,10)) # int entre 0 a 10
###################
from random import choice, sample
list = [1,2,3,4,5,6,7,8,9,10]
print(choice(list)) # escolhe um numero aleatorio da list
print(sample(list,5)) # eschole 5 numeros aleatorios da list
```
### Platform
```python
from platform import platform, machine, processor, system, version
print(platform()) # OS and kernel release
print(machine()) # CPU arch
print(processor()) # CPU arch (Nothing on mine ??)
print(system()) # Linux or Windows
print(version()) # Kernel name
```
### Modulos
`__name__`: nome do ficheiro, se for chamado dentre de si proprio, o nome é `__main__`