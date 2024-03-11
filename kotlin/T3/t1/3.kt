fun soma2Numeros(num1:Int, num2:Int):Int?{
    return num1+num2 
}
fun main(){
    println("Digite o primeiro numero")
    var num1 = readLine()?.toIntOrNull()?:return

    println("Digite o segundo numero")
    var num2 = readLine()?.toIntOrNull()?:return

    var soma = soma2Numeros(num1, num2)
    println("Resultado: $soma")
}
