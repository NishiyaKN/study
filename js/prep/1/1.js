const soma = (n1,n2) => n1 + n2;

function imprime(n1,n2,callback){
    return callback(n1,n2);
}

console.log(imprime(2,3,soma));

