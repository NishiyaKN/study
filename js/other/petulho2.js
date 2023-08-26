function add(n1,n2,a){
    var soma = n1 + n2;
    a(soma);
}
function mostrarResultado(resultado){
    console.log(resultado);
}
var n1 = 5;
var n2 = 22;
add(n1,n2,mostrarResultado)
