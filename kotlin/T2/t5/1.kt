fun main(){
    println("--- Inicio do Programa ---")
    val array = IntArray(10)
    println("Entre com 10 valores numericos inteiros: ")

    for(i in 0 until 10){
        print("Digite o valor numero ${i + 1}:")
        array[i] = readLine()?.toIntOrNull() ?: 0
    }

    println("--- Elementos armazenados no array: ---")
    for (i in 0 until 10){
        println(array[i])
    }

    println("--------------------------")
    print("Entre com o valor a ser consultado no array: ")
    val valor = readLine()?.toIntOrNull() ?: return

    for(i in 0 until 10){
        if(array[i] == valor){
            println("Valor $valor existente no array!")
            println("--- Fim de Programa ---")
            return
        }
    }

    println("Valor $valor nao existente no array!")
    println("--- Fim de Programa ---")
}
