function aplicarfuncao(funcao,argumento){
    var resultado = funcao(argumento);
    return resultado;
}
// Example functions and argument
function dobrarNumero(num) {
    return num * 2;
}

function squareNumber(num) {
    return num * num;
}

var input = 5;

// Applying the dobrarNumero function to the input
var resultadoDobro = aplicarfuncao(dobrarNumero, input);
console.log("Resultado dobro:", resultadoDobro);

// Applying the squareNumber function to the input
var resultadoQuadrado = aplicarfuncao(squareNumber, input);
console.log("Resultado quadrado:", resultadoQuadrado);
