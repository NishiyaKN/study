**É uma operação que não é executada imediatamente,** sendo colocada em uma fila e executada mais tarde quando a CPU estiver disponível.
- úteis para lidar com tarefas que podem demorar um tempo para serem concluídas, como uma solicitação HTTP ou ler um arquivo
Existem 3 maneiras de lidar com operações assíncronas:
- Callback 
- Promise 
- Async / Await
___
### Callback
```js
function avisar(){
	alert('Seu tempo acabou, tente novamente.');
}
setTimeout(avisar,5000); // avisar é o callback
```
A função `avisar()` será executada após 5000ms (5 segundos).
___
### Promise
Padrão mais moderno para lidar com operações assíncronas.
A Promise API representa um valor futuro que pode ser resolvido(sucesso) ou rejeitado(erro).
Pode estar em um dos seguintes estados:
- Pending: promise ainda não foi resolvida.
- Fulfilled: promise foi resolvida com um valor.
- Rejected: promise foi rejeitada com um erro.
Precisa usar um construtor:
```js
new Promise((resolve: Function, reject: Function )=> void)
```
Exemplo:
```js
function somaAssinc(a,b){
	return new Promise((resolve,reject) =>{
	setTimeout(()=>{
		const result = a + b;
		resolve(result);
		}, 1000);	
	});
}

somaAssinc(5,3)
.then((sum)=>{
	console.log(`A soma e: ${sum}`);
})
.catch((error)=>{
	console.error(`Erro: ${error}`);
});
```
A função somaAssinc calcula a soma após 1 segundo.
Usamos o método `.then()` para lidar com o resultado da Promise quando ela for resolvida.
Se ocorrer um erro durante o processamento da Promise, podemos usar o metodo `.catch()`.
___
### Async/Await
Forma mais legível e simplificada para lidar com operações assíncronas.
- Baseado em promises

**Async**: ao declarar uma função como async, indica que ela conterá operações assíncronas. Automaticamente transforma a função em uma Promise.
**Await**: dentro de uma função async, pode-se usar `await` antes de uma expressão que retorna uma Promise, ele pausa a execução da função até que a Promise seja resolvida.

Pode-se usar try/catch para tratamento de erros em operações assíncronas.
Exemplo: 
```js
function atraso(ms){
	return new Promise((resolve)=> setTimeout(resolve,ms));
}
async function teste(){
	console.log("Iniciando...");
	await atraso(8000);
	console.log("Apos o atraso de 8 segundos.");
}
teste();
```
Nesse exemplo a função atraso retorna uma Promise após 8000ms, a função de teste usa async/await para esperar por essa Promise de atraso, e durante esse tempo outras operações podem ser executadas.

Vantagens:
- Codigo mais limpo
- Tratamento de erros com blocos try/catch
- Encadeamento de operações
**Não substitui completamente o uso de Promises**

