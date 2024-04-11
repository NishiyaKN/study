fun IMC(peso:Double, altura:Double):Double{
    return peso / (altura * altura)    
}

fun main(){
    println("Digite seu peso em KG")
    val peso = readLine()?.toDoubleOrNull()?:return
    println("Digite sua altura em metros")
    val altura = readLine()?.toDoubleOrNull()?:return
    println("\nIMC: ${IMC(peso,altura)}")
}
