### Tipos de Frontend
###### Aplicações Web Tradicionais
- Baseiam-se em renderização no lado do server, onde cada interação ou pedido geralmente resulta em uma nova página enviada pelo server.
- Exemplos: PHP, ASP.NET, Ruby on Rails

###### Single Page Application (SPAs)
- Aplicações web que carregam uma única página e atualizam dinamicamente conforme o usuário interage.
- Experiência mais fluida
- A maioria das interações ocorre no lado do cliente
- Somente os dados (normalmente JSON) são transmitidos entre o cliente e o server
- Usa do JS e AJAX/Fetch API para realizar requisições HTTP sem recarregar a página
- Exemplos: React, Angular, Vue.js

###### Aplicações Móveis Nativas
- Android ou iOS
- Java/Kotlin, Objective-C/Switft

###### Aplicações Móveis Híbridas
- HTML, CSS e JS empacotadas em um pacote nativo que permite que sejam instaladas e executadas como uma aplicação nativa
- Cordova, PhoneGap, Ionic.

###### Aplicações Desktop
- Electron
yada yada
___
Axios: biblioteca JS para realizar requisições HTTP, usada mais com Vue e React
___
### API Fetch
A função `fetch()` é uma API do JS pra fazer requisições HTTP de forma assíncrona.
O fetch retorna uma promise, então podemos usar `.then()` para manipular a resposta ou `.catch()` para lidar com erros
```js
fetch("https://api.example.com/data", {
	method: "POST",
	headers: {
		"Content-Type": "application/json",
	},
	body: JSON.stringify({
		key1: "value1",
		key2: "value2",
	}),
})
.then((response) => response.json()) // Transforma a resposta em um objeto JSON
.then((data) => console.log(data)) // Manipula o dado retornado.
.catch((error) => console.error("Error: ", error)); // Captura qualquer erro
```