fun main(){
    println("----- Inicio do programa -----")
    print("Entre com um valor numerico inteiro: ")
    val N = readLine()?.toIntOrNull()

    if(N == null){
        println("Por favor, entre com um numero inteiro valido.")
    }
    else{
        println("Valor de N entrado: $N")
        if(N < 10){
            println("Valor invalido")
        }
        else{
            for(i in 1..N){
                println("$i. USCS")
            }
        }
    }
    println("----- Fim de Programa -----")
}
