class Stack:
	def __init__(self): # constructor, self indica que referencia o objeto que sera criado
		self._stack_list = [] # lista como propriedade

stack_obj = Stack()
print(len(stack_obj._stack_list))
