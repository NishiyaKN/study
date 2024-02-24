fun main(){
    println("Inicio do programa")
    print("Entre com um valor numero inteiro:")

    val valor = readLine()?.toIntOrNull()

    if (valor != null){
        println("Valor entrado: $valor")

        if (valor > 10){
            println("Valor entrado maior que 10!")
        }
        else{
            println("Valor entrado nao e maior que 10!")
        }
    }
    else{
        println("Entrada invalida. Por favor, digite um numero inteiro.")
    }

    println("Fim do programa")
    println("Pressione enter para sair...")
    readLine()
}
