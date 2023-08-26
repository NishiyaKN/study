const func = (num,callback) => {
    result = callback(num);
    return result;
}

function otraFunc(num){
    return num * 10;
}

console.log(func(10,otraFunc))
