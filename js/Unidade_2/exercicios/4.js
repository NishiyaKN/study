function add(n1,n2,callback){
    let result = n1 + n2;
    callback(result);
}

function msg(sum){
    console.log("Soma: " + sum);
}

add(12,2,msg);
