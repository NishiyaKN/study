Modulos são arquivos que contêm código JavaScript. Esse sistema se baseia em 4 pilares:
1. Cada script é um módulo por padrão, que esconde suas variáveis e funções do mundo externo.
2. A instrução **export** permite que um módulo exporte os artefatos que deseja compartilhar
3. A instrução **import** permite que um módulo importe artefatos de outros módulos. Apenas artefatos exportados podem ser importados.
4. Não existe(slides defeituosos?)
### Exportação
```js
export function soma(a,b){
	return a + b;
}
```
ou
```js
function soma(a,b){return a + b; }
function subtrai(a,b){return a - b; }

export { soma, subtrai }
```
### Importação
```js
import { soma } from './modulo.js';
console.log(soma(2,3));
```