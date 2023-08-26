function condicionalExec(funcao, condicao) {
  return function (...args) {
    if (condicao(...args)) {
      return funcao(...args);
    } else {
      console.log("A condição não foi satisfeita. A função não será executada.");
    }
  };
}

// Exemplo de uso
function minhaFuncao(x) {
  console.log("Minha função foi executada com o argumento:", x);
}

function minhaCondicao(x) {
  return x > 5;
}

const funcaoCondicional = condicionalExec(minhaFuncao, minhaCondicao);

funcaoCondicional(3); // A condição não foi satisfeita. A função não será executada.
funcaoCondicional(7); // Minha função foi executada com o argumento: 7

