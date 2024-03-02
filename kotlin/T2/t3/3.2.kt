fun main(){
    println("Digite a primeira nota:")
    val nota1: Double
    nota1 = readLine()?.toDoubleOrNull() ?: 0.0 // Operador elvis, se for nulo ele coloca 0.0
}
