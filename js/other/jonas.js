function executarSeCondicaoSatisfeita(condicao,funcao){
    return function(x){
        if(condicao(x)){
            return funcao(x);
        }
        else{
            return "condicao nao satisfeita,a funcao nao sera executada";
        }
    };
}
// Example condition function
function verificarPar(num) {
    return num % 2 === 0;
}

// Example function to be executed
function dobrarNumero(num) {
    return num * 2;
}

const condicaoSatisfeita = executarSeCondicaoSatisfeita(verificarPar, dobrarNumero);

const input = 5;
const resultado = condicaoSatisfeita(input);

console.log(resultado);
