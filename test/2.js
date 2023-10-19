function add(n1,n2){
    let res = n1+n2;
    return function(){
        console.log(res);
    }
}
add(4,4)();
