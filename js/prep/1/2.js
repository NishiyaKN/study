function funcaoCondicionada(condicao, funcaoOriginal) {
  // Retorna uma nova função que aceita argumentos
  return function(...args) {
    // Verifica se a condição é satisfeita
    if (condicao(...args)) {
      // Se a condição for verdadeira, executa a função original
      return funcaoOriginal(...args);
    } else {
      console.log('A condição não foi satisfeita. A função não foi executada.');
    }
  };
}

// Exemplo de uso:
function funcaoParaExecutar(x, y) {
  console.log(`Executando com x = ${x} e y = ${y}`);
}

const condicao = (x, y) => x > 0 && y > 0;

const funcaoCondicionadaExecutarSePositivo = funcaoCondicionada(condicao, funcaoParaExecutar);

funcaoCondicionadaExecutarSePositivo(5, 3); // A condição é satisfeita, a função é executada.
funcaoCondicionadaExecutarSePositivo(-1, 3); // A condição não é satisfeita, a função não é executada.

