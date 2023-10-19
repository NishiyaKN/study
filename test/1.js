function multiplicador(fator) {
    return function(callback) {
    callback(fator);
  };
}
const c = (num)=>{
    console.log("fator" + num);
} 
multiplicador(2)(c);
