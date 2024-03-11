fun main(){
    println("Digite um numero")
    val num = readLine()?.toIntOrNull() ?: 0
    if(num < 10){
        println("Valor invalido")
    }
    else{
        for(i in 1..num){
            println("USCS")
        }
    }

}
