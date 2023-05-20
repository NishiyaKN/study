const arr=["bom", "dia", "como", "vai"];
const newArr = arr.filter((item) => {
    if(item === "dia"){
        return false;
    }
    else{
        return true;
    }
});

console.log(newArr)
