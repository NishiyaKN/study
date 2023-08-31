function main(num,callback){
    let result = callback(num);
    return () => console.log("Numero entrado e par, resultado do modulo:", result);
};

const verificaPar = (num) =>{
    let sobra = num % 2;
    if(sobra === 0){
        return sobra;
    }
    else{
        throw new Error("Condicao nao satisfeita, jogando um erro para nao executar a funcao principal");
    }
};

let returnedFunction = main(10,verificaPar);
returnedFunction();

