### Introdução
- Inicialmente chamado de "LiveScript" (oficialmente é ECMAScript)
- Utilizado incialmente para o front-end, agora está em toda parte
- Pode ser executado diretamente do navegador
- Linguaguem multiparadigma (OOP/funcional)
___
### Características
- Linguagem Interpretada e [[Orientada a Objetos]]
- Tipagem dinâmica - variáveis não possuem um tipo estático definido
- Manipulação do [[DOM]]
- [[Assincronismo]]
___
### Variáveis
- `var`
	- Escopo de **função**
	- Hoisting - movidas para o topo, pode ser usada antes de ser declarada
	- Reatribuição e redeclaração no mesmo escopo
- `let`
	- Escopo de **bloco** (bloco de função, loop ou condicional)
	- Não há hoisting - devem ser declaradas antes de serem usadas
	- Reatribuição, mas não redeclaração no mesmo escopo
- `const`
	- Escopo de **bloco**
	- Não há hoisting
	- Valor constante - não pode ser alterado o valor após ser atribuído
	- Se tiver um objeto ou array, o valor não pode ser alterado, mas suas **propriedades** ou **elementos individuais** podem.
 ___
### Sintaxe
- **Comentários** - `//` ou `/*...*/`
- **Condição**:
	![[Condition example.png|300]]
 - **Repetição**:
	 - for
		 ![[Pasted image 20231003212142.png|300]]
	 - while
	 ![[Pasted image 20231003212152.png|250]]
	- do while
	![[Pasted image 20231003212214.png|250]]
- **Funções**
	 ![[Pasted image 20231003212537.png|350]]
- **Escopo global e local**
___
Funções alert(), confirm() e prompt()