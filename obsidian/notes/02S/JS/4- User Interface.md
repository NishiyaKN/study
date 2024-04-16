## DOM
Document Object Model, é um modelo de representação e intereação do documento HTML ou XML utilizado por navegadores para representar páginas na web.
Sua estrutura é em formato de árvore, com vários galhos que representam diferentes elementos da página.

Exemplo de DOM:
![[DOM model example.png]]
Podemos alterar o DOM através do use de javascript. Para isso, utilizamos o objeto **document**, que é responsável por conceder ao javascript o acesso a árvore DOM do nevegador web. Qualquer coisa criada pelo navegador no modelo da página pode ser acessado através desse objeto.
___
## Exemplos de manipulação do DOM
### Seleção de elementos
Selecionar elementos HTML no DOM:
```js
const e = document.getElementById("elemento")
const e = document.getElementsByClassName("elemento")
const e = document.getElementsByTagName("elemento")
const e = document.querySelector("elemento")
const e = document.querySelectorAll("elemento")
```
### Manipulação de conteúdo
Alterar ou obter o conteúdo dos elementos HTML
```js
elemento.textContent = "Valor" // usado pra setar ou pegar texto simples
tempo.innerText = timestamp // valor texto do elemento, leva em consideração css
cell.innerHTML = contatos[i].nome // usado para inserir dinamicamente elemento HTML
elemento.value = "teste@email.com" // usado mais em elementos de form(input,select)
```
### Estilização
Alterar os estilos de elementos HTML
```js
headerCell.style.fontWeight = "bold";
headerCell.style.textAlign = "center";
title.style.color = "blue";
```
### Manipulação de atributos
### Criação e manipulação de elementos
### Traversing do DOM
### Animações e transições
___
## Manipulação de eventos
Eventos do DOM como cliques de mouse, pressionamento de teclas, envio de formulários, etc. Basicamente qualquer coisa que acontece na página, portanto é um dos conceitos centrais do javascript para web.
### Event listeners
É uma função que é chamada quando um determinado evento ocorre em um elemento específico. Ele "escuta" o evento e responde executando algum código.
Alguns tipos:
- click
- keydown
- keyup
- keypress
- focus
- submit

Quando um **evento ocorre** um objeto chamado **Event** é criado automaticamente. Esse objeto contém informações sobre o evento, como o tipo de evento, elemento alvo, coordenadas do mouse, teclas pressionadas, etc.

A **delegação de eventos** é uma técnica usado onde se tem muitos elementos semelhantes na página, desse modo, seria mais eficiente adicionar um único elemento listener no elemento pai em vez de adicionar em cada elemento individual.
### Exemplo de manipulação de eventos
```js
const titulo = document.getElementById("titulo");
const paragrafo = document.getElementById("paragrafo");
const botao = document.getElementById("botao");

titulo.innerText = "Novo titulo";
paragrafo.innerHTML = "Paragrafo com <strong>bold</strong>";
botao.style.backgroundColor = "blue";

botao.addEventListener("click",()=>{
	alert("Click!");
})
```
___
## Manipulação de formulários
Usa métodos como `getElementById` para selecionar os objetos do formulário
Usa listeners para capturar eventos de formulário, como de envio `submit`
Para evitar que um evento `submit` seja enviado automaticamente, usa `event.preventDefault()`.
```js
const formulario = document.getElementById("form");

formulario.addEventListener("submit",function (event)=>{
	const emailInput = document.getElementById("email");
	const senhaInput = document.getElementById("senha");

	if(!emailInput.value || !senhaInput.value){
		event.preventDefault(); // evita o envio do formulario
		alert("Campos nao preenchidos");
	}
})
```