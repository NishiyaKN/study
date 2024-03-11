fun main(){
    var soma = 0
    for(i in 1..10){
        println("Digite mais ${11 - i} numeros")
        var num = readLine()?.toIntOrNull()?:0
        soma += num
    }
    println("Total: $soma")
}
