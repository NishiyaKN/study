function add(n1,n2,callback){
    let res = n1+n2;
    callback(res);
}
const imprime = (res)=>{
    console.log(res);
}
add(5,3,imprime);
