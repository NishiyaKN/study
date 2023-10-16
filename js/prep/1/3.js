const primeira = (callback) =>{
    console.log(callback())
}
const segunda = () =>{
    return  2 + 2;
}

primeira(segunda);
