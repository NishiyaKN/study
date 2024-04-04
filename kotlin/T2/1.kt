fun main(){
    var input = readLine()?.toIntOrNull()?:0
    if(input % 2 == 0){
        println("O valor entrado e par")
    }
    else{
        println("O valor entrado e impar")
    }
}
