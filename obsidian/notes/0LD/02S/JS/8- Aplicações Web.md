### Cliente e servidor
**Cliente**: browser (firefox, google), solicita recursos
**Servidor**: máquina ou sistema onde a aplicação está hospedada, escuta e processa as solicitações dos clientes, enviando a resposta apropriada
___
### Requisição e resposta
1. O usuário faz uma requisição ao server (obter uma página web, enviar dados do formulário, etc)
2. O servidor processa essa requisição e envia uma resopsta
___
### Interação frontend e backend
- Feita por meio de APIs, normalmente no formato REST ou GraphQL.
___
### Requisições HTTP (Hypertext Transfer Protocol)
A comunicação entre o cliente e o servidor normalmente ocorre por meio do protocolo HTTP, através de **requisições e respostas**. (Para comunicação em tempo real, WebSockets ou Server-Sent Events são usadas)

As requisições HTTP são ações **iniciados por um cliente** com o **objetivo de obter informações de um servidor da web ou enviar informações para ele.**

A requisição contém informações sobre o que o cliente está pedindo ao servidor, como:
- método HTTP
- URL
- cabeçalhos e corpo da mensagem

Os **cabeçalhos** são informaçoes adicionais, como o tipo de navegador ou o OS.
O **corpo** da mensagem pode ser usado para enviar dados para o server no formato text, JSON ou XML.
Os métodos HTTP mais comuns são: **GET, POST, PUT e DELETE**.
![[Pasted image 20231126204627.png]]
![[Pasted image 20231126204640.png]]
![[Pasted image 20231126204653.png]]
![[Pasted image 20231126204717.png]]
![[Pasted image 20231126204707.png]]

___
### JSON
Formato leve para troca de dados entre sistemas. É um subconjunto da notação literal de objeto do JS, mas é independente da linguagem.
- Os nomes dos atributos(chaves) são sempre strings e devem estar entre aspas.
- Os valores podem ser strings, numeros, objetos JSON, arrays, true, false ou null
```json
[
	{
		"nome": "Joao",
		"idade": 30
	},
	{
		"nome": "Maria",
		"idade": 25
	}
]
```