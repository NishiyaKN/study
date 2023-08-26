function main(num,callback){
    let result = callback(num);
    return () => console.log("Numero entrado e par, resultado do modulo:", result);
};

const verificaPar = (num) =>{
    result = num % 2;
    if(result === 0){
        return result;
    }
    else{
        throw new Error("Condicao nao satisfeita, jogando um erro para nao executar a funcao principal");
    }
};

var input = 10;
var returnedFunction = main(input,verificaPar);
returnedFunction();

