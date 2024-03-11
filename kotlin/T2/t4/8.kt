fun main(){
    println("Digite um numero")
    val num = readLine()?.toIntOrNull() ?: 0
    if(num <= 0){
        println("Valor Invalido")
    }
    else{
        for(i in 0..num){
            println(i)
        }
    }
}
