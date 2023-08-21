let cartas=[1,2,3,4,4,8];
if(cartas.indexOf(3) !== -1){
    const index = cartas.indexOf(3);
    console.log("3 existe, index: ", index, "valor: ",cartas[index]);
    cartas[index] = 7
    console.log("Index", index, "Novo valor :", cartas[index])
}
if(cartas.indexOf(8) !== -1){
    console.log("8 existe")
}
