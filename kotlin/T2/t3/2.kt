fun main(){
    println("Digite um numero: ")
    val input = readLine()?.toIntOrNull()
    if (input == null){ // precisa validar se e null antes de fazer operacoes
        println("Numero invalido")
    }
    else{
        if (input % 2 == 0){
            println("O numero e par")
        }
        else{
            println("O numero e impar")
        }
    }
}
