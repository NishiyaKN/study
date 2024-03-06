fun main(){
    println("Digite um numero")
    val num = readLine()?.toIntOrNull() ?: 0
    var i = 0
    if (num <= 0){
        println("Valor invalido")
    }
    else{
        while(num >= i){
            println("$i")
            i++
        }
    }
}
